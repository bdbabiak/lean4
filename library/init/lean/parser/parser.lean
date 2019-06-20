/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura, Sebastian Ullrich
-/
prelude
import init.lean.position
import init.lean.syntax
import init.lean.toexpr
import init.lean.environment
import init.lean.attributes
import init.lean.parser.trie
import init.lean.parser.identifier
import init.lean.compiler.initattr

namespace Lean
namespace Parser

/- Maximum standard precedence. This is the precedence of Function application.
   In the standard Lean language, only the token `.` has a left-binding power greater
   than `maxPrec` (so that field accesses like `g (h x).f` are parsed as `g ((h x).f)`,
   not `(g (h x)).f`). -/
def maxPrec : Nat := 1024

structure TokenConfig :=
(val : String)
(lbp : Option Nat := none)

namespace TokenConfig

def beq : TokenConfig → TokenConfig → Bool
| ⟨val₁, lbp₁⟩ ⟨val₂, lbp₂⟩ := val₁ == val₂ && lbp₁ == lbp₂

instance : HasBeq TokenConfig :=
⟨beq⟩

end TokenConfig

structure TokenCacheEntry :=
(startPos stopPos : String.Pos := 0)
(token : Syntax := Syntax.missing)

structure ParserCache :=
(tokenCache : TokenCacheEntry := {})

def initCacheForInput (input : String) : ParserCache :=
{ tokenCache := { startPos := input.bsize + 1 /- make sure it is not a valid position -/} }

structure ParserContext :=
(env      : Environment)
(input    : String)
(filename : String)
(fileMap  : FileMap)
(tokens   : Trie TokenConfig)

structure ParserState :=
(stxStack : Array Syntax := Array.empty)
(pos      : String.Pos := 0)
(cache    : ParserCache := {})
(errorMsg : Option String := none)

namespace ParserState

@[inline] def hasError (s : ParserState) : Bool :=
s.errorMsg != none

@[inline] def stackSize (s : ParserState) : Nat :=
s.stxStack.size

def restore (s : ParserState) (iniStackSz : Nat) (iniPos : Nat) : ParserState :=
{ stxStack := s.stxStack.shrink iniStackSz, errorMsg := none, pos := iniPos, .. s}

def setPos (s : ParserState) (pos : Nat) : ParserState :=
{ pos := pos, .. s }

def setCache (s : ParserState) (cache : ParserCache) : ParserState :=
{ cache := cache, .. s }

def pushSyntax (s : ParserState) (n : Syntax) : ParserState :=
{ stxStack := s.stxStack.push n, .. s }

def popSyntax (s : ParserState) : ParserState :=
{ stxStack := s.stxStack.pop, .. s }

def shrinkStack (s : ParserState) (iniStackSz : Nat) : ParserState :=
{ stxStack := s.stxStack.shrink iniStackSz, .. s }

def next (s : ParserState) (input : String) (pos : Nat) : ParserState :=
{ pos := input.next pos, .. s }

def toErrorMsg (ctx : ParserContext) (s : ParserState) : String :=
match s.errorMsg with
| none     := ""
| some msg :=
  let pos := ctx.fileMap.toPosition s.pos in
  ctx.filename ++ ":" ++ toString pos.line ++ ":" ++ toString pos.column ++ " " ++ msg

def mkNode (s : ParserState) (k : SyntaxNodeKind) (iniStackSz : Nat) : ParserState :=
match s with
| ⟨stack, pos, cache, err⟩ :=
  if err != none && stack.size == iniStackSz then
    -- If there is an error but there are no new nodes on the stack, we just return `d`
    s
  else
    let newNode := Syntax.node k (stack.extract iniStackSz stack.size) [] in
    let stack   := stack.shrink iniStackSz in
    let stack   := stack.push newNode in
    ⟨stack, pos, cache, err⟩

def mkError (s : ParserState) (msg : String) : ParserState :=
match s with
| ⟨stack, pos, cache, _⟩ := ⟨stack, pos, cache, some msg⟩

def mkEOIError (s : ParserState) : ParserState :=
s.mkError "end of input"

def mkErrorAt (s : ParserState) (msg : String) (pos : String.Pos) : ParserState :=
match s with
| ⟨stack, _, cache, _⟩ := ⟨stack, pos, cache, some msg⟩

end ParserState

inductive ParserKind
| nud | led

export ParserKind (nud led)

def ParserArg : ParserKind → Type
| ParserKind.nud := Nat
| ParserKind.led := Syntax

def BasicParserFn := ParserContext → ParserState → ParserState

def ParserFn (k : ParserKind) := ParserArg k → BasicParserFn

instance ParserFn.inhabited (k : ParserKind) : Inhabited (ParserFn k) := ⟨λ _ _, id⟩

inductive FirstTokens
| epsilon : FirstTokens
| unknown : FirstTokens
| tokens  : List TokenConfig → FirstTokens

namespace FirstTokens

def merge : FirstTokens → FirstTokens → FirstTokens
| epsilon     tks         := tks
| tks         epsilon     := tks
| (tokens s₁) (tokens s₂) := tokens (s₁ ++ s₂)
| _           _           := unknown

def seq : FirstTokens → FirstTokens → FirstTokens
| epsilon tks := tks
| tks     _   := tks

end FirstTokens

structure ParserInfo :=
(updateTokens : Trie TokenConfig → ExceptT String Id (Trie TokenConfig) := λ tks, pure tks)
(firstTokens  : FirstTokens := FirstTokens.unknown)

structure Parser (k : ParserKind := nud) :=
(info : ParserInfo := {})
(fn   : ParserFn k)

instance Parser.inhabited {k : ParserKind} : Inhabited (Parser k) :=
⟨{ fn := λ _ _ s, s }⟩

abbrev TrailingParser := Parser led

@[noinline] def epsilonInfo : ParserInfo :=
{ firstTokens := FirstTokens.epsilon }

@[inline] def pushLeadingFn : ParserFn led :=
λ a c s, s.pushSyntax a

@[inline] def pushLeading : TrailingParser :=
{ info := epsilonInfo,
  fn   := pushLeadingFn }

@[inline] def checkLeadingFn (p : Syntax → Bool) : ParserFn led :=
λ a c s,
  if p a then s
  else s.mkError "invalid leading token"

@[inline] def checkLeading (p : Syntax → Bool) : TrailingParser :=
{ info := epsilonInfo,
  fn   := checkLeadingFn p }

@[inline] def andthenAux (p q : BasicParserFn) : BasicParserFn :=
λ c s,
  let s := p c s in
  if s.hasError then s else q c s

@[inline] def andthenFn {k : ParserKind} (p q : ParserFn k) : ParserFn k :=
λ a c s, andthenAux (p a) (q a) c s

@[noinline] def andthenInfo (p q : ParserInfo) : ParserInfo :=
{ updateTokens := λ tks, q.updateTokens tks >>= p.updateTokens,
  firstTokens  := p.firstTokens.seq q.firstTokens }

@[inline] def andthen {k : ParserKind} (p q : Parser k) : Parser k :=
{ info := andthenInfo p.info q.info,
  fn   := andthenFn p.fn q.fn }

@[inline] def nodeFn {k : ParserKind} (n : SyntaxNodeKind) (p : ParserFn k) : ParserFn k
| a c s :=
  let iniSz := s.stackSize in
  let s     := p a c s in
  s.mkNode n iniSz

@[noinline] def nodeInfo (p : ParserInfo) : ParserInfo :=
{ updateTokens := p.updateTokens,
  firstTokens  := p.firstTokens }

@[inline] def node {k : ParserKind} (n : SyntaxNodeKind) (p : Parser k) : Parser k :=
{ info := nodeInfo p.info,
  fn   := nodeFn n p.fn }

@[inline] def orelseFn {k : ParserKind} (p q : ParserFn k) : ParserFn k
| a c s :=
  let iniSz  := s.stackSize in
  let iniPos := s.pos in
  let s      := p a c s in
  if s.hasError && s.pos == iniPos then q a c (s.restore iniSz iniPos) else s

@[noinline] def orelseInfo (p q : ParserInfo) : ParserInfo :=
{ updateTokens := λ tks, q.updateTokens tks >>= p.updateTokens,
  firstTokens  := p.firstTokens.merge q.firstTokens }

@[inline] def orelse {k : ParserKind} (p q : Parser k) : Parser k :=
{ info := orelseInfo p.info q.info,
  fn   := orelseFn p.fn q.fn }

@[noinline] def noFirstTokenInfo (info : ParserInfo) : ParserInfo :=
{ updateTokens := info.updateTokens }

@[inline] def tryFn {k : ParserKind} (p : ParserFn k ) : ParserFn k
| a c s :=
  let iniSz  := s.stackSize in
  let iniPos := s.pos in
  match p a c s with
  | ⟨stack, _, cache, some msg⟩ := ⟨stack.shrink iniSz, iniPos, cache, some msg⟩
  | other                       := other

@[inline] def try {k : ParserKind} (p : Parser k) : Parser k :=
{ info := noFirstTokenInfo p.info,
  fn   := tryFn p.fn }

@[inline] def optionalFn {k : ParserKind} (p : ParserFn k) : ParserFn k :=
λ a c s,
  let iniSz  := s.stackSize in
  let iniPos := s.pos in
  let s      := p a c s in
  let s      := if s.hasError then s.restore iniSz iniPos else s in
  s.mkNode nullKind iniSz

@[inline] def optional {k : ParserKind} (p : Parser k) : Parser k :=
{ info := noFirstTokenInfo p.info,
  fn   := optionalFn p.fn }

@[specialize] partial def manyAux {k : ParserKind} (p : ParserFn k) : ParserFn k
| a c s :=
  let iniSz  := s.stackSize in
  let iniPos := s.pos in
  let s      := p a c s in
  if s.hasError then s.restore iniSz iniPos
  else if iniPos == s.pos then s.mkError "invalid 'many' parser combinator application, parser did not consume anything"
  else manyAux a c s

@[inline] def manyFn {k : ParserKind} (p : ParserFn k) : ParserFn k :=
λ a c s,
  let iniSz  := s.stackSize in
  let s := manyAux p a c s in
  s.mkNode nullKind iniSz

@[inline] def many {k : ParserKind} (p : Parser k) : Parser k :=
{ info := noFirstTokenInfo p.info,
  fn   := manyFn p.fn }

@[inline] def many1 {k : ParserKind} (p : Parser k) : Parser k :=
andthen p (many p)

@[specialize] private partial def sepByFnAux {k : ParserKind} (p : ParserFn k) (sep : ParserFn k) (allowTrailingSep : Bool) (iniSz : Nat) : Bool → ParserFn k
| pOpt a c s :=
  let sz  := s.stackSize in
  let pos := s.pos in
  let s   := p a c s in
  if s.hasError then
    if pOpt then
      let s := s.restore sz pos in
      s.mkNode nullKind iniSz
    else
      -- append `Syntax.missing` to make clear that List is incomplete
      let s := s.pushSyntax Syntax.missing in
      s.mkNode nullKind iniSz
  else
    let sz  := s.stackSize in
    let pos := s.pos in
    let s   := sep a c s in
    if s.hasError then
      let s := s.restore sz pos in
      s.mkNode nullKind iniSz
    else
      sepByFnAux allowTrailingSep a c s

@[specialize] def sepByFn {k : ParserKind} (allowTrailingSep : Bool) (p : ParserFn k) (sep : ParserFn k) : ParserFn k
| a c s :=
  let iniSz := s.stackSize in
  sepByFnAux p sep allowTrailingSep iniSz true a c s

@[specialize] def sepBy1Fn {k : ParserKind} (allowTrailingSep : Bool) (p : ParserFn k) (sep : ParserFn k) : ParserFn k
| a c s :=
  let iniSz := s.stackSize in
  sepByFnAux p sep allowTrailingSep iniSz false a c s

@[noinline] def sepByInfo (p sep : ParserInfo) : ParserInfo :=
{ updateTokens := λ tks, p.updateTokens tks >>= sep.updateTokens }

@[noinline] def sepBy1Info (p sep : ParserInfo) : ParserInfo :=
{ updateTokens := λ tks, p.updateTokens tks >>= sep.updateTokens,
  firstTokens  := p.firstTokens }

@[inline] def sepBy {k : ParserKind} (p sep : Parser k) (allowTrailingSep : Bool := false) : Parser k :=
{ info := sepByInfo p.info sep.info,
  fn   := sepByFn allowTrailingSep p.fn sep.fn }

@[inline] def sepBy1 {k : ParserKind} (p sep : Parser k) (allowTrailingSep : Bool := false) : Parser k :=
{ info := sepBy1Info p.info sep.info,
  fn   := sepBy1Fn allowTrailingSep p.fn sep.fn }

@[specialize] partial def satisfyFn (p : Char → Bool) (errorMsg : String := "unexpected character") : BasicParserFn
| c s :=
  let i := s.pos in
  if c.input.atEnd i then s.mkEOIError
  else if p (c.input.get i) then s.next c.input i
  else s.mkError errorMsg

@[specialize] partial def takeUntilFn (p : Char → Bool) : BasicParserFn
| c s :=
  let i := s.pos in
  if c.input.atEnd i then s
  else if p (c.input.get i) then s
  else takeUntilFn c (s.next c.input i)

@[specialize] def takeWhileFn (p : Char → Bool) : BasicParserFn :=
takeUntilFn (λ c, !p c)

@[inline] def takeWhile1Fn (p : Char → Bool) (errorMsg : String) : BasicParserFn :=
andthenAux (satisfyFn p errorMsg) (takeWhileFn p)

partial def finishCommentBlock : Nat → BasicParserFn
| nesting c s :=
  let input := c.input in
  let i     := s.pos in
  if input.atEnd i then s.mkEOIError
  else
    let curr := input.get i in
    let i    := input.next i in
    if curr == '-' then
      if input.atEnd i then s.mkEOIError
      else
        let curr := input.get i in
        if curr == '/' then -- "-/" end of comment
          if nesting == 1 then s.next input i
          else finishCommentBlock (nesting-1) c (s.next input i)
        else
          finishCommentBlock nesting c (s.next input i)
    else if curr == '/' then
      if input.atEnd i then s.mkEOIError
      else
        let curr := input.get i in
        if curr == '-' then finishCommentBlock (nesting+1) c (s.next input i)
        else finishCommentBlock nesting c (s.setPos i)
    else finishCommentBlock nesting c (s.setPos i)

/- Consume whitespace and comments -/
partial def whitespace : BasicParserFn
| c s :=
  let input := c.input in
  let i     := s.pos in
  if input.atEnd i then s
  else
    let curr := input.get i in
    if curr.isWhitespace then whitespace c (s.next input i)
    else if curr == '-' then
      let i    := input.next i in
      let curr := input.get i in
      if curr == '-' then andthenAux (takeUntilFn (= '\n')) whitespace c (s.next input i)
      else s
    else if curr == '/' then
      let i    := input.next i in
      let curr := input.get i in
      if curr == '-' then
        let i    := input.next i in
        let curr := input.get i in
        if curr == '-' then s -- "/--" doc comment is an actual token
        else andthenAux (finishCommentBlock 1) whitespace c (s.next input i)
      else s
    else s

def mkEmptySubstringAt (s : String) (p : Nat) : Substring :=
{str := s, startPos := p, stopPos := p }

private def rawAux {k : ParserKind} (startPos : Nat) (trailingWs : Bool) : ParserFn k
| a c s :=
  let input   := c.input in
  let stopPos := s.pos in
  let leading := mkEmptySubstringAt input startPos in
  let val     := input.extract startPos stopPos in
  if trailingWs then
    let s        := whitespace c s in
    let stopPos' := s.pos in
    let trailing := { Substring . str := input, startPos := stopPos, stopPos := stopPos' } in
    let atom     := Syntax.atom (some { leading := leading, pos := startPos, trailing := trailing }) val in
    s.pushSyntax atom
  else
    let trailing := mkEmptySubstringAt input stopPos in
    let atom := Syntax.atom (some { leading := leading, pos := startPos, trailing := trailing }) val in
    s.pushSyntax atom

/-- Match an arbitrary Parser and return the consumed String in a `Syntax.atom`. -/
@[inline] def rawFn {k : ParserKind} (p : ParserFn k) (trailingWs := false) : ParserFn k
| a c s :=
  let startPos := s.pos in
  let s := p a c s in
  if s.hasError then s else rawAux startPos trailingWs a c s

def hexDigitFn : BasicParserFn
| c s :=
  let input := c.input in
  let i     := s.pos in
  if input.atEnd i then s.mkEOIError
  else
    let curr := input.get i in
    let i    := input.next i in
    if curr.isDigit || ('a' <= curr && curr <= 'f') || ('A' <= curr && curr <= 'F') then s.setPos i
    else s.mkError "invalid hexadecimal numeral, hexadecimal digit expected"

def quotedCharFn : BasicParserFn
| c s :=
  let input := c.input in
  let i     := s.pos in
  if input.atEnd i then s.mkEOIError
  else
    let curr := input.get i in
    if curr == '\\' || curr == '\"' || curr == '\'' || curr == '\n' || curr == '\t' then
      s.next input i
    else if curr == 'x' then
      andthenAux hexDigitFn hexDigitFn c (s.next input i)
    else if curr == 'u' then
      andthenAux hexDigitFn (andthenAux hexDigitFn (andthenAux hexDigitFn hexDigitFn)) c (s.next input i)
    else
      s.mkError "invalid escape sequence"

def mkStrLitKind : IO SyntaxNodeKind := nextKind `strLit
@[init mkStrLitKind] constant strLitKind : SyntaxNodeKind := default _

def mkNumberKind : IO SyntaxNodeKind := nextKind `numLit
@[init mkNumberKind] constant numLitKind : SyntaxNodeKind := default _

/-- Push `(Syntax.node tk <new-atom>)` into syntax stack -/
def mkNodeToken (n : SyntaxNodeKind) (startPos : Nat) : BasicParserFn :=
λ c s,
let input     := c.input in
let stopPos   := s.pos in
let leading   := mkEmptySubstringAt input startPos in
let val       := input.extract startPos stopPos in
let s         := whitespace c s in
let wsStopPos := s.pos in
let trailing  := { Substring . str := input, startPos := stopPos, stopPos := wsStopPos } in
let atom      := Syntax.atom (some { leading := leading, pos := startPos, trailing := trailing }) val in
let tk        := Syntax.node n (Array.singleton atom) [] in
s.pushSyntax tk

partial def strLitFnAux (startPos : Nat) : BasicParserFn
| c s :=
  let input := c.input in
  let i     := s.pos in
  if input.atEnd i then s.mkEOIError
  else
    let curr := input.get i in
    let s    := s.setPos (input.next i) in
    if curr == '\"' then
      mkNodeToken strLitKind startPos c s
    else if curr == '\\' then andthenAux quotedCharFn strLitFnAux c s
    else strLitFnAux c s

def decimalNumberFn (startPos : Nat) : BasicParserFn :=
λ c s,
  let s     := takeWhileFn (λ c, c.isDigit) c s in
  let input := c.input in
  let i     := s.pos in
  let curr  := input.get i in
  let s :=
    if curr == '.' then
      let i    := input.next i in
      let curr := input.get i in
      if curr.isDigit then
        takeWhileFn (λ c, c.isDigit) c (s.setPos i)
      else
        s
    else
      s in
  mkNodeToken numLitKind startPos c s

def binNumberFn (startPos : Nat) : BasicParserFn :=
λ c s,
  let s := takeWhile1Fn (λ c, c == '0' || c == '1') "expected binary number" c s in
  mkNodeToken numLitKind startPos c s

def octalNumberFn (startPos : Nat) : BasicParserFn :=
λ c s,
  let s := takeWhile1Fn (λ c, '0' ≤ c && c ≤ '7') "expected octal number" c s in
  mkNodeToken numLitKind startPos c s

def hexNumberFn (startPos : Nat) : BasicParserFn :=
λ c s,
  let s := takeWhile1Fn (λ c, ('0' ≤ c && c ≤ '9') || ('a' ≤ c && c ≤ 'f') || ('A' ≤ c && c ≤ 'F')) "expected hexadecimal number" c s in
  mkNodeToken numLitKind startPos c s

def numberFnAux : BasicParserFn :=
λ c s,
  let input    := c.input in
  let startPos := s.pos in
  if input.atEnd startPos then s.mkEOIError
  else
    let curr := input.get startPos in
    if curr == '0' then
      let i    := input.next startPos in
      let curr := input.get i in
      if curr == 'b' || curr == 'B' then
        binNumberFn startPos c (s.next input i)
      else if curr == 'o' || curr == 'O' then
        octalNumberFn startPos c (s.next input i)
      else if curr == 'x' || curr == 'X' then
        hexNumberFn startPos c (s.next input i)
      else
        decimalNumberFn startPos c (s.setPos i)
    else if curr.isDigit then
      decimalNumberFn startPos c (s.next input startPos)
    else
      s.mkError "expected numeral"

def isIdCont : String → ParserState → Bool
| input s :=
  let i    := s.pos in
  let curr := input.get i in
  if curr == '.' then
    let i := input.next i in
    if input.atEnd i then
      false
    else
      let curr := input.get i in
      isIdFirst curr || isIdBeginEscape curr
  else
    false

private def isToken (idStartPos idStopPos : Nat) (tk : Option TokenConfig) : Bool :=
match tk with
| none    := false
| some tk :=
   -- if a token is both a symbol and a valid identifier (i.e. a keyword),
   -- we want it to be recognized as a symbol
  tk.val.bsize ≥ idStopPos - idStopPos

def mkTokenAndFixPos (startPos : Nat) (tk : Option TokenConfig) : BasicParserFn :=
λ c s,
match tk with
| none    := s.mkErrorAt "token expected" startPos
| some tk :=
  let input     := c.input in
  let leading   := mkEmptySubstringAt input startPos in
  let val       := tk.val in
  let stopPos   := startPos + val.bsize in
  let s         := s.setPos stopPos in
  let s         := whitespace c s in
  let wsStopPos := s.pos in
  let trailing  := { Substring . str := input, startPos := stopPos, stopPos := wsStopPos } in
  let atom      := Syntax.atom (some { leading := leading, pos := startPos, trailing := trailing }) val in
  s.pushSyntax atom

def mkIdResult (startPos : Nat) (tk : Option TokenConfig) (val : Name) : BasicParserFn :=
λ c s,
let stopPos              := s.pos in
if isToken startPos stopPos tk then
  mkTokenAndFixPos startPos tk c s
else
  let input           := c.input in
  let rawVal          := { Substring . str := input, startPos := startPos, stopPos := stopPos } in
  let s               := whitespace c s in
  let trailingStopPos := s.pos in
  let leading         := mkEmptySubstringAt input startPos in
  let trailing        := { Substring . str := input, startPos := stopPos, stopPos := trailingStopPos } in
  let info            := { SourceInfo . leading := leading, trailing := trailing, pos := startPos } in
  let atom            := Syntax.ident (some info) rawVal val [] [] in
  s.pushSyntax atom

partial def identFnAux (startPos : Nat) (tk : Option TokenConfig) : Name → BasicParserFn
| r c s :=
  let input := c.input in
  let i     := s.pos in
  if input.atEnd i then s.mkEOIError
  else
    let curr := input.get i in
    if isIdBeginEscape curr then
      let startPart := input.next i in
      let s         := takeUntilFn isIdEndEscape c (s.setPos startPart) in
      let stopPart  := s.pos in
      let s         := satisfyFn isIdEndEscape "end of escaped identifier expected" c s in
      if s.hasError then s
      else
        let r := Name.mkString r (input.extract startPart stopPart) in
        if isIdCont input s then
          identFnAux r c s
        else
          mkIdResult startPos tk r c s
    else if isIdFirst curr then
      let startPart := i in
      let s         := takeWhileFn isIdRest c (s.next input i) in
      let stopPart  := s.pos in
      let r := Name.mkString r (input.extract startPart stopPart) in
      if isIdCont input s then
        identFnAux r c s
      else
        mkIdResult startPart tk r c s
    else
      mkTokenAndFixPos startPos tk c s

private def tokenFnAux : BasicParserFn
| c s :=
  let input := c.input in
  let i     := s.pos in
  let curr  := input.get i in
  if curr == '\"' then
    strLitFnAux i c (s.next input i)
  else if curr.isDigit then
    numberFnAux c s
  else
    let (_, tk) := c.tokens.matchPrefix input i in
    identFnAux i tk Name.anonymous c s

private def updateCache (startPos : Nat) (s : ParserState) : ParserState :=
match s with
| ⟨stack, pos, cache, none⟩ :=
  if stack.size == 0 then s
  else
    let tk := stack.back in
    ⟨stack, pos, { tokenCache := { startPos := startPos, stopPos := pos, token := tk } }, none⟩
| other := other

def tokenFn : BasicParserFn :=
λ c s,
  let input := c.input in
  let i     := s.pos in
  if input.atEnd i then s.mkEOIError
  else
    let tkc := s.cache.tokenCache in
    if tkc.startPos == i then
      let s := s.pushSyntax tkc.token in
      s.setPos tkc.stopPos
    else
      let s := tokenFnAux c s in
      updateCache i s

def peekToken (c : ParserContext) (s : ParserState) : ParserState × Option Syntax :=
let iniSz  := s.stackSize in
let iniPos := s.pos in
let s      := tokenFn c s in
if s.hasError then (s.restore iniSz iniPos, none)
else
  let stx := s.stxStack.back in
  (s.restore iniSz iniPos, some stx)

@[inline] def satisfySymbolFn (p : String → Bool) (errorMsg : String) : BasicParserFn :=
λ c s,
  let startPos := s.pos in
  let s        := tokenFn c s in
  if s.hasError then
    s.mkErrorAt errorMsg startPos
  else
    match s.stxStack.back with
    | Syntax.atom _ sym := if p sym then s else s.mkErrorAt errorMsg startPos
    | _                 := s.mkErrorAt errorMsg startPos

def symbolFnAux (sym : String) (errorMsg : String) : BasicParserFn :=
satisfySymbolFn (== sym) errorMsg

def insertToken (sym : String) (lbp : Option Nat) (tks : Trie TokenConfig) : ExceptT String Id (Trie TokenConfig) :=
match tks.find sym, lbp with
| none,       _           := pure (tks.insert sym { val := sym, lbp := lbp })
| some _,     none        := pure tks
| some tk,    some newLbp :=
  match tk.lbp with
  | none        := pure (tks.insert sym { val := sym, lbp := lbp })
  | some oldLbp := if newLbp == oldLbp then pure tks else throw ("precedence mismatch for '" ++ toString sym ++ "', previous: " ++ toString oldLbp ++ ", new: " ++ toString newLbp)

def symbolInfo (sym : String) (lbp : Option Nat) : ParserInfo :=
{ updateTokens := insertToken sym lbp,
  firstTokens  := FirstTokens.tokens [ { val := sym, lbp := lbp } ] }

@[inline] def symbolFn {k : ParserKind} (sym : String) : ParserFn k :=
λ _, symbolFnAux sym ("expected '" ++ sym ++ "'")

@[inline] def symbol {k : ParserKind} (sym : String) (lbp : Option Nat := none) : Parser k :=
{ info := symbolInfo sym lbp,
  fn   := symbolFn sym }

def unicodeSymbolFnAux (sym asciiSym : String) (errorMsg : String) : BasicParserFn :=
satisfySymbolFn (λ s, s == sym || s == asciiSym) errorMsg

def unicodeSymbolInfo (sym asciiSym : String) (lbp : Option Nat) : ParserInfo :=
{ updateTokens := λ tks, insertToken sym lbp tks >>= insertToken asciiSym lbp,
  firstTokens  := FirstTokens.tokens [ { val := sym, lbp := lbp }, { val := asciiSym, lbp := lbp } ] }

@[inline] def unicodeSymbolFn {k : ParserKind} (sym asciiSym : String) : ParserFn k :=
λ _, unicodeSymbolFnAux sym asciiSym ("expected '" ++ sym ++ "' or '" ++ asciiSym ++ "'")

@[inline] def unicodeSymbol {k : ParserKind} (sym asciiSym : String) (lbp : Option Nat := none) : Parser k :=
{ info := unicodeSymbolInfo sym asciiSym lbp,
  fn   := unicodeSymbolFn sym asciiSym }

def mkAtomicInfo (k : String) : ParserInfo :=
{ firstTokens := FirstTokens.tokens [ { val := k } ] }

def numberFn {k : ParserKind} : ParserFn k :=
λ _ c s,
  let s := tokenFn c s in
  if s.hasError || !(s.stxStack.back.isOfKind numLitKind) then s.mkError "expected numeral" else s

@[inline] def number {k : ParserKind} : Parser k :=
{ fn   := numberFn,
  info := mkAtomicInfo "numLit" }

def strLitFn {k : ParserKind} : ParserFn k :=
λ _ c s,
let s := tokenFn c s in
if s.hasError || !(s.stxStack.back.isOfKind strLitKind) then s.mkError "expected string literal" else s

@[inline] def strLit {k : ParserKind} : Parser k :=
{ fn   := strLitFn,
  info := mkAtomicInfo "strLit" }

def identFn {k : ParserKind} : ParserFn k :=
λ _ c s,
let s := tokenFn c s in
if s.hasError || !(s.stxStack.back.isIdent) then
  s.mkError "expected identifier"
else
  s

@[inline] def ident {k : ParserKind} : Parser k :=
{ fn   := identFn,
  info := mkAtomicInfo "ident" }

instance string2basic {k : ParserKind} : HasCoe String (Parser k) :=
⟨symbol⟩

namespace ParserState

def keepNewError (s : ParserState) (oldStackSize : Nat) : ParserState :=
match s with
| ⟨stack, pos, cache, err⟩ := ⟨stack.shrink oldStackSize, pos, cache, err⟩

def keepPrevError (s : ParserState) (oldStackSize : Nat) (oldStopPos : String.Pos) (oldError : Option String) : ParserState :=
match s with
| ⟨stack, _, cache, _⟩ := ⟨stack.shrink oldStackSize, oldStopPos, cache, oldError⟩

def mergeErrors (s : ParserState) (oldStackSize : Nat) (oldError : String) : ParserState :=
match s with
| ⟨stack, pos, cache, some err⟩ := ⟨stack.shrink oldStackSize, pos, cache, some (err ++ "; " ++ oldError)⟩
| other                         := other

def mkLongestNodeAlt (s : ParserState) (startSize : Nat) : ParserState :=
match s with
| ⟨stack, pos, cache, _⟩ :=
  if stack.size == startSize then ⟨stack.push Syntax.missing, pos, cache, none⟩ -- parser did not create any node, then we just add `Syntax.missing`
  else if stack.size == startSize + 1 then s
  else
    -- parser created more than one node, combine them into a single node
    let node := Syntax.node nullKind (stack.extract startSize stack.size) [] in
    let stack := stack.shrink startSize in
    ⟨stack.push node, pos, cache, none⟩

def keepLatest (s : ParserState) (startStackSize : Nat) : ParserState :=
match s with
| ⟨stack, pos, cache, _⟩ :=
  let node  := stack.back in
  let stack := stack.shrink startStackSize in
  let stack := stack.push node in
  ⟨stack, pos, cache, none⟩

def replaceLongest (s : ParserState) (startStackSize : Nat) (prevStackSize : Nat) : ParserState :=
let s := s.mkLongestNodeAlt prevStackSize in
s.keepLatest startStackSize

end ParserState

def longestMatchStep {k : ParserKind} (startSize : Nat) (startPos : String.Pos) (p : ParserFn k) : ParserFn k :=
λ a c s,
let prevErrorMsg  := s.errorMsg in
let prevStopPos   := s.pos in
let prevSize      := s.stackSize in
let s             := s.restore prevSize startPos in
let s             := p a c s in
match prevErrorMsg, s.errorMsg with
| none, none   := -- both succeeded
  if s.pos > prevStopPos      then s.replaceLongest startSize prevSize -- replace
  else if s.pos < prevStopPos then s.restore prevSize prevStopPos      -- keep prev
  else s.mkLongestNodeAlt prevSize                                     -- keep both
| none, some _ := -- prev succeeded, current failed
  s.restore prevSize prevStopPos
| some oldError, some _ := -- both failed
  if s.pos > prevStopPos      then s.keepNewError prevSize
  else if s.pos < prevStopPos then s.keepPrevError prevSize prevStopPos prevErrorMsg
  else s.mergeErrors prevSize oldError
| some _, none := -- prev failed, current succeeded
  s.mkLongestNodeAlt startSize

def longestMatchMkResult (startSize : Nat) (s : ParserState) : ParserState :=
if !s.hasError && s.stackSize > startSize + 1 then s.mkNode choiceKind startSize else s

def longestMatchFnAux {k : ParserKind} (startSize : Nat) (startPos : String.Pos) : List (Parser k) → ParserFn k
| []      := λ _ _ s, longestMatchMkResult startSize s
| (p::ps) := λ a c s,
   let s := longestMatchStep startSize startPos p.fn a c s in
   longestMatchFnAux ps a c s

def longestMatchFn₁ {k : ParserKind} (p : ParserFn k) : ParserFn k :=
λ a c s,
let startSize := s.stackSize in
let s := p a c s in
if s.hasError then s else s.mkLongestNodeAlt startSize

def longestMatchFn {k : ParserKind} : List (Parser k) → ParserFn k
| []      := λ _ _ s, s.mkError "longestMatch: empty list"
| [p]     := longestMatchFn₁ p.fn
| (p::ps) := λ a c s,
  let startSize := s.stackSize in
  let startPos  := s.pos in
  let s         := p.fn a c s in
  if s.hasError then
    let s := s.shrinkStack startSize in
    longestMatchFnAux startSize startPos ps a c s
  else
    let s := s.mkLongestNodeAlt startSize in
    longestMatchFnAux startSize startPos ps a c s

def anyOfFn {k : ParserKind} : List (Parser k) → ParserFn k
| []      _ _ s := s.mkError "anyOf: empty list"
| [p]     a c s := p.fn a c s
| (p::ps) a c s := orelseFn p.fn (anyOfFn ps) a c s

/-- A multimap indexed by tokens. Used for indexing parsers by their leading token. -/
def TokenMap (α : Type) := RBMap Name (List α) Name.quickLt

namespace TokenMap

def insert {α : Type} (map : TokenMap α) (k : Name) (v : α) : TokenMap α :=
match map.find k with
| none    := map.insert k [v]
| some vs := map.insert k (v::vs)

instance {α : Type} : Inhabited (TokenMap α) := ⟨RBMap.empty⟩

instance {α : Type} : HasEmptyc (TokenMap α) := ⟨RBMap.empty⟩

end TokenMap

structure ParsingTables :=
(leadingTable    : TokenMap Parser := {})
(trailingTable   : TokenMap TrailingParser := {})
(trailingParsers : List TrailingParser := []) -- for supporting parsers such as function application
(tokens          : Trie TokenConfig := {})

def currLbp (c : ParserContext) (s : ParserState) : ParserState × Nat :=
let (s, stx) := peekToken c s in
match stx with
| some (Syntax.atom _ sym) :=
  match c.tokens.matchPrefix sym 0 with
  | (_, some tk) := (s, tk.lbp.getOrElse 0)
  | _            := (s, 0)
| some (Syntax.ident _ _ _ _ _) := (s, maxPrec)
| some (Syntax.node k _ _)      := if k == numLitKind || k == strLitKind then (s, maxPrec) else (s, 0)
| _                             := (s, 0)

def indexed {α : Type} (map : TokenMap α) (c : ParserContext) (s : ParserState) : ParserState × List α :=
let (s, stx) := peekToken c s in
let find (n : Name) : ParserState × List α :=
  match map.find n with
  | some as := (s, as)
  | _       := (s, []) in
match stx with
| some (Syntax.atom _ sym)      := find (mkSimpleName sym)
| some (Syntax.ident _ _ _ _ _) := find `ident
| some (Syntax.node k _ _)      := find k.name
| _                             := (s, [])

private def mkResult (s : ParserState) (iniSz : Nat) : ParserState :=
if s.stackSize == iniSz + 1 then s
else s.mkNode nullKind iniSz -- throw error instead?

def leadingParser (kind : String) (tables : ParsingTables) : ParserFn nud :=
λ a c s,
  let iniSz   := s.stackSize in
  let (s, ps) := indexed tables.leadingTable c s in
  if ps.isEmpty then
    s.mkError ("expected " ++ kind)
  else
    let s       := longestMatchFn ps a c s in
    mkResult s iniSz

def trailingParser (kind : String) (tables : ParsingTables) : ParserFn led :=
λ a c s,
  let iniSz   := s.stackSize in
  let (s, ps) := indexed tables.trailingTable c s in
  if ps.isEmpty then
    s.mkError ("expected trail of " ++ kind) -- better error message?
  else
    let s       := orelseFn (longestMatchFn ps) (anyOfFn tables.trailingParsers) a c s in
    mkResult s iniSz

partial def trailingLoop (kind : String) (tables : ParsingTables) (rbp : Nat) (c : ParserContext) : Syntax → ParserState → ParserState
| left s :=
  let (s, lbp) := currLbp c s in
  if rbp ≥ lbp then s.pushSyntax left
  else
    let s    := trailingParser kind tables left c s in
    if s.hasError then s
    else
      let left := s.stxStack.back in
      let s    := s.popSyntax in
      trailingLoop left s

def prattParser (kind : String) (tables : ParsingTables) : ParserFn nud :=
λ rbp c s,
  let s := leadingParser kind tables rbp c s in
  if s.hasError then s
  else
    let left := s.stxStack.back in
    let s    := s.popSyntax in
    trailingLoop kind tables rbp c left s

def mkParserContext (env : Environment) (input : String) (filename : String) (tokens : Trie TokenConfig) : ParserContext :=
{ env      := env,
  input    := input,
  filename := filename,
  fileMap  := input.toFileMap,
  tokens   := tokens }

def mkParserState (input : String) : ParserState :=
{ cache := initCacheForInput input }

def runParser (env : Environment) (tables : ParsingTables) (input : String) (fileName := "<input>") (kind := "<main>") : Except String Syntax :=
let c := mkParserContext env input fileName tables.tokens in
let s := mkParserState input in
let s := prattParser kind tables (0 : Nat) c s in
if s.hasError then
  Except.error (s.toErrorMsg c)
else
  Except.ok s.stxStack.back

def mkBultinParsingTablesRef : IO (IO.Ref ParsingTables) :=
IO.mkRef {}

private def updateTokens (tables : ParsingTables) (info : ParserInfo) : IO ParsingTables :=
match info.updateTokens tables.tokens with
| Except.ok newTokens := pure { tokens := newTokens, .. tables }
| Except.error msg    := throw (IO.userError msg)

def addBuiltinLeadingParser (tablesRef : IO.Ref ParsingTables) (declName : Name) (p : Parser) : IO Unit :=
do tables ← tablesRef.get,
   tablesRef.reset,
   tables ← updateTokens tables p.info,
   match p.info.firstTokens with
   | FirstTokens.tokens tks :=
     let tables := tks.foldl (λ (tables : ParsingTables) tk, { leadingTable := tables.leadingTable.insert (mkSimpleName tk.val) p, .. tables }) tables in
     tablesRef.set tables
   | _ :=
     throw (IO.userError ("invalid builtin parser '" ++ toString declName ++ "', initial token is not statically known"))

def addBuiltinTrailingParser (tablesRef : IO.Ref ParsingTables) (declName : Name) (p : TrailingParser) : IO Unit :=
do tables ← tablesRef.get,
   tablesRef.reset,
   tables ← updateTokens tables p.info,
   match p.info.firstTokens with
   | FirstTokens.tokens tks :=
     let tables := tks.foldl (λ (tables : ParsingTables) tk, { trailingTable := tables.trailingTable.insert (mkSimpleName tk.val) p, .. tables }) tables in
     tablesRef.set tables
   | _ :=
     let tables := { trailingParsers := p :: tables.trailingParsers, .. tables } in
     tablesRef.set tables

def declareBuiltinParser (env : Environment) (addFnName : Name) (refDeclName : Name) (declName : Name) : IO Environment :=
let name := `_regBuiltinParser ++ declName in
let type := Expr.app (mkConst `IO) (mkConst `Unit) in
let val  := mkCApp addFnName [mkConst refDeclName, toExpr declName, mkConst declName] in
let decl := Declaration.defnDecl { name := name, lparams := [], type := type, value := val, hints := ReducibilityHints.opaque, isUnsafe := false } in
match env.addAndCompile {} decl with
| none     := throw (IO.userError ("failed to emit registration code for builtin parser '" ++ toString declName ++ "'"))
| some env := IO.ofExcept (setInitAttr env name)

def declareLeadingBuiltinParser (env : Environment) (refDeclName : Name) (declName : Name) : IO Environment :=
declareBuiltinParser env `Lean.Parser.addBuiltinLeadingParser refDeclName declName

def declareTrailingBuiltinParser (env : Environment) (refDeclName : Name) (declName : Name) : IO Environment :=
declareBuiltinParser env `Lean.Parser.addBuiltinTrailingParser refDeclName declName

/-
The parsing tables for builtin parsers are "stored" in the extracted source code.
-/
def registerBuiltinParserAttribute (attrName : Name) (refDeclName : Name) : IO Unit :=
registerAttribute {
 name  := attrName,
 descr := "Builtin parser",
 add   := λ env declName args persistent, do {
   unless args.isMissing $ throw (IO.userError ("invalid attribute '" ++ toString attrName ++ "', unexpected argument")),
   unless persistent $ throw (IO.userError ("invalid attribute '" ++ toString attrName ++ "', must be persistent")),
   match env.find declName with
   | none  := throw "unknown declaration"
   | some decl :=
     match decl.type with
     | Expr.const `Lean.Parser.TrailingParser _ :=
       declareTrailingBuiltinParser env refDeclName declName
     | Expr.app (Expr.const `Lean.Parser.Parser _) (Expr.const `Lean.Parser.ParserKind.nud _) :=
       declareLeadingBuiltinParser env refDeclName declName
     | _ :=
       throw (IO.userError ("unexpected parser type at '" ++ toString declName ++ "' (`Parser` or `TrailingParser` expected"))
 },
 applicationTime := AttributeApplicationTime.afterCompilation
}

@[init mkBultinParsingTablesRef]
constant builtinCommandParsingTable : IO.Ref ParsingTables := default _
@[init mkBultinParsingTablesRef]
constant builtinTermParsingTable : IO.Ref ParsingTables := default _
@[init mkBultinParsingTablesRef]
constant builtinLevelParsingTable : IO.Ref ParsingTables := default _

@[init] def regBuiltinCommandParserAttr : IO Unit :=
registerBuiltinParserAttribute `builtinCommandParser `Lean.Parser.builtinCommandParsingTable
@[init] def regBuiltinTermParserAttr : IO Unit :=
registerBuiltinParserAttribute `builtinTermParser `Lean.Parser.builtinTermParsingTable
@[init] def regBuiltinLevelParserAttr : IO Unit :=
registerBuiltinParserAttribute `builtinLevelParser `Lean.Parser.builtinLevelParsingTable

@[noinline] unsafe def runBuiltinParserUnsafe (kind : String) (ref : IO.Ref ParsingTables) : ParserFn nud :=
λ a c s,
match unsafeIO (do tables ← ref.get, pure $ prattParser kind tables a c s) with
| some s := s
| none   := s.mkError "failed to access builtin reference"

@[implementedBy runBuiltinParserUnsafe]
constant runBuiltinParser (kind : String) (ref : IO.Ref ParsingTables) : ParserFn nud := default _

def commandParser (rbp : Nat := 0) : Parser :=
{ fn := λ _, runBuiltinParser "command" builtinCommandParsingTable rbp }

def termParser (rbp : Nat := 0) : Parser :=
{ fn := λ _, runBuiltinParser "term" builtinTermParsingTable rbp }

def levelParser (rbp : Nat := 0) : Parser :=
{ fn := λ _, runBuiltinParser "level" builtinLevelParsingTable rbp }

/- TODO(Leo): delete -/
@[init mkBultinParsingTablesRef]
constant builtinTestParsingTable : IO.Ref ParsingTables := default _
@[init] def regBuiltinTestParserAttr : IO Unit :=
registerBuiltinParserAttribute `builtinTestParser `Lean.Parser.builtinTestParsingTable

def testParser (rbp : Nat := 0) : Parser :=
{ fn := λ _, runBuiltinParser "testExpr" builtinTestParsingTable rbp }

end Parser
end Lean