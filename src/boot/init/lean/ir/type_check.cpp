// Lean compiler output
// Module: init.lean.ir.type_check
// Imports: init.lean.ir.instances init.lean.ir.format init.control.combinators
#include "runtime/object.h"
#include "runtime/apply.h"
#include "runtime/io.h"
#include "kernel/builtin.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
uint8 l_lean_ir_is__bitwise__ty(uint8);
uint8 l_lean_ir_is__nonfloat__arith__ty(uint8);
uint8 l_lean_ir_is__signed__arith__ty(uint8);
extern obj* l_lean_ir_phi_decorate__error___rarg___lambda__1___closed__2;
obj* l_lean_ir_valid__assign__unop__types___closed__4;
obj* l_list_mmap_x_27___main___at_lean_ir_decl_infer__types___main___spec__1(obj*, obj*, obj*);
obj* l_lean_ir_terminator_check(obj*, obj*, obj*);
obj* l_lean_ir_set__result__types(obj*, obj*, obj*, obj*);
obj* l_lean_ir_terminator_to__format___main(obj*);
obj* l_lean_ir_match__type(obj*, uint8, uint8, obj*, obj*);
obj* l_rbnode_balance2__node___main___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_ir_instr_to__format___main(obj*);
obj* l_lean_ir_match__type___closed__5;
obj* l_lean_ir_check__ne__type(obj*, uint8, obj*, obj*);
obj* l_reader__t_bind___at_lean_ir_type__check___spec__2___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_ir_check__ne__type___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_ir_set__type___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_ir_phi_infer__types(obj*, obj*, obj*);
obj* l_list_mmap_x_27___main___at_lean_ir_decl_check___main___spec__1(obj*, obj*, obj*);
obj* l_list_length___main___rarg(obj*);
obj* l_rbnode_insert___at_lean_ir_set__type___spec__2___boxed(obj*, obj*, obj*);
obj* l_rbmap_find___main___at_lean_ir_get__type___spec__1(obj*, obj*);
obj* l_lean_ir_check__arg__types___main(obj*, obj*, obj*, obj*);
uint8 l_lean_ir_valid__assign__unop__types(uint8, uint8, uint8);
obj* l_lean_ir_type__check___closed__1;
obj* l_lean_ir_decl_infer__types(obj*, obj*, obj*);
obj* l_lean_ir_is__nonfloat__arith__ty___closed__2;
obj* l_lean_ir_block_check(obj*, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_ir_set__type___spec__3___boxed(obj*, obj*, obj*);
obj* l_lean_to__fmt___at_lean_ir_instr_to__format___main___spec__1(obj*);
obj* l_lean_ir_type_to__format___main(uint8);
obj* l_lean_ir_decl_check___main(obj*, obj*, obj*);
obj* l_lean_ir_type2id___main(uint8);
obj* l_lean_ir_block_infer__types(obj*, obj*, obj*);
obj* l_lean_ir_instr_check___closed__1;
obj* l_lean_ir_instr_check___closed__3;
obj* l_lean_ir_instr_infer__types(obj*, obj*, obj*);
obj* l_lean_ir_get__decl___closed__1;
obj* l_lean_ir_decl_check(obj*, obj*, obj*);
obj* l_lean_ir_check__ne__type___closed__1;
obj* l_lean_ir_valid__assign__unop__types___closed__3;
obj* l_except__t_bind__cont___at_lean_ir_type__check___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_ir_instr_check___closed__5;
obj* l_lean_ir_invalid__literal___rarg(obj*);
uint8 l_lean_ir_is__arith__ty(uint8);
obj* l_lean_ir_check__type___closed__2;
obj* l_rbnode_mk__insert__result___main___rarg(uint8, obj*);
obj* l_lean_ir_invalid__literal___rarg___closed__1;
obj* l_lean_to__fmt___at_lean_ir_instr_to__format___main___spec__2(obj*);
obj* l_lean_ir_type__check___lambda__1(obj*, obj*, obj*, obj*);
obj* l_rbmap_insert___main___at_lean_ir_set__type___spec__1(obj*, obj*, uint8);
extern obj* l_lean_ir_terminator_decorate__error___rarg___lambda__1___closed__1;
obj* l_lean_ir_decl_header___main(obj*);
obj* l_list_mmap_x_27___main___at_lean_ir_block_check___spec__2(obj*, obj*, obj*);
obj* l_lean_ir_is__bitshift__ty___boxed(obj*);
obj* l_lean_ir_instr_check(obj*, obj*, obj*);
obj* l_except__t_bind__cont___at_lean_ir_type__check___spec__1(obj*, obj*);
obj* l_lean_ir_phi_to__format___main(obj*);
obj* l_lean_ir_get__type(obj*, obj*, obj*);
obj* l_lean_ir_check__ne__type___closed__2;
obj* l_lean_ir_type__checker__m;
obj* l_lean_ir_match__type___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_ir_match__type___closed__2;
uint8 l_lean_ir_is__bitshift__ty(uint8);
obj* l_lean_ir_type__checker__m_run___rarg(obj*, obj*, obj*);
obj* l_lean_ir_infer__types(obj*, obj*);
extern obj* l_lean_ir_header_decorate__error___rarg___lambda__1___closed__1;
obj* l_rbnode_insert___at_lean_ir_set__type___spec__2(obj*, obj*, uint8);
obj* l_list_mmap_x_27___main___at_lean_ir_instr_check___spec__3(obj*, obj*, obj*);
obj* l_lean_ir_instr_check___closed__4;
obj* l_lean_ir_valid__assign__unop__types___closed__2;
obj* l_lean_ir_decl_infer__types___main(obj*, obj*, obj*);
obj* l_list_mmap_x_27___main___at_lean_ir_instr_check___spec__2(obj*, obj*, obj*);
obj* l_lean_ir_match__type___closed__4;
obj* l_lean_ir_type__checker__m_run(obj*);
obj* l_lean_ir_get__decl(obj*, obj*, obj*);
uint8 l_lean_ir_valid__assign__binop__types(uint8, uint8, uint8, uint8);
obj* l_lean_ir_match__type___closed__3;
obj* l_lean_ir_check__arg__types(obj*, obj*, obj*, obj*);
extern obj* l_int_zero;
obj* l_list_mmap_x_27___main___at_lean_ir_phi_check___spec__1(obj*, obj*, obj*, obj*);
obj* l_lean_ir_invalid__literal(obj*);
obj* l_lean_ir_set__result__types___main(obj*, obj*, obj*, obj*);
obj* l_rbnode_find___main___at_lean_ir_get__type___spec__2___rarg(obj*, obj*);
obj* l_lean_ir_valid__assign__binop__types___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_ir_check__type(obj*, uint8, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_ir_set__type___spec__3(obj*, obj*, uint8);
obj* l_lean_ir_instr_check___closed__2;
obj* l_lean_ir_check__result__type___main(obj*, obj*, obj*, obj*);
obj* l_lean_ir_get__type___closed__1;
obj* l_lean_ir_terminator_check___closed__1;
obj* l_lean_ir_is__arith__ty___boxed(obj*);
extern obj* l_lean_ir_phi_decorate__error___rarg___lambda__1___closed__1;
obj* l_lean_ir_phi_check(obj*, obj*, obj*);
obj* l_lean_to__fmt___at_lean_ir_terminator_to__format___main___spec__4(obj*);
obj* l_lean_ir_is__nonfloat__arith__ty___boxed(obj*);
obj* l_rbmap_insert___main___at_lean_ir_set__type___spec__1___boxed(obj*, obj*, obj*);
uint8 l_rbnode_get__color___main___rarg(obj*);
obj* l_rbnode_find___main___at_lean_ir_get__type___spec__2(obj*);
obj* l_lean_ir_check__arg__types___main___closed__1;
obj* l_lean_ir_check__result__type(obj*, obj*, obj*, obj*);
extern obj* l_lean_ir_block_decorate__error___rarg___lambda__1___closed__1;
obj* l_lean_ir_set__type(obj*, uint8, obj*, obj*);
obj* l_lean_ir_valid__assign__unop__types___closed__1;
obj* l_lean_ir_valid__assign__unop__types___boxed(obj*, obj*, obj*);
obj* l_lean_ir_literal_check___boxed(obj*, obj*, obj*, obj*);
obj* l_list_mmap_x_27___main___at_lean_ir_block_infer__types___spec__1(obj*, obj*, obj*);
obj* l_lean_ir_is__signed__arith__ty___boxed(obj*);
obj* l_lean_ir_type__check(obj*, obj*);
obj* l_lean_ir_check__type___closed__1;
obj* l_rbnode_balance1__node___main___rarg(obj*, obj*, obj*, obj*);
obj* l_list_mmap_x_27___main___at_lean_ir_block_check___spec__1(obj*, obj*, obj*);
extern obj* l_lean_ir_mk__context;
obj* l_lean_ir_literal_check(obj*, uint8, obj*, obj*);
obj* l_list_mmap_x_27___main___at_lean_ir_instr_check___spec__2___closed__1;
obj* l_lean_name_quick__lt___main(obj*, obj*);
obj* l_lean_ir_type__check___lambda__2(obj*, obj*, obj*);
obj* l_lean_ir_match__type___closed__1;
obj* l_list_mmap_x_27___main___at_lean_ir_instr_check___spec__1(obj*, obj*, obj*);
obj* l_list_mmap_x_27___main___at_lean_ir_decl_infer__types___main___spec__2(obj*, obj*, obj*);
obj* l_lean_ir_check__type___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_ir_is__bitwise__ty___boxed(obj*);
obj* l_lean_ir_is__nonfloat__arith__ty___closed__1;
obj* l_list_mmap_x_27___main___at_lean_ir_block_infer__types___spec__2(obj*, obj*, obj*);
obj* l_reader__t_bind___at_lean_ir_type__check___spec__2(obj*, obj*);
obj* l_lean_ir_is__arith__ty___closed__1;
obj* l_lean_ir_arg_infer__types(obj*, obj*, obj*);
extern obj* l_lean_ir_instr_decorate__error___rarg___lambda__1___closed__1;
uint8 l_lean_ir_is__signed__arith__ty(uint8 x_0) {
_start:
{
switch (x_0) {
case 0:
{
uint8 x_1; 
x_1 = 0;
return x_1;
}
case 1:
{
uint8 x_2; 
x_2 = 0;
return x_2;
}
case 2:
{
uint8 x_3; 
x_3 = 0;
return x_3;
}
case 3:
{
uint8 x_4; 
x_4 = 0;
return x_4;
}
case 4:
{
uint8 x_5; 
x_5 = 0;
return x_5;
}
case 5:
{
uint8 x_6; 
x_6 = 0;
return x_6;
}
case 6:
{
uint8 x_7; 
x_7 = 1;
return x_7;
}
case 7:
{
uint8 x_8; 
x_8 = 1;
return x_8;
}
case 8:
{
uint8 x_9; 
x_9 = 1;
return x_9;
}
case 9:
{
uint8 x_10; 
x_10 = 1;
return x_10;
}
case 10:
{
uint8 x_11; 
x_11 = 1;
return x_11;
}
default:
{
uint8 x_12; 
x_12 = 0;
return x_12;
}
}
}
}
obj* l_lean_ir_is__signed__arith__ty___boxed(obj* x_0) {
_start:
{
uint8 x_1; uint8 x_2; obj* x_3; 
x_1 = lean::unbox(x_0);
x_2 = l_lean_ir_is__signed__arith__ty(x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
uint8 l_lean_ir_is__arith__ty(uint8 x_0) {
_start:
{
obj* x_1; obj* x_2; uint8 x_3; 
x_1 = l_lean_ir_type2id___main(x_0);
x_2 = l_lean_ir_is__arith__ty___closed__1;
x_3 = lean::nat_dec_eq(x_1, x_2);
lean::dec(x_1);
if (x_3 == 0)
{
uint8 x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8 x_6; 
x_6 = 0;
return x_6;
}
}
}
obj* _init_l_lean_ir_is__arith__ty___closed__1() {
_start:
{
uint8 x_0; obj* x_1; 
x_0 = 0;
x_1 = l_lean_ir_type2id___main(x_0);
return x_1;
}
}
obj* l_lean_ir_is__arith__ty___boxed(obj* x_0) {
_start:
{
uint8 x_1; uint8 x_2; obj* x_3; 
x_1 = lean::unbox(x_0);
x_2 = l_lean_ir_is__arith__ty(x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
uint8 l_lean_ir_is__nonfloat__arith__ty(uint8 x_0) {
_start:
{
uint8 x_1; 
x_1 = l_lean_ir_is__arith__ty(x_0);
if (x_1 == 0)
{
if (x_1 == 0)
{
return x_1;
}
else
{
obj* x_2; obj* x_3; uint8 x_4; 
x_2 = l_lean_ir_type2id___main(x_0);
x_3 = l_lean_ir_is__nonfloat__arith__ty___closed__1;
x_4 = lean::nat_dec_eq(x_2, x_3);
lean::dec(x_2);
if (x_4 == 0)
{
return x_1;
}
else
{
uint8 x_6; 
x_6 = 0;
return x_6;
}
}
}
else
{
obj* x_7; obj* x_8; uint8 x_9; 
x_7 = l_lean_ir_type2id___main(x_0);
x_8 = l_lean_ir_is__nonfloat__arith__ty___closed__2;
x_9 = lean::nat_dec_eq(x_7, x_8);
if (x_9 == 0)
{
if (x_1 == 0)
{
lean::dec(x_7);
return x_1;
}
else
{
obj* x_11; uint8 x_12; 
x_11 = l_lean_ir_is__nonfloat__arith__ty___closed__1;
x_12 = lean::nat_dec_eq(x_7, x_11);
lean::dec(x_7);
if (x_12 == 0)
{
return x_1;
}
else
{
uint8 x_14; 
x_14 = 0;
return x_14;
}
}
}
else
{
uint8 x_16; 
lean::dec(x_7);
x_16 = 0;
return x_16;
}
}
}
}
obj* _init_l_lean_ir_is__nonfloat__arith__ty___closed__1() {
_start:
{
uint8 x_0; obj* x_1; 
x_0 = 10;
x_1 = l_lean_ir_type2id___main(x_0);
return x_1;
}
}
obj* _init_l_lean_ir_is__nonfloat__arith__ty___closed__2() {
_start:
{
uint8 x_0; obj* x_1; 
x_0 = 9;
x_1 = l_lean_ir_type2id___main(x_0);
return x_1;
}
}
obj* l_lean_ir_is__nonfloat__arith__ty___boxed(obj* x_0) {
_start:
{
uint8 x_1; uint8 x_2; obj* x_3; 
x_1 = lean::unbox(x_0);
x_2 = l_lean_ir_is__nonfloat__arith__ty(x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
uint8 l_lean_ir_is__bitwise__ty(uint8 x_0) {
_start:
{
switch (x_0) {
case 0:
{
uint8 x_1; 
x_1 = 1;
return x_1;
}
case 1:
{
uint8 x_2; 
x_2 = 1;
return x_2;
}
case 2:
{
uint8 x_3; 
x_3 = 1;
return x_3;
}
case 3:
{
uint8 x_4; 
x_4 = 1;
return x_4;
}
case 4:
{
uint8 x_5; 
x_5 = 1;
return x_5;
}
case 5:
{
uint8 x_6; 
x_6 = 1;
return x_6;
}
case 6:
{
uint8 x_7; 
x_7 = 0;
return x_7;
}
case 7:
{
uint8 x_8; 
x_8 = 0;
return x_8;
}
case 8:
{
uint8 x_9; 
x_9 = 0;
return x_9;
}
case 9:
{
uint8 x_10; 
x_10 = 0;
return x_10;
}
case 10:
{
uint8 x_11; 
x_11 = 0;
return x_11;
}
default:
{
uint8 x_12; 
x_12 = 1;
return x_12;
}
}
}
}
obj* l_lean_ir_is__bitwise__ty___boxed(obj* x_0) {
_start:
{
uint8 x_1; uint8 x_2; obj* x_3; 
x_1 = lean::unbox(x_0);
x_2 = l_lean_ir_is__bitwise__ty(x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
uint8 l_lean_ir_is__bitshift__ty(uint8 x_0) {
_start:
{
switch (x_0) {
case 0:
{
uint8 x_1; 
x_1 = 0;
return x_1;
}
case 1:
{
uint8 x_2; 
x_2 = 1;
return x_2;
}
case 2:
{
uint8 x_3; 
x_3 = 1;
return x_3;
}
case 3:
{
uint8 x_4; 
x_4 = 1;
return x_4;
}
case 4:
{
uint8 x_5; 
x_5 = 1;
return x_5;
}
case 5:
{
uint8 x_6; 
x_6 = 1;
return x_6;
}
case 6:
{
uint8 x_7; 
x_7 = 1;
return x_7;
}
case 7:
{
uint8 x_8; 
x_8 = 1;
return x_8;
}
case 8:
{
uint8 x_9; 
x_9 = 1;
return x_9;
}
case 9:
{
uint8 x_10; 
x_10 = 0;
return x_10;
}
case 10:
{
uint8 x_11; 
x_11 = 0;
return x_11;
}
default:
{
uint8 x_12; 
x_12 = 0;
return x_12;
}
}
}
}
obj* l_lean_ir_is__bitshift__ty___boxed(obj* x_0) {
_start:
{
uint8 x_1; uint8 x_2; obj* x_3; 
x_1 = lean::unbox(x_0);
x_2 = l_lean_ir_is__bitshift__ty(x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
uint8 l_lean_ir_valid__assign__unop__types(uint8 x_0, uint8 x_1, uint8 x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_11; 
switch (x_0) {
case 0:
{
obj* x_13; obj* x_14; uint8 x_15; 
x_13 = l_lean_ir_type2id___main(x_2);
x_14 = l_lean_ir_type2id___main(x_1);
x_15 = lean::nat_dec_eq(x_13, x_14);
lean::dec(x_14);
lean::dec(x_13);
if (x_15 == 0)
{
uint8 x_18; 
x_18 = 0;
return x_18;
}
else
{
uint8 x_19; 
x_19 = l_lean_ir_is__bitwise__ty(x_2);
return x_19;
}
}
case 1:
{
obj* x_20; obj* x_21; uint8 x_22; 
x_20 = l_lean_ir_type2id___main(x_2);
x_21 = l_lean_ir_type2id___main(x_1);
x_22 = lean::nat_dec_eq(x_20, x_21);
lean::dec(x_21);
lean::dec(x_20);
if (x_22 == 0)
{
uint8 x_25; 
x_25 = 0;
return x_25;
}
else
{
uint8 x_26; 
x_26 = l_lean_ir_is__signed__arith__ty(x_2);
return x_26;
}
}
case 2:
{
obj* x_27; 
x_27 = lean::box(0);
x_3 = x_27;
goto lbl_4;
}
case 3:
{
obj* x_28; 
x_28 = lean::box(0);
x_3 = x_28;
goto lbl_4;
}
case 4:
{
obj* x_29; 
x_29 = lean::box(0);
x_5 = x_29;
goto lbl_6;
}
case 5:
{
obj* x_30; 
x_30 = lean::box(0);
x_5 = x_30;
goto lbl_6;
}
case 6:
{
obj* x_31; 
x_31 = lean::box(0);
x_5 = x_31;
goto lbl_6;
}
case 7:
{
obj* x_32; obj* x_33; uint8 x_34; 
x_32 = l_lean_ir_type2id___main(x_1);
x_33 = l_lean_ir_valid__assign__unop__types___closed__1;
x_34 = lean::nat_dec_eq(x_32, x_33);
lean::dec(x_32);
if (x_34 == 0)
{
uint8 x_36; 
x_36 = 1;
return x_36;
}
else
{
uint8 x_37; 
x_37 = 0;
return x_37;
}
}
case 8:
{
obj* x_38; obj* x_39; uint8 x_40; 
x_38 = l_lean_ir_type2id___main(x_1);
x_39 = l_lean_ir_valid__assign__unop__types___closed__1;
x_40 = lean::nat_dec_eq(x_38, x_39);
lean::dec(x_38);
if (x_40 == 0)
{
uint8 x_42; 
x_42 = 0;
return x_42;
}
else
{
obj* x_43; obj* x_44; uint8 x_45; 
x_43 = l_lean_ir_type2id___main(x_2);
x_44 = l_lean_ir_valid__assign__unop__types___closed__3;
x_45 = lean::nat_dec_eq(x_43, x_44);
if (x_45 == 0)
{
obj* x_46; uint8 x_47; 
x_46 = l_lean_ir_valid__assign__unop__types___closed__4;
x_47 = lean::nat_dec_eq(x_43, x_46);
lean::dec(x_43);
if (x_47 == 0)
{
uint8 x_49; 
x_49 = 0;
return x_49;
}
else
{
uint8 x_50; 
x_50 = 1;
return x_50;
}
}
else
{
uint8 x_52; 
lean::dec(x_43);
x_52 = 1;
return x_52;
}
}
}
case 9:
{
obj* x_53; obj* x_54; uint8 x_55; 
x_53 = l_lean_ir_type2id___main(x_2);
x_54 = l_lean_ir_valid__assign__unop__types___closed__1;
x_55 = lean::nat_dec_eq(x_53, x_54);
lean::dec(x_53);
if (x_55 == 0)
{
uint8 x_57; 
x_57 = 0;
return x_57;
}
else
{
obj* x_58; obj* x_59; uint8 x_60; 
x_58 = l_lean_ir_type2id___main(x_1);
x_59 = l_lean_ir_valid__assign__unop__types___closed__3;
x_60 = lean::nat_dec_eq(x_58, x_59);
if (x_60 == 0)
{
obj* x_61; uint8 x_62; 
x_61 = l_lean_ir_valid__assign__unop__types___closed__4;
x_62 = lean::nat_dec_eq(x_58, x_61);
lean::dec(x_58);
if (x_62 == 0)
{
uint8 x_64; 
x_64 = 0;
return x_64;
}
else
{
uint8 x_65; 
x_65 = 1;
return x_65;
}
}
else
{
uint8 x_67; 
lean::dec(x_58);
x_67 = 1;
return x_67;
}
}
}
case 10:
{
obj* x_68; 
x_68 = lean::box(0);
x_7 = x_68;
goto lbl_8;
}
case 11:
{
obj* x_69; 
x_69 = lean::box(0);
x_7 = x_69;
goto lbl_8;
}
case 12:
{
obj* x_70; 
x_70 = lean::box(0);
x_9 = x_70;
goto lbl_10;
}
case 13:
{
obj* x_71; 
x_71 = lean::box(0);
x_9 = x_71;
goto lbl_10;
}
case 14:
{
obj* x_72; 
x_72 = lean::box(0);
x_9 = x_72;
goto lbl_10;
}
case 15:
{
obj* x_73; obj* x_74; uint8 x_75; 
x_73 = l_lean_ir_type2id___main(x_1);
x_74 = l_lean_ir_valid__assign__unop__types___closed__1;
x_75 = lean::nat_dec_eq(x_73, x_74);
lean::dec(x_73);
if (x_75 == 0)
{
uint8 x_77; 
x_77 = 0;
return x_77;
}
else
{
obj* x_78; uint8 x_79; 
x_78 = l_lean_ir_type2id___main(x_2);
x_79 = lean::nat_dec_eq(x_78, x_74);
lean::dec(x_78);
if (x_79 == 0)
{
uint8 x_81; 
x_81 = 0;
return x_81;
}
else
{
uint8 x_82; 
x_82 = 1;
return x_82;
}
}
}
case 16:
{
obj* x_83; 
x_83 = lean::box(0);
x_11 = x_83;
goto lbl_12;
}
default:
{
obj* x_84; 
x_84 = lean::box(0);
x_11 = x_84;
goto lbl_12;
}
}
lbl_4:
{
obj* x_86; obj* x_87; uint8 x_88; 
lean::dec(x_3);
x_86 = l_lean_ir_type2id___main(x_2);
x_87 = l_lean_ir_type2id___main(x_1);
x_88 = lean::nat_dec_eq(x_86, x_87);
lean::dec(x_87);
if (x_88 == 0)
{
uint8 x_91; 
lean::dec(x_86);
x_91 = 0;
return x_91;
}
else
{
obj* x_92; uint8 x_93; 
x_92 = l_lean_ir_valid__assign__unop__types___closed__1;
x_93 = lean::nat_dec_eq(x_86, x_92);
lean::dec(x_86);
if (x_93 == 0)
{
uint8 x_95; 
x_95 = 0;
return x_95;
}
else
{
uint8 x_96; 
x_96 = 1;
return x_96;
}
}
}
lbl_6:
{
obj* x_98; obj* x_99; uint8 x_100; 
lean::dec(x_5);
x_98 = l_lean_ir_type2id___main(x_2);
x_99 = l_lean_ir_valid__assign__unop__types___closed__1;
x_100 = lean::nat_dec_eq(x_98, x_99);
lean::dec(x_98);
if (x_100 == 0)
{
uint8 x_102; 
x_102 = 0;
return x_102;
}
else
{
obj* x_103; obj* x_104; uint8 x_105; 
x_103 = l_lean_ir_type2id___main(x_1);
x_104 = l_lean_ir_is__arith__ty___closed__1;
x_105 = lean::nat_dec_eq(x_103, x_104);
lean::dec(x_103);
if (x_105 == 0)
{
uint8 x_107; 
x_107 = 0;
return x_107;
}
else
{
uint8 x_108; 
x_108 = 1;
return x_108;
}
}
}
lbl_8:
{
obj* x_110; obj* x_111; uint8 x_112; 
lean::dec(x_7);
x_110 = l_lean_ir_type2id___main(x_2);
x_111 = l_lean_ir_valid__assign__unop__types___closed__1;
x_112 = lean::nat_dec_eq(x_110, x_111);
lean::dec(x_110);
if (x_112 == 0)
{
uint8 x_114; 
x_114 = 0;
return x_114;
}
else
{
obj* x_115; uint8 x_116; 
x_115 = l_lean_ir_type2id___main(x_1);
x_116 = lean::nat_dec_eq(x_115, x_111);
lean::dec(x_115);
if (x_116 == 0)
{
uint8 x_118; 
x_118 = 0;
return x_118;
}
else
{
uint8 x_119; 
x_119 = 1;
return x_119;
}
}
}
lbl_10:
{
obj* x_121; obj* x_122; uint8 x_123; 
lean::dec(x_9);
x_121 = l_lean_ir_type2id___main(x_1);
x_122 = l_lean_ir_valid__assign__unop__types___closed__2;
x_123 = lean::nat_dec_eq(x_121, x_122);
lean::dec(x_121);
if (x_123 == 0)
{
uint8 x_125; 
x_125 = 0;
return x_125;
}
else
{
obj* x_126; obj* x_127; uint8 x_128; 
x_126 = l_lean_ir_type2id___main(x_2);
x_127 = l_lean_ir_valid__assign__unop__types___closed__1;
x_128 = lean::nat_dec_eq(x_126, x_127);
lean::dec(x_126);
if (x_128 == 0)
{
uint8 x_130; 
x_130 = 0;
return x_130;
}
else
{
uint8 x_131; 
x_131 = 1;
return x_131;
}
}
}
lbl_12:
{
obj* x_133; obj* x_134; uint8 x_135; 
lean::dec(x_11);
x_133 = l_lean_ir_type2id___main(x_1);
x_134 = l_lean_ir_valid__assign__unop__types___closed__3;
x_135 = lean::nat_dec_eq(x_133, x_134);
lean::dec(x_133);
if (x_135 == 0)
{
uint8 x_137; 
x_137 = 0;
return x_137;
}
else
{
obj* x_138; obj* x_139; uint8 x_140; 
x_138 = l_lean_ir_type2id___main(x_2);
x_139 = l_lean_ir_valid__assign__unop__types___closed__1;
x_140 = lean::nat_dec_eq(x_138, x_139);
lean::dec(x_138);
if (x_140 == 0)
{
uint8 x_142; 
x_142 = 0;
return x_142;
}
else
{
uint8 x_143; 
x_143 = 1;
return x_143;
}
}
}
}
}
obj* _init_l_lean_ir_valid__assign__unop__types___closed__1() {
_start:
{
uint8 x_0; obj* x_1; 
x_0 = 11;
x_1 = l_lean_ir_type2id___main(x_0);
return x_1;
}
}
obj* _init_l_lean_ir_valid__assign__unop__types___closed__2() {
_start:
{
uint8 x_0; obj* x_1; 
x_0 = 5;
x_1 = l_lean_ir_type2id___main(x_0);
return x_1;
}
}
obj* _init_l_lean_ir_valid__assign__unop__types___closed__3() {
_start:
{
uint8 x_0; obj* x_1; 
x_0 = 3;
x_1 = l_lean_ir_type2id___main(x_0);
return x_1;
}
}
obj* _init_l_lean_ir_valid__assign__unop__types___closed__4() {
_start:
{
uint8 x_0; obj* x_1; 
x_0 = 7;
x_1 = l_lean_ir_type2id___main(x_0);
return x_1;
}
}
obj* l_lean_ir_valid__assign__unop__types___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; uint8 x_6; obj* x_7; 
x_3 = lean::unbox(x_0);
x_4 = lean::unbox(x_1);
x_5 = lean::unbox(x_2);
x_6 = l_lean_ir_valid__assign__unop__types(x_3, x_4, x_5);
x_7 = lean::box(x_6);
return x_7;
}
}
uint8 l_lean_ir_valid__assign__binop__types(uint8 x_0, uint8 x_1, uint8 x_2, uint8 x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; 
switch (x_0) {
case 0:
{
obj* x_18; 
x_18 = lean::box(0);
x_4 = x_18;
goto lbl_5;
}
case 1:
{
obj* x_19; 
x_19 = lean::box(0);
x_4 = x_19;
goto lbl_5;
}
case 2:
{
obj* x_20; 
x_20 = lean::box(0);
x_4 = x_20;
goto lbl_5;
}
case 3:
{
obj* x_21; 
x_21 = lean::box(0);
x_4 = x_21;
goto lbl_5;
}
case 4:
{
obj* x_22; obj* x_23; uint8 x_24; 
x_22 = l_lean_ir_type2id___main(x_1);
x_23 = l_lean_ir_type2id___main(x_2);
x_24 = lean::nat_dec_eq(x_22, x_23);
lean::dec(x_23);
if (x_24 == 0)
{
uint8 x_27; 
lean::dec(x_22);
x_27 = 0;
return x_27;
}
else
{
obj* x_28; uint8 x_29; 
x_28 = l_lean_ir_type2id___main(x_3);
x_29 = lean::nat_dec_eq(x_22, x_28);
lean::dec(x_28);
lean::dec(x_22);
if (x_29 == 0)
{
uint8 x_32; 
x_32 = 0;
return x_32;
}
else
{
uint8 x_33; 
x_33 = l_lean_ir_is__nonfloat__arith__ty(x_1);
return x_33;
}
}
}
case 5:
{
obj* x_34; 
x_34 = lean::box(0);
x_6 = x_34;
goto lbl_7;
}
case 6:
{
obj* x_35; 
x_35 = lean::box(0);
x_6 = x_35;
goto lbl_7;
}
case 7:
{
obj* x_36; 
x_36 = lean::box(0);
x_6 = x_36;
goto lbl_7;
}
case 8:
{
obj* x_37; 
x_37 = lean::box(0);
x_6 = x_37;
goto lbl_7;
}
case 9:
{
obj* x_38; 
x_38 = lean::box(0);
x_6 = x_38;
goto lbl_7;
}
case 10:
{
obj* x_39; 
x_39 = lean::box(0);
x_8 = x_39;
goto lbl_9;
}
case 11:
{
obj* x_40; 
x_40 = lean::box(0);
x_8 = x_40;
goto lbl_9;
}
case 12:
{
obj* x_41; 
x_41 = lean::box(0);
x_10 = x_41;
goto lbl_11;
}
case 13:
{
obj* x_42; 
x_42 = lean::box(0);
x_10 = x_42;
goto lbl_11;
}
case 14:
{
obj* x_43; 
x_43 = lean::box(0);
x_10 = x_43;
goto lbl_11;
}
case 15:
{
obj* x_44; 
x_44 = lean::box(0);
x_12 = x_44;
goto lbl_13;
}
case 16:
{
obj* x_45; 
x_45 = lean::box(0);
x_12 = x_45;
goto lbl_13;
}
case 17:
{
obj* x_46; 
x_46 = lean::box(0);
x_14 = x_46;
goto lbl_15;
}
case 18:
{
obj* x_47; 
x_47 = lean::box(0);
x_14 = x_47;
goto lbl_15;
}
case 19:
{
obj* x_48; 
x_48 = lean::box(0);
x_16 = x_48;
goto lbl_17;
}
case 20:
{
obj* x_49; 
x_49 = lean::box(0);
x_16 = x_49;
goto lbl_17;
}
case 21:
{
obj* x_50; 
x_50 = lean::box(0);
x_16 = x_50;
goto lbl_17;
}
case 22:
{
obj* x_51; 
x_51 = lean::box(0);
x_16 = x_51;
goto lbl_17;
}
case 23:
{
obj* x_52; obj* x_53; uint8 x_54; 
x_52 = l_lean_ir_type2id___main(x_2);
x_53 = l_lean_ir_valid__assign__unop__types___closed__1;
x_54 = lean::nat_dec_eq(x_52, x_53);
lean::dec(x_52);
if (x_54 == 0)
{
uint8 x_56; 
x_56 = 0;
return x_56;
}
else
{
obj* x_57; obj* x_58; uint8 x_59; 
x_57 = l_lean_ir_type2id___main(x_3);
x_58 = l_lean_ir_valid__assign__unop__types___closed__2;
x_59 = lean::nat_dec_eq(x_57, x_58);
lean::dec(x_57);
if (x_59 == 0)
{
uint8 x_61; 
x_61 = 0;
return x_61;
}
else
{
uint8 x_62; 
x_62 = 1;
return x_62;
}
}
}
case 24:
{
obj* x_63; obj* x_64; uint8 x_65; 
x_63 = l_lean_ir_type2id___main(x_1);
x_64 = l_lean_ir_valid__assign__unop__types___closed__1;
x_65 = lean::nat_dec_eq(x_63, x_64);
lean::dec(x_63);
if (x_65 == 0)
{
uint8 x_67; 
x_67 = 0;
return x_67;
}
else
{
obj* x_68; uint8 x_69; 
x_68 = l_lean_ir_type2id___main(x_2);
x_69 = lean::nat_dec_eq(x_68, x_64);
lean::dec(x_68);
if (x_69 == 0)
{
uint8 x_71; 
x_71 = 0;
return x_71;
}
else
{
uint8 x_72; 
x_72 = 1;
return x_72;
}
}
}
case 25:
{
obj* x_73; obj* x_74; uint8 x_75; 
x_73 = l_lean_ir_type2id___main(x_1);
x_74 = l_lean_ir_valid__assign__unop__types___closed__1;
x_75 = lean::nat_dec_eq(x_73, x_74);
lean::dec(x_73);
if (x_75 == 0)
{
uint8 x_77; 
x_77 = 0;
return x_77;
}
else
{
obj* x_78; uint8 x_79; 
x_78 = l_lean_ir_type2id___main(x_2);
x_79 = lean::nat_dec_eq(x_78, x_74);
lean::dec(x_78);
if (x_79 == 0)
{
uint8 x_81; 
x_81 = 0;
return x_81;
}
else
{
obj* x_82; obj* x_83; uint8 x_84; 
x_82 = l_lean_ir_type2id___main(x_3);
x_83 = l_lean_ir_valid__assign__unop__types___closed__3;
x_84 = lean::nat_dec_eq(x_82, x_83);
lean::dec(x_82);
if (x_84 == 0)
{
uint8 x_86; 
x_86 = 0;
return x_86;
}
else
{
uint8 x_87; 
x_87 = 1;
return x_87;
}
}
}
}
default:
{
obj* x_88; obj* x_89; uint8 x_90; 
x_88 = l_lean_ir_type2id___main(x_1);
x_89 = l_lean_ir_valid__assign__unop__types___closed__1;
x_90 = lean::nat_dec_eq(x_88, x_89);
lean::dec(x_88);
if (x_90 == 0)
{
uint8 x_92; 
x_92 = 0;
return x_92;
}
else
{
obj* x_93; uint8 x_94; 
x_93 = l_lean_ir_type2id___main(x_2);
x_94 = lean::nat_dec_eq(x_93, x_89);
lean::dec(x_93);
if (x_94 == 0)
{
uint8 x_96; 
x_96 = 0;
return x_96;
}
else
{
obj* x_97; uint8 x_98; 
x_97 = l_lean_ir_type2id___main(x_3);
x_98 = lean::nat_dec_eq(x_97, x_89);
lean::dec(x_97);
if (x_98 == 0)
{
uint8 x_100; 
x_100 = 0;
return x_100;
}
else
{
uint8 x_101; 
x_101 = 1;
return x_101;
}
}
}
}
}
lbl_5:
{
obj* x_103; obj* x_104; uint8 x_105; 
lean::dec(x_4);
x_103 = l_lean_ir_type2id___main(x_1);
x_104 = l_lean_ir_type2id___main(x_2);
x_105 = lean::nat_dec_eq(x_103, x_104);
lean::dec(x_104);
if (x_105 == 0)
{
uint8 x_108; 
lean::dec(x_103);
x_108 = 0;
return x_108;
}
else
{
obj* x_109; uint8 x_110; 
x_109 = l_lean_ir_type2id___main(x_3);
x_110 = lean::nat_dec_eq(x_103, x_109);
lean::dec(x_109);
lean::dec(x_103);
if (x_110 == 0)
{
uint8 x_113; 
x_113 = 0;
return x_113;
}
else
{
uint8 x_114; 
x_114 = l_lean_ir_is__arith__ty(x_1);
return x_114;
}
}
}
lbl_7:
{
obj* x_116; obj* x_117; uint8 x_118; 
lean::dec(x_6);
x_116 = l_lean_ir_type2id___main(x_1);
x_117 = l_lean_ir_type2id___main(x_2);
x_118 = lean::nat_dec_eq(x_116, x_117);
lean::dec(x_117);
if (x_118 == 0)
{
uint8 x_121; 
lean::dec(x_116);
x_121 = 0;
return x_121;
}
else
{
obj* x_122; uint8 x_123; 
x_122 = l_lean_ir_type2id___main(x_3);
x_123 = lean::nat_dec_eq(x_116, x_122);
lean::dec(x_122);
if (x_123 == 0)
{
uint8 x_126; 
lean::dec(x_116);
x_126 = 0;
return x_126;
}
else
{
obj* x_127; uint8 x_128; 
x_127 = l_lean_ir_valid__assign__unop__types___closed__1;
x_128 = lean::nat_dec_eq(x_116, x_127);
lean::dec(x_116);
if (x_128 == 0)
{
uint8 x_130; 
x_130 = 0;
return x_130;
}
else
{
uint8 x_131; 
x_131 = 1;
return x_131;
}
}
}
}
lbl_9:
{
obj* x_133; obj* x_134; uint8 x_135; 
lean::dec(x_8);
x_133 = l_lean_ir_type2id___main(x_1);
x_134 = l_lean_ir_type2id___main(x_2);
x_135 = lean::nat_dec_eq(x_133, x_134);
lean::dec(x_134);
if (x_135 == 0)
{
uint8 x_138; 
lean::dec(x_133);
x_138 = 0;
return x_138;
}
else
{
obj* x_139; uint8 x_140; 
x_139 = l_lean_ir_type2id___main(x_3);
x_140 = lean::nat_dec_eq(x_133, x_139);
lean::dec(x_139);
lean::dec(x_133);
if (x_140 == 0)
{
uint8 x_143; 
x_143 = 0;
return x_143;
}
else
{
uint8 x_144; 
x_144 = l_lean_ir_is__bitshift__ty(x_1);
return x_144;
}
}
}
lbl_11:
{
obj* x_146; obj* x_147; uint8 x_148; 
lean::dec(x_10);
x_146 = l_lean_ir_type2id___main(x_1);
x_147 = l_lean_ir_type2id___main(x_2);
x_148 = lean::nat_dec_eq(x_146, x_147);
lean::dec(x_147);
if (x_148 == 0)
{
uint8 x_151; 
lean::dec(x_146);
x_151 = 0;
return x_151;
}
else
{
obj* x_152; uint8 x_153; 
x_152 = l_lean_ir_type2id___main(x_3);
x_153 = lean::nat_dec_eq(x_146, x_152);
lean::dec(x_152);
lean::dec(x_146);
if (x_153 == 0)
{
uint8 x_156; 
x_156 = 0;
return x_156;
}
else
{
uint8 x_157; 
x_157 = l_lean_ir_is__bitwise__ty(x_1);
return x_157;
}
}
}
lbl_13:
{
obj* x_159; obj* x_160; uint8 x_161; 
lean::dec(x_12);
x_159 = l_lean_ir_type2id___main(x_1);
x_160 = l_lean_ir_is__arith__ty___closed__1;
x_161 = lean::nat_dec_eq(x_159, x_160);
lean::dec(x_159);
if (x_161 == 0)
{
uint8 x_163; 
x_163 = 0;
return x_163;
}
else
{
obj* x_164; obj* x_165; uint8 x_166; 
x_164 = l_lean_ir_type2id___main(x_2);
x_165 = l_lean_ir_type2id___main(x_3);
x_166 = lean::nat_dec_eq(x_164, x_165);
lean::dec(x_165);
lean::dec(x_164);
if (x_166 == 0)
{
uint8 x_169; 
x_169 = 0;
return x_169;
}
else
{
uint8 x_170; 
x_170 = l_lean_ir_is__arith__ty(x_2);
return x_170;
}
}
}
lbl_15:
{
obj* x_172; obj* x_173; uint8 x_174; 
lean::dec(x_14);
x_172 = l_lean_ir_type2id___main(x_1);
x_173 = l_lean_ir_is__arith__ty___closed__1;
x_174 = lean::nat_dec_eq(x_172, x_173);
lean::dec(x_172);
if (x_174 == 0)
{
uint8 x_176; 
x_176 = 0;
return x_176;
}
else
{
obj* x_177; obj* x_178; uint8 x_179; 
x_177 = l_lean_ir_type2id___main(x_2);
x_178 = l_lean_ir_type2id___main(x_3);
x_179 = lean::nat_dec_eq(x_177, x_178);
lean::dec(x_178);
lean::dec(x_177);
if (x_179 == 0)
{
uint8 x_182; 
x_182 = 0;
return x_182;
}
else
{
uint8 x_183; 
x_183 = 1;
return x_183;
}
}
}
lbl_17:
{
obj* x_185; obj* x_186; uint8 x_187; 
lean::dec(x_16);
x_185 = l_lean_ir_type2id___main(x_1);
x_186 = l_lean_ir_is__arith__ty___closed__1;
x_187 = lean::nat_dec_eq(x_185, x_186);
lean::dec(x_185);
if (x_187 == 0)
{
uint8 x_189; 
x_189 = 0;
return x_189;
}
else
{
obj* x_190; obj* x_191; uint8 x_192; 
x_190 = l_lean_ir_type2id___main(x_2);
x_191 = l_lean_ir_type2id___main(x_3);
x_192 = lean::nat_dec_eq(x_190, x_191);
lean::dec(x_191);
if (x_192 == 0)
{
uint8 x_195; 
lean::dec(x_190);
x_195 = 0;
return x_195;
}
else
{
obj* x_196; uint8 x_197; 
x_196 = l_lean_ir_valid__assign__unop__types___closed__1;
x_197 = lean::nat_dec_eq(x_190, x_196);
lean::dec(x_190);
if (x_197 == 0)
{
uint8 x_199; 
x_199 = 0;
return x_199;
}
else
{
uint8 x_200; 
x_200 = 1;
return x_200;
}
}
}
}
}
}
obj* l_lean_ir_valid__assign__binop__types___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; uint8 x_5; uint8 x_6; uint8 x_7; uint8 x_8; obj* x_9; 
x_4 = lean::unbox(x_0);
x_5 = lean::unbox(x_1);
x_6 = lean::unbox(x_2);
x_7 = lean::unbox(x_3);
x_8 = l_lean_ir_valid__assign__binop__types(x_4, x_5, x_6, x_7);
x_9 = lean::box(x_8);
return x_9;
}
}
obj* _init_l_lean_ir_type__checker__m() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
lean::inc(x_0);
return x_0;
}
}
obj* l_lean_ir_type__checker__m_run___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
x_4 = l_lean_ir_mk__context;
lean::inc(x_4);
x_6 = lean::apply_2(x_0, x_3, x_4);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
lean::dec(x_6);
return x_7;
}
}
obj* l_lean_ir_type__checker__m_run(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_type__checker__m_run___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_ir_match__type(obj* x_0, uint8 x_1, uint8 x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; uint8 x_8; 
lean::dec(x_3);
x_6 = l_lean_ir_type2id___main(x_1);
x_7 = l_lean_ir_type2id___main(x_2);
x_8 = lean::nat_dec_eq(x_6, x_7);
lean::dec(x_7);
lean::dec(x_6);
if (x_8 == 0)
{
obj* x_11; uint8 x_12; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_26; obj* x_27; obj* x_28; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
x_11 = l_lean_to__fmt___at_lean_ir_instr_to__format___main___spec__1(x_0);
x_12 = 0;
x_13 = l_lean_ir_match__type___closed__1;
lean::inc(x_13);
x_15 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_11);
lean::cnstr_set_scalar(x_15, sizeof(void*)*2, x_12);
x_16 = x_15;
x_17 = l_lean_ir_match__type___closed__2;
lean::inc(x_17);
x_19 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_19, 0, x_16);
lean::cnstr_set(x_19, 1, x_17);
lean::cnstr_set_scalar(x_19, sizeof(void*)*2, x_12);
x_20 = x_19;
x_21 = l_lean_ir_type_to__format___main(x_1);
x_22 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_22, 0, x_20);
lean::cnstr_set(x_22, 1, x_21);
lean::cnstr_set_scalar(x_22, sizeof(void*)*2, x_12);
x_23 = x_22;
x_24 = l_lean_ir_match__type___closed__3;
lean::inc(x_24);
x_26 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_26, 0, x_23);
lean::cnstr_set(x_26, 1, x_24);
lean::cnstr_set_scalar(x_26, sizeof(void*)*2, x_12);
x_27 = x_26;
x_28 = l_lean_ir_match__type___closed__4;
lean::inc(x_28);
x_30 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_30, 0, x_27);
lean::cnstr_set(x_30, 1, x_28);
lean::cnstr_set_scalar(x_30, sizeof(void*)*2, x_12);
x_31 = x_30;
x_32 = l_lean_ir_type_to__format___main(x_2);
x_33 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_33, 0, x_31);
lean::cnstr_set(x_33, 1, x_32);
lean::cnstr_set_scalar(x_33, sizeof(void*)*2, x_12);
x_34 = x_33;
lean::inc(x_24);
x_36 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_36, 0, x_34);
lean::cnstr_set(x_36, 1, x_24);
lean::cnstr_set_scalar(x_36, sizeof(void*)*2, x_12);
x_37 = x_36;
x_38 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_38, 0, x_37);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_4);
return x_39;
}
else
{
obj* x_41; obj* x_43; 
lean::dec(x_0);
x_41 = l_lean_ir_match__type___closed__5;
lean::inc(x_41);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_41);
lean::cnstr_set(x_43, 1, x_4);
return x_43;
}
}
}
obj* _init_l_lean_ir_match__type___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("type mismatch, variable `");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_ir_match__type___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("` has type `");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_ir_match__type___closed__3() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("`");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_ir_match__type___closed__4() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string(", but is expected to have type `");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_ir_match__type___closed__5() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_ir_match__type___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; uint8 x_6; obj* x_7; 
x_5 = lean::unbox(x_1);
x_6 = lean::unbox(x_2);
x_7 = l_lean_ir_match__type(x_0, x_5, x_6, x_3, x_4);
return x_7;
}
}
obj* l_rbnode_find___main___at_lean_ir_get__type___spec__2___rarg(obj* x_0, obj* x_1) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::box(0);
return x_4;
}
case 1:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_16; uint8 x_17; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 3);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_7);
lean::inc(x_1);
x_16 = l_lean_name_quick__lt___main(x_1, x_7);
x_17 = lean::unbox(x_16);
lean::dec(x_16);
if (x_17 == 0)
{
obj* x_21; uint8 x_22; 
lean::dec(x_5);
lean::inc(x_1);
x_21 = l_lean_name_quick__lt___main(x_7, x_1);
x_22 = lean::unbox(x_21);
lean::dec(x_21);
if (x_22 == 0)
{
obj* x_26; 
lean::dec(x_1);
lean::dec(x_11);
x_26 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_26, 0, x_9);
return x_26;
}
else
{
lean::dec(x_9);
x_0 = x_11;
goto _start;
}
}
else
{
lean::dec(x_9);
lean::dec(x_7);
lean::dec(x_11);
x_0 = x_5;
goto _start;
}
}
default:
{
obj* x_33; obj* x_35; obj* x_37; obj* x_39; obj* x_44; uint8 x_45; 
x_33 = lean::cnstr_get(x_0, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_0, 1);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_0, 2);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_0, 3);
lean::inc(x_39);
lean::dec(x_0);
lean::inc(x_35);
lean::inc(x_1);
x_44 = l_lean_name_quick__lt___main(x_1, x_35);
x_45 = lean::unbox(x_44);
lean::dec(x_44);
if (x_45 == 0)
{
obj* x_49; uint8 x_50; 
lean::dec(x_33);
lean::inc(x_1);
x_49 = l_lean_name_quick__lt___main(x_35, x_1);
x_50 = lean::unbox(x_49);
lean::dec(x_49);
if (x_50 == 0)
{
obj* x_54; 
lean::dec(x_1);
lean::dec(x_39);
x_54 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_54, 0, x_37);
return x_54;
}
else
{
lean::dec(x_37);
x_0 = x_39;
goto _start;
}
}
else
{
lean::dec(x_35);
lean::dec(x_37);
lean::dec(x_39);
x_0 = x_33;
goto _start;
}
}
}
}
}
obj* l_rbnode_find___main___at_lean_ir_get__type___spec__2(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_find___main___at_lean_ir_get__type___spec__2___rarg), 2, 0);
return x_2;
}
}
obj* l_rbmap_find___main___at_lean_ir_get__type___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_ir_get__type___spec__2___rarg(x_0, x_1);
return x_2;
}
}
obj* l_lean_ir_get__type(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_1);
lean::inc(x_0);
lean::inc(x_2);
x_6 = l_rbnode_find___main___at_lean_ir_get__type___spec__2___rarg(x_2, x_0);
if (lean::obj_tag(x_6) == 0)
{
obj* x_8; uint8 x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
lean::dec(x_6);
x_8 = l_lean_to__fmt___at_lean_ir_instr_to__format___main___spec__1(x_0);
x_9 = 0;
x_10 = l_lean_ir_get__type___closed__1;
lean::inc(x_10);
x_12 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_8);
lean::cnstr_set_scalar(x_12, sizeof(void*)*2, x_9);
x_13 = x_12;
x_14 = l_lean_ir_match__type___closed__3;
lean::inc(x_14);
x_16 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_16, 0, x_13);
lean::cnstr_set(x_16, 1, x_14);
lean::cnstr_set_scalar(x_16, sizeof(void*)*2, x_9);
x_17 = x_16;
x_18 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_18, 0, x_17);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_2);
return x_19;
}
else
{
obj* x_21; obj* x_24; obj* x_25; 
lean::dec(x_0);
x_21 = lean::cnstr_get(x_6, 0);
lean::inc(x_21);
lean::dec(x_6);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_21);
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_2);
return x_25;
}
}
}
obj* _init_l_lean_ir_get__type___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("undefined variable `");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_rbnode_ins___main___at_lean_ir_set__type___spec__3(obj* x_0, obj* x_1, uint8 x_2) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_3; obj* x_5; 
x_3 = lean::box(x_2);
lean::inc(x_0);
x_5 = lean::alloc_cnstr(1, 4, 0);
lean::cnstr_set(x_5, 0, x_0);
lean::cnstr_set(x_5, 1, x_1);
lean::cnstr_set(x_5, 2, x_3);
lean::cnstr_set(x_5, 3, x_0);
return x_5;
}
case 1:
{
obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_17; uint8 x_18; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_0, 1);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 2);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_0, 3);
lean::inc(x_12);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_14 = x_0;
}
lean::inc(x_8);
lean::inc(x_1);
x_17 = l_lean_name_quick__lt___main(x_1, x_8);
x_18 = lean::unbox(x_17);
lean::dec(x_17);
if (x_18 == 0)
{
obj* x_22; uint8 x_23; 
lean::inc(x_1);
lean::inc(x_8);
x_22 = l_lean_name_quick__lt___main(x_8, x_1);
x_23 = lean::unbox(x_22);
lean::dec(x_22);
if (x_23 == 0)
{
obj* x_27; obj* x_28; 
lean::dec(x_10);
lean::dec(x_8);
x_27 = lean::box(x_2);
if (lean::is_scalar(x_14)) {
 x_28 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_28 = x_14;
}
lean::cnstr_set(x_28, 0, x_6);
lean::cnstr_set(x_28, 1, x_1);
lean::cnstr_set(x_28, 2, x_27);
lean::cnstr_set(x_28, 3, x_12);
return x_28;
}
else
{
obj* x_29; obj* x_30; 
x_29 = l_rbnode_ins___main___at_lean_ir_set__type___spec__3(x_12, x_1, x_2);
if (lean::is_scalar(x_14)) {
 x_30 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_30 = x_14;
}
lean::cnstr_set(x_30, 0, x_6);
lean::cnstr_set(x_30, 1, x_8);
lean::cnstr_set(x_30, 2, x_10);
lean::cnstr_set(x_30, 3, x_29);
return x_30;
}
}
else
{
obj* x_31; obj* x_32; 
x_31 = l_rbnode_ins___main___at_lean_ir_set__type___spec__3(x_6, x_1, x_2);
if (lean::is_scalar(x_14)) {
 x_32 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_32 = x_14;
}
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_8);
lean::cnstr_set(x_32, 2, x_10);
lean::cnstr_set(x_32, 3, x_12);
return x_32;
}
}
default:
{
obj* x_33; obj* x_35; obj* x_37; obj* x_39; obj* x_41; obj* x_44; uint8 x_45; 
x_33 = lean::cnstr_get(x_0, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_0, 1);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_0, 2);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_0, 3);
lean::inc(x_39);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_41 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_41 = x_0;
}
lean::inc(x_35);
lean::inc(x_1);
x_44 = l_lean_name_quick__lt___main(x_1, x_35);
x_45 = lean::unbox(x_44);
lean::dec(x_44);
if (x_45 == 0)
{
obj* x_49; uint8 x_50; 
lean::inc(x_1);
lean::inc(x_35);
x_49 = l_lean_name_quick__lt___main(x_35, x_1);
x_50 = lean::unbox(x_49);
lean::dec(x_49);
if (x_50 == 0)
{
obj* x_54; obj* x_55; 
lean::dec(x_35);
lean::dec(x_37);
x_54 = lean::box(x_2);
if (lean::is_scalar(x_41)) {
 x_55 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_55 = x_41;
}
lean::cnstr_set(x_55, 0, x_33);
lean::cnstr_set(x_55, 1, x_1);
lean::cnstr_set(x_55, 2, x_54);
lean::cnstr_set(x_55, 3, x_39);
return x_55;
}
else
{
uint8 x_57; 
lean::inc(x_39);
x_57 = l_rbnode_get__color___main___rarg(x_39);
if (x_57 == 0)
{
obj* x_59; obj* x_60; 
lean::dec(x_41);
x_59 = l_rbnode_ins___main___at_lean_ir_set__type___spec__3(x_39, x_1, x_2);
x_60 = l_rbnode_balance2__node___main___rarg(x_59, x_35, x_37, x_33);
return x_60;
}
else
{
obj* x_61; obj* x_62; 
x_61 = l_rbnode_ins___main___at_lean_ir_set__type___spec__3(x_39, x_1, x_2);
if (lean::is_scalar(x_41)) {
 x_62 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_62 = x_41;
}
lean::cnstr_set(x_62, 0, x_33);
lean::cnstr_set(x_62, 1, x_35);
lean::cnstr_set(x_62, 2, x_37);
lean::cnstr_set(x_62, 3, x_61);
return x_62;
}
}
}
else
{
uint8 x_64; 
lean::inc(x_33);
x_64 = l_rbnode_get__color___main___rarg(x_33);
if (x_64 == 0)
{
obj* x_66; obj* x_67; 
lean::dec(x_41);
x_66 = l_rbnode_ins___main___at_lean_ir_set__type___spec__3(x_33, x_1, x_2);
x_67 = l_rbnode_balance1__node___main___rarg(x_66, x_35, x_37, x_39);
return x_67;
}
else
{
obj* x_68; obj* x_69; 
x_68 = l_rbnode_ins___main___at_lean_ir_set__type___spec__3(x_33, x_1, x_2);
if (lean::is_scalar(x_41)) {
 x_69 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_69 = x_41;
}
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_35);
lean::cnstr_set(x_69, 2, x_37);
lean::cnstr_set(x_69, 3, x_39);
return x_69;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_ir_set__type___spec__2(obj* x_0, obj* x_1, uint8 x_2) {
_start:
{
uint8 x_4; obj* x_5; obj* x_6; 
lean::inc(x_0);
x_4 = l_rbnode_get__color___main___rarg(x_0);
x_5 = l_rbnode_ins___main___at_lean_ir_set__type___spec__3(x_0, x_1, x_2);
x_6 = l_rbnode_mk__insert__result___main___rarg(x_4, x_5);
return x_6;
}
}
obj* l_rbmap_insert___main___at_lean_ir_set__type___spec__1(obj* x_0, obj* x_1, uint8 x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_ir_set__type___spec__2(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_ir_set__type(obj* x_0, uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; 
lean::inc(x_0);
lean::inc(x_3);
x_6 = l_rbnode_find___main___at_lean_ir_get__type___spec__2___rarg(x_3, x_0);
if (lean::obj_tag(x_6) == 0)
{
obj* x_9; obj* x_10; obj* x_12; 
lean::dec(x_6);
lean::dec(x_2);
x_9 = l_rbnode_insert___at_lean_ir_set__type___spec__2(x_3, x_0, x_1);
x_10 = l_lean_ir_match__type___closed__5;
lean::inc(x_10);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_9);
return x_12;
}
else
{
obj* x_13; uint8 x_16; obj* x_18; 
x_13 = lean::cnstr_get(x_6, 0);
lean::inc(x_13);
lean::dec(x_6);
x_16 = lean::unbox(x_13);
lean::dec(x_13);
x_18 = l_lean_ir_match__type(x_0, x_16, x_1, x_2, x_3);
return x_18;
}
}
}
obj* l_rbnode_ins___main___at_lean_ir_set__type___spec__3___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = lean::unbox(x_2);
x_4 = l_rbnode_ins___main___at_lean_ir_set__type___spec__3(x_0, x_1, x_3);
return x_4;
}
}
obj* l_rbnode_insert___at_lean_ir_set__type___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = lean::unbox(x_2);
x_4 = l_rbnode_insert___at_lean_ir_set__type___spec__2(x_0, x_1, x_3);
return x_4;
}
}
obj* l_rbmap_insert___main___at_lean_ir_set__type___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = lean::unbox(x_2);
x_4 = l_rbmap_insert___main___at_lean_ir_set__type___spec__1(x_0, x_1, x_3);
return x_4;
}
}
obj* l_lean_ir_set__type___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
x_5 = l_lean_ir_set__type(x_0, x_4, x_2, x_3);
return x_5;
}
}
obj* l_lean_ir_check__type(obj* x_0, uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; 
lean::inc(x_0);
lean::inc(x_3);
x_6 = l_rbnode_find___main___at_lean_ir_get__type___spec__2___rarg(x_3, x_0);
if (lean::obj_tag(x_6) == 0)
{
obj* x_9; uint8 x_10; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
lean::dec(x_6);
lean::dec(x_2);
x_9 = l_lean_to__fmt___at_lean_ir_instr_to__format___main___spec__1(x_0);
x_10 = 0;
x_11 = l_lean_ir_check__type___closed__1;
lean::inc(x_11);
x_13 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_9);
lean::cnstr_set_scalar(x_13, sizeof(void*)*2, x_10);
x_14 = x_13;
x_15 = l_lean_ir_check__type___closed__2;
lean::inc(x_15);
x_17 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_17, 0, x_14);
lean::cnstr_set(x_17, 1, x_15);
lean::cnstr_set_scalar(x_17, sizeof(void*)*2, x_10);
x_18 = x_17;
x_19 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_19, 0, x_18);
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_3);
return x_20;
}
else
{
obj* x_21; uint8 x_24; obj* x_26; 
x_21 = lean::cnstr_get(x_6, 0);
lean::inc(x_21);
lean::dec(x_6);
x_24 = lean::unbox(x_21);
lean::dec(x_21);
x_26 = l_lean_ir_match__type(x_0, x_24, x_1, x_2, x_3);
return x_26;
}
}
}
obj* _init_l_lean_ir_check__type___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("type for variable `");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_ir_check__type___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("` is not available");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_ir_check__type___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
x_5 = l_lean_ir_check__type(x_0, x_4, x_2, x_3);
return x_5;
}
}
obj* l_lean_ir_check__ne__type(obj* x_0, uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_7; 
lean::dec(x_2);
lean::inc(x_0);
lean::inc(x_3);
x_7 = l_rbnode_find___main___at_lean_ir_get__type___spec__2___rarg(x_3, x_0);
if (lean::obj_tag(x_7) == 0)
{
obj* x_9; uint8 x_10; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
lean::dec(x_7);
x_9 = l_lean_to__fmt___at_lean_ir_instr_to__format___main___spec__1(x_0);
x_10 = 0;
x_11 = l_lean_ir_check__type___closed__1;
lean::inc(x_11);
x_13 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_9);
lean::cnstr_set_scalar(x_13, sizeof(void*)*2, x_10);
x_14 = x_13;
x_15 = l_lean_ir_check__type___closed__2;
lean::inc(x_15);
x_17 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_17, 0, x_14);
lean::cnstr_set(x_17, 1, x_15);
lean::cnstr_set_scalar(x_17, sizeof(void*)*2, x_10);
x_18 = x_17;
x_19 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_19, 0, x_18);
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_3);
return x_20;
}
else
{
obj* x_21; uint8 x_24; obj* x_26; obj* x_27; uint8 x_28; 
x_21 = lean::cnstr_get(x_7, 0);
lean::inc(x_21);
lean::dec(x_7);
x_24 = lean::unbox(x_21);
lean::dec(x_21);
x_26 = l_lean_ir_type2id___main(x_24);
x_27 = l_lean_ir_type2id___main(x_1);
x_28 = lean::nat_dec_eq(x_26, x_27);
lean::dec(x_27);
lean::dec(x_26);
if (x_28 == 0)
{
obj* x_32; obj* x_34; 
lean::dec(x_0);
x_32 = l_lean_ir_match__type___closed__5;
lean::inc(x_32);
x_34 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_34, 0, x_32);
lean::cnstr_set(x_34, 1, x_3);
return x_34;
}
else
{
obj* x_35; uint8 x_36; obj* x_37; obj* x_39; obj* x_40; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_35 = l_lean_to__fmt___at_lean_ir_instr_to__format___main___spec__1(x_0);
x_36 = 0;
x_37 = l_lean_ir_check__ne__type___closed__1;
lean::inc(x_37);
x_39 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_39, 0, x_37);
lean::cnstr_set(x_39, 1, x_35);
lean::cnstr_set_scalar(x_39, sizeof(void*)*2, x_36);
x_40 = x_39;
x_41 = l_lean_ir_check__ne__type___closed__2;
lean::inc(x_41);
x_43 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_43, 0, x_40);
lean::cnstr_set(x_43, 1, x_41);
lean::cnstr_set_scalar(x_43, sizeof(void*)*2, x_36);
x_44 = x_43;
x_45 = l_lean_ir_type_to__format___main(x_1);
x_46 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_46, 0, x_44);
lean::cnstr_set(x_46, 1, x_45);
lean::cnstr_set_scalar(x_46, sizeof(void*)*2, x_36);
x_47 = x_46;
x_48 = l_lean_ir_match__type___closed__3;
lean::inc(x_48);
x_50 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_50, 0, x_47);
lean::cnstr_set(x_50, 1, x_48);
lean::cnstr_set_scalar(x_50, sizeof(void*)*2, x_36);
x_51 = x_50;
x_52 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_52, 0, x_51);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_3);
return x_53;
}
}
}
}
obj* _init_l_lean_ir_check__ne__type___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("variable `");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_ir_check__ne__type___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("` must not have type `");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_ir_check__ne__type___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
x_5 = l_lean_ir_check__ne__type(x_0, x_4, x_2, x_3);
return x_5;
}
}
obj* l_lean_ir_invalid__literal___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = l_lean_ir_invalid__literal___rarg___closed__1;
lean::inc(x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_0);
return x_3;
}
}
obj* _init_l_lean_ir_invalid__literal___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("invalid literal");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_lean_ir_invalid__literal(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_invalid__literal___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_ir_literal_check(obj* x_0, uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
lean::dec(x_2);
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_6; obj* x_7; uint8 x_8; 
lean::dec(x_0);
x_6 = l_lean_ir_type2id___main(x_1);
x_7 = l_lean_ir_is__arith__ty___closed__1;
x_8 = lean::nat_dec_eq(x_6, x_7);
lean::dec(x_6);
if (x_8 == 0)
{
obj* x_10; obj* x_12; 
x_10 = l_lean_ir_invalid__literal___rarg___closed__1;
lean::inc(x_10);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_3);
return x_12;
}
else
{
obj* x_13; obj* x_15; 
x_13 = l_lean_ir_match__type___closed__5;
lean::inc(x_13);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_3);
return x_15;
}
}
case 1:
{
obj* x_17; obj* x_18; uint8 x_19; 
lean::dec(x_0);
x_17 = l_lean_ir_type2id___main(x_1);
x_18 = l_lean_ir_valid__assign__unop__types___closed__1;
x_19 = lean::nat_dec_eq(x_17, x_18);
lean::dec(x_17);
if (x_19 == 0)
{
obj* x_21; obj* x_23; 
x_21 = l_lean_ir_invalid__literal___rarg___closed__1;
lean::inc(x_21);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_3);
return x_23;
}
else
{
obj* x_24; obj* x_26; 
x_24 = l_lean_ir_match__type___closed__5;
lean::inc(x_24);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_24);
lean::cnstr_set(x_26, 1, x_3);
return x_26;
}
}
case 2:
{
obj* x_27; uint8 x_30; obj* x_31; uint8 x_32; 
x_27 = lean::cnstr_get(x_0, 0);
lean::inc(x_27);
lean::dec(x_0);
x_30 = l_lean_ir_is__nonfloat__arith__ty(x_1);
x_31 = l_int_zero;
x_32 = lean::int_dec_lt(x_27, x_31);
lean::dec(x_27);
if (x_30 == 0)
{
obj* x_34; 
x_34 = l_lean_ir_invalid__literal___rarg___closed__1;
if (lean::obj_tag(x_34) == 0)
{
obj* x_35; obj* x_38; obj* x_39; obj* x_40; 
x_35 = lean::cnstr_get(x_34, 0);
lean::inc(x_35);
lean::inc(x_34);
if (lean::is_shared(x_34)) {
 lean::dec(x_34);
 x_38 = lean::box(0);
} else {
 lean::cnstr_release(x_34, 0);
 x_38 = x_34;
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_35);
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_3);
return x_40;
}
else
{
if (x_32 == 0)
{
obj* x_41; obj* x_43; 
x_41 = l_lean_ir_match__type___closed__5;
lean::inc(x_41);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_41);
lean::cnstr_set(x_43, 1, x_3);
return x_43;
}
else
{
uint8 x_44; 
x_44 = l_lean_ir_is__signed__arith__ty(x_1);
if (x_44 == 0)
{
obj* x_46; 
lean::inc(x_34);
x_46 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_46, 0, x_34);
lean::cnstr_set(x_46, 1, x_3);
return x_46;
}
else
{
obj* x_47; obj* x_49; 
x_47 = l_lean_ir_match__type___closed__5;
lean::inc(x_47);
x_49 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_49, 0, x_47);
lean::cnstr_set(x_49, 1, x_3);
return x_49;
}
}
}
}
else
{
if (x_32 == 0)
{
obj* x_50; obj* x_52; 
x_50 = l_lean_ir_match__type___closed__5;
lean::inc(x_50);
x_52 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_52, 0, x_50);
lean::cnstr_set(x_52, 1, x_3);
return x_52;
}
else
{
uint8 x_53; 
x_53 = l_lean_ir_is__signed__arith__ty(x_1);
if (x_53 == 0)
{
obj* x_54; obj* x_56; 
x_54 = l_lean_ir_invalid__literal___rarg___closed__1;
lean::inc(x_54);
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_54);
lean::cnstr_set(x_56, 1, x_3);
return x_56;
}
else
{
obj* x_57; obj* x_59; 
x_57 = l_lean_ir_match__type___closed__5;
lean::inc(x_57);
x_59 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_59, 0, x_57);
lean::cnstr_set(x_59, 1, x_3);
return x_59;
}
}
}
}
default:
{
obj* x_61; obj* x_62; uint8 x_63; 
lean::dec(x_0);
x_61 = l_lean_ir_type2id___main(x_1);
x_62 = l_lean_ir_is__nonfloat__arith__ty___closed__2;
x_63 = lean::nat_dec_eq(x_61, x_62);
if (x_63 == 0)
{
obj* x_64; uint8 x_65; 
x_64 = l_lean_ir_is__nonfloat__arith__ty___closed__1;
x_65 = lean::nat_dec_eq(x_61, x_64);
lean::dec(x_61);
if (x_65 == 0)
{
obj* x_67; obj* x_69; 
x_67 = l_lean_ir_invalid__literal___rarg___closed__1;
lean::inc(x_67);
x_69 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_69, 0, x_67);
lean::cnstr_set(x_69, 1, x_3);
return x_69;
}
else
{
obj* x_70; obj* x_72; 
x_70 = l_lean_ir_match__type___closed__5;
lean::inc(x_70);
x_72 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_72, 0, x_70);
lean::cnstr_set(x_72, 1, x_3);
return x_72;
}
}
else
{
obj* x_74; obj* x_76; 
lean::dec(x_61);
x_74 = l_lean_ir_match__type___closed__5;
lean::inc(x_74);
x_76 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_76, 0, x_74);
lean::cnstr_set(x_76, 1, x_3);
return x_76;
}
}
}
}
}
obj* l_lean_ir_literal_check___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
x_5 = l_lean_ir_literal_check(x_0, x_4, x_2, x_3);
return x_5;
}
}
obj* l_lean_ir_get__decl(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_5 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_5 = x_1;
}
lean::inc(x_0);
x_7 = lean::apply_1(x_3, x_0);
if (lean::obj_tag(x_7) == 0)
{
obj* x_9; uint8 x_10; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
lean::dec(x_7);
x_9 = l_lean_to__fmt___at_lean_ir_instr_to__format___main___spec__2(x_0);
x_10 = 0;
x_11 = l_lean_ir_get__decl___closed__1;
lean::inc(x_11);
x_13 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_9);
lean::cnstr_set_scalar(x_13, sizeof(void*)*2, x_10);
x_14 = x_13;
x_15 = l_lean_ir_match__type___closed__3;
lean::inc(x_15);
x_17 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_17, 0, x_14);
lean::cnstr_set(x_17, 1, x_15);
lean::cnstr_set_scalar(x_17, sizeof(void*)*2, x_10);
x_18 = x_17;
x_19 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_19, 0, x_18);
if (lean::is_scalar(x_5)) {
 x_20 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_20 = x_5;
}
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_2);
return x_20;
}
else
{
obj* x_22; obj* x_25; obj* x_26; 
lean::dec(x_0);
x_22 = lean::cnstr_get(x_7, 0);
lean::inc(x_22);
lean::dec(x_7);
x_25 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_25, 0, x_22);
if (lean::is_scalar(x_5)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_5;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_2);
return x_26;
}
}
}
obj* _init_l_lean_ir_get__decl___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("unknown function `");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_ir_set__result__types___main(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_6; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_6 = l_lean_ir_set__type(x_0, x_4, x_2, x_3);
return x_6;
}
}
obj* l_lean_ir_set__result__types(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_6; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_6 = l_lean_ir_set__type(x_0, x_4, x_2, x_3);
return x_6;
}
}
obj* l_lean_ir_instr_infer__types(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_5; uint8 x_7; obj* x_8; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*2);
x_8 = l_lean_ir_set__type(x_5, x_7, x_1, x_2);
x_3 = x_8;
goto lbl_4;
}
case 1:
{
obj* x_9; uint8 x_11; obj* x_12; 
x_9 = lean::cnstr_get(x_0, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*2);
x_12 = l_lean_ir_set__type(x_9, x_11, x_1, x_2);
x_3 = x_12;
goto lbl_4;
}
case 2:
{
obj* x_13; uint8 x_15; obj* x_16; 
x_13 = lean::cnstr_get(x_0, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*2);
x_16 = l_lean_ir_set__type(x_13, x_15, x_1, x_2);
x_3 = x_16;
goto lbl_4;
}
case 3:
{
obj* x_17; uint8 x_19; obj* x_20; 
x_17 = lean::cnstr_get(x_0, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*3);
x_20 = l_lean_ir_set__type(x_17, x_19, x_1, x_2);
x_3 = x_20;
goto lbl_4;
}
case 4:
{
obj* x_22; obj* x_24; 
lean::dec(x_1);
x_22 = l_lean_ir_match__type___closed__5;
lean::inc(x_22);
x_24 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_24, 0, x_22);
lean::cnstr_set(x_24, 1, x_2);
x_3 = x_24;
goto lbl_4;
}
case 5:
{
obj* x_25; obj* x_27; obj* x_30; obj* x_31; obj* x_33; obj* x_35; 
x_25 = lean::cnstr_get(x_0, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_0, 1);
lean::inc(x_27);
lean::inc(x_1);
x_30 = l_lean_ir_get__decl(x_27, x_1, x_2);
x_31 = lean::cnstr_get(x_30, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_30, 1);
lean::inc(x_33);
if (lean::is_shared(x_30)) {
 lean::dec(x_30);
 x_35 = lean::box(0);
} else {
 lean::cnstr_release(x_30, 0);
 lean::cnstr_release(x_30, 1);
 x_35 = x_30;
}
if (lean::obj_tag(x_31) == 0)
{
obj* x_38; obj* x_40; obj* x_41; obj* x_42; 
lean::dec(x_1);
lean::dec(x_25);
x_38 = lean::cnstr_get(x_31, 0);
lean::inc(x_38);
if (lean::is_shared(x_31)) {
 lean::dec(x_31);
 x_40 = lean::box(0);
} else {
 lean::cnstr_release(x_31, 0);
 x_40 = x_31;
}
if (lean::is_scalar(x_40)) {
 x_41 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_41 = x_40;
}
lean::cnstr_set(x_41, 0, x_38);
if (lean::is_scalar(x_35)) {
 x_42 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_42 = x_35;
}
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set(x_42, 1, x_33);
x_3 = x_42;
goto lbl_4;
}
else
{
obj* x_44; obj* x_47; obj* x_48; uint8 x_51; obj* x_53; 
lean::dec(x_35);
x_44 = lean::cnstr_get(x_31, 0);
lean::inc(x_44);
lean::dec(x_31);
x_47 = l_lean_ir_decl_header___main(x_44);
x_48 = lean::cnstr_get(x_47, 2);
lean::inc(x_48);
lean::dec(x_47);
x_51 = lean::unbox(x_48);
lean::dec(x_48);
x_53 = l_lean_ir_set__type(x_25, x_51, x_1, x_33);
x_3 = x_53;
goto lbl_4;
}
}
case 6:
{
obj* x_54; uint8 x_56; obj* x_57; 
x_54 = lean::cnstr_get(x_0, 0);
lean::inc(x_54);
x_56 = 11;
x_57 = l_lean_ir_set__type(x_54, x_56, x_1, x_2);
x_3 = x_57;
goto lbl_4;
}
case 7:
{
obj* x_59; obj* x_61; 
lean::dec(x_1);
x_59 = l_lean_ir_match__type___closed__5;
lean::inc(x_59);
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_59);
lean::cnstr_set(x_61, 1, x_2);
x_3 = x_61;
goto lbl_4;
}
case 8:
{
obj* x_62; uint8 x_64; obj* x_65; 
x_62 = lean::cnstr_get(x_0, 0);
lean::inc(x_62);
x_64 = 11;
x_65 = l_lean_ir_set__type(x_62, x_64, x_1, x_2);
x_3 = x_65;
goto lbl_4;
}
case 9:
{
obj* x_67; obj* x_69; 
lean::dec(x_1);
x_67 = l_lean_ir_match__type___closed__5;
lean::inc(x_67);
x_69 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_69, 0, x_67);
lean::cnstr_set(x_69, 1, x_2);
x_3 = x_69;
goto lbl_4;
}
case 10:
{
obj* x_70; uint8 x_72; obj* x_73; 
x_70 = lean::cnstr_get(x_0, 0);
lean::inc(x_70);
x_72 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*3);
x_73 = l_lean_ir_set__type(x_70, x_72, x_1, x_2);
x_3 = x_73;
goto lbl_4;
}
case 11:
{
obj* x_74; uint8 x_76; obj* x_77; 
x_74 = lean::cnstr_get(x_0, 0);
lean::inc(x_74);
x_76 = 11;
x_77 = l_lean_ir_set__type(x_74, x_76, x_1, x_2);
x_3 = x_77;
goto lbl_4;
}
case 12:
{
obj* x_78; uint8 x_80; obj* x_81; 
x_78 = lean::cnstr_get(x_0, 0);
lean::inc(x_78);
x_80 = 11;
x_81 = l_lean_ir_set__type(x_78, x_80, x_1, x_2);
x_3 = x_81;
goto lbl_4;
}
case 13:
{
obj* x_82; uint8 x_84; obj* x_85; 
x_82 = lean::cnstr_get(x_0, 0);
lean::inc(x_82);
x_84 = 11;
x_85 = l_lean_ir_set__type(x_82, x_84, x_1, x_2);
x_3 = x_85;
goto lbl_4;
}
case 14:
{
obj* x_86; uint8 x_88; obj* x_89; 
x_86 = lean::cnstr_get(x_0, 0);
lean::inc(x_86);
x_88 = 11;
x_89 = l_lean_ir_set__type(x_86, x_88, x_1, x_2);
x_3 = x_89;
goto lbl_4;
}
default:
{
obj* x_91; obj* x_93; 
lean::dec(x_1);
x_91 = l_lean_ir_match__type___closed__5;
lean::inc(x_91);
x_93 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_93, 0, x_91);
lean::cnstr_set(x_93, 1, x_2);
x_3 = x_93;
goto lbl_4;
}
}
lbl_4:
{
obj* x_94; obj* x_96; obj* x_98; 
x_94 = lean::cnstr_get(x_3, 0);
lean::inc(x_94);
x_96 = lean::cnstr_get(x_3, 1);
lean::inc(x_96);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_98 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_release(x_3, 1);
 x_98 = x_3;
}
if (lean::obj_tag(x_94) == 0)
{
obj* x_99; obj* x_101; obj* x_102; uint8 x_103; obj* x_104; obj* x_106; obj* x_107; obj* x_108; obj* x_110; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; 
x_99 = lean::cnstr_get(x_94, 0);
lean::inc(x_99);
if (lean::is_shared(x_94)) {
 lean::dec(x_94);
 x_101 = lean::box(0);
} else {
 lean::cnstr_release(x_94, 0);
 x_101 = x_94;
}
x_102 = l_lean_ir_instr_to__format___main(x_0);
x_103 = 0;
x_104 = l_lean_ir_instr_decorate__error___rarg___lambda__1___closed__1;
lean::inc(x_104);
x_106 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_106, 0, x_104);
lean::cnstr_set(x_106, 1, x_102);
lean::cnstr_set_scalar(x_106, sizeof(void*)*2, x_103);
x_107 = x_106;
x_108 = l_lean_ir_phi_decorate__error___rarg___lambda__1___closed__2;
lean::inc(x_108);
x_110 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_110, 0, x_107);
lean::cnstr_set(x_110, 1, x_108);
lean::cnstr_set_scalar(x_110, sizeof(void*)*2, x_103);
x_111 = x_110;
x_112 = lean::box(1);
x_113 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_113, 0, x_111);
lean::cnstr_set(x_113, 1, x_112);
lean::cnstr_set_scalar(x_113, sizeof(void*)*2, x_103);
x_114 = x_113;
x_115 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_115, 0, x_114);
lean::cnstr_set(x_115, 1, x_99);
lean::cnstr_set_scalar(x_115, sizeof(void*)*2, x_103);
x_116 = x_115;
if (lean::is_scalar(x_101)) {
 x_117 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_117 = x_101;
}
lean::cnstr_set(x_117, 0, x_116);
if (lean::is_scalar(x_98)) {
 x_118 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_118 = x_98;
}
lean::cnstr_set(x_118, 0, x_117);
lean::cnstr_set(x_118, 1, x_96);
return x_118;
}
else
{
obj* x_120; 
lean::dec(x_0);
if (lean::is_scalar(x_98)) {
 x_120 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_120 = x_98;
}
lean::cnstr_set(x_120, 0, x_94);
lean::cnstr_set(x_120, 1, x_96);
return x_120;
}
}
}
}
obj* l_lean_ir_phi_infer__types(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_11; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*2);
x_6 = l_lean_ir_set__type(x_3, x_5, x_1, x_2);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_11 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 x_11 = x_6;
}
if (lean::obj_tag(x_7) == 0)
{
obj* x_12; obj* x_14; obj* x_15; uint8 x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
if (lean::is_shared(x_7)) {
 lean::dec(x_7);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_7, 0);
 x_14 = x_7;
}
x_15 = l_lean_ir_phi_to__format___main(x_0);
x_16 = 0;
x_17 = l_lean_ir_phi_decorate__error___rarg___lambda__1___closed__1;
lean::inc(x_17);
x_19 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_19, 0, x_17);
lean::cnstr_set(x_19, 1, x_15);
lean::cnstr_set_scalar(x_19, sizeof(void*)*2, x_16);
x_20 = x_19;
x_21 = l_lean_ir_phi_decorate__error___rarg___lambda__1___closed__2;
lean::inc(x_21);
x_23 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_23, 0, x_20);
lean::cnstr_set(x_23, 1, x_21);
lean::cnstr_set_scalar(x_23, sizeof(void*)*2, x_16);
x_24 = x_23;
x_25 = lean::box(1);
x_26 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_26, 0, x_24);
lean::cnstr_set(x_26, 1, x_25);
lean::cnstr_set_scalar(x_26, sizeof(void*)*2, x_16);
x_27 = x_26;
x_28 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_12);
lean::cnstr_set_scalar(x_28, sizeof(void*)*2, x_16);
x_29 = x_28;
if (lean::is_scalar(x_14)) {
 x_30 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_30 = x_14;
}
lean::cnstr_set(x_30, 0, x_29);
if (lean::is_scalar(x_11)) {
 x_31 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_31 = x_11;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_9);
return x_31;
}
else
{
obj* x_33; 
lean::dec(x_0);
if (lean::is_scalar(x_11)) {
 x_33 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_33 = x_11;
}
lean::cnstr_set(x_33, 0, x_7);
lean::cnstr_set(x_33, 1, x_9);
return x_33;
}
}
}
obj* l_lean_ir_arg_infer__types(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_5; obj* x_7; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*1);
lean::dec(x_0);
x_7 = l_lean_ir_set__type(x_3, x_5, x_1, x_2);
return x_7;
}
}
obj* l_list_mmap_x_27___main___at_lean_ir_block_infer__types___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = l_lean_ir_match__type___closed__5;
lean::inc(x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_2);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_14; obj* x_15; obj* x_17; obj* x_19; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
lean::dec(x_0);
lean::inc(x_1);
x_14 = l_lean_ir_phi_infer__types(x_8, x_1, x_2);
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_19 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 lean::cnstr_release(x_14, 1);
 x_19 = x_14;
}
if (lean::obj_tag(x_15) == 0)
{
obj* x_22; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_10);
lean::dec(x_1);
x_22 = lean::cnstr_get(x_15, 0);
lean::inc(x_22);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 x_24 = x_15;
}
if (lean::is_scalar(x_24)) {
 x_25 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_25 = x_24;
}
lean::cnstr_set(x_25, 0, x_22);
if (lean::is_scalar(x_19)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_19;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_17);
return x_26;
}
else
{
lean::dec(x_15);
lean::dec(x_19);
x_0 = x_10;
x_2 = x_17;
goto _start;
}
}
}
}
obj* l_list_mmap_x_27___main___at_lean_ir_block_infer__types___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = l_lean_ir_match__type___closed__5;
lean::inc(x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_2);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_14; obj* x_15; obj* x_17; obj* x_19; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
lean::dec(x_0);
lean::inc(x_1);
x_14 = l_lean_ir_instr_infer__types(x_8, x_1, x_2);
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_19 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 lean::cnstr_release(x_14, 1);
 x_19 = x_14;
}
if (lean::obj_tag(x_15) == 0)
{
obj* x_22; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_10);
lean::dec(x_1);
x_22 = lean::cnstr_get(x_15, 0);
lean::inc(x_22);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 x_24 = x_15;
}
if (lean::is_scalar(x_24)) {
 x_25 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_25 = x_24;
}
lean::cnstr_set(x_25, 0, x_22);
if (lean::is_scalar(x_19)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_19;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_17);
return x_26;
}
else
{
lean::dec(x_15);
lean::dec(x_19);
x_0 = x_10;
x_2 = x_17;
goto _start;
}
}
}
}
obj* l_lean_ir_block_infer__types(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_7; obj* x_9; obj* x_11; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::inc(x_1);
x_6 = l_list_mmap_x_27___main___at_lean_ir_block_infer__types___spec__1(x_3, x_1, x_2);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_11 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 x_11 = x_6;
}
if (lean::obj_tag(x_7) == 0)
{
obj* x_13; obj* x_15; obj* x_16; obj* x_19; uint8 x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
lean::dec(x_1);
x_13 = lean::cnstr_get(x_7, 0);
lean::inc(x_13);
if (lean::is_shared(x_7)) {
 lean::dec(x_7);
 x_15 = lean::box(0);
} else {
 lean::cnstr_release(x_7, 0);
 x_15 = x_7;
}
x_16 = lean::cnstr_get(x_0, 0);
lean::inc(x_16);
lean::dec(x_0);
x_19 = l_lean_to__fmt___at_lean_ir_terminator_to__format___main___spec__4(x_16);
x_20 = 0;
x_21 = l_lean_ir_block_decorate__error___rarg___lambda__1___closed__1;
lean::inc(x_21);
x_23 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_19);
lean::cnstr_set_scalar(x_23, sizeof(void*)*2, x_20);
x_24 = x_23;
x_25 = l_lean_ir_phi_decorate__error___rarg___lambda__1___closed__2;
lean::inc(x_25);
x_27 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_27, 0, x_24);
lean::cnstr_set(x_27, 1, x_25);
lean::cnstr_set_scalar(x_27, sizeof(void*)*2, x_20);
x_28 = x_27;
x_29 = lean::box(1);
x_30 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_30, 0, x_28);
lean::cnstr_set(x_30, 1, x_29);
lean::cnstr_set_scalar(x_30, sizeof(void*)*2, x_20);
x_31 = x_30;
x_32 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_13);
lean::cnstr_set_scalar(x_32, sizeof(void*)*2, x_20);
x_33 = x_32;
if (lean::is_scalar(x_15)) {
 x_34 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_34 = x_15;
}
lean::cnstr_set(x_34, 0, x_33);
if (lean::is_scalar(x_11)) {
 x_35 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_35 = x_11;
}
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_9);
return x_35;
}
else
{
obj* x_36; obj* x_37; obj* x_39; obj* x_40; obj* x_42; 
if (lean::is_shared(x_7)) {
 lean::dec(x_7);
 x_36 = lean::box(0);
} else {
 lean::cnstr_release(x_7, 0);
 x_36 = x_7;
}
x_37 = lean::cnstr_get(x_0, 2);
lean::inc(x_37);
x_39 = l_list_mmap_x_27___main___at_lean_ir_block_infer__types___spec__2(x_37, x_1, x_9);
x_40 = lean::cnstr_get(x_39, 0);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_39, 1);
lean::inc(x_42);
lean::dec(x_39);
if (lean::obj_tag(x_40) == 0)
{
obj* x_45; obj* x_48; obj* x_51; uint8 x_52; obj* x_53; obj* x_55; obj* x_56; obj* x_57; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
x_45 = lean::cnstr_get(x_40, 0);
lean::inc(x_45);
lean::dec(x_40);
x_48 = lean::cnstr_get(x_0, 0);
lean::inc(x_48);
lean::dec(x_0);
x_51 = l_lean_to__fmt___at_lean_ir_terminator_to__format___main___spec__4(x_48);
x_52 = 0;
x_53 = l_lean_ir_block_decorate__error___rarg___lambda__1___closed__1;
lean::inc(x_53);
x_55 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_55, 0, x_53);
lean::cnstr_set(x_55, 1, x_51);
lean::cnstr_set_scalar(x_55, sizeof(void*)*2, x_52);
x_56 = x_55;
x_57 = l_lean_ir_phi_decorate__error___rarg___lambda__1___closed__2;
lean::inc(x_57);
x_59 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_59, 0, x_56);
lean::cnstr_set(x_59, 1, x_57);
lean::cnstr_set_scalar(x_59, sizeof(void*)*2, x_52);
x_60 = x_59;
x_61 = lean::box(1);
x_62 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_62, 0, x_60);
lean::cnstr_set(x_62, 1, x_61);
lean::cnstr_set_scalar(x_62, sizeof(void*)*2, x_52);
x_63 = x_62;
x_64 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_45);
lean::cnstr_set_scalar(x_64, sizeof(void*)*2, x_52);
x_65 = x_64;
if (lean::is_scalar(x_36)) {
 x_66 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_66 = x_36;
 lean::cnstr_set_tag(x_36, 0);
}
lean::cnstr_set(x_66, 0, x_65);
if (lean::is_scalar(x_11)) {
 x_67 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_67 = x_11;
}
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_42);
return x_67;
}
else
{
obj* x_70; 
lean::dec(x_0);
lean::dec(x_36);
if (lean::is_scalar(x_11)) {
 x_70 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_70 = x_11;
}
lean::cnstr_set(x_70, 0, x_40);
lean::cnstr_set(x_70, 1, x_42);
return x_70;
}
}
}
}
obj* l_list_mmap_x_27___main___at_lean_ir_decl_infer__types___main___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = l_lean_ir_match__type___closed__5;
lean::inc(x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_2);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_14; obj* x_15; obj* x_17; obj* x_19; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
lean::dec(x_0);
lean::inc(x_1);
x_14 = l_lean_ir_arg_infer__types(x_8, x_1, x_2);
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_19 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 lean::cnstr_release(x_14, 1);
 x_19 = x_14;
}
if (lean::obj_tag(x_15) == 0)
{
obj* x_22; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_10);
lean::dec(x_1);
x_22 = lean::cnstr_get(x_15, 0);
lean::inc(x_22);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 x_24 = x_15;
}
if (lean::is_scalar(x_24)) {
 x_25 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_25 = x_24;
}
lean::cnstr_set(x_25, 0, x_22);
if (lean::is_scalar(x_19)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_19;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_17);
return x_26;
}
else
{
lean::dec(x_15);
lean::dec(x_19);
x_0 = x_10;
x_2 = x_17;
goto _start;
}
}
}
}
obj* l_list_mmap_x_27___main___at_lean_ir_decl_infer__types___main___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = l_lean_ir_match__type___closed__5;
lean::inc(x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_2);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_14; obj* x_15; obj* x_17; obj* x_19; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
lean::dec(x_0);
lean::inc(x_1);
x_14 = l_lean_ir_block_infer__types(x_8, x_1, x_2);
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_19 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 lean::cnstr_release(x_14, 1);
 x_19 = x_14;
}
if (lean::obj_tag(x_15) == 0)
{
obj* x_22; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_10);
lean::dec(x_1);
x_22 = lean::cnstr_get(x_15, 0);
lean::inc(x_22);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 x_24 = x_15;
}
if (lean::is_scalar(x_24)) {
 x_25 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_25 = x_24;
}
lean::cnstr_set(x_25, 0, x_22);
if (lean::is_scalar(x_19)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_19;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_17);
return x_26;
}
else
{
lean::dec(x_15);
lean::dec(x_19);
x_0 = x_10;
x_2 = x_17;
goto _start;
}
}
}
}
obj* l_lean_ir_decl_infer__types___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
lean::inc(x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_2);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_2);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_13; obj* x_16; obj* x_17; obj* x_19; obj* x_21; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
lean::dec(x_0);
x_13 = lean::cnstr_get(x_8, 1);
lean::inc(x_13);
lean::inc(x_1);
x_16 = l_list_mmap_x_27___main___at_lean_ir_decl_infer__types___main___spec__1(x_13, x_1, x_2);
x_17 = lean::cnstr_get(x_16, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_16, 1);
lean::inc(x_19);
if (lean::is_shared(x_16)) {
 lean::dec(x_16);
 x_21 = lean::box(0);
} else {
 lean::cnstr_release(x_16, 0);
 lean::cnstr_release(x_16, 1);
 x_21 = x_16;
}
if (lean::obj_tag(x_17) == 0)
{
obj* x_24; obj* x_26; obj* x_27; obj* x_30; uint8 x_31; obj* x_32; obj* x_34; obj* x_35; obj* x_36; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
lean::dec(x_10);
lean::dec(x_1);
x_24 = lean::cnstr_get(x_17, 0);
lean::inc(x_24);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_26 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_26 = x_17;
}
x_27 = lean::cnstr_get(x_8, 0);
lean::inc(x_27);
lean::dec(x_8);
x_30 = l_lean_to__fmt___at_lean_ir_instr_to__format___main___spec__2(x_27);
x_31 = 0;
x_32 = l_lean_ir_header_decorate__error___rarg___lambda__1___closed__1;
lean::inc(x_32);
x_34 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_34, 0, x_32);
lean::cnstr_set(x_34, 1, x_30);
lean::cnstr_set_scalar(x_34, sizeof(void*)*2, x_31);
x_35 = x_34;
x_36 = l_lean_ir_phi_decorate__error___rarg___lambda__1___closed__2;
lean::inc(x_36);
x_38 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_38, 0, x_35);
lean::cnstr_set(x_38, 1, x_36);
lean::cnstr_set_scalar(x_38, sizeof(void*)*2, x_31);
x_39 = x_38;
x_40 = lean::box(1);
x_41 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_41, 0, x_39);
lean::cnstr_set(x_41, 1, x_40);
lean::cnstr_set_scalar(x_41, sizeof(void*)*2, x_31);
x_42 = x_41;
x_43 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_43, 0, x_42);
lean::cnstr_set(x_43, 1, x_24);
lean::cnstr_set_scalar(x_43, sizeof(void*)*2, x_31);
x_44 = x_43;
if (lean::is_scalar(x_26)) {
 x_45 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_45 = x_26;
}
lean::cnstr_set(x_45, 0, x_44);
if (lean::is_scalar(x_21)) {
 x_46 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_46 = x_21;
}
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_19);
return x_46;
}
else
{
obj* x_47; obj* x_48; obj* x_49; obj* x_51; 
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_47 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_47 = x_17;
}
x_48 = l_list_mmap_x_27___main___at_lean_ir_decl_infer__types___main___spec__2(x_10, x_1, x_19);
x_49 = lean::cnstr_get(x_48, 0);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_48, 1);
lean::inc(x_51);
lean::dec(x_48);
if (lean::obj_tag(x_49) == 0)
{
obj* x_54; obj* x_57; obj* x_60; uint8 x_61; obj* x_62; obj* x_64; obj* x_65; obj* x_66; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; 
x_54 = lean::cnstr_get(x_49, 0);
lean::inc(x_54);
lean::dec(x_49);
x_57 = lean::cnstr_get(x_8, 0);
lean::inc(x_57);
lean::dec(x_8);
x_60 = l_lean_to__fmt___at_lean_ir_instr_to__format___main___spec__2(x_57);
x_61 = 0;
x_62 = l_lean_ir_header_decorate__error___rarg___lambda__1___closed__1;
lean::inc(x_62);
x_64 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_64, 0, x_62);
lean::cnstr_set(x_64, 1, x_60);
lean::cnstr_set_scalar(x_64, sizeof(void*)*2, x_61);
x_65 = x_64;
x_66 = l_lean_ir_phi_decorate__error___rarg___lambda__1___closed__2;
lean::inc(x_66);
x_68 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_68, 0, x_65);
lean::cnstr_set(x_68, 1, x_66);
lean::cnstr_set_scalar(x_68, sizeof(void*)*2, x_61);
x_69 = x_68;
x_70 = lean::box(1);
x_71 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_71, 0, x_69);
lean::cnstr_set(x_71, 1, x_70);
lean::cnstr_set_scalar(x_71, sizeof(void*)*2, x_61);
x_72 = x_71;
x_73 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_73, 0, x_72);
lean::cnstr_set(x_73, 1, x_54);
lean::cnstr_set_scalar(x_73, sizeof(void*)*2, x_61);
x_74 = x_73;
if (lean::is_scalar(x_47)) {
 x_75 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_75 = x_47;
 lean::cnstr_set_tag(x_47, 0);
}
lean::cnstr_set(x_75, 0, x_74);
if (lean::is_scalar(x_21)) {
 x_76 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_76 = x_21;
}
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_51);
return x_76;
}
else
{
obj* x_80; obj* x_81; 
lean::dec(x_8);
lean::dec(x_49);
lean::inc(x_51);
if (lean::is_scalar(x_47)) {
 x_80 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_80 = x_47;
}
lean::cnstr_set(x_80, 0, x_51);
if (lean::is_scalar(x_21)) {
 x_81 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_81 = x_21;
}
lean::cnstr_set(x_81, 0, x_80);
lean::cnstr_set(x_81, 1, x_51);
return x_81;
}
}
}
}
}
obj* l_lean_ir_decl_infer__types(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_ir_decl_infer__types___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_ir_infer__types(obj* x_0, obj* x_1) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_8; 
lean::inc(x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_decl_infer__types), 3, 1);
lean::closure_set(x_3, 0, x_0);
x_4 = l_lean_ir_decl_header___main(x_0);
x_5 = lean::cnstr_get(x_4, 2);
lean::inc(x_5);
lean::dec(x_4);
x_8 = l_lean_ir_type__checker__m_run___rarg(x_3, x_1, x_5);
return x_8;
}
}
obj* l_lean_ir_check__arg__types___main(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
lean::dec(x_0);
lean::dec(x_2);
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_9; 
lean::dec(x_1);
x_7 = l_lean_ir_match__type___closed__5;
lean::inc(x_7);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
else
{
obj* x_11; obj* x_13; 
lean::dec(x_1);
x_11 = l_lean_ir_check__arg__types___main___closed__1;
lean::inc(x_11);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_3);
return x_13;
}
}
else
{
obj* x_14; obj* x_16; 
x_14 = lean::cnstr_get(x_0, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_0, 1);
lean::inc(x_16);
lean::dec(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_23; obj* x_25; 
lean::dec(x_16);
lean::dec(x_14);
lean::dec(x_1);
lean::dec(x_2);
x_23 = l_lean_ir_check__arg__types___main___closed__1;
lean::inc(x_23);
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_23);
lean::cnstr_set(x_25, 1, x_3);
return x_25;
}
else
{
obj* x_26; obj* x_28; uint8 x_31; obj* x_34; obj* x_35; obj* x_37; obj* x_39; 
x_26 = lean::cnstr_get(x_1, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_1, 1);
lean::inc(x_28);
lean::dec(x_1);
x_31 = lean::cnstr_get_scalar<uint8>(x_26, sizeof(void*)*1);
lean::dec(x_26);
lean::inc(x_2);
x_34 = l_lean_ir_check__type(x_14, x_31, x_2, x_3);
x_35 = lean::cnstr_get(x_34, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_34, 1);
lean::inc(x_37);
if (lean::is_shared(x_34)) {
 lean::dec(x_34);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_34, 0);
 lean::cnstr_release(x_34, 1);
 x_39 = x_34;
}
if (lean::obj_tag(x_35) == 0)
{
obj* x_43; obj* x_45; obj* x_46; obj* x_47; 
lean::dec(x_16);
lean::dec(x_2);
lean::dec(x_28);
x_43 = lean::cnstr_get(x_35, 0);
lean::inc(x_43);
if (lean::is_shared(x_35)) {
 lean::dec(x_35);
 x_45 = lean::box(0);
} else {
 lean::cnstr_release(x_35, 0);
 x_45 = x_35;
}
if (lean::is_scalar(x_45)) {
 x_46 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_46 = x_45;
}
lean::cnstr_set(x_46, 0, x_43);
if (lean::is_scalar(x_39)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_39;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_37);
return x_47;
}
else
{
lean::dec(x_39);
lean::dec(x_35);
x_0 = x_16;
x_1 = x_28;
x_3 = x_37;
goto _start;
}
}
}
}
}
obj* _init_l_lean_ir_check__arg__types___main___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("unexpected number of arguments");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_lean_ir_check__arg__types(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_ir_check__arg__types___main(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_list_mmap_x_27___main___at_lean_ir_instr_check___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = l_lean_ir_match__type___closed__5;
lean::inc(x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_2);
return x_7;
}
else
{
obj* x_8; obj* x_10; uint8 x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_20; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
lean::dec(x_0);
x_13 = 11;
lean::inc(x_1);
x_15 = l_lean_ir_check__type(x_8, x_13, x_1, x_2);
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_15, 1);
lean::inc(x_18);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 lean::cnstr_release(x_15, 1);
 x_20 = x_15;
}
if (lean::obj_tag(x_16) == 0)
{
obj* x_23; obj* x_25; obj* x_26; obj* x_27; 
lean::dec(x_10);
lean::dec(x_1);
x_23 = lean::cnstr_get(x_16, 0);
lean::inc(x_23);
if (lean::is_shared(x_16)) {
 lean::dec(x_16);
 x_25 = lean::box(0);
} else {
 lean::cnstr_release(x_16, 0);
 x_25 = x_16;
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_23);
if (lean::is_scalar(x_20)) {
 x_27 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_27 = x_20;
}
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_18);
return x_27;
}
else
{
lean::dec(x_16);
lean::dec(x_20);
x_0 = x_10;
x_2 = x_18;
goto _start;
}
}
}
}
obj* l_list_mmap_x_27___main___at_lean_ir_instr_check___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = l_lean_ir_match__type___closed__5;
lean::inc(x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_2);
return x_7;
}
else
{
obj* x_8; obj* x_10; uint8 x_13; obj* x_15; obj* x_16; uint8 x_17; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
lean::dec(x_0);
x_13 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
lean::dec(x_8);
x_15 = l_lean_ir_type2id___main(x_13);
x_16 = l_lean_ir_valid__assign__unop__types___closed__1;
x_17 = lean::nat_dec_eq(x_15, x_16);
lean::dec(x_15);
if (x_17 == 0)
{
obj* x_21; obj* x_23; 
lean::dec(x_10);
lean::dec(x_1);
x_21 = l_list_mmap_x_27___main___at_lean_ir_instr_check___spec__2___closed__1;
lean::inc(x_21);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_2);
return x_23;
}
else
{
x_0 = x_10;
goto _start;
}
}
}
}
obj* _init_l_list_mmap_x_27___main___at_lean_ir_instr_check___spec__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("invalid closure, arguments must have type object");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_list_mmap_x_27___main___at_lean_ir_instr_check___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = l_lean_ir_match__type___closed__5;
lean::inc(x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_2);
return x_7;
}
else
{
obj* x_8; obj* x_10; uint8 x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_20; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
lean::dec(x_0);
x_13 = 11;
lean::inc(x_1);
x_15 = l_lean_ir_check__type(x_8, x_13, x_1, x_2);
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_15, 1);
lean::inc(x_18);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 lean::cnstr_release(x_15, 1);
 x_20 = x_15;
}
if (lean::obj_tag(x_16) == 0)
{
obj* x_23; obj* x_25; obj* x_26; obj* x_27; 
lean::dec(x_10);
lean::dec(x_1);
x_23 = lean::cnstr_get(x_16, 0);
lean::inc(x_23);
if (lean::is_shared(x_16)) {
 lean::dec(x_16);
 x_25 = lean::box(0);
} else {
 lean::cnstr_release(x_16, 0);
 x_25 = x_16;
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_23);
if (lean::is_scalar(x_20)) {
 x_27 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_27 = x_20;
}
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_18);
return x_27;
}
else
{
lean::dec(x_16);
lean::dec(x_20);
x_0 = x_10;
x_2 = x_18;
goto _start;
}
}
}
}
obj* l_lean_ir_instr_check(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
switch (lean::obj_tag(x_0)) {
case 0:
{
uint8 x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; 
x_5 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*2);
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
x_8 = l_lean_ir_get__type(x_6, x_1, x_2);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_13 = x_8;
}
if (lean::obj_tag(x_9) == 0)
{
obj* x_14; obj* x_16; obj* x_17; obj* x_18; 
x_14 = lean::cnstr_get(x_9, 0);
lean::inc(x_14);
if (lean::is_shared(x_9)) {
 lean::dec(x_9);
 x_16 = lean::box(0);
} else {
 lean::cnstr_release(x_9, 0);
 x_16 = x_9;
}
if (lean::is_scalar(x_16)) {
 x_17 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_17 = x_16;
}
lean::cnstr_set(x_17, 0, x_14);
if (lean::is_scalar(x_13)) {
 x_18 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_18 = x_13;
}
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_11);
x_3 = x_18;
goto lbl_4;
}
else
{
obj* x_19; obj* x_22; uint8 x_23; obj* x_25; uint8 x_26; 
x_19 = lean::cnstr_get(x_9, 0);
lean::inc(x_19);
lean::dec(x_9);
x_22 = l_lean_ir_type2id___main(x_5);
x_23 = lean::unbox(x_19);
lean::dec(x_19);
x_25 = l_lean_ir_type2id___main(x_23);
x_26 = lean::nat_dec_eq(x_22, x_25);
lean::dec(x_25);
lean::dec(x_22);
if (x_26 == 0)
{
obj* x_29; obj* x_31; 
x_29 = l_lean_ir_instr_check___closed__1;
lean::inc(x_29);
if (lean::is_scalar(x_13)) {
 x_31 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_31 = x_13;
}
lean::cnstr_set(x_31, 0, x_29);
lean::cnstr_set(x_31, 1, x_11);
x_3 = x_31;
goto lbl_4;
}
else
{
obj* x_32; obj* x_34; 
x_32 = l_lean_ir_match__type___closed__5;
lean::inc(x_32);
if (lean::is_scalar(x_13)) {
 x_34 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_34 = x_13;
}
lean::cnstr_set(x_34, 0, x_32);
lean::cnstr_set(x_34, 1, x_11);
x_3 = x_34;
goto lbl_4;
}
}
}
case 1:
{
uint8 x_35; obj* x_36; obj* x_38; 
x_35 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*2);
x_36 = lean::cnstr_get(x_0, 1);
lean::inc(x_36);
x_38 = l_lean_ir_literal_check(x_36, x_35, x_1, x_2);
x_3 = x_38;
goto lbl_4;
}
case 2:
{
uint8 x_39; uint8 x_40; obj* x_41; obj* x_43; obj* x_44; obj* x_46; obj* x_48; 
x_39 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*2);
x_40 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*2 + 1);
x_41 = lean::cnstr_get(x_0, 1);
lean::inc(x_41);
x_43 = l_lean_ir_get__type(x_41, x_1, x_2);
x_44 = lean::cnstr_get(x_43, 0);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_43, 1);
lean::inc(x_46);
if (lean::is_shared(x_43)) {
 lean::dec(x_43);
 x_48 = lean::box(0);
} else {
 lean::cnstr_release(x_43, 0);
 lean::cnstr_release(x_43, 1);
 x_48 = x_43;
}
if (lean::obj_tag(x_44) == 0)
{
obj* x_49; obj* x_51; obj* x_52; obj* x_53; 
x_49 = lean::cnstr_get(x_44, 0);
lean::inc(x_49);
if (lean::is_shared(x_44)) {
 lean::dec(x_44);
 x_51 = lean::box(0);
} else {
 lean::cnstr_release(x_44, 0);
 x_51 = x_44;
}
if (lean::is_scalar(x_51)) {
 x_52 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_52 = x_51;
}
lean::cnstr_set(x_52, 0, x_49);
if (lean::is_scalar(x_48)) {
 x_53 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_53 = x_48;
}
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_46);
x_3 = x_53;
goto lbl_4;
}
else
{
obj* x_54; uint8 x_57; uint8 x_59; 
x_54 = lean::cnstr_get(x_44, 0);
lean::inc(x_54);
lean::dec(x_44);
x_57 = lean::unbox(x_54);
lean::dec(x_54);
x_59 = l_lean_ir_valid__assign__unop__types(x_40, x_39, x_57);
if (x_59 == 0)
{
obj* x_60; obj* x_62; 
x_60 = l_lean_ir_instr_check___closed__2;
lean::inc(x_60);
if (lean::is_scalar(x_48)) {
 x_62 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_62 = x_48;
}
lean::cnstr_set(x_62, 0, x_60);
lean::cnstr_set(x_62, 1, x_46);
x_3 = x_62;
goto lbl_4;
}
else
{
obj* x_63; obj* x_65; 
x_63 = l_lean_ir_match__type___closed__5;
lean::inc(x_63);
if (lean::is_scalar(x_48)) {
 x_65 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_65 = x_48;
}
lean::cnstr_set(x_65, 0, x_63);
lean::cnstr_set(x_65, 1, x_46);
x_3 = x_65;
goto lbl_4;
}
}
}
case 3:
{
uint8 x_66; uint8 x_67; obj* x_68; obj* x_70; obj* x_73; obj* x_74; obj* x_76; obj* x_78; 
x_66 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*3);
x_67 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*3 + 1);
x_68 = lean::cnstr_get(x_0, 1);
lean::inc(x_68);
x_70 = lean::cnstr_get(x_0, 2);
lean::inc(x_70);
lean::inc(x_1);
x_73 = l_lean_ir_get__type(x_68, x_1, x_2);
x_74 = lean::cnstr_get(x_73, 0);
lean::inc(x_74);
x_76 = lean::cnstr_get(x_73, 1);
lean::inc(x_76);
if (lean::is_shared(x_73)) {
 lean::dec(x_73);
 x_78 = lean::box(0);
} else {
 lean::cnstr_release(x_73, 0);
 lean::cnstr_release(x_73, 1);
 x_78 = x_73;
}
if (lean::obj_tag(x_74) == 0)
{
obj* x_81; obj* x_83; obj* x_84; obj* x_85; 
lean::dec(x_1);
lean::dec(x_70);
x_81 = lean::cnstr_get(x_74, 0);
lean::inc(x_81);
if (lean::is_shared(x_74)) {
 lean::dec(x_74);
 x_83 = lean::box(0);
} else {
 lean::cnstr_release(x_74, 0);
 x_83 = x_74;
}
if (lean::is_scalar(x_83)) {
 x_84 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_84 = x_83;
}
lean::cnstr_set(x_84, 0, x_81);
if (lean::is_scalar(x_78)) {
 x_85 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_85 = x_78;
}
lean::cnstr_set(x_85, 0, x_84);
lean::cnstr_set(x_85, 1, x_76);
x_3 = x_85;
goto lbl_4;
}
else
{
obj* x_86; obj* x_88; obj* x_89; obj* x_90; obj* x_92; 
x_86 = lean::cnstr_get(x_74, 0);
lean::inc(x_86);
if (lean::is_shared(x_74)) {
 lean::dec(x_74);
 x_88 = lean::box(0);
} else {
 lean::cnstr_release(x_74, 0);
 x_88 = x_74;
}
x_89 = l_lean_ir_get__type(x_70, x_1, x_76);
x_90 = lean::cnstr_get(x_89, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get(x_89, 1);
lean::inc(x_92);
lean::dec(x_89);
if (lean::obj_tag(x_90) == 0)
{
obj* x_96; obj* x_99; obj* x_100; 
lean::dec(x_86);
x_96 = lean::cnstr_get(x_90, 0);
lean::inc(x_96);
lean::dec(x_90);
if (lean::is_scalar(x_88)) {
 x_99 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_99 = x_88;
 lean::cnstr_set_tag(x_88, 0);
}
lean::cnstr_set(x_99, 0, x_96);
if (lean::is_scalar(x_78)) {
 x_100 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_100 = x_78;
}
lean::cnstr_set(x_100, 0, x_99);
lean::cnstr_set(x_100, 1, x_92);
x_3 = x_100;
goto lbl_4;
}
else
{
obj* x_102; uint8 x_105; uint8 x_107; uint8 x_109; 
lean::dec(x_88);
x_102 = lean::cnstr_get(x_90, 0);
lean::inc(x_102);
lean::dec(x_90);
x_105 = lean::unbox(x_86);
lean::dec(x_86);
x_107 = lean::unbox(x_102);
lean::dec(x_102);
x_109 = l_lean_ir_valid__assign__binop__types(x_67, x_66, x_105, x_107);
if (x_109 == 0)
{
obj* x_110; obj* x_112; 
x_110 = l_lean_ir_instr_check___closed__3;
lean::inc(x_110);
if (lean::is_scalar(x_78)) {
 x_112 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_112 = x_78;
}
lean::cnstr_set(x_112, 0, x_110);
lean::cnstr_set(x_112, 1, x_92);
x_3 = x_112;
goto lbl_4;
}
else
{
obj* x_113; obj* x_115; 
x_113 = l_lean_ir_match__type___closed__5;
lean::inc(x_113);
if (lean::is_scalar(x_78)) {
 x_115 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_115 = x_78;
}
lean::cnstr_set(x_115, 0, x_113);
lean::cnstr_set(x_115, 1, x_92);
x_3 = x_115;
goto lbl_4;
}
}
}
}
case 4:
{
obj* x_116; uint8 x_118; obj* x_119; 
x_116 = lean::cnstr_get(x_0, 0);
lean::inc(x_116);
x_118 = 11;
x_119 = l_lean_ir_check__type(x_116, x_118, x_1, x_2);
x_3 = x_119;
goto lbl_4;
}
case 5:
{
obj* x_120; obj* x_122; obj* x_125; obj* x_126; obj* x_128; obj* x_130; 
x_120 = lean::cnstr_get(x_0, 1);
lean::inc(x_120);
x_122 = lean::cnstr_get(x_0, 2);
lean::inc(x_122);
lean::inc(x_1);
x_125 = l_lean_ir_get__decl(x_120, x_1, x_2);
x_126 = lean::cnstr_get(x_125, 0);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_125, 1);
lean::inc(x_128);
if (lean::is_shared(x_125)) {
 lean::dec(x_125);
 x_130 = lean::box(0);
} else {
 lean::cnstr_release(x_125, 0);
 lean::cnstr_release(x_125, 1);
 x_130 = x_125;
}
if (lean::obj_tag(x_126) == 0)
{
obj* x_133; obj* x_135; obj* x_136; obj* x_137; 
lean::dec(x_1);
lean::dec(x_122);
x_133 = lean::cnstr_get(x_126, 0);
lean::inc(x_133);
if (lean::is_shared(x_126)) {
 lean::dec(x_126);
 x_135 = lean::box(0);
} else {
 lean::cnstr_release(x_126, 0);
 x_135 = x_126;
}
if (lean::is_scalar(x_135)) {
 x_136 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_136 = x_135;
}
lean::cnstr_set(x_136, 0, x_133);
if (lean::is_scalar(x_130)) {
 x_137 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_137 = x_130;
}
lean::cnstr_set(x_137, 0, x_136);
lean::cnstr_set(x_137, 1, x_128);
x_3 = x_137;
goto lbl_4;
}
else
{
obj* x_139; obj* x_142; obj* x_143; obj* x_146; 
lean::dec(x_130);
x_139 = lean::cnstr_get(x_126, 0);
lean::inc(x_139);
lean::dec(x_126);
x_142 = l_lean_ir_decl_header___main(x_139);
x_143 = lean::cnstr_get(x_142, 1);
lean::inc(x_143);
lean::dec(x_142);
x_146 = l_lean_ir_check__arg__types___main(x_122, x_143, x_1, x_128);
x_3 = x_146;
goto lbl_4;
}
}
case 6:
{
obj* x_148; obj* x_150; 
lean::dec(x_1);
x_148 = l_lean_ir_match__type___closed__5;
lean::inc(x_148);
x_150 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_150, 0, x_148);
lean::cnstr_set(x_150, 1, x_2);
x_3 = x_150;
goto lbl_4;
}
case 7:
{
obj* x_151; obj* x_153; uint8 x_155; obj* x_157; obj* x_158; obj* x_160; obj* x_162; 
x_151 = lean::cnstr_get(x_0, 0);
lean::inc(x_151);
x_153 = lean::cnstr_get(x_0, 1);
lean::inc(x_153);
x_155 = 11;
lean::inc(x_1);
x_157 = l_lean_ir_check__type(x_151, x_155, x_1, x_2);
x_158 = lean::cnstr_get(x_157, 0);
lean::inc(x_158);
x_160 = lean::cnstr_get(x_157, 1);
lean::inc(x_160);
if (lean::is_shared(x_157)) {
 lean::dec(x_157);
 x_162 = lean::box(0);
} else {
 lean::cnstr_release(x_157, 0);
 lean::cnstr_release(x_157, 1);
 x_162 = x_157;
}
if (lean::obj_tag(x_158) == 0)
{
obj* x_165; obj* x_167; obj* x_168; obj* x_169; 
lean::dec(x_1);
lean::dec(x_153);
x_165 = lean::cnstr_get(x_158, 0);
lean::inc(x_165);
if (lean::is_shared(x_158)) {
 lean::dec(x_158);
 x_167 = lean::box(0);
} else {
 lean::cnstr_release(x_158, 0);
 x_167 = x_158;
}
if (lean::is_scalar(x_167)) {
 x_168 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_168 = x_167;
}
lean::cnstr_set(x_168, 0, x_165);
if (lean::is_scalar(x_162)) {
 x_169 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_169 = x_162;
}
lean::cnstr_set(x_169, 0, x_168);
lean::cnstr_set(x_169, 1, x_160);
x_3 = x_169;
goto lbl_4;
}
else
{
obj* x_172; 
lean::dec(x_162);
lean::dec(x_158);
x_172 = l_lean_ir_check__type(x_153, x_155, x_1, x_160);
x_3 = x_172;
goto lbl_4;
}
}
case 8:
{
obj* x_173; uint8 x_175; obj* x_176; 
x_173 = lean::cnstr_get(x_0, 1);
lean::inc(x_173);
x_175 = 11;
x_176 = l_lean_ir_check__type(x_173, x_175, x_1, x_2);
x_3 = x_176;
goto lbl_4;
}
case 9:
{
obj* x_177; obj* x_179; uint8 x_181; obj* x_183; obj* x_184; obj* x_186; obj* x_188; 
x_177 = lean::cnstr_get(x_0, 0);
lean::inc(x_177);
x_179 = lean::cnstr_get(x_0, 1);
lean::inc(x_179);
x_181 = 11;
lean::inc(x_1);
x_183 = l_lean_ir_check__type(x_177, x_181, x_1, x_2);
x_184 = lean::cnstr_get(x_183, 0);
lean::inc(x_184);
x_186 = lean::cnstr_get(x_183, 1);
lean::inc(x_186);
if (lean::is_shared(x_183)) {
 lean::dec(x_183);
 x_188 = lean::box(0);
} else {
 lean::cnstr_release(x_183, 0);
 lean::cnstr_release(x_183, 1);
 x_188 = x_183;
}
if (lean::obj_tag(x_184) == 0)
{
obj* x_191; obj* x_193; obj* x_194; obj* x_195; 
lean::dec(x_179);
lean::dec(x_1);
x_191 = lean::cnstr_get(x_184, 0);
lean::inc(x_191);
if (lean::is_shared(x_184)) {
 lean::dec(x_184);
 x_193 = lean::box(0);
} else {
 lean::cnstr_release(x_184, 0);
 x_193 = x_184;
}
if (lean::is_scalar(x_193)) {
 x_194 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_194 = x_193;
}
lean::cnstr_set(x_194, 0, x_191);
if (lean::is_scalar(x_188)) {
 x_195 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_195 = x_188;
}
lean::cnstr_set(x_195, 0, x_194);
lean::cnstr_set(x_195, 1, x_186);
x_3 = x_195;
goto lbl_4;
}
else
{
obj* x_198; 
lean::dec(x_184);
lean::dec(x_188);
x_198 = l_lean_ir_check__ne__type(x_179, x_181, x_1, x_186);
x_3 = x_198;
goto lbl_4;
}
}
case 10:
{
obj* x_199; obj* x_201; uint8 x_203; obj* x_205; obj* x_206; obj* x_208; obj* x_210; 
x_199 = lean::cnstr_get(x_0, 0);
lean::inc(x_199);
x_201 = lean::cnstr_get(x_0, 1);
lean::inc(x_201);
x_203 = 11;
lean::inc(x_1);
x_205 = l_lean_ir_check__type(x_201, x_203, x_1, x_2);
x_206 = lean::cnstr_get(x_205, 0);
lean::inc(x_206);
x_208 = lean::cnstr_get(x_205, 1);
lean::inc(x_208);
if (lean::is_shared(x_205)) {
 lean::dec(x_205);
 x_210 = lean::box(0);
} else {
 lean::cnstr_release(x_205, 0);
 lean::cnstr_release(x_205, 1);
 x_210 = x_205;
}
if (lean::obj_tag(x_206) == 0)
{
obj* x_213; obj* x_215; obj* x_216; obj* x_217; 
lean::dec(x_199);
lean::dec(x_1);
x_213 = lean::cnstr_get(x_206, 0);
lean::inc(x_213);
if (lean::is_shared(x_206)) {
 lean::dec(x_206);
 x_215 = lean::box(0);
} else {
 lean::cnstr_release(x_206, 0);
 x_215 = x_206;
}
if (lean::is_scalar(x_215)) {
 x_216 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_216 = x_215;
}
lean::cnstr_set(x_216, 0, x_213);
if (lean::is_scalar(x_210)) {
 x_217 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_217 = x_210;
}
lean::cnstr_set(x_217, 0, x_216);
lean::cnstr_set(x_217, 1, x_208);
x_3 = x_217;
goto lbl_4;
}
else
{
obj* x_220; 
lean::dec(x_210);
lean::dec(x_206);
x_220 = l_lean_ir_check__ne__type(x_199, x_203, x_1, x_208);
x_3 = x_220;
goto lbl_4;
}
}
case 11:
{
obj* x_221; obj* x_223; obj* x_227; obj* x_228; obj* x_230; obj* x_232; 
x_221 = lean::cnstr_get(x_0, 1);
lean::inc(x_221);
x_223 = lean::cnstr_get(x_0, 2);
lean::inc(x_223);
lean::inc(x_1);
lean::inc(x_223);
x_227 = l_list_mmap_x_27___main___at_lean_ir_instr_check___spec__1(x_223, x_1, x_2);
x_228 = lean::cnstr_get(x_227, 0);
lean::inc(x_228);
x_230 = lean::cnstr_get(x_227, 1);
lean::inc(x_230);
if (lean::is_shared(x_227)) {
 lean::dec(x_227);
 x_232 = lean::box(0);
} else {
 lean::cnstr_release(x_227, 0);
 lean::cnstr_release(x_227, 1);
 x_232 = x_227;
}
if (lean::obj_tag(x_228) == 0)
{
obj* x_236; obj* x_238; obj* x_239; obj* x_240; 
lean::dec(x_221);
lean::dec(x_223);
lean::dec(x_1);
x_236 = lean::cnstr_get(x_228, 0);
lean::inc(x_236);
if (lean::is_shared(x_228)) {
 lean::dec(x_228);
 x_238 = lean::box(0);
} else {
 lean::cnstr_release(x_228, 0);
 x_238 = x_228;
}
if (lean::is_scalar(x_238)) {
 x_239 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_239 = x_238;
}
lean::cnstr_set(x_239, 0, x_236);
if (lean::is_scalar(x_232)) {
 x_240 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_240 = x_232;
}
lean::cnstr_set(x_240, 0, x_239);
lean::cnstr_set(x_240, 1, x_230);
x_3 = x_240;
goto lbl_4;
}
else
{
obj* x_241; obj* x_243; obj* x_244; obj* x_246; 
if (lean::is_shared(x_228)) {
 lean::dec(x_228);
 x_241 = lean::box(0);
} else {
 lean::cnstr_release(x_228, 0);
 x_241 = x_228;
}
lean::inc(x_1);
x_243 = l_lean_ir_get__decl(x_221, x_1, x_230);
x_244 = lean::cnstr_get(x_243, 0);
lean::inc(x_244);
x_246 = lean::cnstr_get(x_243, 1);
lean::inc(x_246);
lean::dec(x_243);
if (lean::obj_tag(x_244) == 0)
{
obj* x_251; obj* x_254; obj* x_255; 
lean::dec(x_223);
lean::dec(x_1);
x_251 = lean::cnstr_get(x_244, 0);
lean::inc(x_251);
lean::dec(x_244);
if (lean::is_scalar(x_241)) {
 x_254 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_254 = x_241;
 lean::cnstr_set_tag(x_241, 0);
}
lean::cnstr_set(x_254, 0, x_251);
if (lean::is_scalar(x_232)) {
 x_255 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_255 = x_232;
}
lean::cnstr_set(x_255, 0, x_254);
lean::cnstr_set(x_255, 1, x_246);
x_3 = x_255;
goto lbl_4;
}
else
{
obj* x_257; obj* x_260; obj* x_261; obj* x_262; obj* x_266; uint8 x_267; 
lean::dec(x_241);
x_257 = lean::cnstr_get(x_244, 0);
lean::inc(x_257);
lean::dec(x_244);
x_260 = l_list_length___main___rarg(x_223);
x_261 = l_lean_ir_decl_header___main(x_257);
x_262 = lean::cnstr_get(x_261, 1);
lean::inc(x_262);
lean::dec(x_261);
lean::inc(x_262);
x_266 = l_list_length___main___rarg(x_262);
x_267 = lean::nat_dec_le(x_260, x_266);
lean::dec(x_266);
lean::dec(x_260);
if (x_267 == 0)
{
obj* x_272; obj* x_274; 
lean::dec(x_1);
lean::dec(x_262);
x_272 = l_lean_ir_instr_check___closed__4;
lean::inc(x_272);
if (lean::is_scalar(x_232)) {
 x_274 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_274 = x_232;
}
lean::cnstr_set(x_274, 0, x_272);
lean::cnstr_set(x_274, 1, x_246);
x_3 = x_274;
goto lbl_4;
}
else
{
obj* x_276; 
lean::dec(x_232);
x_276 = l_list_mmap_x_27___main___at_lean_ir_instr_check___spec__2(x_262, x_1, x_246);
x_3 = x_276;
goto lbl_4;
}
}
}
}
case 12:
{
obj* x_277; obj* x_279; 
x_277 = lean::cnstr_get(x_0, 1);
lean::inc(x_277);
x_279 = l_list_mmap_x_27___main___at_lean_ir_instr_check___spec__3(x_277, x_1, x_2);
x_3 = x_279;
goto lbl_4;
}
case 13:
{
obj* x_280; obj* x_282; uint8 x_284; obj* x_286; obj* x_287; obj* x_289; obj* x_291; 
x_280 = lean::cnstr_get(x_0, 1);
lean::inc(x_280);
x_282 = lean::cnstr_get(x_0, 2);
lean::inc(x_282);
x_284 = 5;
lean::inc(x_1);
x_286 = l_lean_ir_check__type(x_280, x_284, x_1, x_2);
x_287 = lean::cnstr_get(x_286, 0);
lean::inc(x_287);
x_289 = lean::cnstr_get(x_286, 1);
lean::inc(x_289);
if (lean::is_shared(x_286)) {
 lean::dec(x_286);
 x_291 = lean::box(0);
} else {
 lean::cnstr_release(x_286, 0);
 lean::cnstr_release(x_286, 1);
 x_291 = x_286;
}
if (lean::obj_tag(x_287) == 0)
{
obj* x_294; obj* x_296; obj* x_297; obj* x_298; 
lean::dec(x_282);
lean::dec(x_1);
x_294 = lean::cnstr_get(x_287, 0);
lean::inc(x_294);
if (lean::is_shared(x_287)) {
 lean::dec(x_287);
 x_296 = lean::box(0);
} else {
 lean::cnstr_release(x_287, 0);
 x_296 = x_287;
}
if (lean::is_scalar(x_296)) {
 x_297 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_297 = x_296;
}
lean::cnstr_set(x_297, 0, x_294);
if (lean::is_scalar(x_291)) {
 x_298 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_298 = x_291;
}
lean::cnstr_set(x_298, 0, x_297);
lean::cnstr_set(x_298, 1, x_289);
x_3 = x_298;
goto lbl_4;
}
else
{
obj* x_301; 
lean::dec(x_287);
lean::dec(x_291);
x_301 = l_lean_ir_check__type(x_282, x_284, x_1, x_289);
x_3 = x_301;
goto lbl_4;
}
}
case 14:
{
uint8 x_302; obj* x_303; obj* x_305; obj* x_307; obj* x_308; uint8 x_309; 
x_302 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*3);
x_303 = lean::cnstr_get(x_0, 1);
lean::inc(x_303);
x_305 = lean::cnstr_get(x_0, 2);
lean::inc(x_305);
x_307 = l_lean_ir_type2id___main(x_302);
x_308 = l_lean_ir_valid__assign__unop__types___closed__1;
x_309 = lean::nat_dec_eq(x_307, x_308);
lean::dec(x_307);
if (x_309 == 0)
{
uint8 x_311; obj* x_313; obj* x_314; obj* x_316; obj* x_318; 
x_311 = 5;
lean::inc(x_1);
x_313 = l_lean_ir_check__type(x_303, x_311, x_1, x_2);
x_314 = lean::cnstr_get(x_313, 0);
lean::inc(x_314);
x_316 = lean::cnstr_get(x_313, 1);
lean::inc(x_316);
if (lean::is_shared(x_313)) {
 lean::dec(x_313);
 x_318 = lean::box(0);
} else {
 lean::cnstr_release(x_313, 0);
 lean::cnstr_release(x_313, 1);
 x_318 = x_313;
}
if (lean::obj_tag(x_314) == 0)
{
obj* x_321; obj* x_323; obj* x_324; obj* x_325; 
lean::dec(x_305);
lean::dec(x_1);
x_321 = lean::cnstr_get(x_314, 0);
lean::inc(x_321);
if (lean::is_shared(x_314)) {
 lean::dec(x_314);
 x_323 = lean::box(0);
} else {
 lean::cnstr_release(x_314, 0);
 x_323 = x_314;
}
if (lean::is_scalar(x_323)) {
 x_324 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_324 = x_323;
}
lean::cnstr_set(x_324, 0, x_321);
if (lean::is_scalar(x_318)) {
 x_325 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_325 = x_318;
}
lean::cnstr_set(x_325, 0, x_324);
lean::cnstr_set(x_325, 1, x_316);
x_3 = x_325;
goto lbl_4;
}
else
{
obj* x_326; obj* x_327; obj* x_328; obj* x_330; 
if (lean::is_shared(x_314)) {
 lean::dec(x_314);
 x_326 = lean::box(0);
} else {
 lean::cnstr_release(x_314, 0);
 x_326 = x_314;
}
x_327 = l_lean_ir_check__type(x_305, x_311, x_1, x_316);
x_328 = lean::cnstr_get(x_327, 0);
lean::inc(x_328);
x_330 = lean::cnstr_get(x_327, 1);
lean::inc(x_330);
lean::dec(x_327);
if (lean::obj_tag(x_328) == 0)
{
obj* x_333; obj* x_336; obj* x_337; 
x_333 = lean::cnstr_get(x_328, 0);
lean::inc(x_333);
lean::dec(x_328);
if (lean::is_scalar(x_326)) {
 x_336 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_336 = x_326;
 lean::cnstr_set_tag(x_326, 0);
}
lean::cnstr_set(x_336, 0, x_333);
if (lean::is_scalar(x_318)) {
 x_337 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_337 = x_318;
}
lean::cnstr_set(x_337, 0, x_336);
lean::cnstr_set(x_337, 1, x_330);
x_3 = x_337;
goto lbl_4;
}
else
{
obj* x_340; obj* x_342; 
lean::dec(x_326);
lean::dec(x_328);
x_340 = l_lean_ir_match__type___closed__5;
lean::inc(x_340);
if (lean::is_scalar(x_318)) {
 x_342 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_342 = x_318;
}
lean::cnstr_set(x_342, 0, x_340);
lean::cnstr_set(x_342, 1, x_330);
x_3 = x_342;
goto lbl_4;
}
}
}
else
{
uint8 x_343; obj* x_345; obj* x_346; obj* x_348; obj* x_350; 
x_343 = 5;
lean::inc(x_1);
x_345 = l_lean_ir_check__type(x_303, x_343, x_1, x_2);
x_346 = lean::cnstr_get(x_345, 0);
lean::inc(x_346);
x_348 = lean::cnstr_get(x_345, 1);
lean::inc(x_348);
if (lean::is_shared(x_345)) {
 lean::dec(x_345);
 x_350 = lean::box(0);
} else {
 lean::cnstr_release(x_345, 0);
 lean::cnstr_release(x_345, 1);
 x_350 = x_345;
}
if (lean::obj_tag(x_346) == 0)
{
obj* x_353; obj* x_355; obj* x_356; obj* x_357; 
lean::dec(x_305);
lean::dec(x_1);
x_353 = lean::cnstr_get(x_346, 0);
lean::inc(x_353);
if (lean::is_shared(x_346)) {
 lean::dec(x_346);
 x_355 = lean::box(0);
} else {
 lean::cnstr_release(x_346, 0);
 x_355 = x_346;
}
if (lean::is_scalar(x_355)) {
 x_356 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_356 = x_355;
}
lean::cnstr_set(x_356, 0, x_353);
if (lean::is_scalar(x_350)) {
 x_357 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_357 = x_350;
}
lean::cnstr_set(x_357, 0, x_356);
lean::cnstr_set(x_357, 1, x_348);
x_3 = x_357;
goto lbl_4;
}
else
{
obj* x_358; obj* x_359; obj* x_360; obj* x_362; 
if (lean::is_shared(x_346)) {
 lean::dec(x_346);
 x_358 = lean::box(0);
} else {
 lean::cnstr_release(x_346, 0);
 x_358 = x_346;
}
x_359 = l_lean_ir_check__type(x_305, x_343, x_1, x_348);
x_360 = lean::cnstr_get(x_359, 0);
lean::inc(x_360);
x_362 = lean::cnstr_get(x_359, 1);
lean::inc(x_362);
lean::dec(x_359);
if (lean::obj_tag(x_360) == 0)
{
obj* x_365; obj* x_368; obj* x_369; 
x_365 = lean::cnstr_get(x_360, 0);
lean::inc(x_365);
lean::dec(x_360);
if (lean::is_scalar(x_358)) {
 x_368 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_368 = x_358;
 lean::cnstr_set_tag(x_358, 0);
}
lean::cnstr_set(x_368, 0, x_365);
if (lean::is_scalar(x_350)) {
 x_369 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_369 = x_350;
}
lean::cnstr_set(x_369, 0, x_368);
lean::cnstr_set(x_369, 1, x_362);
x_3 = x_369;
goto lbl_4;
}
else
{
obj* x_372; obj* x_374; 
lean::dec(x_360);
lean::dec(x_358);
x_372 = l_lean_ir_instr_check___closed__5;
lean::inc(x_372);
if (lean::is_scalar(x_350)) {
 x_374 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_374 = x_350;
}
lean::cnstr_set(x_374, 0, x_372);
lean::cnstr_set(x_374, 1, x_362);
x_3 = x_374;
goto lbl_4;
}
}
}
}
default:
{
obj* x_375; obj* x_377; uint8 x_379; obj* x_381; obj* x_382; obj* x_384; obj* x_386; 
x_375 = lean::cnstr_get(x_0, 0);
lean::inc(x_375);
x_377 = lean::cnstr_get(x_0, 1);
lean::inc(x_377);
x_379 = 11;
lean::inc(x_1);
x_381 = l_lean_ir_check__type(x_375, x_379, x_1, x_2);
x_382 = lean::cnstr_get(x_381, 0);
lean::inc(x_382);
x_384 = lean::cnstr_get(x_381, 1);
lean::inc(x_384);
if (lean::is_shared(x_381)) {
 lean::dec(x_381);
 x_386 = lean::box(0);
} else {
 lean::cnstr_release(x_381, 0);
 lean::cnstr_release(x_381, 1);
 x_386 = x_381;
}
if (lean::obj_tag(x_382) == 0)
{
obj* x_389; obj* x_391; obj* x_392; obj* x_393; 
lean::dec(x_1);
lean::dec(x_377);
x_389 = lean::cnstr_get(x_382, 0);
lean::inc(x_389);
if (lean::is_shared(x_382)) {
 lean::dec(x_382);
 x_391 = lean::box(0);
} else {
 lean::cnstr_release(x_382, 0);
 x_391 = x_382;
}
if (lean::is_scalar(x_391)) {
 x_392 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_392 = x_391;
}
lean::cnstr_set(x_392, 0, x_389);
if (lean::is_scalar(x_386)) {
 x_393 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_393 = x_386;
}
lean::cnstr_set(x_393, 0, x_392);
lean::cnstr_set(x_393, 1, x_384);
x_3 = x_393;
goto lbl_4;
}
else
{
uint8 x_396; obj* x_397; 
lean::dec(x_382);
lean::dec(x_386);
x_396 = 5;
x_397 = l_lean_ir_check__type(x_377, x_396, x_1, x_384);
x_3 = x_397;
goto lbl_4;
}
}
}
lbl_4:
{
obj* x_398; obj* x_400; obj* x_402; 
x_398 = lean::cnstr_get(x_3, 0);
lean::inc(x_398);
x_400 = lean::cnstr_get(x_3, 1);
lean::inc(x_400);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_402 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_release(x_3, 1);
 x_402 = x_3;
}
if (lean::obj_tag(x_398) == 0)
{
obj* x_403; obj* x_405; obj* x_406; uint8 x_407; obj* x_408; obj* x_410; obj* x_411; obj* x_412; obj* x_414; obj* x_415; obj* x_416; obj* x_417; obj* x_418; obj* x_419; obj* x_420; obj* x_421; obj* x_422; 
x_403 = lean::cnstr_get(x_398, 0);
lean::inc(x_403);
if (lean::is_shared(x_398)) {
 lean::dec(x_398);
 x_405 = lean::box(0);
} else {
 lean::cnstr_release(x_398, 0);
 x_405 = x_398;
}
x_406 = l_lean_ir_instr_to__format___main(x_0);
x_407 = 0;
x_408 = l_lean_ir_instr_decorate__error___rarg___lambda__1___closed__1;
lean::inc(x_408);
x_410 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_410, 0, x_408);
lean::cnstr_set(x_410, 1, x_406);
lean::cnstr_set_scalar(x_410, sizeof(void*)*2, x_407);
x_411 = x_410;
x_412 = l_lean_ir_phi_decorate__error___rarg___lambda__1___closed__2;
lean::inc(x_412);
x_414 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_414, 0, x_411);
lean::cnstr_set(x_414, 1, x_412);
lean::cnstr_set_scalar(x_414, sizeof(void*)*2, x_407);
x_415 = x_414;
x_416 = lean::box(1);
x_417 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_417, 0, x_415);
lean::cnstr_set(x_417, 1, x_416);
lean::cnstr_set_scalar(x_417, sizeof(void*)*2, x_407);
x_418 = x_417;
x_419 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_419, 0, x_418);
lean::cnstr_set(x_419, 1, x_403);
lean::cnstr_set_scalar(x_419, sizeof(void*)*2, x_407);
x_420 = x_419;
if (lean::is_scalar(x_405)) {
 x_421 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_421 = x_405;
}
lean::cnstr_set(x_421, 0, x_420);
if (lean::is_scalar(x_402)) {
 x_422 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_422 = x_402;
}
lean::cnstr_set(x_422, 0, x_421);
lean::cnstr_set(x_422, 1, x_400);
return x_422;
}
else
{
obj* x_424; 
lean::dec(x_0);
if (lean::is_scalar(x_402)) {
 x_424 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_424 = x_402;
}
lean::cnstr_set(x_424, 0, x_398);
lean::cnstr_set(x_424, 1, x_400);
return x_424;
}
}
}
}
obj* _init_l_lean_ir_instr_check___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("invalid assignment");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_lean_ir_instr_check___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("invalid unary operation");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_lean_ir_instr_check___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("invalid binary operation");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_lean_ir_instr_check___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("too many arguments");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_lean_ir_instr_check___closed__5() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("invalid scalar array");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_list_mmap_x_27___main___at_lean_ir_phi_check___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_7 = l_lean_ir_match__type___closed__5;
lean::inc(x_7);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
else
{
obj* x_10; obj* x_12; uint8 x_15; obj* x_17; obj* x_18; obj* x_20; obj* x_22; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
lean::dec(x_1);
x_15 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*2);
lean::inc(x_2);
x_17 = l_lean_ir_check__type(x_10, x_15, x_2, x_3);
x_18 = lean::cnstr_get(x_17, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_17, 1);
lean::inc(x_20);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_22 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 lean::cnstr_release(x_17, 1);
 x_22 = x_17;
}
if (lean::obj_tag(x_18) == 0)
{
obj* x_26; obj* x_28; obj* x_29; obj* x_30; 
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_26 = lean::cnstr_get(x_18, 0);
lean::inc(x_26);
if (lean::is_shared(x_18)) {
 lean::dec(x_18);
 x_28 = lean::box(0);
} else {
 lean::cnstr_release(x_18, 0);
 x_28 = x_18;
}
if (lean::is_scalar(x_28)) {
 x_29 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_29 = x_28;
}
lean::cnstr_set(x_29, 0, x_26);
if (lean::is_scalar(x_22)) {
 x_30 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_30 = x_22;
}
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_20);
return x_30;
}
else
{
lean::dec(x_18);
lean::dec(x_22);
x_1 = x_12;
x_3 = x_20;
goto _start;
}
}
}
}
obj* l_lean_ir_phi_check(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_7; obj* x_9; obj* x_11; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::inc(x_0);
x_6 = l_list_mmap_x_27___main___at_lean_ir_phi_check___spec__1(x_0, x_3, x_1, x_2);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_11 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 x_11 = x_6;
}
if (lean::obj_tag(x_7) == 0)
{
obj* x_12; obj* x_14; obj* x_15; uint8 x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
if (lean::is_shared(x_7)) {
 lean::dec(x_7);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_7, 0);
 x_14 = x_7;
}
x_15 = l_lean_ir_phi_to__format___main(x_0);
x_16 = 0;
x_17 = l_lean_ir_phi_decorate__error___rarg___lambda__1___closed__1;
lean::inc(x_17);
x_19 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_19, 0, x_17);
lean::cnstr_set(x_19, 1, x_15);
lean::cnstr_set_scalar(x_19, sizeof(void*)*2, x_16);
x_20 = x_19;
x_21 = l_lean_ir_phi_decorate__error___rarg___lambda__1___closed__2;
lean::inc(x_21);
x_23 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_23, 0, x_20);
lean::cnstr_set(x_23, 1, x_21);
lean::cnstr_set_scalar(x_23, sizeof(void*)*2, x_16);
x_24 = x_23;
x_25 = lean::box(1);
x_26 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_26, 0, x_24);
lean::cnstr_set(x_26, 1, x_25);
lean::cnstr_set_scalar(x_26, sizeof(void*)*2, x_16);
x_27 = x_26;
x_28 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_12);
lean::cnstr_set_scalar(x_28, sizeof(void*)*2, x_16);
x_29 = x_28;
if (lean::is_scalar(x_14)) {
 x_30 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_30 = x_14;
}
lean::cnstr_set(x_30, 0, x_29);
if (lean::is_scalar(x_11)) {
 x_31 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_31 = x_11;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_9);
return x_31;
}
else
{
obj* x_33; 
lean::dec(x_0);
if (lean::is_scalar(x_11)) {
 x_33 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_33 = x_11;
}
lean::cnstr_set(x_33, 0, x_7);
lean::cnstr_set(x_33, 1, x_9);
return x_33;
}
}
}
obj* l_lean_ir_check__result__type___main(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_6; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_6 = l_lean_ir_check__type(x_0, x_4, x_2, x_3);
return x_6;
}
}
obj* l_lean_ir_check__result__type(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_6; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_6 = l_lean_ir_check__type(x_0, x_4, x_2, x_3);
return x_6;
}
}
obj* l_lean_ir_terminator_check(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_6; obj* x_8; uint8 x_10; obj* x_12; obj* x_13; obj* x_15; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 1);
lean::inc(x_8);
x_10 = lean::unbox(x_8);
lean::dec(x_8);
x_12 = l_lean_ir_check__type(x_6, x_10, x_1, x_2);
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_12, 1);
lean::inc(x_15);
lean::dec(x_12);
x_3 = x_13;
x_4 = x_15;
goto lbl_5;
}
case 1:
{
obj* x_18; obj* x_20; obj* x_21; obj* x_23; 
x_18 = lean::cnstr_get(x_0, 0);
lean::inc(x_18);
x_20 = l_lean_ir_get__type(x_18, x_1, x_2);
x_21 = lean::cnstr_get(x_20, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_20, 1);
lean::inc(x_23);
lean::dec(x_20);
if (lean::obj_tag(x_21) == 0)
{
obj* x_26; obj* x_28; obj* x_29; 
x_26 = lean::cnstr_get(x_21, 0);
lean::inc(x_26);
if (lean::is_shared(x_21)) {
 lean::dec(x_21);
 x_28 = lean::box(0);
} else {
 lean::cnstr_release(x_21, 0);
 x_28 = x_21;
}
if (lean::is_scalar(x_28)) {
 x_29 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_29 = x_28;
}
lean::cnstr_set(x_29, 0, x_26);
x_3 = x_29;
x_4 = x_23;
goto lbl_5;
}
else
{
obj* x_30; uint8 x_33; obj* x_35; obj* x_36; uint8 x_37; 
x_30 = lean::cnstr_get(x_21, 0);
lean::inc(x_30);
lean::dec(x_21);
x_33 = lean::unbox(x_30);
lean::dec(x_30);
x_35 = l_lean_ir_type2id___main(x_33);
x_36 = l_lean_ir_is__arith__ty___closed__1;
x_37 = lean::nat_dec_eq(x_35, x_36);
if (x_37 == 0)
{
obj* x_38; uint8 x_39; 
x_38 = l_lean_ir_valid__assign__unop__types___closed__3;
x_39 = lean::nat_dec_eq(x_35, x_38);
lean::dec(x_35);
if (x_39 == 0)
{
obj* x_41; 
x_41 = l_lean_ir_terminator_check___closed__1;
lean::inc(x_41);
x_3 = x_41;
x_4 = x_23;
goto lbl_5;
}
else
{
obj* x_43; 
x_43 = l_lean_ir_match__type___closed__5;
lean::inc(x_43);
x_3 = x_43;
x_4 = x_23;
goto lbl_5;
}
}
else
{
obj* x_46; 
lean::dec(x_35);
x_46 = l_lean_ir_match__type___closed__5;
lean::inc(x_46);
x_3 = x_46;
x_4 = x_23;
goto lbl_5;
}
}
}
default:
{
obj* x_49; 
lean::dec(x_1);
x_49 = l_lean_ir_match__type___closed__5;
lean::inc(x_49);
x_3 = x_49;
x_4 = x_2;
goto lbl_5;
}
}
lbl_5:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_51; obj* x_53; obj* x_54; uint8 x_55; obj* x_56; obj* x_58; obj* x_59; obj* x_60; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_51 = lean::cnstr_get(x_3, 0);
lean::inc(x_51);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_53 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 x_53 = x_3;
}
x_54 = l_lean_ir_terminator_to__format___main(x_0);
x_55 = 0;
x_56 = l_lean_ir_terminator_decorate__error___rarg___lambda__1___closed__1;
lean::inc(x_56);
x_58 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_58, 0, x_56);
lean::cnstr_set(x_58, 1, x_54);
lean::cnstr_set_scalar(x_58, sizeof(void*)*2, x_55);
x_59 = x_58;
x_60 = l_lean_ir_phi_decorate__error___rarg___lambda__1___closed__2;
lean::inc(x_60);
x_62 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_62, 0, x_59);
lean::cnstr_set(x_62, 1, x_60);
lean::cnstr_set_scalar(x_62, sizeof(void*)*2, x_55);
x_63 = x_62;
x_64 = lean::box(1);
x_65 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_65, 0, x_63);
lean::cnstr_set(x_65, 1, x_64);
lean::cnstr_set_scalar(x_65, sizeof(void*)*2, x_55);
x_66 = x_65;
x_67 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_51);
lean::cnstr_set_scalar(x_67, sizeof(void*)*2, x_55);
x_68 = x_67;
if (lean::is_scalar(x_53)) {
 x_69 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_69 = x_53;
}
lean::cnstr_set(x_69, 0, x_68);
x_70 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_70, 0, x_69);
lean::cnstr_set(x_70, 1, x_4);
return x_70;
}
else
{
obj* x_72; 
lean::dec(x_0);
x_72 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_72, 0, x_3);
lean::cnstr_set(x_72, 1, x_4);
return x_72;
}
}
}
}
obj* _init_l_lean_ir_terminator_check___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("variable must be an uint32 or bool");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_list_mmap_x_27___main___at_lean_ir_block_check___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = l_lean_ir_match__type___closed__5;
lean::inc(x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_2);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_14; obj* x_15; obj* x_17; obj* x_19; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
lean::dec(x_0);
lean::inc(x_1);
x_14 = l_lean_ir_phi_check(x_8, x_1, x_2);
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_19 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 lean::cnstr_release(x_14, 1);
 x_19 = x_14;
}
if (lean::obj_tag(x_15) == 0)
{
obj* x_22; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_10);
lean::dec(x_1);
x_22 = lean::cnstr_get(x_15, 0);
lean::inc(x_22);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 x_24 = x_15;
}
if (lean::is_scalar(x_24)) {
 x_25 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_25 = x_24;
}
lean::cnstr_set(x_25, 0, x_22);
if (lean::is_scalar(x_19)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_19;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_17);
return x_26;
}
else
{
lean::dec(x_15);
lean::dec(x_19);
x_0 = x_10;
x_2 = x_17;
goto _start;
}
}
}
}
obj* l_list_mmap_x_27___main___at_lean_ir_block_check___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = l_lean_ir_match__type___closed__5;
lean::inc(x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_2);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_14; obj* x_15; obj* x_17; obj* x_19; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
lean::dec(x_0);
lean::inc(x_1);
x_14 = l_lean_ir_instr_check(x_8, x_1, x_2);
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_19 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 lean::cnstr_release(x_14, 1);
 x_19 = x_14;
}
if (lean::obj_tag(x_15) == 0)
{
obj* x_22; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_10);
lean::dec(x_1);
x_22 = lean::cnstr_get(x_15, 0);
lean::inc(x_22);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 x_24 = x_15;
}
if (lean::is_scalar(x_24)) {
 x_25 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_25 = x_24;
}
lean::cnstr_set(x_25, 0, x_22);
if (lean::is_scalar(x_19)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_19;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_17);
return x_26;
}
else
{
lean::dec(x_15);
lean::dec(x_19);
x_0 = x_10;
x_2 = x_17;
goto _start;
}
}
}
}
obj* l_lean_ir_block_check(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_11; obj* x_12; obj* x_14; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 3);
lean::inc(x_5);
lean::inc(x_1);
x_11 = l_list_mmap_x_27___main___at_lean_ir_block_check___spec__1(x_3, x_1, x_2);
x_12 = lean::cnstr_get(x_11, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
lean::dec(x_11);
if (lean::obj_tag(x_12) == 0)
{
obj* x_17; obj* x_19; obj* x_20; 
x_17 = lean::cnstr_get(x_12, 0);
lean::inc(x_17);
if (lean::is_shared(x_12)) {
 lean::dec(x_12);
 x_19 = lean::box(0);
} else {
 lean::cnstr_release(x_12, 0);
 x_19 = x_12;
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_17);
x_7 = x_20;
x_8 = x_14;
goto lbl_9;
}
else
{
obj* x_22; obj* x_25; obj* x_26; obj* x_28; 
lean::dec(x_12);
x_22 = lean::cnstr_get(x_0, 2);
lean::inc(x_22);
lean::inc(x_1);
x_25 = l_list_mmap_x_27___main___at_lean_ir_block_check___spec__2(x_22, x_1, x_14);
x_26 = lean::cnstr_get(x_25, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_25, 1);
lean::inc(x_28);
lean::dec(x_25);
x_7 = x_26;
x_8 = x_28;
goto lbl_9;
}
lbl_9:
{
if (lean::obj_tag(x_7) == 0)
{
obj* x_33; obj* x_35; obj* x_36; obj* x_39; uint8 x_40; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
lean::dec(x_5);
lean::dec(x_1);
x_33 = lean::cnstr_get(x_7, 0);
lean::inc(x_33);
if (lean::is_shared(x_7)) {
 lean::dec(x_7);
 x_35 = lean::box(0);
} else {
 lean::cnstr_release(x_7, 0);
 x_35 = x_7;
}
x_36 = lean::cnstr_get(x_0, 0);
lean::inc(x_36);
lean::dec(x_0);
x_39 = l_lean_to__fmt___at_lean_ir_terminator_to__format___main___spec__4(x_36);
x_40 = 0;
x_41 = l_lean_ir_block_decorate__error___rarg___lambda__1___closed__1;
lean::inc(x_41);
x_43 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_43, 0, x_41);
lean::cnstr_set(x_43, 1, x_39);
lean::cnstr_set_scalar(x_43, sizeof(void*)*2, x_40);
x_44 = x_43;
x_45 = l_lean_ir_phi_decorate__error___rarg___lambda__1___closed__2;
lean::inc(x_45);
x_47 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_47, 0, x_44);
lean::cnstr_set(x_47, 1, x_45);
lean::cnstr_set_scalar(x_47, sizeof(void*)*2, x_40);
x_48 = x_47;
x_49 = lean::box(1);
x_50 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_50, 0, x_48);
lean::cnstr_set(x_50, 1, x_49);
lean::cnstr_set_scalar(x_50, sizeof(void*)*2, x_40);
x_51 = x_50;
x_52 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_33);
lean::cnstr_set_scalar(x_52, sizeof(void*)*2, x_40);
x_53 = x_52;
if (lean::is_scalar(x_35)) {
 x_54 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_54 = x_35;
}
lean::cnstr_set(x_54, 0, x_53);
x_55 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_55, 0, x_54);
lean::cnstr_set(x_55, 1, x_8);
return x_55;
}
else
{
obj* x_56; obj* x_57; obj* x_58; obj* x_60; obj* x_62; 
if (lean::is_shared(x_7)) {
 lean::dec(x_7);
 x_56 = lean::box(0);
} else {
 lean::cnstr_release(x_7, 0);
 x_56 = x_7;
}
x_57 = l_lean_ir_terminator_check(x_5, x_1, x_8);
x_58 = lean::cnstr_get(x_57, 0);
lean::inc(x_58);
x_60 = lean::cnstr_get(x_57, 1);
lean::inc(x_60);
if (lean::is_shared(x_57)) {
 lean::dec(x_57);
 x_62 = lean::box(0);
} else {
 lean::cnstr_release(x_57, 0);
 lean::cnstr_release(x_57, 1);
 x_62 = x_57;
}
if (lean::obj_tag(x_58) == 0)
{
obj* x_63; obj* x_66; obj* x_69; uint8 x_70; obj* x_71; obj* x_73; obj* x_74; obj* x_75; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; 
x_63 = lean::cnstr_get(x_58, 0);
lean::inc(x_63);
lean::dec(x_58);
x_66 = lean::cnstr_get(x_0, 0);
lean::inc(x_66);
lean::dec(x_0);
x_69 = l_lean_to__fmt___at_lean_ir_terminator_to__format___main___spec__4(x_66);
x_70 = 0;
x_71 = l_lean_ir_block_decorate__error___rarg___lambda__1___closed__1;
lean::inc(x_71);
x_73 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_73, 0, x_71);
lean::cnstr_set(x_73, 1, x_69);
lean::cnstr_set_scalar(x_73, sizeof(void*)*2, x_70);
x_74 = x_73;
x_75 = l_lean_ir_phi_decorate__error___rarg___lambda__1___closed__2;
lean::inc(x_75);
x_77 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_77, 0, x_74);
lean::cnstr_set(x_77, 1, x_75);
lean::cnstr_set_scalar(x_77, sizeof(void*)*2, x_70);
x_78 = x_77;
x_79 = lean::box(1);
x_80 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_80, 0, x_78);
lean::cnstr_set(x_80, 1, x_79);
lean::cnstr_set_scalar(x_80, sizeof(void*)*2, x_70);
x_81 = x_80;
x_82 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_82, 0, x_81);
lean::cnstr_set(x_82, 1, x_63);
lean::cnstr_set_scalar(x_82, sizeof(void*)*2, x_70);
x_83 = x_82;
if (lean::is_scalar(x_56)) {
 x_84 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_84 = x_56;
 lean::cnstr_set_tag(x_56, 0);
}
lean::cnstr_set(x_84, 0, x_83);
if (lean::is_scalar(x_62)) {
 x_85 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_85 = x_62;
}
lean::cnstr_set(x_85, 0, x_84);
lean::cnstr_set(x_85, 1, x_60);
return x_85;
}
else
{
obj* x_88; 
lean::dec(x_0);
lean::dec(x_56);
if (lean::is_scalar(x_62)) {
 x_88 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_88 = x_62;
}
lean::cnstr_set(x_88, 0, x_58);
lean::cnstr_set(x_88, 1, x_60);
return x_88;
}
}
}
}
}
obj* l_list_mmap_x_27___main___at_lean_ir_decl_check___main___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = l_lean_ir_match__type___closed__5;
lean::inc(x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_2);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_14; obj* x_15; obj* x_17; obj* x_19; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
lean::dec(x_0);
lean::inc(x_1);
x_14 = l_lean_ir_block_check(x_8, x_1, x_2);
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_19 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 lean::cnstr_release(x_14, 1);
 x_19 = x_14;
}
if (lean::obj_tag(x_15) == 0)
{
obj* x_22; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_10);
lean::dec(x_1);
x_22 = lean::cnstr_get(x_15, 0);
lean::inc(x_22);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 x_24 = x_15;
}
if (lean::is_scalar(x_24)) {
 x_25 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_25 = x_24;
}
lean::cnstr_set(x_25, 0, x_22);
if (lean::is_scalar(x_19)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_19;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_17);
return x_26;
}
else
{
lean::dec(x_15);
lean::dec(x_19);
x_0 = x_10;
x_2 = x_17;
goto _start;
}
}
}
}
obj* l_lean_ir_decl_check___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = l_lean_ir_match__type___closed__5;
lean::inc(x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_2);
return x_7;
}
else
{
obj* x_8; obj* x_11; 
x_8 = lean::cnstr_get(x_0, 1);
lean::inc(x_8);
lean::dec(x_0);
x_11 = l_list_mmap_x_27___main___at_lean_ir_decl_check___main___spec__1(x_8, x_1, x_2);
return x_11;
}
}
}
obj* l_lean_ir_decl_check(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_ir_decl_check___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_except__t_bind__cont___at_lean_ir_type__check___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_0);
lean::dec(x_2);
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 x_8 = x_1;
}
if (lean::is_scalar(x_8)) {
 x_9 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_9 = x_8;
}
lean::cnstr_set(x_9, 0, x_6);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_3);
return x_10;
}
else
{
obj* x_11; obj* x_14; 
x_11 = lean::cnstr_get(x_1, 0);
lean::inc(x_11);
lean::dec(x_1);
x_14 = lean::apply_3(x_0, x_11, x_2, x_3);
return x_14;
}
}
}
obj* l_except__t_bind__cont___at_lean_ir_type__check___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_ir_type__check___spec__1___rarg), 4, 0);
return x_4;
}
}
obj* l_reader__t_bind___at_lean_ir_type__check___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_11; 
lean::inc(x_2);
x_5 = lean::apply_2(x_0, x_2, x_3);
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
x_11 = lean::apply_3(x_1, x_6, x_2, x_8);
return x_11;
}
}
obj* l_reader__t_bind___at_lean_ir_type__check___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_ir_type__check___spec__2___rarg), 4, 0);
return x_4;
}
}
obj* l_lean_ir_type__check(obj* x_0, obj* x_1) {
_start:
{
obj* x_3; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_15; 
lean::inc(x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_decl_infer__types), 3, 1);
lean::closure_set(x_3, 0, x_0);
lean::inc(x_0);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_type__check___lambda__1), 4, 1);
lean::closure_set(x_5, 0, x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_ir_type__check___spec__1___rarg), 4, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_ir_type__check___spec__2___rarg), 4, 2);
lean::closure_set(x_7, 0, x_3);
lean::closure_set(x_7, 1, x_6);
x_8 = l_lean_ir_type__check___closed__1;
lean::inc(x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_ir_type__check___spec__2___rarg), 4, 2);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_8);
x_11 = l_lean_ir_decl_header___main(x_0);
x_12 = lean::cnstr_get(x_11, 2);
lean::inc(x_12);
lean::dec(x_11);
x_15 = l_lean_ir_type__checker__m_run___rarg(x_10, x_1, x_12);
return x_15;
}
}
obj* _init_l_lean_ir_type__check___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_type__check___lambda__2), 3, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_ir_type__check___spec__1___rarg), 4, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_ir_type__check___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; 
lean::dec(x_1);
x_5 = l_lean_ir_decl_check___main(x_0, x_2, x_3);
return x_5;
}
}
obj* l_lean_ir_type__check___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
lean::inc(x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_2);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_2);
return x_7;
}
}
void initialize_init_lean_ir_instances();
void initialize_init_lean_ir_format();
void initialize_init_control_combinators();
static bool _G_initialized = false;
void initialize_init_lean_ir_type__check() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_lean_ir_instances();
 initialize_init_lean_ir_format();
 initialize_init_control_combinators();
 l_lean_ir_is__arith__ty___closed__1 = _init_l_lean_ir_is__arith__ty___closed__1();
 l_lean_ir_is__nonfloat__arith__ty___closed__1 = _init_l_lean_ir_is__nonfloat__arith__ty___closed__1();
 l_lean_ir_is__nonfloat__arith__ty___closed__2 = _init_l_lean_ir_is__nonfloat__arith__ty___closed__2();
 l_lean_ir_valid__assign__unop__types___closed__1 = _init_l_lean_ir_valid__assign__unop__types___closed__1();
 l_lean_ir_valid__assign__unop__types___closed__2 = _init_l_lean_ir_valid__assign__unop__types___closed__2();
 l_lean_ir_valid__assign__unop__types___closed__3 = _init_l_lean_ir_valid__assign__unop__types___closed__3();
 l_lean_ir_valid__assign__unop__types___closed__4 = _init_l_lean_ir_valid__assign__unop__types___closed__4();
 l_lean_ir_type__checker__m = _init_l_lean_ir_type__checker__m();
 l_lean_ir_match__type___closed__1 = _init_l_lean_ir_match__type___closed__1();
 l_lean_ir_match__type___closed__2 = _init_l_lean_ir_match__type___closed__2();
 l_lean_ir_match__type___closed__3 = _init_l_lean_ir_match__type___closed__3();
 l_lean_ir_match__type___closed__4 = _init_l_lean_ir_match__type___closed__4();
 l_lean_ir_match__type___closed__5 = _init_l_lean_ir_match__type___closed__5();
 l_lean_ir_get__type___closed__1 = _init_l_lean_ir_get__type___closed__1();
 l_lean_ir_check__type___closed__1 = _init_l_lean_ir_check__type___closed__1();
 l_lean_ir_check__type___closed__2 = _init_l_lean_ir_check__type___closed__2();
 l_lean_ir_check__ne__type___closed__1 = _init_l_lean_ir_check__ne__type___closed__1();
 l_lean_ir_check__ne__type___closed__2 = _init_l_lean_ir_check__ne__type___closed__2();
 l_lean_ir_invalid__literal___rarg___closed__1 = _init_l_lean_ir_invalid__literal___rarg___closed__1();
 l_lean_ir_get__decl___closed__1 = _init_l_lean_ir_get__decl___closed__1();
 l_lean_ir_check__arg__types___main___closed__1 = _init_l_lean_ir_check__arg__types___main___closed__1();
 l_list_mmap_x_27___main___at_lean_ir_instr_check___spec__2___closed__1 = _init_l_list_mmap_x_27___main___at_lean_ir_instr_check___spec__2___closed__1();
 l_lean_ir_instr_check___closed__1 = _init_l_lean_ir_instr_check___closed__1();
 l_lean_ir_instr_check___closed__2 = _init_l_lean_ir_instr_check___closed__2();
 l_lean_ir_instr_check___closed__3 = _init_l_lean_ir_instr_check___closed__3();
 l_lean_ir_instr_check___closed__4 = _init_l_lean_ir_instr_check___closed__4();
 l_lean_ir_instr_check___closed__5 = _init_l_lean_ir_instr_check___closed__5();
 l_lean_ir_terminator_check___closed__1 = _init_l_lean_ir_terminator_check___closed__1();
 l_lean_ir_type__check___closed__1 = _init_l_lean_ir_type__check___closed__1();
}