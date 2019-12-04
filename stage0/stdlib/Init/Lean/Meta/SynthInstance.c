// Lean compiler output
// Module: Init.Lean.Meta.SynthInstance
// Imports: Init.Default Init.Lean.Meta.Basic Init.Lean.Meta.Instances Init.Lean.Meta.LevelDefEq Init.Lean.Meta.AbstractMVars
#include "runtime/lean.h"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_PersistentHashMap_find___at_Lean_Meta_SynthInstance_findEntry___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_Meta_SynthInstance_findEntry___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_forall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth___main___closed__3;
size_t l_USize_add(size_t, size_t);
uint8_t lean_is_out_param(lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_mkHashMap___at_Lean_Meta_SynthInstance_mkTableKey___spec__1(lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main___closed__1;
lean_object* l___private_Init_Lean_Meta_SynthInstance_1__getTraceState(lean_object*);
lean_object* l_List_mapM___main___at_Lean_Meta_SynthInstance_getInstances___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_wakeUp___closed__7;
lean_object* l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getTop(lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__4___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main___closed__2;
lean_object* l___private_Init_Lean_Meta_SynthInstance_4__preprocess___closed__1;
lean_object* l_Lean_Meta_SynthInstance_tryAnswer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___lambda__2(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Option_toLOption___rarg(lean_object*);
lean_object* l_AssocList_foldlM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__7(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Exception_toMessageData___closed__51;
uint8_t l_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__4(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l___private_Init_Lean_Meta_SynthInstance_4__preprocess___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_mdata(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_synthInstance___spec__7(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_3__mkInstanceTelescopeAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForall(lean_object*, lean_object*, lean_object*, lean_object*);
extern size_t l_PersistentHashMap_insertAux___main___rarg___closed__2;
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkTableKey___closed__3;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_PersistentHashMap_find___at_Lean_Meta_synthInstance___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_2__getOptions___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__2;
lean_object* l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_SynthInstance_trace___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_SynthM_inhabited___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_Meta_SynthInstance_findEntry___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
size_t l_USize_sub(size_t, size_t);
extern lean_object* l_Array_empty___closed__1;
lean_object* l_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___lambda__1(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__1;
lean_object* l_Lean_Meta_isExprDefEqAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__7;
lean_object* l___private_Init_Util_1__mkPanicMessage(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Level_hasMVar(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_main___closed__3;
lean_object* l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_append___rarg(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_arrayExpr_toMessageData___main(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_isLevelDefEq___closed__5;
lean_object* l_Lean_Meta_SynthInstance_SynthM_inhabited(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkTableKey___closed__1;
lean_object* l_mkHashMap___at_Lean_Meta_SynthInstance_mkTableKey___spec__2(lean_object*);
lean_object* l_Lean_Meta_instantiateLevelMVars(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Init_Lean_Trace_3__checkTraceOptionAux___main(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_newAnswer(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__3;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getEntry___closed__3;
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkTableKey___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_resume(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn___main(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_withMCtx(lean_object*);
extern lean_object* l_Lean_Level_Inhabited;
extern lean_object* l_Lean_Expr_getAppArgs___closed__1;
lean_object* l___private_Init_Lean_Meta_SynthInstance_4__preprocess(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__5;
lean_object* l_Lean_Meta_SynthInstance_traceCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_findEntry___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Exception_Inhabited___closed__1;
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_Meta_synthInstance___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_Lean_Meta_SynthInstance_mkTableKey___closed__2;
lean_object* l_Lean_Meta_SynthInstance_main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_findEntry(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
lean_object* l_List_mapM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__9(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___closed__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getInstances(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_Meta_SynthInstance_findEntry___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkInstanceTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_find___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux___main(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClass(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1(lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_Meta_SynthInstance_findEntry___spec__2(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_Meta_isLevelDefEqAux___main___closed__2;
lean_object* l___private_Init_Lean_Meta_SynthInstance_1__getTraceState___rarg(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_wakeUp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___rarg___closed__1;
uint8_t l_Lean_Meta_SynthInstance_Waiter_isRoot(lean_object*);
lean_object* l_List_foldlM___main___at___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Exception_toMessageData___closed__4;
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_Inhabited___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_meta2Synth(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getTop___boxed(lean_object*);
lean_object* l_Lean_Meta_abstractMVars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth___main___closed__6;
lean_object* l_Lean_Meta_SynthInstance_tryResolve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_HashMapImp_find___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__1___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at_Lean_Meta_SynthInstance_getInstances___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_traceCore___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_Name_append___main(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_generate___closed__3;
lean_object* l_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_find___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isLevelDefEqAux___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_level_update_max(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth___main___closed__5;
lean_object* l_Lean_Meta_SynthInstance_meta2Synth___closed__1;
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tracer___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_generate(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_SynthM_inhabited___closed__1;
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_Meta_synthInstance___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getEntry___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_modifyTop(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_consume___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getNextToResume___rarg(lean_object*);
lean_object* l___private_Init_Lean_Meta_LevelDefEq_11__processPostponed(lean_object*, lean_object*);
lean_object* l_Lean_fmt___at_Lean_Meta_SynthInstance_tryResolveCore___spec__1(lean_object*);
size_t l_Lean_Name_hash(lean_object*);
extern lean_object* l_Lean_MessageData_coeOfArrayExpr___closed__2;
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__10;
uint8_t l_Array_contains___at_Lean_Meta_SynthInstance_newAnswer___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__4;
extern lean_object* l_PersistentHashMap_insertAux___main___rarg___closed__3;
lean_object* l_Lean_Meta_SynthInstance_Consumernode_inhabited___closed__1;
size_t l_Lean_Expr_hash(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_GeneratorNode_inhabited;
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___boxed(lean_object*);
lean_object* l_Lean_Meta_getGlobalInstances___rarg(lean_object*);
lean_object* l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_SynthInstance_trace___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth___main___closed__4;
extern lean_object* l_PersistentArray_empty___closed__3;
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___closed__1;
lean_object* l___private_Init_Lean_Meta_LevelDefEq_12__restore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_step(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_Meta_synthInstance___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_3__mkInstanceTelescopeAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_modn(size_t, lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels___closed__1;
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_HashMapImp_find___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__1(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find___at_Lean_Meta_SynthInstance_findEntry___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_newSubgoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_mul(size_t, size_t);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_Meta_synthInstance___spec__2(lean_object*, size_t, lean_object*);
lean_object* l_mkHashMapImp___rarg(lean_object*);
lean_object* l___private_Init_Lean_Expr_3__getAppArgsAux___main(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_let(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_Meta_whnf(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find___at_Lean_Meta_synthInstance___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l_AssocList_foldlM___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__7(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getNextToResume___boxed(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth___main___closed__1;
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__9;
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_consume___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_proj(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_trace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__8(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tracer___closed__4;
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__4;
lean_object* l_Lean_Meta_SynthInstance_getEntry(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getEntry___closed__2;
lean_object* l_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getEntry___closed__1;
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_HashMapImp_find___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__1(lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getUnify___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_wakeUp___closed__2;
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insert___at_Lean_Meta_synthInstance___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_hasAssignableMVar(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam___lambda__2___closed__1;
lean_object* l___private_Init_Lean_Trace_1__addNode___at___private_Init_Lean_Meta_LevelDefEq_9__processPostponedStep___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1___boxed(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tracer___closed__3;
lean_object* l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__2;
lean_object* l_Lean_Meta_SynthInstance_wakeUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_withMCtx___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_trace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_1__getTraceState___boxed(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getTop___rarg(lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_3__mkInstanceTelescopeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_sort(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_wakeUp___closed__1;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_USize_decLe(size_t, size_t);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___closed__2;
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_List_mapM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__9___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__1;
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_3__mkInstanceTelescopeAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_Waiter_isRoot___boxed(lean_object*);
uint8_t l_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__4(lean_object*, lean_object*);
lean_object* l_panic(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_incDepth(lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth___main___closed__2;
lean_object* l_Lean_Meta_SynthInstance_wakeUp___closed__4;
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tracer;
lean_object* l_Lean_Meta_SynthInstance_mkAnswer___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkTableKey(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getNextToResume(lean_object*);
uint8_t l_Lean_MetavarContext_isLevelAssignable(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_Consumernode_inhabited;
uint8_t l_Lean_Meta_AbstractMVarsResult_beq(lean_object*, lean_object*);
lean_object* lean_expr_update_lambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_wakeUp___closed__6;
lean_object* l_Lean_Meta_SynthInstance_traceCore(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2;
lean_object* lean_level_update_succ(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_openAbstractMVarsResult(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_isLevelDefEq___closed__8;
lean_object* l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_modifyTop___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_SynthM_inhabited___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambda(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_generate___closed__2;
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_Inhabited;
lean_object* l_Lean_Meta_SynthInstance_generate___closed__1;
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkTableKeyFor(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__1;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkAnswer(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Trace_2__getResetTraces___at___private_Init_Lean_Meta_LevelDefEq_9__processPostponedStep___spec__6___rarg(lean_object*);
lean_object* l_HashMapImp_moveEntries___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_find___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__2___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_AbstractMVarsResult_inhabited;
lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__5;
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstance___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getInstances___closed__1;
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_Meta_synthInstance___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MetavarContext_isExprAssignable(lean_object*, lean_object*);
lean_object* l_AssocList_find___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___rarg(lean_object*);
extern lean_object* l_Lean_MetavarContext_Inhabited___closed__1;
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_liftMeta___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_isClassQuick___main___closed__1;
lean_object* l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_traceCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_get_expr_assignment(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__6;
extern lean_object* l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_consume(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_expr_update_app(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__1;
lean_object* l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_synthInstance___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_SynthInstance_2__getOptions(lean_object*, lean_object*);
lean_object* l_HashMapImp_find___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__3;
lean_object* l_Lean_Meta_SynthInstance_tracer___closed__1;
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___closed__1;
lean_object* l_Lean_Meta_SynthInstance_tracer___closed__2;
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1;
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__8(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_main___closed__2;
lean_object* l_Lean_Meta_SynthInstance_tracer___lambda__1(lean_object*, lean_object*, lean_object*);
uint8_t lean_has_out_params(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__3;
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstance___spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_HashMapImp_moveEntries___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_const(lean_object*, lean_object*);
extern lean_object* l_Lean_Level_updateIMax_x21___closed__2;
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__8;
lean_object* l_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_resume___closed__2;
lean_object* l_Lean_Meta_forallTelescopeReducing___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_main___closed__1;
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___closed__3;
lean_object* l_Lean_Meta_SynthInstance_resume___closed__1;
lean_object* l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_contains___at_Lean_Meta_SynthInstance_newAnswer___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_wakeUp___closed__3;
lean_object* l_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__4___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_liftMeta(lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_wakeUp___closed__5;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* _init_l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Expr_Inhabited___closed__1;
x_2 = l_Lean_MetavarContext_Inhabited___closed__1;
x_3 = l_Array_empty___closed__1;
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 2, x_2);
lean_ctor_set(x_5, 3, x_3);
lean_ctor_set(x_5, 4, x_4);
return x_5;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_GeneratorNode_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1;
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_Consumernode_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_Inhabited___closed__1;
x_3 = l_Lean_MetavarContext_Inhabited___closed__1;
x_4 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
lean_ctor_set(x_4, 3, x_1);
return x_4;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_Consumernode_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_SynthInstance_Consumernode_inhabited___closed__1;
return x_1;
}
}
uint8_t l_Lean_Meta_SynthInstance_Waiter_isRoot(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_Waiter_isRoot___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_SynthInstance_Waiter_isRoot(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_AssocList_find___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_HashMapImp_find___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Name_hash(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_AssocList_find___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__2(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
uint8_t l_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_AssocList_foldlM___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = l_Lean_Name_hash(x_12);
x_17 = lean_usize_modn(x_16, x_15);
lean_dec(x_15);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
lean_object* l_HashMapImp_moveEntries___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_AssocList_foldlM___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__7(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_HashMapImp_moveEntries___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__6(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_3, 2);
x_8 = lean_name_eq(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__8(x_1, x_2, x_7);
lean_ctor_set(x_3, 2, x_9);
return x_3;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_ctor_get(x_3, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_13 = lean_name_eq(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__8(x_1, x_2, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
lean_ctor_set(x_16, 2, x_12);
return x_16;
}
}
}
}
}
lean_object* l_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__4(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__5(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__8(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = l_Lean_Name_hash(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__4(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__5(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__8(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_synthKey");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Level_hasMVar(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_6, x_2, x_3);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_level_update_succ(x_1, x_9);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_7);
x_13 = lean_level_update_succ(x_1, x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
case 2:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
x_17 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_15, x_2, x_3);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_16, x_2, x_19);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_level_update_max(x_1, x_18, x_22);
lean_ctor_set(x_20, 0, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_20);
x_26 = lean_level_update_max(x_1, x_18, x_24);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
case 3:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_29);
lean_dec(x_1);
x_30 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_28, x_2, x_3);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_29, x_2, x_31);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
x_35 = l_Lean_Level_Inhabited;
x_36 = l_Lean_Level_updateIMax_x21___closed__2;
x_37 = lean_panic_fn(x_36);
lean_ctor_set(x_32, 0, x_37);
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
lean_dec(x_32);
x_39 = l_Lean_Level_Inhabited;
x_40 = l_Lean_Level_updateIMax_x21___closed__2;
x_41 = lean_panic_fn(x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_38);
return x_42;
}
}
case 5:
{
lean_object* x_43; uint8_t x_44; 
x_43 = lean_ctor_get(x_1, 0);
lean_inc(x_43);
x_44 = l_Lean_MetavarContext_isLevelAssignable(x_2, x_43);
if (x_44 == 0)
{
lean_object* x_45; 
lean_dec(x_43);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_1);
lean_ctor_set(x_45, 1, x_3);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_1);
x_46 = lean_ctor_get(x_3, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_3, 1);
lean_inc(x_47);
x_48 = lean_ctor_get(x_3, 2);
lean_inc(x_48);
x_49 = lean_ctor_get(x_3, 3);
lean_inc(x_49);
x_50 = l_HashMapImp_find___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__1(x_48, x_43);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_3);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_52 = lean_ctor_get(x_3, 3);
lean_dec(x_52);
x_53 = lean_ctor_get(x_3, 2);
lean_dec(x_53);
x_54 = lean_ctor_get(x_3, 1);
lean_dec(x_54);
x_55 = lean_ctor_get(x_3, 0);
lean_dec(x_55);
x_56 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2;
lean_inc(x_46);
x_57 = lean_name_mk_numeral(x_56, x_46);
x_58 = l_Lean_mkLevelParam(x_57);
x_59 = lean_unsigned_to_nat(1u);
x_60 = lean_nat_add(x_46, x_59);
lean_dec(x_46);
lean_inc(x_58);
x_61 = l_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__3(x_48, x_43, x_58);
lean_ctor_set(x_3, 2, x_61);
lean_ctor_set(x_3, 0, x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_58);
lean_ctor_set(x_62, 1, x_3);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_3);
x_63 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2;
lean_inc(x_46);
x_64 = lean_name_mk_numeral(x_63, x_46);
x_65 = l_Lean_mkLevelParam(x_64);
x_66 = lean_unsigned_to_nat(1u);
x_67 = lean_nat_add(x_46, x_66);
lean_dec(x_46);
lean_inc(x_65);
x_68 = l_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__3(x_48, x_43, x_65);
x_69 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_47);
lean_ctor_set(x_69, 2, x_68);
lean_ctor_set(x_69, 3, x_49);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_65);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
else
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_43);
x_71 = lean_ctor_get(x_50, 0);
lean_inc(x_71);
lean_dec(x_50);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_3);
return x_72;
}
}
}
default: 
{
lean_object* x_73; 
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_1);
lean_ctor_set(x_73, 1, x_3);
return x_73;
}
}
}
}
}
lean_object* l_AssocList_find___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AssocList_find___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_HashMapImp_find___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_HashMapImp_find___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_AssocList_find___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_HashMapImp_find___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Name_hash(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_AssocList_find___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__2(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
uint8_t l_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_AssocList_foldlM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = l_Lean_Name_hash(x_12);
x_17 = lean_usize_modn(x_16, x_15);
lean_dec(x_15);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
lean_object* l_HashMapImp_moveEntries___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_AssocList_foldlM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__7(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_HashMapImp_moveEntries___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__6(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_3, 2);
x_8 = lean_name_eq(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__8(x_1, x_2, x_7);
lean_ctor_set(x_3, 2, x_9);
return x_3;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_ctor_get(x_3, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_13 = lean_name_eq(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__8(x_1, x_2, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
lean_ctor_set(x_16, 2, x_12);
return x_16;
}
}
}
}
}
lean_object* l_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__4(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__5(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__8(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = l_Lean_Name_hash(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__4(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__5(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__8(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_List_mapM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_7, x_2, x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_List_mapM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__9(x_8, x_2, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_10);
lean_ctor_set(x_12, 0, x_1);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_20 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_18, x_2, x_3);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_List_mapM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__9(x_19, x_2, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_26 = x_23;
} else {
 lean_dec_ref(x_23);
 x_26 = lean_box(0);
}
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_24);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Expr_hasMVar(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = l_Lean_MetavarContext_isExprAssignable(x_2, x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_1);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_3, 3);
lean_inc(x_12);
x_13 = l_HashMapImp_find___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__1(x_12, x_6);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_ctor_get(x_3, 3);
lean_dec(x_15);
x_16 = lean_ctor_get(x_3, 2);
lean_dec(x_16);
x_17 = lean_ctor_get(x_3, 1);
lean_dec(x_17);
x_18 = lean_ctor_get(x_3, 0);
lean_dec(x_18);
x_19 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2;
lean_inc(x_10);
x_20 = lean_name_mk_numeral(x_19, x_10);
x_21 = l_Lean_mkFVar(x_20);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_10, x_22);
lean_dec(x_10);
lean_inc(x_21);
x_24 = l_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__3(x_12, x_6, x_21);
lean_ctor_set(x_3, 3, x_24);
lean_ctor_set(x_3, 1, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_21);
lean_ctor_set(x_25, 1, x_3);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_3);
x_26 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2;
lean_inc(x_10);
x_27 = lean_name_mk_numeral(x_26, x_10);
x_28 = l_Lean_mkFVar(x_27);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_10, x_29);
lean_dec(x_10);
lean_inc(x_28);
x_31 = l_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__3(x_12, x_6, x_28);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_9);
lean_ctor_set(x_32, 1, x_30);
lean_ctor_set(x_32, 2, x_11);
lean_ctor_set(x_32, 3, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
x_34 = lean_ctor_get(x_13, 0);
lean_inc(x_34);
lean_dec(x_13);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_3);
return x_35;
}
}
}
case 3:
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_36 = lean_ctor_get(x_1, 0);
lean_inc(x_36);
x_37 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_36, x_2, x_3);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_expr_update_sort(x_1, x_39);
lean_ctor_set(x_37, 0, x_40);
return x_37;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_37, 0);
x_42 = lean_ctor_get(x_37, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_37);
x_43 = lean_expr_update_sort(x_1, x_41);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
case 4:
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_45 = lean_ctor_get(x_1, 1);
lean_inc(x_45);
x_46 = l_List_mapM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__9(x_45, x_2, x_3);
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_46, 0);
x_49 = lean_expr_update_const(x_1, x_48);
lean_ctor_set(x_46, 0, x_49);
return x_46;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_ctor_get(x_46, 0);
x_51 = lean_ctor_get(x_46, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_46);
x_52 = lean_expr_update_const(x_1, x_50);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
case 5:
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_54 = lean_ctor_get(x_1, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_1, 1);
lean_inc(x_55);
x_56 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_54, x_2, x_3);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_55, x_2, x_58);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_59, 0);
x_62 = lean_expr_update_app(x_1, x_57, x_61);
lean_ctor_set(x_59, 0, x_62);
return x_59;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_59, 0);
x_64 = lean_ctor_get(x_59, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_59);
x_65 = lean_expr_update_app(x_1, x_57, x_63);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
case 6:
{
lean_object* x_67; lean_object* x_68; uint64_t x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_67 = lean_ctor_get(x_1, 1);
lean_inc(x_67);
x_68 = lean_ctor_get(x_1, 2);
lean_inc(x_68);
x_69 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_70 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_67, x_2, x_3);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_68, x_2, x_72);
x_74 = !lean_is_exclusive(x_73);
if (x_74 == 0)
{
lean_object* x_75; uint8_t x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_73, 0);
x_76 = (uint8_t)((x_69 << 24) >> 61);
x_77 = lean_expr_update_lambda(x_1, x_76, x_71, x_75);
lean_ctor_set(x_73, 0, x_77);
return x_73;
}
else
{
lean_object* x_78; lean_object* x_79; uint8_t x_80; lean_object* x_81; lean_object* x_82; 
x_78 = lean_ctor_get(x_73, 0);
x_79 = lean_ctor_get(x_73, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_73);
x_80 = (uint8_t)((x_69 << 24) >> 61);
x_81 = lean_expr_update_lambda(x_1, x_80, x_71, x_78);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_79);
return x_82;
}
}
case 7:
{
lean_object* x_83; lean_object* x_84; uint64_t x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_83 = lean_ctor_get(x_1, 1);
lean_inc(x_83);
x_84 = lean_ctor_get(x_1, 2);
lean_inc(x_84);
x_85 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_86 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_83, x_2, x_3);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_84, x_2, x_88);
x_90 = !lean_is_exclusive(x_89);
if (x_90 == 0)
{
lean_object* x_91; uint8_t x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_89, 0);
x_92 = (uint8_t)((x_85 << 24) >> 61);
x_93 = lean_expr_update_forall(x_1, x_92, x_87, x_91);
lean_ctor_set(x_89, 0, x_93);
return x_89;
}
else
{
lean_object* x_94; lean_object* x_95; uint8_t x_96; lean_object* x_97; lean_object* x_98; 
x_94 = lean_ctor_get(x_89, 0);
x_95 = lean_ctor_get(x_89, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_89);
x_96 = (uint8_t)((x_85 << 24) >> 61);
x_97 = lean_expr_update_forall(x_1, x_96, x_87, x_94);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_95);
return x_98;
}
}
case 8:
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; uint8_t x_109; 
x_99 = lean_ctor_get(x_1, 1);
lean_inc(x_99);
x_100 = lean_ctor_get(x_1, 2);
lean_inc(x_100);
x_101 = lean_ctor_get(x_1, 3);
lean_inc(x_101);
x_102 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_99, x_2, x_3);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_100, x_2, x_104);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
x_108 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_101, x_2, x_107);
x_109 = !lean_is_exclusive(x_108);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; 
x_110 = lean_ctor_get(x_108, 0);
x_111 = lean_expr_update_let(x_1, x_103, x_106, x_110);
lean_ctor_set(x_108, 0, x_111);
return x_108;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_112 = lean_ctor_get(x_108, 0);
x_113 = lean_ctor_get(x_108, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_108);
x_114 = lean_expr_update_let(x_1, x_103, x_106, x_112);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_113);
return x_115;
}
}
case 10:
{
lean_object* x_116; lean_object* x_117; uint8_t x_118; 
x_116 = lean_ctor_get(x_1, 1);
lean_inc(x_116);
x_117 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_116, x_2, x_3);
x_118 = !lean_is_exclusive(x_117);
if (x_118 == 0)
{
lean_object* x_119; lean_object* x_120; 
x_119 = lean_ctor_get(x_117, 0);
x_120 = lean_expr_update_mdata(x_1, x_119);
lean_ctor_set(x_117, 0, x_120);
return x_117;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_121 = lean_ctor_get(x_117, 0);
x_122 = lean_ctor_get(x_117, 1);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_117);
x_123 = lean_expr_update_mdata(x_1, x_121);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_122);
return x_124;
}
}
case 11:
{
lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_125 = lean_ctor_get(x_1, 2);
lean_inc(x_125);
x_126 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_125, x_2, x_3);
x_127 = !lean_is_exclusive(x_126);
if (x_127 == 0)
{
lean_object* x_128; lean_object* x_129; 
x_128 = lean_ctor_get(x_126, 0);
x_129 = lean_expr_update_proj(x_1, x_128);
lean_ctor_set(x_126, 0, x_129);
return x_126;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_130 = lean_ctor_get(x_126, 0);
x_131 = lean_ctor_get(x_126, 1);
lean_inc(x_131);
lean_inc(x_130);
lean_dec(x_126);
x_132 = lean_expr_update_proj(x_1, x_130);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_131);
return x_133;
}
}
default: 
{
lean_object* x_134; 
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_1);
lean_ctor_set(x_134, 1, x_3);
return x_134;
}
}
}
}
}
lean_object* l_AssocList_find___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AssocList_find___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_HashMapImp_find___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_HashMapImp_find___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_List_mapM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_mapM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__9(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_mkHashMap___at_Lean_Meta_SynthInstance_mkTableKey___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_mkHashMap___at_Lean_Meta_SynthInstance_mkTableKey___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_mkTableKey___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_mkTableKey___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_mkTableKey___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Meta_SynthInstance_mkTableKey___closed__1;
x_3 = l_Lean_Meta_SynthInstance_mkTableKey___closed__2;
x_4 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_1);
lean_ctor_set(x_4, 2, x_2);
lean_ctor_set(x_4, 3, x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_mkTableKey(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lean_Meta_SynthInstance_mkTableKey___closed__3;
x_4 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_2, x_1, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_SynthInstance_mkTableKey___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_SynthInstance_mkTableKey(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_SynthInstance_SynthM_inhabited___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_SynthM_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_Inhabited___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_SynthM_inhabited___lambda__1___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_SynthM_inhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_SynthInstance_SynthM_inhabited___closed__1;
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_SynthM_inhabited___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_SynthInstance_SynthM_inhabited___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_1__getTraceState___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 4);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_1__getTraceState(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_SynthInstance_1__getTraceState___rarg), 1, 0);
return x_2;
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_1__getTraceState___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Init_Lean_Meta_SynthInstance_1__getTraceState(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_2__getOptions(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_2__getOptions___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_Lean_Meta_SynthInstance_2__getOptions(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_SynthInstance_tracer___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_5, 4);
x_8 = lean_apply_1(x_1, x_7);
lean_ctor_set(x_5, 4, x_8);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = lean_ctor_get(x_5, 1);
x_13 = lean_ctor_get(x_5, 2);
x_14 = lean_ctor_get(x_5, 3);
x_15 = lean_ctor_get(x_5, 4);
x_16 = lean_ctor_get(x_5, 5);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_5);
x_17 = lean_apply_1(x_1, x_15);
x_18 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_12);
lean_ctor_set(x_18, 2, x_13);
lean_ctor_set(x_18, 3, x_14);
lean_ctor_set(x_18, 4, x_17);
lean_ctor_set(x_18, 5, x_16);
lean_ctor_set(x_3, 0, x_18);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_3);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_21 = lean_ctor_get(x_3, 0);
x_22 = lean_ctor_get(x_3, 1);
x_23 = lean_ctor_get(x_3, 2);
x_24 = lean_ctor_get(x_3, 3);
x_25 = lean_ctor_get(x_3, 4);
x_26 = lean_ctor_get(x_3, 5);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_3);
x_27 = lean_ctor_get(x_21, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_21, 2);
lean_inc(x_29);
x_30 = lean_ctor_get(x_21, 3);
lean_inc(x_30);
x_31 = lean_ctor_get(x_21, 4);
lean_inc(x_31);
x_32 = lean_ctor_get(x_21, 5);
lean_inc(x_32);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 lean_ctor_release(x_21, 1);
 lean_ctor_release(x_21, 2);
 lean_ctor_release(x_21, 3);
 lean_ctor_release(x_21, 4);
 lean_ctor_release(x_21, 5);
 x_33 = x_21;
} else {
 lean_dec_ref(x_21);
 x_33 = lean_box(0);
}
x_34 = lean_apply_1(x_1, x_31);
if (lean_is_scalar(x_33)) {
 x_35 = lean_alloc_ctor(0, 6, 0);
} else {
 x_35 = x_33;
}
lean_ctor_set(x_35, 0, x_27);
lean_ctor_set(x_35, 1, x_28);
lean_ctor_set(x_35, 2, x_29);
lean_ctor_set(x_35, 3, x_30);
lean_ctor_set(x_35, 4, x_34);
lean_ctor_set(x_35, 5, x_32);
x_36 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_22);
lean_ctor_set(x_36, 2, x_23);
lean_ctor_set(x_36, 3, x_24);
lean_ctor_set(x_36, 4, x_25);
lean_ctor_set(x_36, 5, x_26);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_tracer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_SynthInstance_2__getOptions___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_tracer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_tracer___lambda__1___boxed), 3, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_tracer___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_SynthInstance_1__getTraceState___boxed), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_tracer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Meta_SynthInstance_tracer___closed__1;
x_2 = l_Lean_Meta_SynthInstance_tracer___closed__2;
x_3 = l_Lean_Meta_SynthInstance_tracer___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_tracer() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_SynthInstance_tracer___closed__4;
return x_1;
}
}
lean_object* l_Lean_Meta_SynthInstance_tracer___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_SynthInstance_tracer___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_traceCore___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 4);
lean_inc(x_6);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_4, 0);
lean_dec(x_8);
x_9 = !lean_is_exclusive(x_5);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_5, 4);
lean_dec(x_10);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_6, 0);
x_13 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_2);
x_14 = lean_array_push(x_12, x_13);
lean_ctor_set(x_6, 0, x_14);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_4);
return x_16;
}
else
{
uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_18 = lean_ctor_get(x_6, 0);
lean_inc(x_18);
lean_dec(x_6);
x_19 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_19, 1, x_2);
x_20 = lean_array_push(x_18, x_19);
x_21 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set_uint8(x_21, sizeof(void*)*1, x_17);
lean_ctor_set(x_5, 4, x_21);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_4);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_24 = lean_ctor_get(x_5, 0);
x_25 = lean_ctor_get(x_5, 1);
x_26 = lean_ctor_get(x_5, 2);
x_27 = lean_ctor_get(x_5, 3);
x_28 = lean_ctor_get(x_5, 5);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_5);
x_29 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_30 = lean_ctor_get(x_6, 0);
lean_inc(x_30);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 x_31 = x_6;
} else {
 lean_dec_ref(x_6);
 x_31 = lean_box(0);
}
x_32 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_32, 0, x_1);
lean_ctor_set(x_32, 1, x_2);
x_33 = lean_array_push(x_30, x_32);
if (lean_is_scalar(x_31)) {
 x_34 = lean_alloc_ctor(0, 1, 1);
} else {
 x_34 = x_31;
}
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set_uint8(x_34, sizeof(void*)*1, x_29);
x_35 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_35, 0, x_24);
lean_ctor_set(x_35, 1, x_25);
lean_ctor_set(x_35, 2, x_26);
lean_ctor_set(x_35, 3, x_27);
lean_ctor_set(x_35, 4, x_34);
lean_ctor_set(x_35, 5, x_28);
lean_ctor_set(x_4, 0, x_35);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_4);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_38 = lean_ctor_get(x_4, 1);
x_39 = lean_ctor_get(x_4, 2);
x_40 = lean_ctor_get(x_4, 3);
x_41 = lean_ctor_get(x_4, 4);
x_42 = lean_ctor_get(x_4, 5);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_4);
x_43 = lean_ctor_get(x_5, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_5, 1);
lean_inc(x_44);
x_45 = lean_ctor_get(x_5, 2);
lean_inc(x_45);
x_46 = lean_ctor_get(x_5, 3);
lean_inc(x_46);
x_47 = lean_ctor_get(x_5, 5);
lean_inc(x_47);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 lean_ctor_release(x_5, 3);
 lean_ctor_release(x_5, 4);
 lean_ctor_release(x_5, 5);
 x_48 = x_5;
} else {
 lean_dec_ref(x_5);
 x_48 = lean_box(0);
}
x_49 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_50 = lean_ctor_get(x_6, 0);
lean_inc(x_50);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 x_51 = x_6;
} else {
 lean_dec_ref(x_6);
 x_51 = lean_box(0);
}
x_52 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_52, 0, x_1);
lean_ctor_set(x_52, 1, x_2);
x_53 = lean_array_push(x_50, x_52);
if (lean_is_scalar(x_51)) {
 x_54 = lean_alloc_ctor(0, 1, 1);
} else {
 x_54 = x_51;
}
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set_uint8(x_54, sizeof(void*)*1, x_49);
if (lean_is_scalar(x_48)) {
 x_55 = lean_alloc_ctor(0, 6, 0);
} else {
 x_55 = x_48;
}
lean_ctor_set(x_55, 0, x_43);
lean_ctor_set(x_55, 1, x_44);
lean_ctor_set(x_55, 2, x_45);
lean_ctor_set(x_55, 3, x_46);
lean_ctor_set(x_55, 4, x_54);
lean_ctor_set(x_55, 5, x_47);
x_56 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_38);
lean_ctor_set(x_56, 2, x_39);
lean_ctor_set(x_56, 3, x_40);
lean_ctor_set(x_56, 4, x_41);
lean_ctor_set(x_56, 5, x_42);
x_57 = lean_box(0);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_traceCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_7);
lean_ctor_set(x_9, 2, x_8);
lean_ctor_set(x_9, 3, x_2);
x_10 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_traceCore___spec__1(x_1, x_9, x_3, x_4);
return x_10;
}
}
lean_object* l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_traceCore___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_traceCore___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Meta_SynthInstance_traceCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_SynthInstance_traceCore(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_SynthInstance_trace___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_4, 0);
x_6 = l_List_isEmpty___rarg(x_5);
if (x_6 == 0)
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l___private_Init_Lean_Trace_3__checkTraceOptionAux___main(x_5, x_1);
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
else
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_10 = 0;
x_11 = lean_box(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_trace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 4);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
lean_inc(x_1);
x_11 = l_Lean_Name_append___main(x_10, x_1);
x_12 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_SynthInstance_trace___spec__1(x_11, x_3, x_4);
lean_dec(x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_2);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_12, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_12, 0, x_17);
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_12, 1);
lean_inc(x_21);
lean_dec(x_12);
x_22 = lean_box(0);
x_23 = lean_apply_1(x_2, x_22);
x_24 = l_Lean_Meta_SynthInstance_traceCore(x_1, x_23, x_3, x_21);
return x_24;
}
}
}
}
lean_object* l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_SynthInstance_trace___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_SynthInstance_trace___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_trace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_SynthInstance_trace(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Meta_SynthInstance_liftMeta___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_apply_2(x_1, x_2, x_5);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_6, 1);
lean_ctor_set(x_3, 0, x_8);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_6);
lean_ctor_set(x_3, 0, x_10);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_6);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_6, 1);
lean_ctor_set(x_3, 0, x_13);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
lean_ctor_set(x_3, 0, x_15);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_3);
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_3, 0);
x_18 = lean_ctor_get(x_3, 1);
x_19 = lean_ctor_get(x_3, 2);
x_20 = lean_ctor_get(x_3, 3);
x_21 = lean_ctor_get(x_3, 4);
x_22 = lean_ctor_get(x_3, 5);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_3);
x_23 = lean_apply_2(x_1, x_2, x_17);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_26 = x_23;
} else {
 lean_dec_ref(x_23);
 x_26 = lean_box(0);
}
x_27 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_18);
lean_ctor_set(x_27, 2, x_19);
lean_ctor_set(x_27, 3, x_20);
lean_ctor_set(x_27, 4, x_21);
lean_ctor_set(x_27, 5, x_22);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_24);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_23, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_23, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_31 = x_23;
} else {
 lean_dec_ref(x_23);
 x_31 = lean_box(0);
}
x_32 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_18);
lean_ctor_set(x_32, 2, x_19);
lean_ctor_set(x_32, 3, x_20);
lean_ctor_set(x_32, 4, x_21);
lean_ctor_set(x_32, 5, x_22);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(1, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_29);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_liftMeta(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_liftMeta___rarg), 3, 0);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_meta2Synth___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_liftMeta___rarg), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_SynthInstance_meta2Synth(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_SynthInstance_meta2Synth___closed__1;
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_withMCtx___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 1);
lean_ctor_set(x_6, 1, x_1);
x_9 = lean_apply_2(x_2, x_3, x_4);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_9, 1);
lean_dec(x_13);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_10, 0);
lean_dec(x_15);
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_11, 1);
lean_dec(x_17);
lean_ctor_set(x_11, 1, x_8);
return x_9;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_11, 0);
x_19 = lean_ctor_get(x_11, 2);
x_20 = lean_ctor_get(x_11, 3);
x_21 = lean_ctor_get(x_11, 4);
x_22 = lean_ctor_get(x_11, 5);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_11);
x_23 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_23, 0, x_18);
lean_ctor_set(x_23, 1, x_8);
lean_ctor_set(x_23, 2, x_19);
lean_ctor_set(x_23, 3, x_20);
lean_ctor_set(x_23, 4, x_21);
lean_ctor_set(x_23, 5, x_22);
lean_ctor_set(x_10, 0, x_23);
return x_9;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_24 = lean_ctor_get(x_10, 1);
x_25 = lean_ctor_get(x_10, 2);
x_26 = lean_ctor_get(x_10, 3);
x_27 = lean_ctor_get(x_10, 4);
x_28 = lean_ctor_get(x_10, 5);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_10);
x_29 = lean_ctor_get(x_11, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_11, 2);
lean_inc(x_30);
x_31 = lean_ctor_get(x_11, 3);
lean_inc(x_31);
x_32 = lean_ctor_get(x_11, 4);
lean_inc(x_32);
x_33 = lean_ctor_get(x_11, 5);
lean_inc(x_33);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 lean_ctor_release(x_11, 2);
 lean_ctor_release(x_11, 3);
 lean_ctor_release(x_11, 4);
 lean_ctor_release(x_11, 5);
 x_34 = x_11;
} else {
 lean_dec_ref(x_11);
 x_34 = lean_box(0);
}
if (lean_is_scalar(x_34)) {
 x_35 = lean_alloc_ctor(0, 6, 0);
} else {
 x_35 = x_34;
}
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_8);
lean_ctor_set(x_35, 2, x_30);
lean_ctor_set(x_35, 3, x_31);
lean_ctor_set(x_35, 4, x_32);
lean_ctor_set(x_35, 5, x_33);
x_36 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_24);
lean_ctor_set(x_36, 2, x_25);
lean_ctor_set(x_36, 3, x_26);
lean_ctor_set(x_36, 4, x_27);
lean_ctor_set(x_36, 5, x_28);
lean_ctor_set(x_9, 1, x_36);
return x_9;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_37 = lean_ctor_get(x_9, 0);
lean_inc(x_37);
lean_dec(x_9);
x_38 = lean_ctor_get(x_10, 1);
lean_inc(x_38);
x_39 = lean_ctor_get(x_10, 2);
lean_inc(x_39);
x_40 = lean_ctor_get(x_10, 3);
lean_inc(x_40);
x_41 = lean_ctor_get(x_10, 4);
lean_inc(x_41);
x_42 = lean_ctor_get(x_10, 5);
lean_inc(x_42);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 lean_ctor_release(x_10, 2);
 lean_ctor_release(x_10, 3);
 lean_ctor_release(x_10, 4);
 lean_ctor_release(x_10, 5);
 x_43 = x_10;
} else {
 lean_dec_ref(x_10);
 x_43 = lean_box(0);
}
x_44 = lean_ctor_get(x_11, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_11, 2);
lean_inc(x_45);
x_46 = lean_ctor_get(x_11, 3);
lean_inc(x_46);
x_47 = lean_ctor_get(x_11, 4);
lean_inc(x_47);
x_48 = lean_ctor_get(x_11, 5);
lean_inc(x_48);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 lean_ctor_release(x_11, 2);
 lean_ctor_release(x_11, 3);
 lean_ctor_release(x_11, 4);
 lean_ctor_release(x_11, 5);
 x_49 = x_11;
} else {
 lean_dec_ref(x_11);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(0, 6, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_44);
lean_ctor_set(x_50, 1, x_8);
lean_ctor_set(x_50, 2, x_45);
lean_ctor_set(x_50, 3, x_46);
lean_ctor_set(x_50, 4, x_47);
lean_ctor_set(x_50, 5, x_48);
if (lean_is_scalar(x_43)) {
 x_51 = lean_alloc_ctor(0, 6, 0);
} else {
 x_51 = x_43;
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_38);
lean_ctor_set(x_51, 2, x_39);
lean_ctor_set(x_51, 3, x_40);
lean_ctor_set(x_51, 4, x_41);
lean_ctor_set(x_51, 5, x_42);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_37);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_53 = lean_ctor_get(x_9, 1);
lean_inc(x_53);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = !lean_is_exclusive(x_9);
if (x_55 == 0)
{
lean_object* x_56; uint8_t x_57; 
x_56 = lean_ctor_get(x_9, 1);
lean_dec(x_56);
x_57 = !lean_is_exclusive(x_53);
if (x_57 == 0)
{
lean_object* x_58; uint8_t x_59; 
x_58 = lean_ctor_get(x_53, 0);
lean_dec(x_58);
x_59 = !lean_is_exclusive(x_54);
if (x_59 == 0)
{
lean_object* x_60; 
x_60 = lean_ctor_get(x_54, 1);
lean_dec(x_60);
lean_ctor_set(x_54, 1, x_8);
return x_9;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_61 = lean_ctor_get(x_54, 0);
x_62 = lean_ctor_get(x_54, 2);
x_63 = lean_ctor_get(x_54, 3);
x_64 = lean_ctor_get(x_54, 4);
x_65 = lean_ctor_get(x_54, 5);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_54);
x_66 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_66, 0, x_61);
lean_ctor_set(x_66, 1, x_8);
lean_ctor_set(x_66, 2, x_62);
lean_ctor_set(x_66, 3, x_63);
lean_ctor_set(x_66, 4, x_64);
lean_ctor_set(x_66, 5, x_65);
lean_ctor_set(x_53, 0, x_66);
return x_9;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_67 = lean_ctor_get(x_53, 1);
x_68 = lean_ctor_get(x_53, 2);
x_69 = lean_ctor_get(x_53, 3);
x_70 = lean_ctor_get(x_53, 4);
x_71 = lean_ctor_get(x_53, 5);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_53);
x_72 = lean_ctor_get(x_54, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_54, 2);
lean_inc(x_73);
x_74 = lean_ctor_get(x_54, 3);
lean_inc(x_74);
x_75 = lean_ctor_get(x_54, 4);
lean_inc(x_75);
x_76 = lean_ctor_get(x_54, 5);
lean_inc(x_76);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 lean_ctor_release(x_54, 2);
 lean_ctor_release(x_54, 3);
 lean_ctor_release(x_54, 4);
 lean_ctor_release(x_54, 5);
 x_77 = x_54;
} else {
 lean_dec_ref(x_54);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(0, 6, 0);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_72);
lean_ctor_set(x_78, 1, x_8);
lean_ctor_set(x_78, 2, x_73);
lean_ctor_set(x_78, 3, x_74);
lean_ctor_set(x_78, 4, x_75);
lean_ctor_set(x_78, 5, x_76);
x_79 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_67);
lean_ctor_set(x_79, 2, x_68);
lean_ctor_set(x_79, 3, x_69);
lean_ctor_set(x_79, 4, x_70);
lean_ctor_set(x_79, 5, x_71);
lean_ctor_set(x_9, 1, x_79);
return x_9;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_80 = lean_ctor_get(x_9, 0);
lean_inc(x_80);
lean_dec(x_9);
x_81 = lean_ctor_get(x_53, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_53, 2);
lean_inc(x_82);
x_83 = lean_ctor_get(x_53, 3);
lean_inc(x_83);
x_84 = lean_ctor_get(x_53, 4);
lean_inc(x_84);
x_85 = lean_ctor_get(x_53, 5);
lean_inc(x_85);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 lean_ctor_release(x_53, 2);
 lean_ctor_release(x_53, 3);
 lean_ctor_release(x_53, 4);
 lean_ctor_release(x_53, 5);
 x_86 = x_53;
} else {
 lean_dec_ref(x_53);
 x_86 = lean_box(0);
}
x_87 = lean_ctor_get(x_54, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_54, 2);
lean_inc(x_88);
x_89 = lean_ctor_get(x_54, 3);
lean_inc(x_89);
x_90 = lean_ctor_get(x_54, 4);
lean_inc(x_90);
x_91 = lean_ctor_get(x_54, 5);
lean_inc(x_91);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 lean_ctor_release(x_54, 2);
 lean_ctor_release(x_54, 3);
 lean_ctor_release(x_54, 4);
 lean_ctor_release(x_54, 5);
 x_92 = x_54;
} else {
 lean_dec_ref(x_54);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(0, 6, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_87);
lean_ctor_set(x_93, 1, x_8);
lean_ctor_set(x_93, 2, x_88);
lean_ctor_set(x_93, 3, x_89);
lean_ctor_set(x_93, 4, x_90);
lean_ctor_set(x_93, 5, x_91);
if (lean_is_scalar(x_86)) {
 x_94 = lean_alloc_ctor(0, 6, 0);
} else {
 x_94 = x_86;
}
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_81);
lean_ctor_set(x_94, 2, x_82);
lean_ctor_set(x_94, 3, x_83);
lean_ctor_set(x_94, 4, x_84);
lean_ctor_set(x_94, 5, x_85);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_80);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_96 = lean_ctor_get(x_6, 0);
x_97 = lean_ctor_get(x_6, 1);
x_98 = lean_ctor_get(x_6, 2);
x_99 = lean_ctor_get(x_6, 3);
x_100 = lean_ctor_get(x_6, 4);
x_101 = lean_ctor_get(x_6, 5);
lean_inc(x_101);
lean_inc(x_100);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_6);
x_102 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_102, 0, x_96);
lean_ctor_set(x_102, 1, x_1);
lean_ctor_set(x_102, 2, x_98);
lean_ctor_set(x_102, 3, x_99);
lean_ctor_set(x_102, 4, x_100);
lean_ctor_set(x_102, 5, x_101);
lean_ctor_set(x_4, 0, x_102);
x_103 = lean_apply_2(x_2, x_3, x_4);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_104 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_103, 0);
lean_inc(x_106);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_107 = x_103;
} else {
 lean_dec_ref(x_103);
 x_107 = lean_box(0);
}
x_108 = lean_ctor_get(x_104, 1);
lean_inc(x_108);
x_109 = lean_ctor_get(x_104, 2);
lean_inc(x_109);
x_110 = lean_ctor_get(x_104, 3);
lean_inc(x_110);
x_111 = lean_ctor_get(x_104, 4);
lean_inc(x_111);
x_112 = lean_ctor_get(x_104, 5);
lean_inc(x_112);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 lean_ctor_release(x_104, 2);
 lean_ctor_release(x_104, 3);
 lean_ctor_release(x_104, 4);
 lean_ctor_release(x_104, 5);
 x_113 = x_104;
} else {
 lean_dec_ref(x_104);
 x_113 = lean_box(0);
}
x_114 = lean_ctor_get(x_105, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_105, 2);
lean_inc(x_115);
x_116 = lean_ctor_get(x_105, 3);
lean_inc(x_116);
x_117 = lean_ctor_get(x_105, 4);
lean_inc(x_117);
x_118 = lean_ctor_get(x_105, 5);
lean_inc(x_118);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 lean_ctor_release(x_105, 2);
 lean_ctor_release(x_105, 3);
 lean_ctor_release(x_105, 4);
 lean_ctor_release(x_105, 5);
 x_119 = x_105;
} else {
 lean_dec_ref(x_105);
 x_119 = lean_box(0);
}
if (lean_is_scalar(x_119)) {
 x_120 = lean_alloc_ctor(0, 6, 0);
} else {
 x_120 = x_119;
}
lean_ctor_set(x_120, 0, x_114);
lean_ctor_set(x_120, 1, x_97);
lean_ctor_set(x_120, 2, x_115);
lean_ctor_set(x_120, 3, x_116);
lean_ctor_set(x_120, 4, x_117);
lean_ctor_set(x_120, 5, x_118);
if (lean_is_scalar(x_113)) {
 x_121 = lean_alloc_ctor(0, 6, 0);
} else {
 x_121 = x_113;
}
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_108);
lean_ctor_set(x_121, 2, x_109);
lean_ctor_set(x_121, 3, x_110);
lean_ctor_set(x_121, 4, x_111);
lean_ctor_set(x_121, 5, x_112);
if (lean_is_scalar(x_107)) {
 x_122 = lean_alloc_ctor(0, 2, 0);
} else {
 x_122 = x_107;
}
lean_ctor_set(x_122, 0, x_106);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_123 = lean_ctor_get(x_103, 1);
lean_inc(x_123);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_103, 0);
lean_inc(x_125);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_126 = x_103;
} else {
 lean_dec_ref(x_103);
 x_126 = lean_box(0);
}
x_127 = lean_ctor_get(x_123, 1);
lean_inc(x_127);
x_128 = lean_ctor_get(x_123, 2);
lean_inc(x_128);
x_129 = lean_ctor_get(x_123, 3);
lean_inc(x_129);
x_130 = lean_ctor_get(x_123, 4);
lean_inc(x_130);
x_131 = lean_ctor_get(x_123, 5);
lean_inc(x_131);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 lean_ctor_release(x_123, 2);
 lean_ctor_release(x_123, 3);
 lean_ctor_release(x_123, 4);
 lean_ctor_release(x_123, 5);
 x_132 = x_123;
} else {
 lean_dec_ref(x_123);
 x_132 = lean_box(0);
}
x_133 = lean_ctor_get(x_124, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_124, 2);
lean_inc(x_134);
x_135 = lean_ctor_get(x_124, 3);
lean_inc(x_135);
x_136 = lean_ctor_get(x_124, 4);
lean_inc(x_136);
x_137 = lean_ctor_get(x_124, 5);
lean_inc(x_137);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 lean_ctor_release(x_124, 2);
 lean_ctor_release(x_124, 3);
 lean_ctor_release(x_124, 4);
 lean_ctor_release(x_124, 5);
 x_138 = x_124;
} else {
 lean_dec_ref(x_124);
 x_138 = lean_box(0);
}
if (lean_is_scalar(x_138)) {
 x_139 = lean_alloc_ctor(0, 6, 0);
} else {
 x_139 = x_138;
}
lean_ctor_set(x_139, 0, x_133);
lean_ctor_set(x_139, 1, x_97);
lean_ctor_set(x_139, 2, x_134);
lean_ctor_set(x_139, 3, x_135);
lean_ctor_set(x_139, 4, x_136);
lean_ctor_set(x_139, 5, x_137);
if (lean_is_scalar(x_132)) {
 x_140 = lean_alloc_ctor(0, 6, 0);
} else {
 x_140 = x_132;
}
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_127);
lean_ctor_set(x_140, 2, x_128);
lean_ctor_set(x_140, 3, x_129);
lean_ctor_set(x_140, 4, x_130);
lean_ctor_set(x_140, 5, x_131);
if (lean_is_scalar(x_126)) {
 x_141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_141 = x_126;
}
lean_ctor_set(x_141, 0, x_125);
lean_ctor_set(x_141, 1, x_140);
return x_141;
}
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_142 = lean_ctor_get(x_4, 0);
x_143 = lean_ctor_get(x_4, 1);
x_144 = lean_ctor_get(x_4, 2);
x_145 = lean_ctor_get(x_4, 3);
x_146 = lean_ctor_get(x_4, 4);
x_147 = lean_ctor_get(x_4, 5);
lean_inc(x_147);
lean_inc(x_146);
lean_inc(x_145);
lean_inc(x_144);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_4);
x_148 = lean_ctor_get(x_142, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_142, 1);
lean_inc(x_149);
x_150 = lean_ctor_get(x_142, 2);
lean_inc(x_150);
x_151 = lean_ctor_get(x_142, 3);
lean_inc(x_151);
x_152 = lean_ctor_get(x_142, 4);
lean_inc(x_152);
x_153 = lean_ctor_get(x_142, 5);
lean_inc(x_153);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 lean_ctor_release(x_142, 2);
 lean_ctor_release(x_142, 3);
 lean_ctor_release(x_142, 4);
 lean_ctor_release(x_142, 5);
 x_154 = x_142;
} else {
 lean_dec_ref(x_142);
 x_154 = lean_box(0);
}
if (lean_is_scalar(x_154)) {
 x_155 = lean_alloc_ctor(0, 6, 0);
} else {
 x_155 = x_154;
}
lean_ctor_set(x_155, 0, x_148);
lean_ctor_set(x_155, 1, x_1);
lean_ctor_set(x_155, 2, x_150);
lean_ctor_set(x_155, 3, x_151);
lean_ctor_set(x_155, 4, x_152);
lean_ctor_set(x_155, 5, x_153);
x_156 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_156, 1, x_143);
lean_ctor_set(x_156, 2, x_144);
lean_ctor_set(x_156, 3, x_145);
lean_ctor_set(x_156, 4, x_146);
lean_ctor_set(x_156, 5, x_147);
x_157 = lean_apply_2(x_2, x_3, x_156);
if (lean_obj_tag(x_157) == 0)
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_158 = lean_ctor_get(x_157, 1);
lean_inc(x_158);
x_159 = lean_ctor_get(x_158, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_157, 0);
lean_inc(x_160);
if (lean_is_exclusive(x_157)) {
 lean_ctor_release(x_157, 0);
 lean_ctor_release(x_157, 1);
 x_161 = x_157;
} else {
 lean_dec_ref(x_157);
 x_161 = lean_box(0);
}
x_162 = lean_ctor_get(x_158, 1);
lean_inc(x_162);
x_163 = lean_ctor_get(x_158, 2);
lean_inc(x_163);
x_164 = lean_ctor_get(x_158, 3);
lean_inc(x_164);
x_165 = lean_ctor_get(x_158, 4);
lean_inc(x_165);
x_166 = lean_ctor_get(x_158, 5);
lean_inc(x_166);
if (lean_is_exclusive(x_158)) {
 lean_ctor_release(x_158, 0);
 lean_ctor_release(x_158, 1);
 lean_ctor_release(x_158, 2);
 lean_ctor_release(x_158, 3);
 lean_ctor_release(x_158, 4);
 lean_ctor_release(x_158, 5);
 x_167 = x_158;
} else {
 lean_dec_ref(x_158);
 x_167 = lean_box(0);
}
x_168 = lean_ctor_get(x_159, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_159, 2);
lean_inc(x_169);
x_170 = lean_ctor_get(x_159, 3);
lean_inc(x_170);
x_171 = lean_ctor_get(x_159, 4);
lean_inc(x_171);
x_172 = lean_ctor_get(x_159, 5);
lean_inc(x_172);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 lean_ctor_release(x_159, 2);
 lean_ctor_release(x_159, 3);
 lean_ctor_release(x_159, 4);
 lean_ctor_release(x_159, 5);
 x_173 = x_159;
} else {
 lean_dec_ref(x_159);
 x_173 = lean_box(0);
}
if (lean_is_scalar(x_173)) {
 x_174 = lean_alloc_ctor(0, 6, 0);
} else {
 x_174 = x_173;
}
lean_ctor_set(x_174, 0, x_168);
lean_ctor_set(x_174, 1, x_149);
lean_ctor_set(x_174, 2, x_169);
lean_ctor_set(x_174, 3, x_170);
lean_ctor_set(x_174, 4, x_171);
lean_ctor_set(x_174, 5, x_172);
if (lean_is_scalar(x_167)) {
 x_175 = lean_alloc_ctor(0, 6, 0);
} else {
 x_175 = x_167;
}
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_162);
lean_ctor_set(x_175, 2, x_163);
lean_ctor_set(x_175, 3, x_164);
lean_ctor_set(x_175, 4, x_165);
lean_ctor_set(x_175, 5, x_166);
if (lean_is_scalar(x_161)) {
 x_176 = lean_alloc_ctor(0, 2, 0);
} else {
 x_176 = x_161;
}
lean_ctor_set(x_176, 0, x_160);
lean_ctor_set(x_176, 1, x_175);
return x_176;
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_177 = lean_ctor_get(x_157, 1);
lean_inc(x_177);
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_157, 0);
lean_inc(x_179);
if (lean_is_exclusive(x_157)) {
 lean_ctor_release(x_157, 0);
 lean_ctor_release(x_157, 1);
 x_180 = x_157;
} else {
 lean_dec_ref(x_157);
 x_180 = lean_box(0);
}
x_181 = lean_ctor_get(x_177, 1);
lean_inc(x_181);
x_182 = lean_ctor_get(x_177, 2);
lean_inc(x_182);
x_183 = lean_ctor_get(x_177, 3);
lean_inc(x_183);
x_184 = lean_ctor_get(x_177, 4);
lean_inc(x_184);
x_185 = lean_ctor_get(x_177, 5);
lean_inc(x_185);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 lean_ctor_release(x_177, 3);
 lean_ctor_release(x_177, 4);
 lean_ctor_release(x_177, 5);
 x_186 = x_177;
} else {
 lean_dec_ref(x_177);
 x_186 = lean_box(0);
}
x_187 = lean_ctor_get(x_178, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_178, 2);
lean_inc(x_188);
x_189 = lean_ctor_get(x_178, 3);
lean_inc(x_189);
x_190 = lean_ctor_get(x_178, 4);
lean_inc(x_190);
x_191 = lean_ctor_get(x_178, 5);
lean_inc(x_191);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 lean_ctor_release(x_178, 2);
 lean_ctor_release(x_178, 3);
 lean_ctor_release(x_178, 4);
 lean_ctor_release(x_178, 5);
 x_192 = x_178;
} else {
 lean_dec_ref(x_178);
 x_192 = lean_box(0);
}
if (lean_is_scalar(x_192)) {
 x_193 = lean_alloc_ctor(0, 6, 0);
} else {
 x_193 = x_192;
}
lean_ctor_set(x_193, 0, x_187);
lean_ctor_set(x_193, 1, x_149);
lean_ctor_set(x_193, 2, x_188);
lean_ctor_set(x_193, 3, x_189);
lean_ctor_set(x_193, 4, x_190);
lean_ctor_set(x_193, 5, x_191);
if (lean_is_scalar(x_186)) {
 x_194 = lean_alloc_ctor(0, 6, 0);
} else {
 x_194 = x_186;
}
lean_ctor_set(x_194, 0, x_193);
lean_ctor_set(x_194, 1, x_181);
lean_ctor_set(x_194, 2, x_182);
lean_ctor_set(x_194, 3, x_183);
lean_ctor_set(x_194, 4, x_184);
lean_ctor_set(x_194, 5, x_185);
if (lean_is_scalar(x_180)) {
 x_195 = lean_alloc_ctor(1, 2, 0);
} else {
 x_195 = x_180;
}
lean_ctor_set(x_195, 0, x_179);
lean_ctor_set(x_195, 1, x_194);
return x_195;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_withMCtx(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_withMCtx___rarg), 4, 0);
return x_2;
}
}
lean_object* l_List_mapM___main___at_Lean_Meta_SynthInstance_getInstances___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 0);
lean_dec(x_8);
x_9 = l_Lean_Meta_mkFreshLevelMVar___rarg(x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_List_mapM___main___at_Lean_Meta_SynthInstance_getInstances___spec__1(x_7, x_2, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_10);
lean_ctor_set(x_12, 0, x_1);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = l_Lean_Meta_mkFreshLevelMVar___rarg(x_3);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_List_mapM___main___at_Lean_Meta_SynthInstance_getInstances___spec__1(x_18, x_2, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_25 = x_22;
} else {
 lean_dec_ref(x_22);
 x_25 = lean_box(0);
}
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_23);
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_25;
}
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
return x_27;
}
}
}
}
lean_object* _init_l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Init.Lean.Meta.SynthInstance");
return x_1;
}
}
lean_object* _init_l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("global instance is not a constant");
return x_1;
}
}
lean_object* _init_l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__1;
x_2 = lean_unsigned_to_nat(164u);
x_3 = lean_unsigned_to_nat(14u);
x_4 = l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__2;
x_5 = l___private_Init_Util_1__mkPanicMessage(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_1, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = l_Array_empty___closed__1;
x_8 = x_2;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_array_fget(x_2, x_1);
x_11 = lean_box(0);
lean_inc(x_10);
x_12 = x_11;
x_13 = lean_array_fset(x_2, x_1, x_12);
if (lean_obj_tag(x_10) == 4)
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_10, 1);
lean_inc(x_27);
x_28 = l_List_mapM___main___at_Lean_Meta_SynthInstance_getInstances___spec__1(x_27, x_3, x_4);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_10);
x_31 = lean_expr_update_const(x_10, x_30);
lean_ctor_set(x_28, 0, x_31);
x_14 = x_28;
goto block_26;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_28, 0);
x_33 = lean_ctor_get(x_28, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_28);
lean_inc(x_10);
x_34 = lean_expr_update_const(x_10, x_32);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_14 = x_35;
goto block_26;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = l_Lean_Meta_isClassQuick___main___closed__1;
x_37 = l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__3;
x_38 = lean_panic_fn(x_37);
lean_inc(x_3);
x_39 = lean_apply_2(x_38, x_3, x_4);
x_14 = x_39;
goto block_26;
}
block_26:
{
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_1, x_17);
x_19 = x_15;
x_20 = lean_array_fset(x_13, x_1, x_19);
lean_dec(x_1);
x_1 = x_18;
x_2 = x_20;
x_4 = x_16;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_14);
if (x_22 == 0)
{
return x_14;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_array_fget(x_3, x_4);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_name_eq(x_9, x_2);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
if (x_10 == 0)
{
lean_dec(x_8);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_dec(x_8);
x_15 = lean_array_push(x_5, x_14);
x_4 = x_12;
x_5 = x_15;
goto _start;
}
}
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("synthInstance");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_isLevelDefEqAux___main___closed__2;
x_2 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("globalInstances");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_2 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__4;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_2);
x_5 = l_Lean_Meta_isClass(x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_5, 1);
x_9 = lean_ctor_get(x_5, 0);
lean_dec(x_9);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_11);
lean_ctor_set(x_13, 2, x_12);
x_14 = lean_alloc_ctor(15, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_14);
return x_5;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_dec(x_5);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_3, 1);
lean_inc(x_18);
lean_dec(x_3);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_alloc_ctor(15, 2, 0);
lean_ctor_set(x_20, 0, x_2);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_15);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_5, 1);
lean_inc(x_22);
lean_dec(x_5);
x_23 = lean_ctor_get(x_6, 0);
lean_inc(x_23);
lean_dec(x_6);
x_24 = l_Lean_Meta_getGlobalInstances___rarg(x_22);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
lean_inc(x_3);
lean_inc(x_2);
x_27 = l_Lean_Meta_DiscrTree_getUnify___rarg(x_25, x_2, x_3, x_26);
lean_dec(x_25);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_unsigned_to_nat(0u);
lean_inc(x_3);
x_31 = l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2(x_30, x_28, x_3, x_29);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_40; uint8_t x_41; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_34 = x_31;
} else {
 lean_dec_ref(x_31);
 x_34 = lean_box(0);
}
x_40 = lean_ctor_get(x_33, 4);
lean_inc(x_40);
x_41 = lean_ctor_get_uint8(x_40, sizeof(void*)*1);
lean_dec(x_40);
if (x_41 == 0)
{
lean_dec(x_2);
x_35 = x_33;
goto block_39;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__5;
x_43 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_42, x_3, x_33);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_unbox(x_44);
lean_dec(x_44);
if (x_45 == 0)
{
lean_object* x_46; 
lean_dec(x_2);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_dec(x_43);
x_35 = x_46;
goto block_39;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_47 = lean_ctor_get(x_43, 1);
lean_inc(x_47);
lean_dec(x_43);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
x_50 = lean_ctor_get(x_3, 1);
lean_inc(x_50);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_2);
x_52 = l_Lean_Meta_Exception_toMessageData___closed__4;
x_53 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Lean_MessageData_coeOfArrayExpr___closed__2;
x_55 = l_Lean_MessageData_arrayExpr_toMessageData___main(x_32, x_30, x_54);
x_56 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_56, 0, x_53);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_57, 0, x_48);
lean_ctor_set(x_57, 1, x_49);
lean_ctor_set(x_57, 2, x_50);
lean_ctor_set(x_57, 3, x_56);
x_58 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__4;
x_59 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_58, x_57, x_3, x_47);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
x_35 = x_60;
goto block_39;
}
}
block_39:
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_3, 2);
lean_inc(x_36);
x_37 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3(x_3, x_23, x_36, x_30, x_32);
lean_dec(x_36);
lean_dec(x_23);
lean_dec(x_3);
if (lean_is_scalar(x_34)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_34;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
}
else
{
uint8_t x_61; 
lean_dec(x_23);
lean_dec(x_3);
lean_dec(x_2);
x_61 = !lean_is_exclusive(x_31);
if (x_61 == 0)
{
return x_31;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_31, 0);
x_63 = lean_ctor_get(x_31, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_31);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_23);
lean_dec(x_3);
lean_dec(x_2);
x_65 = !lean_is_exclusive(x_27);
if (x_65 == 0)
{
return x_27;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_27, 0);
x_67 = lean_ctor_get(x_27, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_27);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_3);
lean_dec(x_2);
x_69 = !lean_is_exclusive(x_5);
if (x_69 == 0)
{
return x_5;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_5, 0);
x_71 = lean_ctor_get(x_5, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_5);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_getInstances___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_getInstances___lambda__1___boxed), 4, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_SynthInstance_getInstances(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Meta_SynthInstance_getInstances___closed__1;
x_5 = l_Lean_Meta_forallTelescopeReducing___rarg(x_1, x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_List_mapM___main___at_Lean_Meta_SynthInstance_getInstances___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_mapM___main___at_Lean_Meta_SynthInstance_getInstances___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_SynthInstance_getInstances___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_expr_eqv(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = l_Lean_Expr_hash(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_PersistentHashMap_insertAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_expr_eqv(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_expr_eqv(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = x_2 >> x_9;
x_37 = x_3 + x_8;
x_38 = l_PersistentHashMap_insertAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = x_2 >> x_9;
x_42 = x_3 + x_8;
x_43 = l_PersistentHashMap_insertAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_52 = x_2 & x_51;
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(2);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_expr_eqv(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = x_2 >> x_50;
x_74 = x_3 + x_49;
x_75 = l_PersistentHashMap_insertAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; size_t x_84; uint8_t x_85; 
x_82 = lean_unsigned_to_nat(0u);
x_83 = l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__3(x_1, x_82, x_4, x_5);
x_84 = 7;
x_85 = x_84 <= x_3;
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = l_PersistentHashMap_getCollisionNodeSize___rarg(x_83);
x_87 = lean_unsigned_to_nat(4u);
x_88 = lean_nat_dec_lt(x_86, x_87);
lean_dec(x_86);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
lean_dec(x_83);
x_91 = l_PersistentHashMap_insertAux___main___rarg___closed__3;
x_92 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_3, x_89, x_90, x_89, x_82, x_91);
lean_dec(x_90);
lean_dec(x_89);
return x_92;
}
else
{
return x_83;
}
}
else
{
return x_83;
}
}
}
}
lean_object* l_PersistentHashMap_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Expr_hash(x_2);
x_8 = 1;
x_9 = l_PersistentHashMap_insertAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2(x_5, x_7, x_8, x_2, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = l_Lean_Expr_hash(x_2);
x_15 = 1;
x_16 = l_PersistentHashMap_insertAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2(x_12, x_14, x_15, x_2, x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_13, x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_newSubgoal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("newSubgoal");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_newSubgoal___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_2 = l_Lean_Meta_SynthInstance_newSubgoal___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_newSubgoal___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l_Lean_Meta_SynthInstance_newSubgoal___closed__2;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_SynthInstance_newSubgoal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 3);
lean_inc(x_10);
x_11 = lean_ctor_get(x_6, 4);
lean_inc(x_11);
x_12 = lean_ctor_get(x_6, 5);
lean_inc(x_12);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 lean_ctor_release(x_6, 5);
 x_13 = x_6;
} else {
 lean_dec_ref(x_6);
 x_13 = lean_box(0);
}
x_14 = !lean_is_exclusive(x_7);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_47; lean_object* x_48; lean_object* x_77; lean_object* x_143; uint8_t x_144; 
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 4);
lean_inc(x_16);
lean_ctor_set(x_7, 1, x_1);
x_143 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_143, 0, x_7);
lean_ctor_set(x_143, 1, x_8);
lean_ctor_set(x_143, 2, x_9);
lean_ctor_set(x_143, 3, x_10);
lean_ctor_set(x_143, 4, x_11);
lean_ctor_set(x_143, 5, x_12);
x_144 = lean_ctor_get_uint8(x_16, sizeof(void*)*1);
lean_dec(x_16);
if (x_144 == 0)
{
x_77 = x_143;
goto block_142;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; 
x_145 = l_Lean_Meta_SynthInstance_newSubgoal___closed__3;
x_146 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_SynthInstance_trace___spec__1(x_145, x_5, x_143);
x_147 = lean_ctor_get(x_146, 0);
lean_inc(x_147);
x_148 = lean_unbox(x_147);
lean_dec(x_147);
if (x_148 == 0)
{
lean_object* x_149; 
x_149 = lean_ctor_get(x_146, 1);
lean_inc(x_149);
lean_dec(x_146);
x_77 = x_149;
goto block_142;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_150 = lean_ctor_get(x_146, 1);
lean_inc(x_150);
lean_dec(x_146);
lean_inc(x_2);
x_151 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_151, 0, x_2);
x_152 = l_Lean_Meta_SynthInstance_newSubgoal___closed__2;
x_153 = l_Lean_Meta_SynthInstance_traceCore(x_152, x_151, x_5, x_150);
x_154 = lean_ctor_get(x_153, 1);
lean_inc(x_154);
lean_dec(x_153);
x_77 = x_154;
goto block_142;
}
}
block_46:
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 1);
lean_dec(x_22);
lean_ctor_set(x_20, 1, x_15);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_17);
lean_ctor_set(x_23, 1, x_18);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_20, 2);
x_26 = lean_ctor_get(x_20, 3);
x_27 = lean_ctor_get(x_20, 4);
x_28 = lean_ctor_get(x_20, 5);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_20);
x_29 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_29, 0, x_24);
lean_ctor_set(x_29, 1, x_15);
lean_ctor_set(x_29, 2, x_25);
lean_ctor_set(x_29, 3, x_26);
lean_ctor_set(x_29, 4, x_27);
lean_ctor_set(x_29, 5, x_28);
lean_ctor_set(x_18, 0, x_29);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_17);
lean_ctor_set(x_30, 1, x_18);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_31 = lean_ctor_get(x_18, 0);
x_32 = lean_ctor_get(x_18, 1);
x_33 = lean_ctor_get(x_18, 2);
x_34 = lean_ctor_get(x_18, 3);
x_35 = lean_ctor_get(x_18, 4);
x_36 = lean_ctor_get(x_18, 5);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_18);
x_37 = lean_ctor_get(x_31, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_31, 2);
lean_inc(x_38);
x_39 = lean_ctor_get(x_31, 3);
lean_inc(x_39);
x_40 = lean_ctor_get(x_31, 4);
lean_inc(x_40);
x_41 = lean_ctor_get(x_31, 5);
lean_inc(x_41);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 lean_ctor_release(x_31, 2);
 lean_ctor_release(x_31, 3);
 lean_ctor_release(x_31, 4);
 lean_ctor_release(x_31, 5);
 x_42 = x_31;
} else {
 lean_dec_ref(x_31);
 x_42 = lean_box(0);
}
if (lean_is_scalar(x_42)) {
 x_43 = lean_alloc_ctor(0, 6, 0);
} else {
 x_43 = x_42;
}
lean_ctor_set(x_43, 0, x_37);
lean_ctor_set(x_43, 1, x_15);
lean_ctor_set(x_43, 2, x_38);
lean_ctor_set(x_43, 3, x_39);
lean_ctor_set(x_43, 4, x_40);
lean_ctor_set(x_43, 5, x_41);
x_44 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_32);
lean_ctor_set(x_44, 2, x_33);
lean_ctor_set(x_44, 3, x_34);
lean_ctor_set(x_44, 4, x_35);
lean_ctor_set(x_44, 5, x_36);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_17);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
block_76:
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; 
x_50 = lean_ctor_get(x_48, 0);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_50, 1);
lean_dec(x_52);
lean_ctor_set(x_50, 1, x_15);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_47);
lean_ctor_set(x_53, 1, x_48);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_54 = lean_ctor_get(x_50, 0);
x_55 = lean_ctor_get(x_50, 2);
x_56 = lean_ctor_get(x_50, 3);
x_57 = lean_ctor_get(x_50, 4);
x_58 = lean_ctor_get(x_50, 5);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_50);
x_59 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_59, 0, x_54);
lean_ctor_set(x_59, 1, x_15);
lean_ctor_set(x_59, 2, x_55);
lean_ctor_set(x_59, 3, x_56);
lean_ctor_set(x_59, 4, x_57);
lean_ctor_set(x_59, 5, x_58);
lean_ctor_set(x_48, 0, x_59);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_47);
lean_ctor_set(x_60, 1, x_48);
return x_60;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_61 = lean_ctor_get(x_48, 0);
x_62 = lean_ctor_get(x_48, 1);
x_63 = lean_ctor_get(x_48, 2);
x_64 = lean_ctor_get(x_48, 3);
x_65 = lean_ctor_get(x_48, 4);
x_66 = lean_ctor_get(x_48, 5);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_48);
x_67 = lean_ctor_get(x_61, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_61, 2);
lean_inc(x_68);
x_69 = lean_ctor_get(x_61, 3);
lean_inc(x_69);
x_70 = lean_ctor_get(x_61, 4);
lean_inc(x_70);
x_71 = lean_ctor_get(x_61, 5);
lean_inc(x_71);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 lean_ctor_release(x_61, 2);
 lean_ctor_release(x_61, 3);
 lean_ctor_release(x_61, 4);
 lean_ctor_release(x_61, 5);
 x_72 = x_61;
} else {
 lean_dec_ref(x_61);
 x_72 = lean_box(0);
}
if (lean_is_scalar(x_72)) {
 x_73 = lean_alloc_ctor(0, 6, 0);
} else {
 x_73 = x_72;
}
lean_ctor_set(x_73, 0, x_67);
lean_ctor_set(x_73, 1, x_15);
lean_ctor_set(x_73, 2, x_68);
lean_ctor_set(x_73, 3, x_69);
lean_ctor_set(x_73, 4, x_70);
lean_ctor_set(x_73, 5, x_71);
x_74 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_62);
lean_ctor_set(x_74, 2, x_63);
lean_ctor_set(x_74, 3, x_64);
lean_ctor_set(x_74, 4, x_65);
lean_ctor_set(x_74, 5, x_66);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_47);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
block_142:
{
uint8_t x_78; 
x_78 = !lean_is_exclusive(x_77);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_79 = lean_ctor_get(x_77, 0);
x_80 = lean_ctor_get(x_77, 1);
x_81 = lean_ctor_get(x_77, 2);
x_82 = lean_ctor_get(x_77, 3);
x_83 = lean_ctor_get(x_77, 4);
x_84 = lean_ctor_get(x_77, 5);
lean_inc(x_5);
lean_inc(x_3);
x_85 = l_Lean_Meta_inferType(x_3, x_5, x_79);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = l_Lean_Meta_SynthInstance_getInstances___closed__1;
x_89 = l_Lean_Meta_forallTelescopeReducing___rarg(x_86, x_88, x_5, x_87);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_inc(x_81);
lean_inc(x_80);
lean_inc(x_91);
lean_ctor_set(x_77, 0, x_91);
x_93 = l_Array_isEmpty___rarg(x_90);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_77);
x_94 = lean_array_get_size(x_90);
lean_inc(x_2);
x_95 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_95, 0, x_3);
lean_ctor_set(x_95, 1, x_2);
lean_ctor_set(x_95, 2, x_92);
lean_ctor_set(x_95, 3, x_90);
lean_ctor_set(x_95, 4, x_94);
x_96 = l_Lean_mkOptionalNode___rarg___closed__1;
x_97 = lean_array_push(x_96, x_4);
x_98 = l_Array_empty___closed__1;
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_array_push(x_82, x_95);
x_101 = l_PersistentHashMap_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_84, x_2, x_99);
if (lean_is_scalar(x_13)) {
 x_102 = lean_alloc_ctor(0, 6, 0);
} else {
 x_102 = x_13;
}
lean_ctor_set(x_102, 0, x_91);
lean_ctor_set(x_102, 1, x_80);
lean_ctor_set(x_102, 2, x_81);
lean_ctor_set(x_102, 3, x_100);
lean_ctor_set(x_102, 4, x_83);
lean_ctor_set(x_102, 5, x_101);
x_103 = lean_box(0);
x_17 = x_103;
x_18 = x_102;
goto block_46;
}
else
{
lean_object* x_104; 
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_104 = lean_box(0);
x_17 = x_104;
x_18 = x_77;
goto block_46;
}
}
else
{
lean_object* x_105; lean_object* x_106; 
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_105 = lean_ctor_get(x_89, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_89, 1);
lean_inc(x_106);
lean_dec(x_89);
lean_ctor_set(x_77, 0, x_106);
x_47 = x_105;
x_48 = x_77;
goto block_76;
}
}
else
{
lean_object* x_107; lean_object* x_108; 
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_107 = lean_ctor_get(x_85, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_85, 1);
lean_inc(x_108);
lean_dec(x_85);
lean_ctor_set(x_77, 0, x_108);
x_47 = x_107;
x_48 = x_77;
goto block_76;
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_109 = lean_ctor_get(x_77, 0);
x_110 = lean_ctor_get(x_77, 1);
x_111 = lean_ctor_get(x_77, 2);
x_112 = lean_ctor_get(x_77, 3);
x_113 = lean_ctor_get(x_77, 4);
x_114 = lean_ctor_get(x_77, 5);
lean_inc(x_114);
lean_inc(x_113);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_77);
lean_inc(x_5);
lean_inc(x_3);
x_115 = l_Lean_Meta_inferType(x_3, x_5, x_109);
if (lean_obj_tag(x_115) == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
lean_dec(x_115);
x_118 = l_Lean_Meta_SynthInstance_getInstances___closed__1;
x_119 = l_Lean_Meta_forallTelescopeReducing___rarg(x_116, x_118, x_5, x_117);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
x_122 = lean_ctor_get(x_121, 1);
lean_inc(x_122);
lean_inc(x_114);
lean_inc(x_113);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_121);
x_123 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_110);
lean_ctor_set(x_123, 2, x_111);
lean_ctor_set(x_123, 3, x_112);
lean_ctor_set(x_123, 4, x_113);
lean_ctor_set(x_123, 5, x_114);
x_124 = l_Array_isEmpty___rarg(x_120);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_123);
x_125 = lean_array_get_size(x_120);
lean_inc(x_2);
x_126 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_126, 0, x_3);
lean_ctor_set(x_126, 1, x_2);
lean_ctor_set(x_126, 2, x_122);
lean_ctor_set(x_126, 3, x_120);
lean_ctor_set(x_126, 4, x_125);
x_127 = l_Lean_mkOptionalNode___rarg___closed__1;
x_128 = lean_array_push(x_127, x_4);
x_129 = l_Array_empty___closed__1;
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_128);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_array_push(x_112, x_126);
x_132 = l_PersistentHashMap_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_114, x_2, x_130);
if (lean_is_scalar(x_13)) {
 x_133 = lean_alloc_ctor(0, 6, 0);
} else {
 x_133 = x_13;
}
lean_ctor_set(x_133, 0, x_121);
lean_ctor_set(x_133, 1, x_110);
lean_ctor_set(x_133, 2, x_111);
lean_ctor_set(x_133, 3, x_131);
lean_ctor_set(x_133, 4, x_113);
lean_ctor_set(x_133, 5, x_132);
x_134 = lean_box(0);
x_17 = x_134;
x_18 = x_133;
goto block_46;
}
else
{
lean_object* x_135; 
lean_dec(x_122);
lean_dec(x_121);
lean_dec(x_120);
lean_dec(x_114);
lean_dec(x_113);
lean_dec(x_112);
lean_dec(x_111);
lean_dec(x_110);
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_135 = lean_box(0);
x_17 = x_135;
x_18 = x_123;
goto block_46;
}
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_136 = lean_ctor_get(x_119, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_119, 1);
lean_inc(x_137);
lean_dec(x_119);
x_138 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_110);
lean_ctor_set(x_138, 2, x_111);
lean_ctor_set(x_138, 3, x_112);
lean_ctor_set(x_138, 4, x_113);
lean_ctor_set(x_138, 5, x_114);
x_47 = x_136;
x_48 = x_138;
goto block_76;
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_139 = lean_ctor_get(x_115, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_115, 1);
lean_inc(x_140);
lean_dec(x_115);
x_141 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_110);
lean_ctor_set(x_141, 2, x_111);
lean_ctor_set(x_141, 3, x_112);
lean_ctor_set(x_141, 4, x_113);
lean_ctor_set(x_141, 5, x_114);
x_47 = x_139;
x_48 = x_141;
goto block_76;
}
}
}
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_180; lean_object* x_181; lean_object* x_199; lean_object* x_235; lean_object* x_236; uint8_t x_237; 
x_155 = lean_ctor_get(x_7, 0);
x_156 = lean_ctor_get(x_7, 1);
x_157 = lean_ctor_get(x_7, 2);
x_158 = lean_ctor_get(x_7, 3);
x_159 = lean_ctor_get(x_7, 4);
x_160 = lean_ctor_get(x_7, 5);
lean_inc(x_160);
lean_inc(x_159);
lean_inc(x_158);
lean_inc(x_157);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_7);
lean_inc(x_159);
x_235 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_235, 0, x_155);
lean_ctor_set(x_235, 1, x_1);
lean_ctor_set(x_235, 2, x_157);
lean_ctor_set(x_235, 3, x_158);
lean_ctor_set(x_235, 4, x_159);
lean_ctor_set(x_235, 5, x_160);
x_236 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_8);
lean_ctor_set(x_236, 2, x_9);
lean_ctor_set(x_236, 3, x_10);
lean_ctor_set(x_236, 4, x_11);
lean_ctor_set(x_236, 5, x_12);
x_237 = lean_ctor_get_uint8(x_159, sizeof(void*)*1);
lean_dec(x_159);
if (x_237 == 0)
{
x_199 = x_236;
goto block_234;
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; uint8_t x_241; 
x_238 = l_Lean_Meta_SynthInstance_newSubgoal___closed__3;
x_239 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_SynthInstance_trace___spec__1(x_238, x_5, x_236);
x_240 = lean_ctor_get(x_239, 0);
lean_inc(x_240);
x_241 = lean_unbox(x_240);
lean_dec(x_240);
if (x_241 == 0)
{
lean_object* x_242; 
x_242 = lean_ctor_get(x_239, 1);
lean_inc(x_242);
lean_dec(x_239);
x_199 = x_242;
goto block_234;
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_243 = lean_ctor_get(x_239, 1);
lean_inc(x_243);
lean_dec(x_239);
lean_inc(x_2);
x_244 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_244, 0, x_2);
x_245 = l_Lean_Meta_SynthInstance_newSubgoal___closed__2;
x_246 = l_Lean_Meta_SynthInstance_traceCore(x_245, x_244, x_5, x_243);
x_247 = lean_ctor_get(x_246, 1);
lean_inc(x_247);
lean_dec(x_246);
x_199 = x_247;
goto block_234;
}
}
block_179:
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_163 = lean_ctor_get(x_162, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_162, 1);
lean_inc(x_164);
x_165 = lean_ctor_get(x_162, 2);
lean_inc(x_165);
x_166 = lean_ctor_get(x_162, 3);
lean_inc(x_166);
x_167 = lean_ctor_get(x_162, 4);
lean_inc(x_167);
x_168 = lean_ctor_get(x_162, 5);
lean_inc(x_168);
if (lean_is_exclusive(x_162)) {
 lean_ctor_release(x_162, 0);
 lean_ctor_release(x_162, 1);
 lean_ctor_release(x_162, 2);
 lean_ctor_release(x_162, 3);
 lean_ctor_release(x_162, 4);
 lean_ctor_release(x_162, 5);
 x_169 = x_162;
} else {
 lean_dec_ref(x_162);
 x_169 = lean_box(0);
}
x_170 = lean_ctor_get(x_163, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_163, 2);
lean_inc(x_171);
x_172 = lean_ctor_get(x_163, 3);
lean_inc(x_172);
x_173 = lean_ctor_get(x_163, 4);
lean_inc(x_173);
x_174 = lean_ctor_get(x_163, 5);
lean_inc(x_174);
if (lean_is_exclusive(x_163)) {
 lean_ctor_release(x_163, 0);
 lean_ctor_release(x_163, 1);
 lean_ctor_release(x_163, 2);
 lean_ctor_release(x_163, 3);
 lean_ctor_release(x_163, 4);
 lean_ctor_release(x_163, 5);
 x_175 = x_163;
} else {
 lean_dec_ref(x_163);
 x_175 = lean_box(0);
}
if (lean_is_scalar(x_175)) {
 x_176 = lean_alloc_ctor(0, 6, 0);
} else {
 x_176 = x_175;
}
lean_ctor_set(x_176, 0, x_170);
lean_ctor_set(x_176, 1, x_156);
lean_ctor_set(x_176, 2, x_171);
lean_ctor_set(x_176, 3, x_172);
lean_ctor_set(x_176, 4, x_173);
lean_ctor_set(x_176, 5, x_174);
if (lean_is_scalar(x_169)) {
 x_177 = lean_alloc_ctor(0, 6, 0);
} else {
 x_177 = x_169;
}
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_164);
lean_ctor_set(x_177, 2, x_165);
lean_ctor_set(x_177, 3, x_166);
lean_ctor_set(x_177, 4, x_167);
lean_ctor_set(x_177, 5, x_168);
x_178 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_178, 0, x_161);
lean_ctor_set(x_178, 1, x_177);
return x_178;
}
block_198:
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_181, 1);
lean_inc(x_183);
x_184 = lean_ctor_get(x_181, 2);
lean_inc(x_184);
x_185 = lean_ctor_get(x_181, 3);
lean_inc(x_185);
x_186 = lean_ctor_get(x_181, 4);
lean_inc(x_186);
x_187 = lean_ctor_get(x_181, 5);
lean_inc(x_187);
if (lean_is_exclusive(x_181)) {
 lean_ctor_release(x_181, 0);
 lean_ctor_release(x_181, 1);
 lean_ctor_release(x_181, 2);
 lean_ctor_release(x_181, 3);
 lean_ctor_release(x_181, 4);
 lean_ctor_release(x_181, 5);
 x_188 = x_181;
} else {
 lean_dec_ref(x_181);
 x_188 = lean_box(0);
}
x_189 = lean_ctor_get(x_182, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_182, 2);
lean_inc(x_190);
x_191 = lean_ctor_get(x_182, 3);
lean_inc(x_191);
x_192 = lean_ctor_get(x_182, 4);
lean_inc(x_192);
x_193 = lean_ctor_get(x_182, 5);
lean_inc(x_193);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 lean_ctor_release(x_182, 2);
 lean_ctor_release(x_182, 3);
 lean_ctor_release(x_182, 4);
 lean_ctor_release(x_182, 5);
 x_194 = x_182;
} else {
 lean_dec_ref(x_182);
 x_194 = lean_box(0);
}
if (lean_is_scalar(x_194)) {
 x_195 = lean_alloc_ctor(0, 6, 0);
} else {
 x_195 = x_194;
}
lean_ctor_set(x_195, 0, x_189);
lean_ctor_set(x_195, 1, x_156);
lean_ctor_set(x_195, 2, x_190);
lean_ctor_set(x_195, 3, x_191);
lean_ctor_set(x_195, 4, x_192);
lean_ctor_set(x_195, 5, x_193);
if (lean_is_scalar(x_188)) {
 x_196 = lean_alloc_ctor(0, 6, 0);
} else {
 x_196 = x_188;
}
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_183);
lean_ctor_set(x_196, 2, x_184);
lean_ctor_set(x_196, 3, x_185);
lean_ctor_set(x_196, 4, x_186);
lean_ctor_set(x_196, 5, x_187);
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_180);
lean_ctor_set(x_197, 1, x_196);
return x_197;
}
block_234:
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; 
x_200 = lean_ctor_get(x_199, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_199, 1);
lean_inc(x_201);
x_202 = lean_ctor_get(x_199, 2);
lean_inc(x_202);
x_203 = lean_ctor_get(x_199, 3);
lean_inc(x_203);
x_204 = lean_ctor_get(x_199, 4);
lean_inc(x_204);
x_205 = lean_ctor_get(x_199, 5);
lean_inc(x_205);
if (lean_is_exclusive(x_199)) {
 lean_ctor_release(x_199, 0);
 lean_ctor_release(x_199, 1);
 lean_ctor_release(x_199, 2);
 lean_ctor_release(x_199, 3);
 lean_ctor_release(x_199, 4);
 lean_ctor_release(x_199, 5);
 x_206 = x_199;
} else {
 lean_dec_ref(x_199);
 x_206 = lean_box(0);
}
lean_inc(x_5);
lean_inc(x_3);
x_207 = l_Lean_Meta_inferType(x_3, x_5, x_200);
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_208 = lean_ctor_get(x_207, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_207, 1);
lean_inc(x_209);
lean_dec(x_207);
x_210 = l_Lean_Meta_SynthInstance_getInstances___closed__1;
x_211 = l_Lean_Meta_forallTelescopeReducing___rarg(x_208, x_210, x_5, x_209);
if (lean_obj_tag(x_211) == 0)
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; uint8_t x_216; 
x_212 = lean_ctor_get(x_211, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_211, 1);
lean_inc(x_213);
lean_dec(x_211);
x_214 = lean_ctor_get(x_213, 1);
lean_inc(x_214);
lean_inc(x_205);
lean_inc(x_204);
lean_inc(x_203);
lean_inc(x_202);
lean_inc(x_201);
lean_inc(x_213);
if (lean_is_scalar(x_206)) {
 x_215 = lean_alloc_ctor(0, 6, 0);
} else {
 x_215 = x_206;
}
lean_ctor_set(x_215, 0, x_213);
lean_ctor_set(x_215, 1, x_201);
lean_ctor_set(x_215, 2, x_202);
lean_ctor_set(x_215, 3, x_203);
lean_ctor_set(x_215, 4, x_204);
lean_ctor_set(x_215, 5, x_205);
x_216 = l_Array_isEmpty___rarg(x_212);
if (x_216 == 0)
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; 
lean_dec(x_215);
x_217 = lean_array_get_size(x_212);
lean_inc(x_2);
x_218 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_218, 0, x_3);
lean_ctor_set(x_218, 1, x_2);
lean_ctor_set(x_218, 2, x_214);
lean_ctor_set(x_218, 3, x_212);
lean_ctor_set(x_218, 4, x_217);
x_219 = l_Lean_mkOptionalNode___rarg___closed__1;
x_220 = lean_array_push(x_219, x_4);
x_221 = l_Array_empty___closed__1;
x_222 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_222, 0, x_220);
lean_ctor_set(x_222, 1, x_221);
x_223 = lean_array_push(x_203, x_218);
x_224 = l_PersistentHashMap_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_205, x_2, x_222);
if (lean_is_scalar(x_13)) {
 x_225 = lean_alloc_ctor(0, 6, 0);
} else {
 x_225 = x_13;
}
lean_ctor_set(x_225, 0, x_213);
lean_ctor_set(x_225, 1, x_201);
lean_ctor_set(x_225, 2, x_202);
lean_ctor_set(x_225, 3, x_223);
lean_ctor_set(x_225, 4, x_204);
lean_ctor_set(x_225, 5, x_224);
x_226 = lean_box(0);
x_161 = x_226;
x_162 = x_225;
goto block_179;
}
else
{
lean_object* x_227; 
lean_dec(x_214);
lean_dec(x_213);
lean_dec(x_212);
lean_dec(x_205);
lean_dec(x_204);
lean_dec(x_203);
lean_dec(x_202);
lean_dec(x_201);
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_227 = lean_box(0);
x_161 = x_227;
x_162 = x_215;
goto block_179;
}
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; 
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_228 = lean_ctor_get(x_211, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_211, 1);
lean_inc(x_229);
lean_dec(x_211);
if (lean_is_scalar(x_206)) {
 x_230 = lean_alloc_ctor(0, 6, 0);
} else {
 x_230 = x_206;
}
lean_ctor_set(x_230, 0, x_229);
lean_ctor_set(x_230, 1, x_201);
lean_ctor_set(x_230, 2, x_202);
lean_ctor_set(x_230, 3, x_203);
lean_ctor_set(x_230, 4, x_204);
lean_ctor_set(x_230, 5, x_205);
x_180 = x_228;
x_181 = x_230;
goto block_198;
}
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; 
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_231 = lean_ctor_get(x_207, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_207, 1);
lean_inc(x_232);
lean_dec(x_207);
if (lean_is_scalar(x_206)) {
 x_233 = lean_alloc_ctor(0, 6, 0);
} else {
 x_233 = x_206;
}
lean_ctor_set(x_233, 0, x_232);
lean_ctor_set(x_233, 1, x_201);
lean_ctor_set(x_233, 2, x_202);
lean_ctor_set(x_233, 3, x_203);
lean_ctor_set(x_233, 4, x_204);
lean_ctor_set(x_233, 5, x_205);
x_180 = x_231;
x_181 = x_233;
goto block_198;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_PersistentHashMap_insertAux___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_Meta_SynthInstance_findEntry___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_expr_eqv(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_Meta_SynthInstance_findEntry___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_expr_eqv(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_18 = l_PersistentHashMap_findAux___main___at_Lean_Meta_SynthInstance_findEntry___spec__2(x_16, x_17, x_3);
lean_dec(x_16);
return x_18;
}
default: 
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_PersistentHashMap_findAtAux___main___at_Lean_Meta_SynthInstance_findEntry___spec__3(x_20, x_21, lean_box(0), x_22, x_3);
return x_23;
}
}
}
lean_object* l_PersistentHashMap_find___at_Lean_Meta_SynthInstance_findEntry___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Lean_Expr_hash(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_Meta_SynthInstance_findEntry___spec__2(x_3, x_4, x_2);
return x_5;
}
}
lean_object* l_Lean_Meta_SynthInstance_findEntry(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 5);
lean_inc(x_4);
x_5 = l_PersistentHashMap_find___at_Lean_Meta_SynthInstance_findEntry___spec__1(x_4, x_1);
lean_dec(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_Meta_SynthInstance_findEntry___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PersistentHashMap_findAtAux___main___at_Lean_Meta_SynthInstance_findEntry___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_Meta_SynthInstance_findEntry___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_Meta_SynthInstance_findEntry___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_PersistentHashMap_find___at_Lean_Meta_SynthInstance_findEntry___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_find___at_Lean_Meta_SynthInstance_findEntry___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_SynthInstance_findEntry___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_SynthInstance_findEntry(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_getEntry___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_SynthInstance_SynthM_inhabited(lean_box(0));
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_getEntry___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid key at synthInstance");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_getEntry___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__1;
x_2 = lean_unsigned_to_nat(202u);
x_3 = lean_unsigned_to_nat(19u);
x_4 = l_Lean_Meta_SynthInstance_getEntry___closed__2;
x_5 = l___private_Init_Util_1__mkPanicMessage(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_SynthInstance_getEntry(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Meta_SynthInstance_findEntry(x_1, x_2, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_Lean_Meta_SynthInstance_getEntry___closed__1;
x_8 = l_Lean_Meta_SynthInstance_getEntry___closed__3;
x_9 = lean_panic_fn(x_8);
x_10 = lean_apply_2(x_9, x_2, x_6);
return x_10;
}
else
{
uint8_t x_11; 
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_4, 0);
lean_dec(x_12);
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
lean_ctor_set(x_4, 0, x_13);
return x_4;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_dec(x_4);
x_15 = lean_ctor_get(x_5, 0);
lean_inc(x_15);
lean_dec(x_5);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_getEntry___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_SynthInstance_getEntry(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_mkTableKeyFor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_39; 
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_1);
lean_ctor_set(x_6, 1, x_1);
lean_inc(x_3);
x_39 = l_Lean_Meta_inferType(x_2, x_3, x_6);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_Lean_Meta_instantiateMVars(x_40, x_3, x_41);
lean_dec(x_3);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_44 = lean_ctor_get(x_42, 0);
x_45 = lean_ctor_get(x_42, 1);
x_46 = l_Lean_Meta_SynthInstance_mkTableKey(x_1, x_44);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_45);
if (x_47 == 0)
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_45, 1);
lean_dec(x_48);
lean_ctor_set(x_45, 1, x_8);
lean_ctor_set(x_4, 0, x_45);
lean_ctor_set(x_42, 1, x_4);
lean_ctor_set(x_42, 0, x_46);
return x_42;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_49 = lean_ctor_get(x_45, 0);
x_50 = lean_ctor_get(x_45, 2);
x_51 = lean_ctor_get(x_45, 3);
x_52 = lean_ctor_get(x_45, 4);
x_53 = lean_ctor_get(x_45, 5);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_45);
x_54 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_54, 0, x_49);
lean_ctor_set(x_54, 1, x_8);
lean_ctor_set(x_54, 2, x_50);
lean_ctor_set(x_54, 3, x_51);
lean_ctor_set(x_54, 4, x_52);
lean_ctor_set(x_54, 5, x_53);
lean_ctor_set(x_4, 0, x_54);
lean_ctor_set(x_42, 1, x_4);
lean_ctor_set(x_42, 0, x_46);
return x_42;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_55 = lean_ctor_get(x_42, 0);
x_56 = lean_ctor_get(x_42, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_42);
x_57 = l_Lean_Meta_SynthInstance_mkTableKey(x_1, x_55);
lean_dec(x_1);
x_58 = lean_ctor_get(x_56, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_56, 2);
lean_inc(x_59);
x_60 = lean_ctor_get(x_56, 3);
lean_inc(x_60);
x_61 = lean_ctor_get(x_56, 4);
lean_inc(x_61);
x_62 = lean_ctor_get(x_56, 5);
lean_inc(x_62);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 lean_ctor_release(x_56, 2);
 lean_ctor_release(x_56, 3);
 lean_ctor_release(x_56, 4);
 lean_ctor_release(x_56, 5);
 x_63 = x_56;
} else {
 lean_dec_ref(x_56);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(0, 6, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_58);
lean_ctor_set(x_64, 1, x_8);
lean_ctor_set(x_64, 2, x_59);
lean_ctor_set(x_64, 3, x_60);
lean_ctor_set(x_64, 4, x_61);
lean_ctor_set(x_64, 5, x_62);
lean_ctor_set(x_4, 0, x_64);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_57);
lean_ctor_set(x_65, 1, x_4);
return x_65;
}
}
else
{
lean_object* x_66; lean_object* x_67; 
lean_dec(x_3);
lean_dec(x_1);
x_66 = lean_ctor_get(x_39, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_39, 1);
lean_inc(x_67);
lean_dec(x_39);
lean_ctor_set(x_4, 0, x_67);
x_9 = x_66;
x_10 = x_4;
goto block_38;
}
block_38:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 1);
lean_dec(x_14);
lean_ctor_set(x_12, 1, x_8);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_9);
lean_ctor_set(x_15, 1, x_10);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 2);
x_18 = lean_ctor_get(x_12, 3);
x_19 = lean_ctor_get(x_12, 4);
x_20 = lean_ctor_get(x_12, 5);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_21 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_21, 1, x_8);
lean_ctor_set(x_21, 2, x_17);
lean_ctor_set(x_21, 3, x_18);
lean_ctor_set(x_21, 4, x_19);
lean_ctor_set(x_21, 5, x_20);
lean_ctor_set(x_10, 0, x_21);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_9);
lean_ctor_set(x_22, 1, x_10);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_23 = lean_ctor_get(x_10, 0);
x_24 = lean_ctor_get(x_10, 1);
x_25 = lean_ctor_get(x_10, 2);
x_26 = lean_ctor_get(x_10, 3);
x_27 = lean_ctor_get(x_10, 4);
x_28 = lean_ctor_get(x_10, 5);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_10);
x_29 = lean_ctor_get(x_23, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_23, 2);
lean_inc(x_30);
x_31 = lean_ctor_get(x_23, 3);
lean_inc(x_31);
x_32 = lean_ctor_get(x_23, 4);
lean_inc(x_32);
x_33 = lean_ctor_get(x_23, 5);
lean_inc(x_33);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 lean_ctor_release(x_23, 2);
 lean_ctor_release(x_23, 3);
 lean_ctor_release(x_23, 4);
 lean_ctor_release(x_23, 5);
 x_34 = x_23;
} else {
 lean_dec_ref(x_23);
 x_34 = lean_box(0);
}
if (lean_is_scalar(x_34)) {
 x_35 = lean_alloc_ctor(0, 6, 0);
} else {
 x_35 = x_34;
}
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_8);
lean_ctor_set(x_35, 2, x_30);
lean_ctor_set(x_35, 3, x_31);
lean_ctor_set(x_35, 4, x_32);
lean_ctor_set(x_35, 5, x_33);
x_36 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_24);
lean_ctor_set(x_36, 2, x_25);
lean_ctor_set(x_36, 3, x_26);
lean_ctor_set(x_36, 4, x_27);
lean_ctor_set(x_36, 5, x_28);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_9);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_93; lean_object* x_94; 
x_68 = lean_ctor_get(x_6, 0);
x_69 = lean_ctor_get(x_6, 1);
x_70 = lean_ctor_get(x_6, 2);
x_71 = lean_ctor_get(x_6, 3);
x_72 = lean_ctor_get(x_6, 4);
x_73 = lean_ctor_get(x_6, 5);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_6);
lean_inc(x_1);
x_93 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_93, 0, x_68);
lean_ctor_set(x_93, 1, x_1);
lean_ctor_set(x_93, 2, x_70);
lean_ctor_set(x_93, 3, x_71);
lean_ctor_set(x_93, 4, x_72);
lean_ctor_set(x_93, 5, x_73);
lean_inc(x_3);
x_94 = l_Lean_Meta_inferType(x_2, x_3, x_93);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_94, 1);
lean_inc(x_96);
lean_dec(x_94);
x_97 = l_Lean_Meta_instantiateMVars(x_95, x_3, x_96);
lean_dec(x_3);
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_97, 1);
lean_inc(x_99);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 x_100 = x_97;
} else {
 lean_dec_ref(x_97);
 x_100 = lean_box(0);
}
x_101 = l_Lean_Meta_SynthInstance_mkTableKey(x_1, x_98);
lean_dec(x_1);
x_102 = lean_ctor_get(x_99, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_99, 2);
lean_inc(x_103);
x_104 = lean_ctor_get(x_99, 3);
lean_inc(x_104);
x_105 = lean_ctor_get(x_99, 4);
lean_inc(x_105);
x_106 = lean_ctor_get(x_99, 5);
lean_inc(x_106);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 lean_ctor_release(x_99, 2);
 lean_ctor_release(x_99, 3);
 lean_ctor_release(x_99, 4);
 lean_ctor_release(x_99, 5);
 x_107 = x_99;
} else {
 lean_dec_ref(x_99);
 x_107 = lean_box(0);
}
if (lean_is_scalar(x_107)) {
 x_108 = lean_alloc_ctor(0, 6, 0);
} else {
 x_108 = x_107;
}
lean_ctor_set(x_108, 0, x_102);
lean_ctor_set(x_108, 1, x_69);
lean_ctor_set(x_108, 2, x_103);
lean_ctor_set(x_108, 3, x_104);
lean_ctor_set(x_108, 4, x_105);
lean_ctor_set(x_108, 5, x_106);
lean_ctor_set(x_4, 0, x_108);
if (lean_is_scalar(x_100)) {
 x_109 = lean_alloc_ctor(0, 2, 0);
} else {
 x_109 = x_100;
}
lean_ctor_set(x_109, 0, x_101);
lean_ctor_set(x_109, 1, x_4);
return x_109;
}
else
{
lean_object* x_110; lean_object* x_111; 
lean_dec(x_3);
lean_dec(x_1);
x_110 = lean_ctor_get(x_94, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_94, 1);
lean_inc(x_111);
lean_dec(x_94);
lean_ctor_set(x_4, 0, x_111);
x_74 = x_110;
x_75 = x_4;
goto block_92;
}
block_92:
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
x_78 = lean_ctor_get(x_75, 2);
lean_inc(x_78);
x_79 = lean_ctor_get(x_75, 3);
lean_inc(x_79);
x_80 = lean_ctor_get(x_75, 4);
lean_inc(x_80);
x_81 = lean_ctor_get(x_75, 5);
lean_inc(x_81);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 lean_ctor_release(x_75, 2);
 lean_ctor_release(x_75, 3);
 lean_ctor_release(x_75, 4);
 lean_ctor_release(x_75, 5);
 x_82 = x_75;
} else {
 lean_dec_ref(x_75);
 x_82 = lean_box(0);
}
x_83 = lean_ctor_get(x_76, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_76, 2);
lean_inc(x_84);
x_85 = lean_ctor_get(x_76, 3);
lean_inc(x_85);
x_86 = lean_ctor_get(x_76, 4);
lean_inc(x_86);
x_87 = lean_ctor_get(x_76, 5);
lean_inc(x_87);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 lean_ctor_release(x_76, 2);
 lean_ctor_release(x_76, 3);
 lean_ctor_release(x_76, 4);
 lean_ctor_release(x_76, 5);
 x_88 = x_76;
} else {
 lean_dec_ref(x_76);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(0, 6, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_83);
lean_ctor_set(x_89, 1, x_69);
lean_ctor_set(x_89, 2, x_84);
lean_ctor_set(x_89, 3, x_85);
lean_ctor_set(x_89, 4, x_86);
lean_ctor_set(x_89, 5, x_87);
if (lean_is_scalar(x_82)) {
 x_90 = lean_alloc_ctor(0, 6, 0);
} else {
 x_90 = x_82;
}
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_77);
lean_ctor_set(x_90, 2, x_78);
lean_ctor_set(x_90, 3, x_79);
lean_ctor_set(x_90, 4, x_80);
lean_ctor_set(x_90, 5, x_81);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_74);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_144; lean_object* x_145; 
x_112 = lean_ctor_get(x_4, 0);
x_113 = lean_ctor_get(x_4, 1);
x_114 = lean_ctor_get(x_4, 2);
x_115 = lean_ctor_get(x_4, 3);
x_116 = lean_ctor_get(x_4, 4);
x_117 = lean_ctor_get(x_4, 5);
lean_inc(x_117);
lean_inc(x_116);
lean_inc(x_115);
lean_inc(x_114);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_4);
x_118 = lean_ctor_get(x_112, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_112, 1);
lean_inc(x_119);
x_120 = lean_ctor_get(x_112, 2);
lean_inc(x_120);
x_121 = lean_ctor_get(x_112, 3);
lean_inc(x_121);
x_122 = lean_ctor_get(x_112, 4);
lean_inc(x_122);
x_123 = lean_ctor_get(x_112, 5);
lean_inc(x_123);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 lean_ctor_release(x_112, 2);
 lean_ctor_release(x_112, 3);
 lean_ctor_release(x_112, 4);
 lean_ctor_release(x_112, 5);
 x_124 = x_112;
} else {
 lean_dec_ref(x_112);
 x_124 = lean_box(0);
}
lean_inc(x_1);
if (lean_is_scalar(x_124)) {
 x_144 = lean_alloc_ctor(0, 6, 0);
} else {
 x_144 = x_124;
}
lean_ctor_set(x_144, 0, x_118);
lean_ctor_set(x_144, 1, x_1);
lean_ctor_set(x_144, 2, x_120);
lean_ctor_set(x_144, 3, x_121);
lean_ctor_set(x_144, 4, x_122);
lean_ctor_set(x_144, 5, x_123);
lean_inc(x_3);
x_145 = l_Lean_Meta_inferType(x_2, x_3, x_144);
if (lean_obj_tag(x_145) == 0)
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
lean_dec(x_145);
x_148 = l_Lean_Meta_instantiateMVars(x_146, x_3, x_147);
lean_dec(x_3);
x_149 = lean_ctor_get(x_148, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_148, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_151 = x_148;
} else {
 lean_dec_ref(x_148);
 x_151 = lean_box(0);
}
x_152 = l_Lean_Meta_SynthInstance_mkTableKey(x_1, x_149);
lean_dec(x_1);
x_153 = lean_ctor_get(x_150, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_150, 2);
lean_inc(x_154);
x_155 = lean_ctor_get(x_150, 3);
lean_inc(x_155);
x_156 = lean_ctor_get(x_150, 4);
lean_inc(x_156);
x_157 = lean_ctor_get(x_150, 5);
lean_inc(x_157);
if (lean_is_exclusive(x_150)) {
 lean_ctor_release(x_150, 0);
 lean_ctor_release(x_150, 1);
 lean_ctor_release(x_150, 2);
 lean_ctor_release(x_150, 3);
 lean_ctor_release(x_150, 4);
 lean_ctor_release(x_150, 5);
 x_158 = x_150;
} else {
 lean_dec_ref(x_150);
 x_158 = lean_box(0);
}
if (lean_is_scalar(x_158)) {
 x_159 = lean_alloc_ctor(0, 6, 0);
} else {
 x_159 = x_158;
}
lean_ctor_set(x_159, 0, x_153);
lean_ctor_set(x_159, 1, x_119);
lean_ctor_set(x_159, 2, x_154);
lean_ctor_set(x_159, 3, x_155);
lean_ctor_set(x_159, 4, x_156);
lean_ctor_set(x_159, 5, x_157);
x_160 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_113);
lean_ctor_set(x_160, 2, x_114);
lean_ctor_set(x_160, 3, x_115);
lean_ctor_set(x_160, 4, x_116);
lean_ctor_set(x_160, 5, x_117);
if (lean_is_scalar(x_151)) {
 x_161 = lean_alloc_ctor(0, 2, 0);
} else {
 x_161 = x_151;
}
lean_ctor_set(x_161, 0, x_152);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; 
lean_dec(x_3);
lean_dec(x_1);
x_162 = lean_ctor_get(x_145, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_145, 1);
lean_inc(x_163);
lean_dec(x_145);
x_164 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_164, 0, x_163);
lean_ctor_set(x_164, 1, x_113);
lean_ctor_set(x_164, 2, x_114);
lean_ctor_set(x_164, 3, x_115);
lean_ctor_set(x_164, 4, x_116);
lean_ctor_set(x_164, 5, x_117);
x_125 = x_162;
x_126 = x_164;
goto block_143;
}
block_143:
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
x_129 = lean_ctor_get(x_126, 2);
lean_inc(x_129);
x_130 = lean_ctor_get(x_126, 3);
lean_inc(x_130);
x_131 = lean_ctor_get(x_126, 4);
lean_inc(x_131);
x_132 = lean_ctor_get(x_126, 5);
lean_inc(x_132);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 lean_ctor_release(x_126, 2);
 lean_ctor_release(x_126, 3);
 lean_ctor_release(x_126, 4);
 lean_ctor_release(x_126, 5);
 x_133 = x_126;
} else {
 lean_dec_ref(x_126);
 x_133 = lean_box(0);
}
x_134 = lean_ctor_get(x_127, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_127, 2);
lean_inc(x_135);
x_136 = lean_ctor_get(x_127, 3);
lean_inc(x_136);
x_137 = lean_ctor_get(x_127, 4);
lean_inc(x_137);
x_138 = lean_ctor_get(x_127, 5);
lean_inc(x_138);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 lean_ctor_release(x_127, 2);
 lean_ctor_release(x_127, 3);
 lean_ctor_release(x_127, 4);
 lean_ctor_release(x_127, 5);
 x_139 = x_127;
} else {
 lean_dec_ref(x_127);
 x_139 = lean_box(0);
}
if (lean_is_scalar(x_139)) {
 x_140 = lean_alloc_ctor(0, 6, 0);
} else {
 x_140 = x_139;
}
lean_ctor_set(x_140, 0, x_134);
lean_ctor_set(x_140, 1, x_119);
lean_ctor_set(x_140, 2, x_135);
lean_ctor_set(x_140, 3, x_136);
lean_ctor_set(x_140, 4, x_137);
lean_ctor_set(x_140, 5, x_138);
if (lean_is_scalar(x_133)) {
 x_141 = lean_alloc_ctor(0, 6, 0);
} else {
 x_141 = x_133;
}
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_128);
lean_ctor_set(x_141, 2, x_129);
lean_ctor_set(x_141, 3, x_130);
lean_ctor_set(x_141, 4, x_131);
lean_ctor_set(x_141, 5, x_132);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_125);
lean_ctor_set(x_142, 1, x_141);
return x_142;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_3__mkInstanceTelescopeAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
if (lean_obj_tag(x_8) == 7)
{
lean_object* x_34; lean_object* x_35; uint64_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_34 = lean_ctor_get(x_8, 1);
x_35 = lean_ctor_get(x_8, 2);
x_36 = lean_ctor_get_uint64(x_8, sizeof(void*)*3);
x_37 = lean_array_get_size(x_4);
lean_inc(x_4);
x_38 = lean_expr_instantiate_rev_range(x_34, x_5, x_37, x_4);
lean_dec(x_37);
lean_inc(x_9);
lean_inc(x_3);
x_39 = l_Lean_Meta_mkForall(x_3, x_38, x_9, x_10);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; uint8_t x_51; lean_object* x_52; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_box(0);
x_43 = 0;
lean_inc(x_2);
lean_inc(x_1);
x_44 = l_Lean_Meta_mkFreshExprMVarAt(x_1, x_2, x_40, x_42, x_43, x_9, x_41);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_unsigned_to_nat(0u);
lean_inc(x_45);
x_48 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_3, x_3, x_47, x_45);
lean_inc(x_48);
x_49 = l_Lean_mkApp(x_7, x_48);
x_50 = (uint8_t)((x_36 << 24) >> 61);
x_51 = l_Lean_BinderInfo_isInstImplicit(x_50);
x_52 = lean_array_push(x_4, x_48);
if (x_51 == 0)
{
lean_dec(x_45);
x_4 = x_52;
x_7 = x_49;
x_8 = x_35;
x_10 = x_46;
goto _start;
}
else
{
lean_object* x_54; 
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_45);
lean_ctor_set(x_54, 1, x_6);
x_4 = x_52;
x_6 = x_54;
x_7 = x_49;
x_8 = x_35;
x_10 = x_46;
goto _start;
}
}
else
{
uint8_t x_56; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_39);
if (x_56 == 0)
{
return x_39;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_39, 0);
x_58 = lean_ctor_get(x_39, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_39);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
lean_object* x_60; 
x_60 = lean_box(0);
x_11 = x_60;
goto block_33;
}
block_33:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_11);
x_12 = lean_array_get_size(x_4);
lean_inc(x_4);
x_13 = lean_expr_instantiate_rev_range(x_8, x_5, x_12, x_4);
lean_dec(x_5);
lean_inc(x_9);
x_14 = l_Lean_Meta_whnf(x_13, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_18 = l_Lean_Expr_isForall(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_7);
lean_ctor_set(x_19, 1, x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_6);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_14, 0, x_20);
return x_14;
}
else
{
lean_object* x_21; 
lean_free_object(x_14);
x_21 = l___private_Init_Lean_Meta_SynthInstance_3__mkInstanceTelescopeAux___main(x_1, x_2, x_3, x_4, x_12, x_6, x_7, x_16, x_9, x_17);
lean_dec(x_16);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_14, 0);
x_23 = lean_ctor_get(x_14, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_14);
x_24 = l_Lean_Expr_isForall(x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_7);
lean_ctor_set(x_25, 1, x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_6);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_23);
return x_27;
}
else
{
lean_object* x_28; 
x_28 = l___private_Init_Lean_Meta_SynthInstance_3__mkInstanceTelescopeAux___main(x_1, x_2, x_3, x_4, x_12, x_6, x_7, x_22, x_9, x_23);
lean_dec(x_22);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_14);
if (x_29 == 0)
{
return x_14;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_14, 0);
x_31 = lean_ctor_get(x_14, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_14);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_3__mkInstanceTelescopeAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Init_Lean_Meta_SynthInstance_3__mkInstanceTelescopeAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
return x_11;
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_3__mkInstanceTelescopeAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Init_Lean_Meta_SynthInstance_3__mkInstanceTelescopeAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_3__mkInstanceTelescopeAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Init_Lean_Meta_SynthInstance_3__mkInstanceTelescopeAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
return x_11;
}
}
lean_object* l_Lean_Meta_SynthInstance_mkInstanceTelescope(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
x_7 = l_Lean_Meta_inferType(x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_box(0);
x_11 = l_Array_empty___closed__1;
x_12 = lean_unsigned_to_nat(0u);
x_13 = l___private_Init_Lean_Meta_SynthInstance_3__mkInstanceTelescopeAux___main(x_1, x_2, x_3, x_11, x_12, x_10, x_4, x_8, x_5, x_9);
lean_dec(x_8);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_7);
if (x_14 == 0)
{
return x_7;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_7, 0);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_7);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_fmt___at_Lean_Meta_SynthInstance_tryResolveCore___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tryResolve");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_2 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__2;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_isLevelDefEq___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failure assigning");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__6;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__7;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_isLevelDefEq___closed__8;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__9;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_5);
x_9 = l_Lean_Meta_SynthInstance_mkInstanceTelescope(x_1, x_2, x_5, x_3, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_224; uint8_t x_225; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 x_16 = x_11;
} else {
 lean_dec_ref(x_11);
 x_16 = lean_box(0);
}
x_224 = lean_ctor_get(x_12, 4);
lean_inc(x_224);
x_225 = lean_ctor_get_uint8(x_224, sizeof(void*)*1);
lean_dec(x_224);
if (x_225 == 0)
{
x_17 = x_12;
goto block_223;
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; uint8_t x_229; 
x_226 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__3;
x_227 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_226, x_7, x_12);
x_228 = lean_ctor_get(x_227, 0);
lean_inc(x_228);
x_229 = lean_unbox(x_228);
lean_dec(x_228);
if (x_229 == 0)
{
lean_object* x_230; 
x_230 = lean_ctor_get(x_227, 1);
lean_inc(x_230);
lean_dec(x_227);
x_17 = x_230;
goto block_223;
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_231 = lean_ctor_get(x_227, 1);
lean_inc(x_231);
lean_dec(x_227);
x_232 = lean_ctor_get(x_231, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_231, 1);
lean_inc(x_233);
x_234 = lean_ctor_get(x_7, 1);
lean_inc(x_234);
lean_inc(x_6);
x_235 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_235, 0, x_6);
x_236 = l_Lean_Meta_Exception_toMessageData___closed__51;
x_237 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_237, 0, x_235);
lean_ctor_set(x_237, 1, x_236);
lean_inc(x_15);
x_238 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_238, 0, x_15);
x_239 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_239, 0, x_237);
lean_ctor_set(x_239, 1, x_238);
x_240 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_240, 0, x_232);
lean_ctor_set(x_240, 1, x_233);
lean_ctor_set(x_240, 2, x_234);
lean_ctor_set(x_240, 3, x_239);
x_241 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__2;
x_242 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_241, x_240, x_7, x_231);
x_243 = lean_ctor_get(x_242, 1);
lean_inc(x_243);
lean_dec(x_242);
x_17 = x_243;
goto block_223;
}
}
block_223:
{
lean_object* x_18; 
lean_inc(x_7);
x_18 = l_Lean_Meta_isExprDefEq(x_6, x_15, x_7, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_unbox(x_19);
lean_dec(x_19);
if (x_20 == 0)
{
uint8_t x_21; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
x_21 = !lean_is_exclusive(x_18);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_18, 1);
x_23 = lean_ctor_get(x_18, 0);
lean_dec(x_23);
x_24 = lean_ctor_get(x_22, 4);
lean_inc(x_24);
x_25 = lean_ctor_get_uint8(x_24, sizeof(void*)*1);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_7);
x_26 = lean_box(0);
lean_ctor_set(x_18, 0, x_26);
return x_18;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_free_object(x_18);
x_27 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__3;
x_28 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_27, x_7, x_22);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
uint8_t x_31; 
lean_dec(x_7);
x_31 = !lean_is_exclusive(x_28);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_28, 0);
lean_dec(x_32);
x_33 = lean_box(0);
lean_ctor_set(x_28, 0, x_33);
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
lean_dec(x_28);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_37 = lean_ctor_get(x_28, 1);
lean_inc(x_37);
lean_dec(x_28);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
x_40 = lean_ctor_get(x_7, 1);
lean_inc(x_40);
x_41 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__5;
x_42 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_42, 0, x_38);
lean_ctor_set(x_42, 1, x_39);
lean_ctor_set(x_42, 2, x_40);
lean_ctor_set(x_42, 3, x_41);
x_43 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__2;
x_44 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_43, x_42, x_7, x_37);
lean_dec(x_7);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_44, 0);
lean_dec(x_46);
x_47 = lean_box(0);
lean_ctor_set(x_44, 0, x_47);
return x_44;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_44, 1);
lean_inc(x_48);
lean_dec(x_44);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
}
}
else
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_51 = lean_ctor_get(x_18, 1);
lean_inc(x_51);
lean_dec(x_18);
x_52 = lean_ctor_get(x_51, 4);
lean_inc(x_52);
x_53 = lean_ctor_get_uint8(x_52, sizeof(void*)*1);
lean_dec(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_7);
x_54 = lean_box(0);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_51);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_56 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__3;
x_57 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_56, x_7, x_51);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_unbox(x_58);
lean_dec(x_58);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_7);
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_61 = x_57;
} else {
 lean_dec_ref(x_57);
 x_61 = lean_box(0);
}
x_62 = lean_box(0);
if (lean_is_scalar(x_61)) {
 x_63 = lean_alloc_ctor(0, 2, 0);
} else {
 x_63 = x_61;
}
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_60);
return x_63;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_64 = lean_ctor_get(x_57, 1);
lean_inc(x_64);
lean_dec(x_57);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
x_67 = lean_ctor_get(x_7, 1);
lean_inc(x_67);
x_68 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__5;
x_69 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_69, 0, x_65);
lean_ctor_set(x_69, 1, x_66);
lean_ctor_set(x_69, 2, x_67);
lean_ctor_set(x_69, 3, x_68);
x_70 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__2;
x_71 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_70, x_69, x_7, x_64);
lean_dec(x_7);
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_73 = x_71;
} else {
 lean_dec_ref(x_71);
 x_73 = lean_box(0);
}
x_74 = lean_box(0);
if (lean_is_scalar(x_73)) {
 x_75 = lean_alloc_ctor(0, 2, 0);
} else {
 x_75 = x_73;
}
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_72);
return x_75;
}
}
}
}
else
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_ctor_get(x_18, 1);
lean_inc(x_76);
lean_dec(x_18);
lean_inc(x_7);
x_77 = l_Lean_Meta_mkLambda(x_5, x_14, x_7, x_76);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
lean_inc(x_7);
x_80 = l_Lean_Meta_isExprDefEq(x_4, x_78, x_7, x_79);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; uint8_t x_82; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_unbox(x_81);
lean_dec(x_81);
if (x_82 == 0)
{
uint8_t x_83; 
lean_dec(x_16);
lean_dec(x_13);
x_83 = !lean_is_exclusive(x_80);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_84 = lean_ctor_get(x_80, 1);
x_85 = lean_ctor_get(x_80, 0);
lean_dec(x_85);
x_86 = lean_ctor_get(x_84, 4);
lean_inc(x_86);
x_87 = lean_ctor_get_uint8(x_86, sizeof(void*)*1);
lean_dec(x_86);
if (x_87 == 0)
{
lean_object* x_88; 
lean_dec(x_7);
x_88 = lean_box(0);
lean_ctor_set(x_80, 0, x_88);
return x_80;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; 
lean_free_object(x_80);
x_89 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__3;
x_90 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_89, x_7, x_84);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_unbox(x_91);
lean_dec(x_91);
if (x_92 == 0)
{
uint8_t x_93; 
lean_dec(x_7);
x_93 = !lean_is_exclusive(x_90);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_ctor_get(x_90, 0);
lean_dec(x_94);
x_95 = lean_box(0);
lean_ctor_set(x_90, 0, x_95);
return x_90;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_90, 1);
lean_inc(x_96);
lean_dec(x_90);
x_97 = lean_box(0);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_96);
return x_98;
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_99 = lean_ctor_get(x_90, 1);
lean_inc(x_99);
lean_dec(x_90);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
x_102 = lean_ctor_get(x_7, 1);
lean_inc(x_102);
x_103 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__8;
x_104 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_104, 0, x_100);
lean_ctor_set(x_104, 1, x_101);
lean_ctor_set(x_104, 2, x_102);
lean_ctor_set(x_104, 3, x_103);
x_105 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__2;
x_106 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_105, x_104, x_7, x_99);
lean_dec(x_7);
x_107 = !lean_is_exclusive(x_106);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; 
x_108 = lean_ctor_get(x_106, 0);
lean_dec(x_108);
x_109 = lean_box(0);
lean_ctor_set(x_106, 0, x_109);
return x_106;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_106, 1);
lean_inc(x_110);
lean_dec(x_106);
x_111 = lean_box(0);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_110);
return x_112;
}
}
}
}
else
{
lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_113 = lean_ctor_get(x_80, 1);
lean_inc(x_113);
lean_dec(x_80);
x_114 = lean_ctor_get(x_113, 4);
lean_inc(x_114);
x_115 = lean_ctor_get_uint8(x_114, sizeof(void*)*1);
lean_dec(x_114);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; 
lean_dec(x_7);
x_116 = lean_box(0);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_113);
return x_117;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; 
x_118 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__3;
x_119 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_118, x_7, x_113);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_unbox(x_120);
lean_dec(x_120);
if (x_121 == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
lean_dec(x_7);
x_122 = lean_ctor_get(x_119, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_123 = x_119;
} else {
 lean_dec_ref(x_119);
 x_123 = lean_box(0);
}
x_124 = lean_box(0);
if (lean_is_scalar(x_123)) {
 x_125 = lean_alloc_ctor(0, 2, 0);
} else {
 x_125 = x_123;
}
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_122);
return x_125;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_126 = lean_ctor_get(x_119, 1);
lean_inc(x_126);
lean_dec(x_119);
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
x_129 = lean_ctor_get(x_7, 1);
lean_inc(x_129);
x_130 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__8;
x_131 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_131, 0, x_127);
lean_ctor_set(x_131, 1, x_128);
lean_ctor_set(x_131, 2, x_129);
lean_ctor_set(x_131, 3, x_130);
x_132 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__2;
x_133 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_132, x_131, x_7, x_126);
lean_dec(x_7);
x_134 = lean_ctor_get(x_133, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_133)) {
 lean_ctor_release(x_133, 0);
 lean_ctor_release(x_133, 1);
 x_135 = x_133;
} else {
 lean_dec_ref(x_133);
 x_135 = lean_box(0);
}
x_136 = lean_box(0);
if (lean_is_scalar(x_135)) {
 x_137 = lean_alloc_ctor(0, 2, 0);
} else {
 x_137 = x_135;
}
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_134);
return x_137;
}
}
}
}
else
{
uint8_t x_138; 
x_138 = !lean_is_exclusive(x_80);
if (x_138 == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; uint8_t x_142; 
x_139 = lean_ctor_get(x_80, 1);
x_140 = lean_ctor_get(x_80, 0);
lean_dec(x_140);
x_141 = lean_ctor_get(x_139, 4);
lean_inc(x_141);
x_142 = lean_ctor_get_uint8(x_141, sizeof(void*)*1);
lean_dec(x_141);
if (x_142 == 0)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_7);
x_143 = lean_ctor_get(x_139, 1);
lean_inc(x_143);
if (lean_is_scalar(x_16)) {
 x_144 = lean_alloc_ctor(0, 2, 0);
} else {
 x_144 = x_16;
}
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_13);
x_145 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_80, 0, x_145);
return x_80;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; uint8_t x_149; 
lean_free_object(x_80);
x_146 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__3;
x_147 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_146, x_7, x_139);
x_148 = lean_ctor_get(x_147, 0);
lean_inc(x_148);
x_149 = lean_unbox(x_148);
lean_dec(x_148);
if (x_149 == 0)
{
uint8_t x_150; 
lean_dec(x_7);
x_150 = !lean_is_exclusive(x_147);
if (x_150 == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_151 = lean_ctor_get(x_147, 1);
x_152 = lean_ctor_get(x_147, 0);
lean_dec(x_152);
x_153 = lean_ctor_get(x_151, 1);
lean_inc(x_153);
if (lean_is_scalar(x_16)) {
 x_154 = lean_alloc_ctor(0, 2, 0);
} else {
 x_154 = x_16;
}
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_13);
x_155 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_147, 0, x_155);
return x_147;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_156 = lean_ctor_get(x_147, 1);
lean_inc(x_156);
lean_dec(x_147);
x_157 = lean_ctor_get(x_156, 1);
lean_inc(x_157);
if (lean_is_scalar(x_16)) {
 x_158 = lean_alloc_ctor(0, 2, 0);
} else {
 x_158 = x_16;
}
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_13);
x_159 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_159, 0, x_158);
x_160 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_156);
return x_160;
}
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; uint8_t x_169; 
x_161 = lean_ctor_get(x_147, 1);
lean_inc(x_161);
lean_dec(x_147);
x_162 = lean_ctor_get(x_161, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_161, 1);
lean_inc(x_163);
x_164 = lean_ctor_get(x_7, 1);
lean_inc(x_164);
x_165 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__10;
x_166 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_166, 0, x_162);
lean_ctor_set(x_166, 1, x_163);
lean_ctor_set(x_166, 2, x_164);
lean_ctor_set(x_166, 3, x_165);
x_167 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__2;
x_168 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_167, x_166, x_7, x_161);
lean_dec(x_7);
x_169 = !lean_is_exclusive(x_168);
if (x_169 == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_170 = lean_ctor_get(x_168, 1);
x_171 = lean_ctor_get(x_168, 0);
lean_dec(x_171);
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
if (lean_is_scalar(x_16)) {
 x_173 = lean_alloc_ctor(0, 2, 0);
} else {
 x_173 = x_16;
}
lean_ctor_set(x_173, 0, x_172);
lean_ctor_set(x_173, 1, x_13);
x_174 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_168, 0, x_174);
return x_168;
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_175 = lean_ctor_get(x_168, 1);
lean_inc(x_175);
lean_dec(x_168);
x_176 = lean_ctor_get(x_175, 1);
lean_inc(x_176);
if (lean_is_scalar(x_16)) {
 x_177 = lean_alloc_ctor(0, 2, 0);
} else {
 x_177 = x_16;
}
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_13);
x_178 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_178, 0, x_177);
x_179 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_179, 0, x_178);
lean_ctor_set(x_179, 1, x_175);
return x_179;
}
}
}
}
else
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; 
x_180 = lean_ctor_get(x_80, 1);
lean_inc(x_180);
lean_dec(x_80);
x_181 = lean_ctor_get(x_180, 4);
lean_inc(x_181);
x_182 = lean_ctor_get_uint8(x_181, sizeof(void*)*1);
lean_dec(x_181);
if (x_182 == 0)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_7);
x_183 = lean_ctor_get(x_180, 1);
lean_inc(x_183);
if (lean_is_scalar(x_16)) {
 x_184 = lean_alloc_ctor(0, 2, 0);
} else {
 x_184 = x_16;
}
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_13);
x_185 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_185, 0, x_184);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_180);
return x_186;
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; uint8_t x_190; 
x_187 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__3;
x_188 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_187, x_7, x_180);
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_unbox(x_189);
lean_dec(x_189);
if (x_190 == 0)
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
lean_dec(x_7);
x_191 = lean_ctor_get(x_188, 1);
lean_inc(x_191);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_192 = x_188;
} else {
 lean_dec_ref(x_188);
 x_192 = lean_box(0);
}
x_193 = lean_ctor_get(x_191, 1);
lean_inc(x_193);
if (lean_is_scalar(x_16)) {
 x_194 = lean_alloc_ctor(0, 2, 0);
} else {
 x_194 = x_16;
}
lean_ctor_set(x_194, 0, x_193);
lean_ctor_set(x_194, 1, x_13);
x_195 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_195, 0, x_194);
if (lean_is_scalar(x_192)) {
 x_196 = lean_alloc_ctor(0, 2, 0);
} else {
 x_196 = x_192;
}
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_191);
return x_196;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_197 = lean_ctor_get(x_188, 1);
lean_inc(x_197);
lean_dec(x_188);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
x_200 = lean_ctor_get(x_7, 1);
lean_inc(x_200);
x_201 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__10;
x_202 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_202, 0, x_198);
lean_ctor_set(x_202, 1, x_199);
lean_ctor_set(x_202, 2, x_200);
lean_ctor_set(x_202, 3, x_201);
x_203 = l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__2;
x_204 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_203, x_202, x_7, x_197);
lean_dec(x_7);
x_205 = lean_ctor_get(x_204, 1);
lean_inc(x_205);
if (lean_is_exclusive(x_204)) {
 lean_ctor_release(x_204, 0);
 lean_ctor_release(x_204, 1);
 x_206 = x_204;
} else {
 lean_dec_ref(x_204);
 x_206 = lean_box(0);
}
x_207 = lean_ctor_get(x_205, 1);
lean_inc(x_207);
if (lean_is_scalar(x_16)) {
 x_208 = lean_alloc_ctor(0, 2, 0);
} else {
 x_208 = x_16;
}
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set(x_208, 1, x_13);
x_209 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_209, 0, x_208);
if (lean_is_scalar(x_206)) {
 x_210 = lean_alloc_ctor(0, 2, 0);
} else {
 x_210 = x_206;
}
lean_ctor_set(x_210, 0, x_209);
lean_ctor_set(x_210, 1, x_205);
return x_210;
}
}
}
}
}
else
{
uint8_t x_211; 
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_7);
x_211 = !lean_is_exclusive(x_80);
if (x_211 == 0)
{
return x_80;
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_212 = lean_ctor_get(x_80, 0);
x_213 = lean_ctor_get(x_80, 1);
lean_inc(x_213);
lean_inc(x_212);
lean_dec(x_80);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_212);
lean_ctor_set(x_214, 1, x_213);
return x_214;
}
}
}
else
{
uint8_t x_215; 
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_4);
x_215 = !lean_is_exclusive(x_77);
if (x_215 == 0)
{
return x_77;
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_216 = lean_ctor_get(x_77, 0);
x_217 = lean_ctor_get(x_77, 1);
lean_inc(x_217);
lean_inc(x_216);
lean_dec(x_77);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_216);
lean_ctor_set(x_218, 1, x_217);
return x_218;
}
}
}
}
else
{
uint8_t x_219; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_219 = !lean_is_exclusive(x_18);
if (x_219 == 0)
{
return x_18;
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_220 = lean_ctor_get(x_18, 0);
x_221 = lean_ctor_get(x_18, 1);
lean_inc(x_221);
lean_inc(x_220);
lean_dec(x_18);
x_222 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_222, 0, x_220);
lean_ctor_set(x_222, 1, x_221);
return x_222;
}
}
}
}
else
{
uint8_t x_244; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_244 = !lean_is_exclusive(x_9);
if (x_244 == 0)
{
return x_9;
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_245 = lean_ctor_get(x_9, 0);
x_246 = lean_ctor_get(x_9, 1);
lean_inc(x_246);
lean_inc(x_245);
lean_dec(x_9);
x_247 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_247, 0, x_245);
lean_ctor_set(x_247, 1, x_246);
return x_247;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_1);
x_5 = l_Lean_Meta_inferType(x_1, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 2);
lean_inc(x_9);
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1), 8, 4);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_1);
x_11 = l_Lean_Meta_forallTelescopeReducing___rarg(x_6, x_10, x_3, x_7);
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_5);
if (x_12 == 0)
{
return x_5;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_5, 0);
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_5);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_tryResolve(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 1);
lean_ctor_set(x_7, 1, x_1);
x_10 = l_Lean_Meta_SynthInstance_tryResolveCore(x_2, x_3, x_4, x_7);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_10, 1);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 1);
lean_dec(x_14);
lean_ctor_set(x_12, 1, x_9);
lean_ctor_set(x_5, 0, x_12);
lean_ctor_set(x_10, 1, x_5);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 2);
x_17 = lean_ctor_get(x_12, 3);
x_18 = lean_ctor_get(x_12, 4);
x_19 = lean_ctor_get(x_12, 5);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_12);
x_20 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_20, 0, x_15);
lean_ctor_set(x_20, 1, x_9);
lean_ctor_set(x_20, 2, x_16);
lean_ctor_set(x_20, 3, x_17);
lean_ctor_set(x_20, 4, x_18);
lean_ctor_set(x_20, 5, x_19);
lean_ctor_set(x_5, 0, x_20);
lean_ctor_set(x_10, 1, x_5);
return x_10;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_ctor_get(x_10, 1);
x_22 = lean_ctor_get(x_10, 0);
lean_inc(x_21);
lean_inc(x_22);
lean_dec(x_10);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_21, 2);
lean_inc(x_24);
x_25 = lean_ctor_get(x_21, 3);
lean_inc(x_25);
x_26 = lean_ctor_get(x_21, 4);
lean_inc(x_26);
x_27 = lean_ctor_get(x_21, 5);
lean_inc(x_27);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 lean_ctor_release(x_21, 1);
 lean_ctor_release(x_21, 2);
 lean_ctor_release(x_21, 3);
 lean_ctor_release(x_21, 4);
 lean_ctor_release(x_21, 5);
 x_28 = x_21;
} else {
 lean_dec_ref(x_21);
 x_28 = lean_box(0);
}
if (lean_is_scalar(x_28)) {
 x_29 = lean_alloc_ctor(0, 6, 0);
} else {
 x_29 = x_28;
}
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_9);
lean_ctor_set(x_29, 2, x_24);
lean_ctor_set(x_29, 3, x_25);
lean_ctor_set(x_29, 4, x_26);
lean_ctor_set(x_29, 5, x_27);
lean_ctor_set(x_5, 0, x_29);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_22);
lean_ctor_set(x_30, 1, x_5);
return x_30;
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_10);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_ctor_get(x_10, 1);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 1);
lean_dec(x_34);
lean_ctor_set(x_32, 1, x_9);
lean_ctor_set(x_5, 0, x_32);
lean_ctor_set(x_10, 1, x_5);
return x_10;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_32, 0);
x_36 = lean_ctor_get(x_32, 2);
x_37 = lean_ctor_get(x_32, 3);
x_38 = lean_ctor_get(x_32, 4);
x_39 = lean_ctor_get(x_32, 5);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_32);
x_40 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_40, 0, x_35);
lean_ctor_set(x_40, 1, x_9);
lean_ctor_set(x_40, 2, x_36);
lean_ctor_set(x_40, 3, x_37);
lean_ctor_set(x_40, 4, x_38);
lean_ctor_set(x_40, 5, x_39);
lean_ctor_set(x_5, 0, x_40);
lean_ctor_set(x_10, 1, x_5);
return x_10;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_41 = lean_ctor_get(x_10, 1);
x_42 = lean_ctor_get(x_10, 0);
lean_inc(x_41);
lean_inc(x_42);
lean_dec(x_10);
x_43 = lean_ctor_get(x_41, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_41, 2);
lean_inc(x_44);
x_45 = lean_ctor_get(x_41, 3);
lean_inc(x_45);
x_46 = lean_ctor_get(x_41, 4);
lean_inc(x_46);
x_47 = lean_ctor_get(x_41, 5);
lean_inc(x_47);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 lean_ctor_release(x_41, 2);
 lean_ctor_release(x_41, 3);
 lean_ctor_release(x_41, 4);
 lean_ctor_release(x_41, 5);
 x_48 = x_41;
} else {
 lean_dec_ref(x_41);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(0, 6, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_43);
lean_ctor_set(x_49, 1, x_9);
lean_ctor_set(x_49, 2, x_44);
lean_ctor_set(x_49, 3, x_45);
lean_ctor_set(x_49, 4, x_46);
lean_ctor_set(x_49, 5, x_47);
lean_ctor_set(x_5, 0, x_49);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_42);
lean_ctor_set(x_50, 1, x_5);
return x_50;
}
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_51 = lean_ctor_get(x_7, 0);
x_52 = lean_ctor_get(x_7, 1);
x_53 = lean_ctor_get(x_7, 2);
x_54 = lean_ctor_get(x_7, 3);
x_55 = lean_ctor_get(x_7, 4);
x_56 = lean_ctor_get(x_7, 5);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_7);
x_57 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_57, 0, x_51);
lean_ctor_set(x_57, 1, x_1);
lean_ctor_set(x_57, 2, x_53);
lean_ctor_set(x_57, 3, x_54);
lean_ctor_set(x_57, 4, x_55);
lean_ctor_set(x_57, 5, x_56);
x_58 = l_Lean_Meta_SynthInstance_tryResolveCore(x_2, x_3, x_4, x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 0);
lean_inc(x_60);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_61 = x_58;
} else {
 lean_dec_ref(x_58);
 x_61 = lean_box(0);
}
x_62 = lean_ctor_get(x_59, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_59, 2);
lean_inc(x_63);
x_64 = lean_ctor_get(x_59, 3);
lean_inc(x_64);
x_65 = lean_ctor_get(x_59, 4);
lean_inc(x_65);
x_66 = lean_ctor_get(x_59, 5);
lean_inc(x_66);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 lean_ctor_release(x_59, 2);
 lean_ctor_release(x_59, 3);
 lean_ctor_release(x_59, 4);
 lean_ctor_release(x_59, 5);
 x_67 = x_59;
} else {
 lean_dec_ref(x_59);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(0, 6, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_62);
lean_ctor_set(x_68, 1, x_52);
lean_ctor_set(x_68, 2, x_63);
lean_ctor_set(x_68, 3, x_64);
lean_ctor_set(x_68, 4, x_65);
lean_ctor_set(x_68, 5, x_66);
lean_ctor_set(x_5, 0, x_68);
if (lean_is_scalar(x_61)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_61;
}
lean_ctor_set(x_69, 0, x_60);
lean_ctor_set(x_69, 1, x_5);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_70 = lean_ctor_get(x_58, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_58, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_72 = x_58;
} else {
 lean_dec_ref(x_58);
 x_72 = lean_box(0);
}
x_73 = lean_ctor_get(x_70, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_70, 2);
lean_inc(x_74);
x_75 = lean_ctor_get(x_70, 3);
lean_inc(x_75);
x_76 = lean_ctor_get(x_70, 4);
lean_inc(x_76);
x_77 = lean_ctor_get(x_70, 5);
lean_inc(x_77);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 lean_ctor_release(x_70, 2);
 lean_ctor_release(x_70, 3);
 lean_ctor_release(x_70, 4);
 lean_ctor_release(x_70, 5);
 x_78 = x_70;
} else {
 lean_dec_ref(x_70);
 x_78 = lean_box(0);
}
if (lean_is_scalar(x_78)) {
 x_79 = lean_alloc_ctor(0, 6, 0);
} else {
 x_79 = x_78;
}
lean_ctor_set(x_79, 0, x_73);
lean_ctor_set(x_79, 1, x_52);
lean_ctor_set(x_79, 2, x_74);
lean_ctor_set(x_79, 3, x_75);
lean_ctor_set(x_79, 4, x_76);
lean_ctor_set(x_79, 5, x_77);
lean_ctor_set(x_5, 0, x_79);
if (lean_is_scalar(x_72)) {
 x_80 = lean_alloc_ctor(1, 2, 0);
} else {
 x_80 = x_72;
}
lean_ctor_set(x_80, 0, x_71);
lean_ctor_set(x_80, 1, x_5);
return x_80;
}
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_81 = lean_ctor_get(x_5, 0);
x_82 = lean_ctor_get(x_5, 1);
x_83 = lean_ctor_get(x_5, 2);
x_84 = lean_ctor_get(x_5, 3);
x_85 = lean_ctor_get(x_5, 4);
x_86 = lean_ctor_get(x_5, 5);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_5);
x_87 = lean_ctor_get(x_81, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_81, 1);
lean_inc(x_88);
x_89 = lean_ctor_get(x_81, 2);
lean_inc(x_89);
x_90 = lean_ctor_get(x_81, 3);
lean_inc(x_90);
x_91 = lean_ctor_get(x_81, 4);
lean_inc(x_91);
x_92 = lean_ctor_get(x_81, 5);
lean_inc(x_92);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 lean_ctor_release(x_81, 2);
 lean_ctor_release(x_81, 3);
 lean_ctor_release(x_81, 4);
 lean_ctor_release(x_81, 5);
 x_93 = x_81;
} else {
 lean_dec_ref(x_81);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(0, 6, 0);
} else {
 x_94 = x_93;
}
lean_ctor_set(x_94, 0, x_87);
lean_ctor_set(x_94, 1, x_1);
lean_ctor_set(x_94, 2, x_89);
lean_ctor_set(x_94, 3, x_90);
lean_ctor_set(x_94, 4, x_91);
lean_ctor_set(x_94, 5, x_92);
x_95 = l_Lean_Meta_SynthInstance_tryResolveCore(x_2, x_3, x_4, x_94);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 0);
lean_inc(x_97);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_98 = x_95;
} else {
 lean_dec_ref(x_95);
 x_98 = lean_box(0);
}
x_99 = lean_ctor_get(x_96, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_96, 2);
lean_inc(x_100);
x_101 = lean_ctor_get(x_96, 3);
lean_inc(x_101);
x_102 = lean_ctor_get(x_96, 4);
lean_inc(x_102);
x_103 = lean_ctor_get(x_96, 5);
lean_inc(x_103);
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 lean_ctor_release(x_96, 1);
 lean_ctor_release(x_96, 2);
 lean_ctor_release(x_96, 3);
 lean_ctor_release(x_96, 4);
 lean_ctor_release(x_96, 5);
 x_104 = x_96;
} else {
 lean_dec_ref(x_96);
 x_104 = lean_box(0);
}
if (lean_is_scalar(x_104)) {
 x_105 = lean_alloc_ctor(0, 6, 0);
} else {
 x_105 = x_104;
}
lean_ctor_set(x_105, 0, x_99);
lean_ctor_set(x_105, 1, x_88);
lean_ctor_set(x_105, 2, x_100);
lean_ctor_set(x_105, 3, x_101);
lean_ctor_set(x_105, 4, x_102);
lean_ctor_set(x_105, 5, x_103);
x_106 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_82);
lean_ctor_set(x_106, 2, x_83);
lean_ctor_set(x_106, 3, x_84);
lean_ctor_set(x_106, 4, x_85);
lean_ctor_set(x_106, 5, x_86);
if (lean_is_scalar(x_98)) {
 x_107 = lean_alloc_ctor(0, 2, 0);
} else {
 x_107 = x_98;
}
lean_ctor_set(x_107, 0, x_97);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_108 = lean_ctor_get(x_95, 1);
lean_inc(x_108);
x_109 = lean_ctor_get(x_95, 0);
lean_inc(x_109);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_110 = x_95;
} else {
 lean_dec_ref(x_95);
 x_110 = lean_box(0);
}
x_111 = lean_ctor_get(x_108, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_108, 2);
lean_inc(x_112);
x_113 = lean_ctor_get(x_108, 3);
lean_inc(x_113);
x_114 = lean_ctor_get(x_108, 4);
lean_inc(x_114);
x_115 = lean_ctor_get(x_108, 5);
lean_inc(x_115);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 lean_ctor_release(x_108, 2);
 lean_ctor_release(x_108, 3);
 lean_ctor_release(x_108, 4);
 lean_ctor_release(x_108, 5);
 x_116 = x_108;
} else {
 lean_dec_ref(x_108);
 x_116 = lean_box(0);
}
if (lean_is_scalar(x_116)) {
 x_117 = lean_alloc_ctor(0, 6, 0);
} else {
 x_117 = x_116;
}
lean_ctor_set(x_117, 0, x_111);
lean_ctor_set(x_117, 1, x_88);
lean_ctor_set(x_117, 2, x_112);
lean_ctor_set(x_117, 3, x_113);
lean_ctor_set(x_117, 4, x_114);
lean_ctor_set(x_117, 5, x_115);
x_118 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_82);
lean_ctor_set(x_118, 2, x_83);
lean_ctor_set(x_118, 3, x_84);
lean_ctor_set(x_118, 4, x_85);
lean_ctor_set(x_118, 5, x_86);
if (lean_is_scalar(x_110)) {
 x_119 = lean_alloc_ctor(1, 2, 0);
} else {
 x_119 = x_110;
}
lean_ctor_set(x_119, 0, x_109);
lean_ctor_set(x_119, 1, x_118);
return x_119;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_tryAnswer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_9 = lean_ctor_get(x_7, 1);
lean_ctor_set(x_7, 1, x_1);
lean_inc(x_4);
x_40 = l_Lean_Meta_openAbstractMVarsResult(x_3, x_4, x_7);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_Lean_Meta_SynthInstance_tryResolveCore(x_2, x_44, x_4, x_43);
if (lean_obj_tag(x_45) == 0)
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; uint8_t x_48; 
x_47 = lean_ctor_get(x_45, 1);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_47, 1);
lean_dec(x_49);
lean_ctor_set(x_47, 1, x_9);
lean_ctor_set(x_5, 0, x_47);
lean_ctor_set(x_45, 1, x_5);
return x_45;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_50 = lean_ctor_get(x_47, 0);
x_51 = lean_ctor_get(x_47, 2);
x_52 = lean_ctor_get(x_47, 3);
x_53 = lean_ctor_get(x_47, 4);
x_54 = lean_ctor_get(x_47, 5);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_47);
x_55 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_55, 0, x_50);
lean_ctor_set(x_55, 1, x_9);
lean_ctor_set(x_55, 2, x_51);
lean_ctor_set(x_55, 3, x_52);
lean_ctor_set(x_55, 4, x_53);
lean_ctor_set(x_55, 5, x_54);
lean_ctor_set(x_5, 0, x_55);
lean_ctor_set(x_45, 1, x_5);
return x_45;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_56 = lean_ctor_get(x_45, 1);
x_57 = lean_ctor_get(x_45, 0);
lean_inc(x_56);
lean_inc(x_57);
lean_dec(x_45);
x_58 = lean_ctor_get(x_56, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_56, 2);
lean_inc(x_59);
x_60 = lean_ctor_get(x_56, 3);
lean_inc(x_60);
x_61 = lean_ctor_get(x_56, 4);
lean_inc(x_61);
x_62 = lean_ctor_get(x_56, 5);
lean_inc(x_62);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 lean_ctor_release(x_56, 2);
 lean_ctor_release(x_56, 3);
 lean_ctor_release(x_56, 4);
 lean_ctor_release(x_56, 5);
 x_63 = x_56;
} else {
 lean_dec_ref(x_56);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(0, 6, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_58);
lean_ctor_set(x_64, 1, x_9);
lean_ctor_set(x_64, 2, x_59);
lean_ctor_set(x_64, 3, x_60);
lean_ctor_set(x_64, 4, x_61);
lean_ctor_set(x_64, 5, x_62);
lean_ctor_set(x_5, 0, x_64);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_57);
lean_ctor_set(x_65, 1, x_5);
return x_65;
}
}
else
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_45, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_45, 1);
lean_inc(x_67);
lean_dec(x_45);
lean_ctor_set(x_5, 0, x_67);
x_10 = x_66;
x_11 = x_5;
goto block_39;
}
block_39:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 1);
lean_dec(x_15);
lean_ctor_set(x_13, 1, x_9);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_11);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 2);
x_19 = lean_ctor_get(x_13, 3);
x_20 = lean_ctor_get(x_13, 4);
x_21 = lean_ctor_get(x_13, 5);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_22 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_9);
lean_ctor_set(x_22, 2, x_18);
lean_ctor_set(x_22, 3, x_19);
lean_ctor_set(x_22, 4, x_20);
lean_ctor_set(x_22, 5, x_21);
lean_ctor_set(x_11, 0, x_22);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_10);
lean_ctor_set(x_23, 1, x_11);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_24 = lean_ctor_get(x_11, 0);
x_25 = lean_ctor_get(x_11, 1);
x_26 = lean_ctor_get(x_11, 2);
x_27 = lean_ctor_get(x_11, 3);
x_28 = lean_ctor_get(x_11, 4);
x_29 = lean_ctor_get(x_11, 5);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_11);
x_30 = lean_ctor_get(x_24, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_24, 2);
lean_inc(x_31);
x_32 = lean_ctor_get(x_24, 3);
lean_inc(x_32);
x_33 = lean_ctor_get(x_24, 4);
lean_inc(x_33);
x_34 = lean_ctor_get(x_24, 5);
lean_inc(x_34);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 lean_ctor_release(x_24, 2);
 lean_ctor_release(x_24, 3);
 lean_ctor_release(x_24, 4);
 lean_ctor_release(x_24, 5);
 x_35 = x_24;
} else {
 lean_dec_ref(x_24);
 x_35 = lean_box(0);
}
if (lean_is_scalar(x_35)) {
 x_36 = lean_alloc_ctor(0, 6, 0);
} else {
 x_36 = x_35;
}
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_9);
lean_ctor_set(x_36, 2, x_31);
lean_ctor_set(x_36, 3, x_32);
lean_ctor_set(x_36, 4, x_33);
lean_ctor_set(x_36, 5, x_34);
x_37 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_25);
lean_ctor_set(x_37, 2, x_26);
lean_ctor_set(x_37, 3, x_27);
lean_ctor_set(x_37, 4, x_28);
lean_ctor_set(x_37, 5, x_29);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_10);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_68 = lean_ctor_get(x_7, 0);
x_69 = lean_ctor_get(x_7, 1);
x_70 = lean_ctor_get(x_7, 2);
x_71 = lean_ctor_get(x_7, 3);
x_72 = lean_ctor_get(x_7, 4);
x_73 = lean_ctor_get(x_7, 5);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_7);
x_93 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_93, 0, x_68);
lean_ctor_set(x_93, 1, x_1);
lean_ctor_set(x_93, 2, x_70);
lean_ctor_set(x_93, 3, x_71);
lean_ctor_set(x_93, 4, x_72);
lean_ctor_set(x_93, 5, x_73);
lean_inc(x_4);
x_94 = l_Lean_Meta_openAbstractMVarsResult(x_3, x_4, x_93);
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
lean_dec(x_95);
x_97 = lean_ctor_get(x_94, 1);
lean_inc(x_97);
lean_dec(x_94);
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
lean_dec(x_96);
x_99 = l_Lean_Meta_SynthInstance_tryResolveCore(x_2, x_98, x_4, x_97);
if (lean_obj_tag(x_99) == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_100 = lean_ctor_get(x_99, 1);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 0);
lean_inc(x_101);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 x_102 = x_99;
} else {
 lean_dec_ref(x_99);
 x_102 = lean_box(0);
}
x_103 = lean_ctor_get(x_100, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_100, 2);
lean_inc(x_104);
x_105 = lean_ctor_get(x_100, 3);
lean_inc(x_105);
x_106 = lean_ctor_get(x_100, 4);
lean_inc(x_106);
x_107 = lean_ctor_get(x_100, 5);
lean_inc(x_107);
if (lean_is_exclusive(x_100)) {
 lean_ctor_release(x_100, 0);
 lean_ctor_release(x_100, 1);
 lean_ctor_release(x_100, 2);
 lean_ctor_release(x_100, 3);
 lean_ctor_release(x_100, 4);
 lean_ctor_release(x_100, 5);
 x_108 = x_100;
} else {
 lean_dec_ref(x_100);
 x_108 = lean_box(0);
}
if (lean_is_scalar(x_108)) {
 x_109 = lean_alloc_ctor(0, 6, 0);
} else {
 x_109 = x_108;
}
lean_ctor_set(x_109, 0, x_103);
lean_ctor_set(x_109, 1, x_69);
lean_ctor_set(x_109, 2, x_104);
lean_ctor_set(x_109, 3, x_105);
lean_ctor_set(x_109, 4, x_106);
lean_ctor_set(x_109, 5, x_107);
lean_ctor_set(x_5, 0, x_109);
if (lean_is_scalar(x_102)) {
 x_110 = lean_alloc_ctor(0, 2, 0);
} else {
 x_110 = x_102;
}
lean_ctor_set(x_110, 0, x_101);
lean_ctor_set(x_110, 1, x_5);
return x_110;
}
else
{
lean_object* x_111; lean_object* x_112; 
x_111 = lean_ctor_get(x_99, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_99, 1);
lean_inc(x_112);
lean_dec(x_99);
lean_ctor_set(x_5, 0, x_112);
x_74 = x_111;
x_75 = x_5;
goto block_92;
}
block_92:
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
x_78 = lean_ctor_get(x_75, 2);
lean_inc(x_78);
x_79 = lean_ctor_get(x_75, 3);
lean_inc(x_79);
x_80 = lean_ctor_get(x_75, 4);
lean_inc(x_80);
x_81 = lean_ctor_get(x_75, 5);
lean_inc(x_81);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 lean_ctor_release(x_75, 2);
 lean_ctor_release(x_75, 3);
 lean_ctor_release(x_75, 4);
 lean_ctor_release(x_75, 5);
 x_82 = x_75;
} else {
 lean_dec_ref(x_75);
 x_82 = lean_box(0);
}
x_83 = lean_ctor_get(x_76, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_76, 2);
lean_inc(x_84);
x_85 = lean_ctor_get(x_76, 3);
lean_inc(x_85);
x_86 = lean_ctor_get(x_76, 4);
lean_inc(x_86);
x_87 = lean_ctor_get(x_76, 5);
lean_inc(x_87);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 lean_ctor_release(x_76, 2);
 lean_ctor_release(x_76, 3);
 lean_ctor_release(x_76, 4);
 lean_ctor_release(x_76, 5);
 x_88 = x_76;
} else {
 lean_dec_ref(x_76);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(0, 6, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_83);
lean_ctor_set(x_89, 1, x_69);
lean_ctor_set(x_89, 2, x_84);
lean_ctor_set(x_89, 3, x_85);
lean_ctor_set(x_89, 4, x_86);
lean_ctor_set(x_89, 5, x_87);
if (lean_is_scalar(x_82)) {
 x_90 = lean_alloc_ctor(0, 6, 0);
} else {
 x_90 = x_82;
}
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_77);
lean_ctor_set(x_90, 2, x_78);
lean_ctor_set(x_90, 3, x_79);
lean_ctor_set(x_90, 4, x_80);
lean_ctor_set(x_90, 5, x_81);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_74);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_113 = lean_ctor_get(x_5, 0);
x_114 = lean_ctor_get(x_5, 1);
x_115 = lean_ctor_get(x_5, 2);
x_116 = lean_ctor_get(x_5, 3);
x_117 = lean_ctor_get(x_5, 4);
x_118 = lean_ctor_get(x_5, 5);
lean_inc(x_118);
lean_inc(x_117);
lean_inc(x_116);
lean_inc(x_115);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_5);
x_119 = lean_ctor_get(x_113, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_113, 1);
lean_inc(x_120);
x_121 = lean_ctor_get(x_113, 2);
lean_inc(x_121);
x_122 = lean_ctor_get(x_113, 3);
lean_inc(x_122);
x_123 = lean_ctor_get(x_113, 4);
lean_inc(x_123);
x_124 = lean_ctor_get(x_113, 5);
lean_inc(x_124);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 lean_ctor_release(x_113, 2);
 lean_ctor_release(x_113, 3);
 lean_ctor_release(x_113, 4);
 lean_ctor_release(x_113, 5);
 x_125 = x_113;
} else {
 lean_dec_ref(x_113);
 x_125 = lean_box(0);
}
if (lean_is_scalar(x_125)) {
 x_145 = lean_alloc_ctor(0, 6, 0);
} else {
 x_145 = x_125;
}
lean_ctor_set(x_145, 0, x_119);
lean_ctor_set(x_145, 1, x_1);
lean_ctor_set(x_145, 2, x_121);
lean_ctor_set(x_145, 3, x_122);
lean_ctor_set(x_145, 4, x_123);
lean_ctor_set(x_145, 5, x_124);
lean_inc(x_4);
x_146 = l_Lean_Meta_openAbstractMVarsResult(x_3, x_4, x_145);
x_147 = lean_ctor_get(x_146, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_147, 1);
lean_inc(x_148);
lean_dec(x_147);
x_149 = lean_ctor_get(x_146, 1);
lean_inc(x_149);
lean_dec(x_146);
x_150 = lean_ctor_get(x_148, 1);
lean_inc(x_150);
lean_dec(x_148);
x_151 = l_Lean_Meta_SynthInstance_tryResolveCore(x_2, x_150, x_4, x_149);
if (lean_obj_tag(x_151) == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_152 = lean_ctor_get(x_151, 1);
lean_inc(x_152);
x_153 = lean_ctor_get(x_151, 0);
lean_inc(x_153);
if (lean_is_exclusive(x_151)) {
 lean_ctor_release(x_151, 0);
 lean_ctor_release(x_151, 1);
 x_154 = x_151;
} else {
 lean_dec_ref(x_151);
 x_154 = lean_box(0);
}
x_155 = lean_ctor_get(x_152, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_152, 2);
lean_inc(x_156);
x_157 = lean_ctor_get(x_152, 3);
lean_inc(x_157);
x_158 = lean_ctor_get(x_152, 4);
lean_inc(x_158);
x_159 = lean_ctor_get(x_152, 5);
lean_inc(x_159);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 lean_ctor_release(x_152, 2);
 lean_ctor_release(x_152, 3);
 lean_ctor_release(x_152, 4);
 lean_ctor_release(x_152, 5);
 x_160 = x_152;
} else {
 lean_dec_ref(x_152);
 x_160 = lean_box(0);
}
if (lean_is_scalar(x_160)) {
 x_161 = lean_alloc_ctor(0, 6, 0);
} else {
 x_161 = x_160;
}
lean_ctor_set(x_161, 0, x_155);
lean_ctor_set(x_161, 1, x_120);
lean_ctor_set(x_161, 2, x_156);
lean_ctor_set(x_161, 3, x_157);
lean_ctor_set(x_161, 4, x_158);
lean_ctor_set(x_161, 5, x_159);
x_162 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_162, 0, x_161);
lean_ctor_set(x_162, 1, x_114);
lean_ctor_set(x_162, 2, x_115);
lean_ctor_set(x_162, 3, x_116);
lean_ctor_set(x_162, 4, x_117);
lean_ctor_set(x_162, 5, x_118);
if (lean_is_scalar(x_154)) {
 x_163 = lean_alloc_ctor(0, 2, 0);
} else {
 x_163 = x_154;
}
lean_ctor_set(x_163, 0, x_153);
lean_ctor_set(x_163, 1, x_162);
return x_163;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_151, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_151, 1);
lean_inc(x_165);
lean_dec(x_151);
x_166 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_166, 1, x_114);
lean_ctor_set(x_166, 2, x_115);
lean_ctor_set(x_166, 3, x_116);
lean_ctor_set(x_166, 4, x_117);
lean_ctor_set(x_166, 5, x_118);
x_126 = x_164;
x_127 = x_166;
goto block_144;
}
block_144:
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
x_130 = lean_ctor_get(x_127, 2);
lean_inc(x_130);
x_131 = lean_ctor_get(x_127, 3);
lean_inc(x_131);
x_132 = lean_ctor_get(x_127, 4);
lean_inc(x_132);
x_133 = lean_ctor_get(x_127, 5);
lean_inc(x_133);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 lean_ctor_release(x_127, 2);
 lean_ctor_release(x_127, 3);
 lean_ctor_release(x_127, 4);
 lean_ctor_release(x_127, 5);
 x_134 = x_127;
} else {
 lean_dec_ref(x_127);
 x_134 = lean_box(0);
}
x_135 = lean_ctor_get(x_128, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_128, 2);
lean_inc(x_136);
x_137 = lean_ctor_get(x_128, 3);
lean_inc(x_137);
x_138 = lean_ctor_get(x_128, 4);
lean_inc(x_138);
x_139 = lean_ctor_get(x_128, 5);
lean_inc(x_139);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 lean_ctor_release(x_128, 2);
 lean_ctor_release(x_128, 3);
 lean_ctor_release(x_128, 4);
 lean_ctor_release(x_128, 5);
 x_140 = x_128;
} else {
 lean_dec_ref(x_128);
 x_140 = lean_box(0);
}
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(0, 6, 0);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_135);
lean_ctor_set(x_141, 1, x_120);
lean_ctor_set(x_141, 2, x_136);
lean_ctor_set(x_141, 3, x_137);
lean_ctor_set(x_141, 4, x_138);
lean_ctor_set(x_141, 5, x_139);
if (lean_is_scalar(x_134)) {
 x_142 = lean_alloc_ctor(0, 6, 0);
} else {
 x_142 = x_134;
}
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_129);
lean_ctor_set(x_142, 2, x_130);
lean_ctor_set(x_142, 3, x_131);
lean_ctor_set(x_142, 4, x_132);
lean_ctor_set(x_142, 5, x_133);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_126);
lean_ctor_set(x_143, 1, x_142);
return x_143;
}
}
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_wakeUp___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_wakeUp___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("answer contains metavariables ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_wakeUp___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_wakeUp___closed__2;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_wakeUp___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_wakeUp___closed__3;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_wakeUp___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("fail to assign main metavariable ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_wakeUp___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_wakeUp___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_wakeUp___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_wakeUp___closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_wakeUp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_37; 
lean_dec(x_3);
x_37 = !lean_is_exclusive(x_4);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_38 = lean_ctor_get(x_2, 0);
x_39 = lean_ctor_get(x_4, 4);
lean_inc(x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_1);
x_41 = lean_array_push(x_39, x_40);
lean_ctor_set(x_4, 4, x_41);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_4);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_44 = lean_ctor_get(x_2, 0);
x_45 = lean_ctor_get(x_4, 0);
x_46 = lean_ctor_get(x_4, 1);
x_47 = lean_ctor_get(x_4, 2);
x_48 = lean_ctor_get(x_4, 3);
x_49 = lean_ctor_get(x_4, 4);
x_50 = lean_ctor_get(x_4, 5);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_4);
lean_inc(x_44);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_44);
lean_ctor_set(x_51, 1, x_1);
x_52 = lean_array_push(x_49, x_51);
x_53 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_53, 0, x_45);
lean_ctor_set(x_53, 1, x_46);
lean_ctor_set(x_53, 2, x_47);
lean_ctor_set(x_53, 3, x_48);
lean_ctor_set(x_53, 4, x_52);
lean_ctor_set(x_53, 5, x_50);
x_54 = lean_box(0);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
else
{
lean_object* x_56; uint8_t x_57; 
x_56 = lean_ctor_get(x_1, 0);
lean_inc(x_56);
x_57 = l_Array_isEmpty___rarg(x_56);
lean_dec(x_56);
if (x_57 == 0)
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_4);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_4, 0);
lean_inc(x_3);
x_60 = l_Lean_Meta_openAbstractMVarsResult(x_1, x_3, x_59);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
lean_ctor_set(x_4, 0, x_62);
x_5 = x_61;
x_6 = x_4;
goto block_36;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_63 = lean_ctor_get(x_4, 0);
x_64 = lean_ctor_get(x_4, 1);
x_65 = lean_ctor_get(x_4, 2);
x_66 = lean_ctor_get(x_4, 3);
x_67 = lean_ctor_get(x_4, 4);
x_68 = lean_ctor_get(x_4, 5);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_4);
lean_inc(x_3);
x_69 = l_Lean_Meta_openAbstractMVarsResult(x_1, x_3, x_63);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_64);
lean_ctor_set(x_72, 2, x_65);
lean_ctor_set(x_72, 3, x_66);
lean_ctor_set(x_72, 4, x_67);
lean_ctor_set(x_72, 5, x_68);
x_5 = x_70;
x_6 = x_72;
goto block_36;
}
}
else
{
lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_73 = lean_ctor_get(x_1, 1);
lean_inc(x_73);
x_74 = lean_unsigned_to_nat(0u);
x_75 = lean_nat_dec_eq(x_73, x_74);
lean_dec(x_73);
if (x_75 == 0)
{
uint8_t x_76; 
x_76 = !lean_is_exclusive(x_4);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_77 = lean_ctor_get(x_4, 0);
lean_inc(x_3);
x_78 = l_Lean_Meta_openAbstractMVarsResult(x_1, x_3, x_77);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
lean_ctor_set(x_4, 0, x_80);
x_5 = x_79;
x_6 = x_4;
goto block_36;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_81 = lean_ctor_get(x_4, 0);
x_82 = lean_ctor_get(x_4, 1);
x_83 = lean_ctor_get(x_4, 2);
x_84 = lean_ctor_get(x_4, 3);
x_85 = lean_ctor_get(x_4, 4);
x_86 = lean_ctor_get(x_4, 5);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_4);
lean_inc(x_3);
x_87 = l_Lean_Meta_openAbstractMVarsResult(x_1, x_3, x_81);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_82);
lean_ctor_set(x_90, 2, x_83);
lean_ctor_set(x_90, 3, x_84);
lean_ctor_set(x_90, 4, x_85);
lean_ctor_set(x_90, 5, x_86);
x_5 = x_88;
x_6 = x_90;
goto block_36;
}
}
else
{
uint8_t x_91; 
x_91 = !lean_is_exclusive(x_4);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_92 = lean_ctor_get(x_4, 0);
x_93 = lean_ctor_get(x_4, 1);
lean_inc(x_93);
x_94 = l_Lean_mkMVar(x_93);
x_95 = lean_ctor_get(x_1, 2);
lean_inc(x_95);
lean_dec(x_1);
lean_inc(x_3);
lean_inc(x_95);
x_96 = l_Lean_Meta_isExprDefEq(x_94, x_95, x_3, x_92);
if (lean_obj_tag(x_96) == 0)
{
uint8_t x_97; 
x_97 = !lean_is_exclusive(x_96);
if (x_97 == 0)
{
lean_object* x_98; lean_object* x_99; uint8_t x_100; 
x_98 = lean_ctor_get(x_96, 0);
x_99 = lean_ctor_get(x_96, 1);
lean_inc(x_99);
lean_ctor_set(x_4, 0, x_99);
x_100 = lean_unbox(x_98);
lean_dec(x_98);
if (x_100 == 0)
{
lean_object* x_101; uint8_t x_102; 
x_101 = lean_ctor_get(x_99, 4);
lean_inc(x_101);
lean_dec(x_99);
x_102 = lean_ctor_get_uint8(x_101, sizeof(void*)*1);
lean_dec(x_101);
if (x_102 == 0)
{
lean_object* x_103; 
lean_dec(x_95);
lean_dec(x_3);
x_103 = lean_box(0);
lean_ctor_set(x_96, 1, x_4);
lean_ctor_set(x_96, 0, x_103);
return x_96;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
lean_free_object(x_96);
x_104 = l_Lean_Meta_SynthInstance_wakeUp___closed__1;
x_105 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_SynthInstance_trace___spec__1(x_104, x_3, x_4);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_unbox(x_106);
lean_dec(x_106);
if (x_107 == 0)
{
uint8_t x_108; 
lean_dec(x_95);
lean_dec(x_3);
x_108 = !lean_is_exclusive(x_105);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_105, 0);
lean_dec(x_109);
x_110 = lean_box(0);
lean_ctor_set(x_105, 0, x_110);
return x_105;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_105, 1);
lean_inc(x_111);
lean_dec(x_105);
x_112 = lean_box(0);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_111);
return x_113;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; 
x_114 = lean_ctor_get(x_105, 1);
lean_inc(x_114);
lean_dec(x_105);
x_115 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_115, 0, x_95);
x_116 = l_Lean_Meta_SynthInstance_wakeUp___closed__7;
x_117 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_115);
x_118 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_119 = l_Lean_Meta_SynthInstance_traceCore(x_118, x_117, x_3, x_114);
lean_dec(x_3);
x_120 = !lean_is_exclusive(x_119);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; 
x_121 = lean_ctor_get(x_119, 0);
lean_dec(x_121);
x_122 = lean_box(0);
lean_ctor_set(x_119, 0, x_122);
return x_119;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_119, 1);
lean_inc(x_123);
lean_dec(x_119);
x_124 = lean_box(0);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_123);
return x_125;
}
}
}
}
else
{
lean_object* x_126; 
lean_dec(x_99);
lean_dec(x_95);
lean_dec(x_3);
x_126 = lean_box(0);
lean_ctor_set(x_96, 1, x_4);
lean_ctor_set(x_96, 0, x_126);
return x_96;
}
}
else
{
lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_127 = lean_ctor_get(x_96, 0);
x_128 = lean_ctor_get(x_96, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_96);
lean_inc(x_128);
lean_ctor_set(x_4, 0, x_128);
x_129 = lean_unbox(x_127);
lean_dec(x_127);
if (x_129 == 0)
{
lean_object* x_130; uint8_t x_131; 
x_130 = lean_ctor_get(x_128, 4);
lean_inc(x_130);
lean_dec(x_128);
x_131 = lean_ctor_get_uint8(x_130, sizeof(void*)*1);
lean_dec(x_130);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; 
lean_dec(x_95);
lean_dec(x_3);
x_132 = lean_box(0);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_4);
return x_133;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; uint8_t x_137; 
x_134 = l_Lean_Meta_SynthInstance_wakeUp___closed__1;
x_135 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_SynthInstance_trace___spec__1(x_134, x_3, x_4);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_unbox(x_136);
lean_dec(x_136);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_95);
lean_dec(x_3);
x_138 = lean_ctor_get(x_135, 1);
lean_inc(x_138);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 x_139 = x_135;
} else {
 lean_dec_ref(x_135);
 x_139 = lean_box(0);
}
x_140 = lean_box(0);
if (lean_is_scalar(x_139)) {
 x_141 = lean_alloc_ctor(0, 2, 0);
} else {
 x_141 = x_139;
}
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_138);
return x_141;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_142 = lean_ctor_get(x_135, 1);
lean_inc(x_142);
lean_dec(x_135);
x_143 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_143, 0, x_95);
x_144 = l_Lean_Meta_SynthInstance_wakeUp___closed__7;
x_145 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_143);
x_146 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_147 = l_Lean_Meta_SynthInstance_traceCore(x_146, x_145, x_3, x_142);
lean_dec(x_3);
x_148 = lean_ctor_get(x_147, 1);
lean_inc(x_148);
if (lean_is_exclusive(x_147)) {
 lean_ctor_release(x_147, 0);
 lean_ctor_release(x_147, 1);
 x_149 = x_147;
} else {
 lean_dec_ref(x_147);
 x_149 = lean_box(0);
}
x_150 = lean_box(0);
if (lean_is_scalar(x_149)) {
 x_151 = lean_alloc_ctor(0, 2, 0);
} else {
 x_151 = x_149;
}
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_148);
return x_151;
}
}
}
else
{
lean_object* x_152; lean_object* x_153; 
lean_dec(x_128);
lean_dec(x_95);
lean_dec(x_3);
x_152 = lean_box(0);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_4);
return x_153;
}
}
}
else
{
uint8_t x_154; 
lean_dec(x_95);
lean_dec(x_3);
x_154 = !lean_is_exclusive(x_96);
if (x_154 == 0)
{
lean_object* x_155; 
x_155 = lean_ctor_get(x_96, 1);
lean_ctor_set(x_4, 0, x_155);
lean_ctor_set(x_96, 1, x_4);
return x_96;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_96, 0);
x_157 = lean_ctor_get(x_96, 1);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_96);
lean_ctor_set(x_4, 0, x_157);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_4);
return x_158;
}
}
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_159 = lean_ctor_get(x_4, 0);
x_160 = lean_ctor_get(x_4, 1);
x_161 = lean_ctor_get(x_4, 2);
x_162 = lean_ctor_get(x_4, 3);
x_163 = lean_ctor_get(x_4, 4);
x_164 = lean_ctor_get(x_4, 5);
lean_inc(x_164);
lean_inc(x_163);
lean_inc(x_162);
lean_inc(x_161);
lean_inc(x_160);
lean_inc(x_159);
lean_dec(x_4);
lean_inc(x_160);
x_165 = l_Lean_mkMVar(x_160);
x_166 = lean_ctor_get(x_1, 2);
lean_inc(x_166);
lean_dec(x_1);
lean_inc(x_3);
lean_inc(x_166);
x_167 = l_Lean_Meta_isExprDefEq(x_165, x_166, x_3, x_159);
if (lean_obj_tag(x_167) == 0)
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; 
x_168 = lean_ctor_get(x_167, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_167, 1);
lean_inc(x_169);
if (lean_is_exclusive(x_167)) {
 lean_ctor_release(x_167, 0);
 lean_ctor_release(x_167, 1);
 x_170 = x_167;
} else {
 lean_dec_ref(x_167);
 x_170 = lean_box(0);
}
lean_inc(x_169);
x_171 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_171, 0, x_169);
lean_ctor_set(x_171, 1, x_160);
lean_ctor_set(x_171, 2, x_161);
lean_ctor_set(x_171, 3, x_162);
lean_ctor_set(x_171, 4, x_163);
lean_ctor_set(x_171, 5, x_164);
x_172 = lean_unbox(x_168);
lean_dec(x_168);
if (x_172 == 0)
{
lean_object* x_173; uint8_t x_174; 
x_173 = lean_ctor_get(x_169, 4);
lean_inc(x_173);
lean_dec(x_169);
x_174 = lean_ctor_get_uint8(x_173, sizeof(void*)*1);
lean_dec(x_173);
if (x_174 == 0)
{
lean_object* x_175; lean_object* x_176; 
lean_dec(x_166);
lean_dec(x_3);
x_175 = lean_box(0);
if (lean_is_scalar(x_170)) {
 x_176 = lean_alloc_ctor(0, 2, 0);
} else {
 x_176 = x_170;
}
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_171);
return x_176;
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; uint8_t x_180; 
lean_dec(x_170);
x_177 = l_Lean_Meta_SynthInstance_wakeUp___closed__1;
x_178 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_SynthInstance_trace___spec__1(x_177, x_3, x_171);
x_179 = lean_ctor_get(x_178, 0);
lean_inc(x_179);
x_180 = lean_unbox(x_179);
lean_dec(x_179);
if (x_180 == 0)
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
lean_dec(x_166);
lean_dec(x_3);
x_181 = lean_ctor_get(x_178, 1);
lean_inc(x_181);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 x_182 = x_178;
} else {
 lean_dec_ref(x_178);
 x_182 = lean_box(0);
}
x_183 = lean_box(0);
if (lean_is_scalar(x_182)) {
 x_184 = lean_alloc_ctor(0, 2, 0);
} else {
 x_184 = x_182;
}
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_181);
return x_184;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_185 = lean_ctor_get(x_178, 1);
lean_inc(x_185);
lean_dec(x_178);
x_186 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_186, 0, x_166);
x_187 = l_Lean_Meta_SynthInstance_wakeUp___closed__7;
x_188 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_186);
x_189 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_190 = l_Lean_Meta_SynthInstance_traceCore(x_189, x_188, x_3, x_185);
lean_dec(x_3);
x_191 = lean_ctor_get(x_190, 1);
lean_inc(x_191);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 x_192 = x_190;
} else {
 lean_dec_ref(x_190);
 x_192 = lean_box(0);
}
x_193 = lean_box(0);
if (lean_is_scalar(x_192)) {
 x_194 = lean_alloc_ctor(0, 2, 0);
} else {
 x_194 = x_192;
}
lean_ctor_set(x_194, 0, x_193);
lean_ctor_set(x_194, 1, x_191);
return x_194;
}
}
}
else
{
lean_object* x_195; lean_object* x_196; 
lean_dec(x_169);
lean_dec(x_166);
lean_dec(x_3);
x_195 = lean_box(0);
if (lean_is_scalar(x_170)) {
 x_196 = lean_alloc_ctor(0, 2, 0);
} else {
 x_196 = x_170;
}
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_171);
return x_196;
}
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
lean_dec(x_166);
lean_dec(x_3);
x_197 = lean_ctor_get(x_167, 0);
lean_inc(x_197);
x_198 = lean_ctor_get(x_167, 1);
lean_inc(x_198);
if (lean_is_exclusive(x_167)) {
 lean_ctor_release(x_167, 0);
 lean_ctor_release(x_167, 1);
 x_199 = x_167;
} else {
 lean_dec_ref(x_167);
 x_199 = lean_box(0);
}
x_200 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_200, 0, x_198);
lean_ctor_set(x_200, 1, x_160);
lean_ctor_set(x_200, 2, x_161);
lean_ctor_set(x_200, 3, x_162);
lean_ctor_set(x_200, 4, x_163);
lean_ctor_set(x_200, 5, x_164);
if (lean_is_scalar(x_199)) {
 x_201 = lean_alloc_ctor(1, 2, 0);
} else {
 x_201 = x_199;
}
lean_ctor_set(x_201, 0, x_197);
lean_ctor_set(x_201, 1, x_200);
return x_201;
}
}
}
}
}
block_36:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_5, 1);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 4);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get_uint8(x_9, sizeof(void*)*1);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_7, 1);
x_14 = l_Lean_Meta_SynthInstance_wakeUp___closed__1;
x_15 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_SynthInstance_trace___spec__1(x_14, x_3, x_6);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
uint8_t x_18; 
lean_dec(x_3);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_15, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_15, 0, x_20);
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 1);
lean_inc(x_21);
lean_dec(x_15);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_24 = lean_ctor_get(x_15, 1);
lean_inc(x_24);
lean_dec(x_15);
lean_inc(x_13);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_13);
x_26 = l_Lean_Meta_SynthInstance_wakeUp___closed__4;
x_27 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_29 = l_Lean_Meta_SynthInstance_traceCore(x_28, x_27, x_3, x_24);
lean_dec(x_3);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
x_32 = lean_box(0);
lean_ctor_set(x_29, 0, x_32);
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_29, 1);
lean_inc(x_33);
lean_dec(x_29);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_wakeUp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_SynthInstance_wakeUp(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Lean_Meta_AbstractMVarsResult_beq(x_2, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
return x_9;
}
}
}
}
uint8_t l_Array_contains___at_Lean_Meta_SynthInstance_newAnswer___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__2(x_1, x_2, x_1, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = l_Lean_Meta_SynthInstance_Waiter_isRoot(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_4, x_9);
lean_dec(x_4);
x_4 = x_10;
goto _start;
}
else
{
lean_dec(x_4);
return x_8;
}
}
}
}
lean_object* l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_2);
x_7 = lean_nat_dec_lt(x_3, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_array_fget(x_2, x_3);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_3, x_11);
lean_dec(x_3);
lean_inc(x_4);
lean_inc(x_1);
x_13 = l_Lean_Meta_SynthInstance_wakeUp(x_1, x_10, x_4, x_5);
lean_dec(x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_3 = x_12;
x_5 = x_14;
goto _start;
}
else
{
uint8_t x_16; 
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
lean_object* l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_2);
x_7 = lean_nat_dec_lt(x_3, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_array_fget(x_2, x_3);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_3, x_11);
lean_dec(x_3);
lean_inc(x_4);
lean_inc(x_1);
x_13 = l_Lean_Meta_SynthInstance_wakeUp(x_1, x_10, x_4, x_5);
lean_dec(x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_3 = x_12;
x_5 = x_14;
goto _start;
}
else
{
uint8_t x_16; 
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
lean_object* l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_2);
x_7 = lean_nat_dec_lt(x_3, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_array_fget(x_2, x_3);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_3, x_11);
lean_dec(x_3);
lean_inc(x_4);
lean_inc(x_1);
x_13 = l_Lean_Meta_SynthInstance_wakeUp(x_1, x_10, x_4, x_5);
lean_dec(x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_3 = x_12;
x_5 = x_14;
goto _start;
}
else
{
uint8_t x_16; 
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_newAnswer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
x_5 = l_Lean_Meta_SynthInstance_getEntry(x_1, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
x_10 = l_Array_contains___at_Lean_Meta_SynthInstance_newAnswer___spec__1(x_9, x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; uint8_t x_14; 
x_11 = lean_array_get_size(x_8);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__3(x_6, x_8, x_11, x_12);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_6);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_6, 1);
lean_dec(x_15);
x_16 = lean_ctor_get(x_6, 0);
lean_dec(x_16);
if (x_13 == 0)
{
lean_object* x_17; uint8_t x_18; 
lean_inc(x_2);
x_17 = lean_array_push(x_9, x_2);
lean_inc(x_8);
lean_ctor_set(x_6, 1, x_17);
x_18 = !lean_is_exclusive(x_7);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_7, 5);
x_20 = l_PersistentHashMap_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_19, x_1, x_6);
lean_ctor_set(x_7, 5, x_20);
x_21 = l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__4(x_2, x_8, x_12, x_3, x_7);
lean_dec(x_8);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_22 = lean_ctor_get(x_7, 0);
x_23 = lean_ctor_get(x_7, 1);
x_24 = lean_ctor_get(x_7, 2);
x_25 = lean_ctor_get(x_7, 3);
x_26 = lean_ctor_get(x_7, 4);
x_27 = lean_ctor_get(x_7, 5);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_7);
x_28 = l_PersistentHashMap_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_27, x_1, x_6);
x_29 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_29, 0, x_22);
lean_ctor_set(x_29, 1, x_23);
lean_ctor_set(x_29, 2, x_24);
lean_ctor_set(x_29, 3, x_25);
lean_ctor_set(x_29, 4, x_26);
lean_ctor_set(x_29, 5, x_28);
x_30 = l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__4(x_2, x_8, x_12, x_3, x_29);
lean_dec(x_8);
return x_30;
}
}
else
{
lean_object* x_31; 
lean_free_object(x_6);
lean_dec(x_9);
lean_dec(x_1);
x_31 = l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__5(x_2, x_8, x_12, x_3, x_7);
lean_dec(x_8);
return x_31;
}
}
else
{
lean_dec(x_6);
if (x_13 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_inc(x_2);
x_32 = lean_array_push(x_9, x_2);
lean_inc(x_8);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_8);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_ctor_get(x_7, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_7, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_7, 2);
lean_inc(x_36);
x_37 = lean_ctor_get(x_7, 3);
lean_inc(x_37);
x_38 = lean_ctor_get(x_7, 4);
lean_inc(x_38);
x_39 = lean_ctor_get(x_7, 5);
lean_inc(x_39);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 lean_ctor_release(x_7, 5);
 x_40 = x_7;
} else {
 lean_dec_ref(x_7);
 x_40 = lean_box(0);
}
x_41 = l_PersistentHashMap_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_39, x_1, x_33);
if (lean_is_scalar(x_40)) {
 x_42 = lean_alloc_ctor(0, 6, 0);
} else {
 x_42 = x_40;
}
lean_ctor_set(x_42, 0, x_34);
lean_ctor_set(x_42, 1, x_35);
lean_ctor_set(x_42, 2, x_36);
lean_ctor_set(x_42, 3, x_37);
lean_ctor_set(x_42, 4, x_38);
lean_ctor_set(x_42, 5, x_41);
x_43 = l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__4(x_2, x_8, x_12, x_3, x_42);
lean_dec(x_8);
return x_43;
}
else
{
lean_object* x_44; 
lean_dec(x_9);
lean_dec(x_1);
x_44 = l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__5(x_2, x_8, x_12, x_3, x_7);
lean_dec(x_8);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_1);
x_45 = lean_unsigned_to_nat(0u);
x_46 = l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__6(x_2, x_8, x_45, x_3, x_7);
lean_dec(x_8);
return x_46;
}
}
else
{
uint8_t x_47; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_5);
if (x_47 == 0)
{
return x_5;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_5, 0);
x_49 = lean_ctor_get(x_5, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_5);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_contains___at_Lean_Meta_SynthInstance_newAnswer___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_contains___at_Lean_Meta_SynthInstance_newAnswer___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__5(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_forMAux___main___at_Lean_Meta_SynthInstance_newAnswer___spec__6(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_Meta_SynthInstance_mkAnswer(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_3, 0);
lean_dec(x_8);
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = lean_ctor_get(x_4, 1);
lean_ctor_set(x_4, 1, x_5);
x_11 = l_Lean_Meta_instantiateMVars(x_6, x_2, x_4);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Meta_abstractMVars(x_12, x_2, x_13);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_14, 1);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_16, 1);
lean_dec(x_18);
lean_ctor_set(x_16, 1, x_10);
lean_ctor_set(x_3, 0, x_16);
lean_ctor_set(x_14, 1, x_3);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_16, 0);
x_20 = lean_ctor_get(x_16, 2);
x_21 = lean_ctor_get(x_16, 3);
x_22 = lean_ctor_get(x_16, 4);
x_23 = lean_ctor_get(x_16, 5);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_16);
x_24 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_10);
lean_ctor_set(x_24, 2, x_20);
lean_ctor_set(x_24, 3, x_21);
lean_ctor_set(x_24, 4, x_22);
lean_ctor_set(x_24, 5, x_23);
lean_ctor_set(x_3, 0, x_24);
lean_ctor_set(x_14, 1, x_3);
return x_14;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_25 = lean_ctor_get(x_14, 1);
x_26 = lean_ctor_get(x_14, 0);
lean_inc(x_25);
lean_inc(x_26);
lean_dec(x_14);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_25, 2);
lean_inc(x_28);
x_29 = lean_ctor_get(x_25, 3);
lean_inc(x_29);
x_30 = lean_ctor_get(x_25, 4);
lean_inc(x_30);
x_31 = lean_ctor_get(x_25, 5);
lean_inc(x_31);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 lean_ctor_release(x_25, 2);
 lean_ctor_release(x_25, 3);
 lean_ctor_release(x_25, 4);
 lean_ctor_release(x_25, 5);
 x_32 = x_25;
} else {
 lean_dec_ref(x_25);
 x_32 = lean_box(0);
}
if (lean_is_scalar(x_32)) {
 x_33 = lean_alloc_ctor(0, 6, 0);
} else {
 x_33 = x_32;
}
lean_ctor_set(x_33, 0, x_27);
lean_ctor_set(x_33, 1, x_10);
lean_ctor_set(x_33, 2, x_28);
lean_ctor_set(x_33, 3, x_29);
lean_ctor_set(x_33, 4, x_30);
lean_ctor_set(x_33, 5, x_31);
lean_ctor_set(x_3, 0, x_33);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_26);
lean_ctor_set(x_34, 1, x_3);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_35 = lean_ctor_get(x_4, 0);
x_36 = lean_ctor_get(x_4, 1);
x_37 = lean_ctor_get(x_4, 2);
x_38 = lean_ctor_get(x_4, 3);
x_39 = lean_ctor_get(x_4, 4);
x_40 = lean_ctor_get(x_4, 5);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_4);
x_41 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_41, 0, x_35);
lean_ctor_set(x_41, 1, x_5);
lean_ctor_set(x_41, 2, x_37);
lean_ctor_set(x_41, 3, x_38);
lean_ctor_set(x_41, 4, x_39);
lean_ctor_set(x_41, 5, x_40);
x_42 = l_Lean_Meta_instantiateMVars(x_6, x_2, x_41);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_Lean_Meta_abstractMVars(x_43, x_2, x_44);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 0);
lean_inc(x_47);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_48 = x_45;
} else {
 lean_dec_ref(x_45);
 x_48 = lean_box(0);
}
x_49 = lean_ctor_get(x_46, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_46, 2);
lean_inc(x_50);
x_51 = lean_ctor_get(x_46, 3);
lean_inc(x_51);
x_52 = lean_ctor_get(x_46, 4);
lean_inc(x_52);
x_53 = lean_ctor_get(x_46, 5);
lean_inc(x_53);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 lean_ctor_release(x_46, 4);
 lean_ctor_release(x_46, 5);
 x_54 = x_46;
} else {
 lean_dec_ref(x_46);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(0, 6, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_49);
lean_ctor_set(x_55, 1, x_36);
lean_ctor_set(x_55, 2, x_50);
lean_ctor_set(x_55, 3, x_51);
lean_ctor_set(x_55, 4, x_52);
lean_ctor_set(x_55, 5, x_53);
lean_ctor_set(x_3, 0, x_55);
if (lean_is_scalar(x_48)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_48;
}
lean_ctor_set(x_56, 0, x_47);
lean_ctor_set(x_56, 1, x_3);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_57 = lean_ctor_get(x_3, 1);
x_58 = lean_ctor_get(x_3, 2);
x_59 = lean_ctor_get(x_3, 3);
x_60 = lean_ctor_get(x_3, 4);
x_61 = lean_ctor_get(x_3, 5);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_3);
x_62 = lean_ctor_get(x_4, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_4, 1);
lean_inc(x_63);
x_64 = lean_ctor_get(x_4, 2);
lean_inc(x_64);
x_65 = lean_ctor_get(x_4, 3);
lean_inc(x_65);
x_66 = lean_ctor_get(x_4, 4);
lean_inc(x_66);
x_67 = lean_ctor_get(x_4, 5);
lean_inc(x_67);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 lean_ctor_release(x_4, 2);
 lean_ctor_release(x_4, 3);
 lean_ctor_release(x_4, 4);
 lean_ctor_release(x_4, 5);
 x_68 = x_4;
} else {
 lean_dec_ref(x_4);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(0, 6, 0);
} else {
 x_69 = x_68;
}
lean_ctor_set(x_69, 0, x_62);
lean_ctor_set(x_69, 1, x_5);
lean_ctor_set(x_69, 2, x_64);
lean_ctor_set(x_69, 3, x_65);
lean_ctor_set(x_69, 4, x_66);
lean_ctor_set(x_69, 5, x_67);
x_70 = l_Lean_Meta_instantiateMVars(x_6, x_2, x_69);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = l_Lean_Meta_abstractMVars(x_71, x_2, x_72);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 0);
lean_inc(x_75);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_76 = x_73;
} else {
 lean_dec_ref(x_73);
 x_76 = lean_box(0);
}
x_77 = lean_ctor_get(x_74, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_74, 2);
lean_inc(x_78);
x_79 = lean_ctor_get(x_74, 3);
lean_inc(x_79);
x_80 = lean_ctor_get(x_74, 4);
lean_inc(x_80);
x_81 = lean_ctor_get(x_74, 5);
lean_inc(x_81);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 lean_ctor_release(x_74, 2);
 lean_ctor_release(x_74, 3);
 lean_ctor_release(x_74, 4);
 lean_ctor_release(x_74, 5);
 x_82 = x_74;
} else {
 lean_dec_ref(x_74);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(0, 6, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_77);
lean_ctor_set(x_83, 1, x_63);
lean_ctor_set(x_83, 2, x_78);
lean_ctor_set(x_83, 3, x_79);
lean_ctor_set(x_83, 4, x_80);
lean_ctor_set(x_83, 5, x_81);
x_84 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_57);
lean_ctor_set(x_84, 2, x_58);
lean_ctor_set(x_84, 3, x_59);
lean_ctor_set(x_84, 4, x_60);
lean_ctor_set(x_84, 5, x_61);
if (lean_is_scalar(x_76)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_76;
}
lean_ctor_set(x_85, 0, x_75);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_mkAnswer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_SynthInstance_mkAnswer(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_consume___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_array_fget(x_3, x_4);
lean_inc(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_array_push(x_5, x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_4 = x_12;
x_5 = x_10;
goto _start;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_consume(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_5 = l_Lean_Meta_SynthInstance_mkAnswer(x_1, x_2, x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_Lean_Meta_SynthInstance_newAnswer(x_8, x_6, x_2, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
lean_dec(x_4);
lean_inc(x_1);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_1);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_inc(x_2);
lean_inc(x_10);
lean_inc(x_12);
x_13 = l_Lean_Meta_SynthInstance_mkTableKeyFor(x_12, x_10, x_2, x_3);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Meta_SynthInstance_findEntry(x_14, x_2, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_1);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Meta_SynthInstance_newSubgoal(x_12, x_14, x_10, x_11, x_2, x_18);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_16, 1);
x_22 = lean_ctor_get(x_16, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_17, 0);
lean_inc(x_23);
lean_dec(x_17);
x_24 = !lean_is_exclusive(x_21);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_25 = lean_ctor_get(x_21, 4);
x_26 = lean_ctor_get(x_21, 5);
x_27 = lean_ctor_get(x_23, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_23, 1);
lean_inc(x_28);
x_29 = lean_unsigned_to_nat(0u);
x_30 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_consume___spec__1(x_1, x_23, x_28, x_29, x_25);
x_31 = !lean_is_exclusive(x_23);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_23, 1);
lean_dec(x_32);
x_33 = lean_ctor_get(x_23, 0);
lean_dec(x_33);
x_34 = lean_array_push(x_27, x_11);
lean_ctor_set(x_23, 0, x_34);
x_35 = l_PersistentHashMap_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_26, x_14, x_23);
lean_ctor_set(x_21, 5, x_35);
lean_ctor_set(x_21, 4, x_30);
x_36 = lean_box(0);
lean_ctor_set(x_16, 0, x_36);
return x_16;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_23);
x_37 = lean_array_push(x_27, x_11);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_28);
x_39 = l_PersistentHashMap_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_26, x_14, x_38);
lean_ctor_set(x_21, 5, x_39);
lean_ctor_set(x_21, 4, x_30);
x_40 = lean_box(0);
lean_ctor_set(x_16, 0, x_40);
return x_16;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_41 = lean_ctor_get(x_21, 0);
x_42 = lean_ctor_get(x_21, 1);
x_43 = lean_ctor_get(x_21, 2);
x_44 = lean_ctor_get(x_21, 3);
x_45 = lean_ctor_get(x_21, 4);
x_46 = lean_ctor_get(x_21, 5);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_21);
x_47 = lean_ctor_get(x_23, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_23, 1);
lean_inc(x_48);
x_49 = lean_unsigned_to_nat(0u);
x_50 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_consume___spec__1(x_1, x_23, x_48, x_49, x_45);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_51 = x_23;
} else {
 lean_dec_ref(x_23);
 x_51 = lean_box(0);
}
x_52 = lean_array_push(x_47, x_11);
if (lean_is_scalar(x_51)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_51;
}
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_48);
x_54 = l_PersistentHashMap_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_46, x_14, x_53);
x_55 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_55, 0, x_41);
lean_ctor_set(x_55, 1, x_42);
lean_ctor_set(x_55, 2, x_43);
lean_ctor_set(x_55, 3, x_44);
lean_ctor_set(x_55, 4, x_50);
lean_ctor_set(x_55, 5, x_54);
x_56 = lean_box(0);
lean_ctor_set(x_16, 1, x_55);
lean_ctor_set(x_16, 0, x_56);
return x_16;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_57 = lean_ctor_get(x_16, 1);
lean_inc(x_57);
lean_dec(x_16);
x_58 = lean_ctor_get(x_17, 0);
lean_inc(x_58);
lean_dec(x_17);
x_59 = lean_ctor_get(x_57, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 2);
lean_inc(x_61);
x_62 = lean_ctor_get(x_57, 3);
lean_inc(x_62);
x_63 = lean_ctor_get(x_57, 4);
lean_inc(x_63);
x_64 = lean_ctor_get(x_57, 5);
lean_inc(x_64);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 lean_ctor_release(x_57, 2);
 lean_ctor_release(x_57, 3);
 lean_ctor_release(x_57, 4);
 lean_ctor_release(x_57, 5);
 x_65 = x_57;
} else {
 lean_dec_ref(x_57);
 x_65 = lean_box(0);
}
x_66 = lean_ctor_get(x_58, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_58, 1);
lean_inc(x_67);
x_68 = lean_unsigned_to_nat(0u);
x_69 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_consume___spec__1(x_1, x_58, x_67, x_68, x_63);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_70 = x_58;
} else {
 lean_dec_ref(x_58);
 x_70 = lean_box(0);
}
x_71 = lean_array_push(x_66, x_11);
if (lean_is_scalar(x_70)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_70;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_67);
x_73 = l_PersistentHashMap_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_64, x_14, x_72);
if (lean_is_scalar(x_65)) {
 x_74 = lean_alloc_ctor(0, 6, 0);
} else {
 x_74 = x_65;
}
lean_ctor_set(x_74, 0, x_59);
lean_ctor_set(x_74, 1, x_60);
lean_ctor_set(x_74, 2, x_61);
lean_ctor_set(x_74, 3, x_62);
lean_ctor_set(x_74, 4, x_69);
lean_ctor_set(x_74, 5, x_73);
x_75 = lean_box(0);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_13);
if (x_77 == 0)
{
return x_13;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_13, 0);
x_79 = lean_ctor_get(x_13, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_13);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_consume___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_consume___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_2, x_3);
lean_dec(x_2);
x_5 = l_Lean_Meta_SynthInstance_GeneratorNode_inhabited;
x_6 = lean_array_get(x_5, x_1, x_4);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_Meta_SynthInstance_getTop___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 3);
lean_inc(x_2);
x_3 = l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1(x_2);
lean_dec(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_getTop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_getTop___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_getTop___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_SynthInstance_getTop(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_modifyTop(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_3, 3);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_6, x_7);
x_9 = lean_nat_dec_lt(x_8, x_6);
lean_dec(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_1);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_array_fget(x_5, x_8);
x_13 = l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1;
x_14 = lean_array_fset(x_5, x_8, x_13);
x_15 = lean_apply_1(x_1, x_12);
x_16 = lean_array_fset(x_14, x_8, x_15);
lean_dec(x_8);
lean_ctor_set(x_3, 3, x_16);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_3);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_19 = lean_ctor_get(x_3, 0);
x_20 = lean_ctor_get(x_3, 1);
x_21 = lean_ctor_get(x_3, 2);
x_22 = lean_ctor_get(x_3, 3);
x_23 = lean_ctor_get(x_3, 4);
x_24 = lean_ctor_get(x_3, 5);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_3);
x_25 = lean_array_get_size(x_22);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_sub(x_25, x_26);
x_28 = lean_nat_dec_lt(x_27, x_25);
lean_dec(x_25);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_27);
lean_dec(x_1);
x_29 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_29, 0, x_19);
lean_ctor_set(x_29, 1, x_20);
lean_ctor_set(x_29, 2, x_21);
lean_ctor_set(x_29, 3, x_22);
lean_ctor_set(x_29, 4, x_23);
lean_ctor_set(x_29, 5, x_24);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_32 = lean_array_fget(x_22, x_27);
x_33 = l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1;
x_34 = lean_array_fset(x_22, x_27, x_33);
x_35 = lean_apply_1(x_1, x_32);
x_36 = lean_array_fset(x_34, x_27, x_35);
lean_dec(x_27);
x_37 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_37, 0, x_19);
lean_ctor_set(x_37, 1, x_20);
lean_ctor_set(x_37, 2, x_21);
lean_ctor_set(x_37, 3, x_36);
lean_ctor_set(x_37, 4, x_23);
lean_ctor_set(x_37, 5, x_24);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_modifyTop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_SynthInstance_modifyTop(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_generate___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("try instance ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_generate___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_generate___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_generate___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_generate___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_generate(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_Meta_SynthInstance_getTop___rarg(x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_5, 3);
lean_inc(x_10);
x_11 = lean_ctor_get(x_5, 4);
lean_inc(x_11);
lean_dec(x_5);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_11, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_55; 
lean_free_object(x_3);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_11, x_14);
lean_dec(x_11);
x_55 = !lean_is_exclusive(x_6);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_56 = lean_ctor_get(x_6, 3);
x_57 = lean_array_get_size(x_56);
x_58 = lean_nat_sub(x_57, x_14);
x_59 = lean_nat_dec_lt(x_58, x_57);
lean_dec(x_57);
if (x_59 == 0)
{
lean_dec(x_58);
x_16 = x_6;
goto block_54;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_array_fget(x_56, x_58);
x_61 = l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1;
x_62 = lean_array_fset(x_56, x_58, x_61);
x_63 = !lean_is_exclusive(x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_60, 4);
lean_dec(x_64);
lean_inc(x_15);
lean_ctor_set(x_60, 4, x_15);
x_65 = lean_array_fset(x_62, x_58, x_60);
lean_dec(x_58);
lean_ctor_set(x_6, 3, x_65);
x_16 = x_6;
goto block_54;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_66 = lean_ctor_get(x_60, 0);
x_67 = lean_ctor_get(x_60, 1);
x_68 = lean_ctor_get(x_60, 2);
x_69 = lean_ctor_get(x_60, 3);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_60);
lean_inc(x_15);
x_70 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_70, 0, x_66);
lean_ctor_set(x_70, 1, x_67);
lean_ctor_set(x_70, 2, x_68);
lean_ctor_set(x_70, 3, x_69);
lean_ctor_set(x_70, 4, x_15);
x_71 = lean_array_fset(x_62, x_58, x_70);
lean_dec(x_58);
lean_ctor_set(x_6, 3, x_71);
x_16 = x_6;
goto block_54;
}
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_72 = lean_ctor_get(x_6, 0);
x_73 = lean_ctor_get(x_6, 1);
x_74 = lean_ctor_get(x_6, 2);
x_75 = lean_ctor_get(x_6, 3);
x_76 = lean_ctor_get(x_6, 4);
x_77 = lean_ctor_get(x_6, 5);
lean_inc(x_77);
lean_inc(x_76);
lean_inc(x_75);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_6);
x_78 = lean_array_get_size(x_75);
x_79 = lean_nat_sub(x_78, x_14);
x_80 = lean_nat_dec_lt(x_79, x_78);
lean_dec(x_78);
if (x_80 == 0)
{
lean_object* x_81; 
lean_dec(x_79);
x_81 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_81, 0, x_72);
lean_ctor_set(x_81, 1, x_73);
lean_ctor_set(x_81, 2, x_74);
lean_ctor_set(x_81, 3, x_75);
lean_ctor_set(x_81, 4, x_76);
lean_ctor_set(x_81, 5, x_77);
x_16 = x_81;
goto block_54;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_82 = lean_array_fget(x_75, x_79);
x_83 = l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1;
x_84 = lean_array_fset(x_75, x_79, x_83);
x_85 = lean_ctor_get(x_82, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_82, 1);
lean_inc(x_86);
x_87 = lean_ctor_get(x_82, 2);
lean_inc(x_87);
x_88 = lean_ctor_get(x_82, 3);
lean_inc(x_88);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 lean_ctor_release(x_82, 2);
 lean_ctor_release(x_82, 3);
 lean_ctor_release(x_82, 4);
 x_89 = x_82;
} else {
 lean_dec_ref(x_82);
 x_89 = lean_box(0);
}
lean_inc(x_15);
if (lean_is_scalar(x_89)) {
 x_90 = lean_alloc_ctor(0, 5, 0);
} else {
 x_90 = x_89;
}
lean_ctor_set(x_90, 0, x_85);
lean_ctor_set(x_90, 1, x_86);
lean_ctor_set(x_90, 2, x_87);
lean_ctor_set(x_90, 3, x_88);
lean_ctor_set(x_90, 4, x_15);
x_91 = lean_array_fset(x_84, x_79, x_90);
lean_dec(x_79);
x_92 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_92, 0, x_72);
lean_ctor_set(x_92, 1, x_73);
lean_ctor_set(x_92, 2, x_74);
lean_ctor_set(x_92, 3, x_91);
lean_ctor_set(x_92, 4, x_76);
lean_ctor_set(x_92, 5, x_77);
x_16 = x_92;
goto block_54;
}
}
block_54:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_17 = l_Lean_Expr_Inhabited;
x_18 = lean_array_get(x_17, x_10, x_15);
lean_dec(x_15);
lean_dec(x_10);
x_39 = lean_ctor_get(x_16, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_39, 4);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_ctor_get_uint8(x_40, sizeof(void*)*1);
lean_dec(x_40);
if (x_41 == 0)
{
x_19 = x_16;
goto block_38;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = l_Lean_Meta_SynthInstance_wakeUp___closed__1;
x_43 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_SynthInstance_trace___spec__1(x_42, x_1, x_16);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_unbox(x_44);
lean_dec(x_44);
if (x_45 == 0)
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_dec(x_43);
x_19 = x_46;
goto block_38;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_47 = lean_ctor_get(x_43, 1);
lean_inc(x_47);
lean_dec(x_43);
lean_inc(x_18);
x_48 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_48, 0, x_18);
x_49 = l_Lean_Meta_SynthInstance_generate___closed__3;
x_50 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_52 = l_Lean_Meta_SynthInstance_traceCore(x_51, x_50, x_1, x_47);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_19 = x_53;
goto block_38;
}
}
block_38:
{
lean_object* x_20; 
lean_inc(x_1);
lean_inc(x_7);
x_20 = l_Lean_Meta_SynthInstance_tryResolve(x_9, x_7, x_18, x_1, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 0);
lean_dec(x_23);
x_24 = lean_box(0);
lean_ctor_set(x_20, 0, x_24);
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_21, 0);
lean_inc(x_28);
lean_dec(x_21);
x_29 = lean_ctor_get(x_20, 1);
lean_inc(x_29);
lean_dec(x_20);
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_7);
lean_ctor_set(x_32, 1, x_8);
lean_ctor_set(x_32, 2, x_30);
lean_ctor_set(x_32, 3, x_31);
x_33 = l_Lean_Meta_SynthInstance_consume(x_32, x_1, x_29);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_20);
if (x_34 == 0)
{
return x_20;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_20, 0);
x_36 = lean_ctor_get(x_20, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_20);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
else
{
uint8_t x_93; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_93 = !lean_is_exclusive(x_6);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_6, 3);
x_95 = lean_array_pop(x_94);
lean_ctor_set(x_6, 3, x_95);
x_96 = lean_box(0);
lean_ctor_set(x_3, 0, x_96);
return x_3;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_97 = lean_ctor_get(x_6, 0);
x_98 = lean_ctor_get(x_6, 1);
x_99 = lean_ctor_get(x_6, 2);
x_100 = lean_ctor_get(x_6, 3);
x_101 = lean_ctor_get(x_6, 4);
x_102 = lean_ctor_get(x_6, 5);
lean_inc(x_102);
lean_inc(x_101);
lean_inc(x_100);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_6);
x_103 = lean_array_pop(x_100);
x_104 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_104, 0, x_97);
lean_ctor_set(x_104, 1, x_98);
lean_ctor_set(x_104, 2, x_99);
lean_ctor_set(x_104, 3, x_103);
lean_ctor_set(x_104, 4, x_101);
lean_ctor_set(x_104, 5, x_102);
x_105 = lean_box(0);
lean_ctor_set(x_3, 1, x_104);
lean_ctor_set(x_3, 0, x_105);
return x_3;
}
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; uint8_t x_114; 
x_106 = lean_ctor_get(x_3, 0);
x_107 = lean_ctor_get(x_3, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_3);
x_108 = lean_ctor_get(x_106, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_106, 1);
lean_inc(x_109);
x_110 = lean_ctor_get(x_106, 2);
lean_inc(x_110);
x_111 = lean_ctor_get(x_106, 3);
lean_inc(x_111);
x_112 = lean_ctor_get(x_106, 4);
lean_inc(x_112);
lean_dec(x_106);
x_113 = lean_unsigned_to_nat(0u);
x_114 = lean_nat_dec_eq(x_112, x_113);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; 
x_115 = lean_unsigned_to_nat(1u);
x_116 = lean_nat_sub(x_112, x_115);
lean_dec(x_112);
x_154 = lean_ctor_get(x_107, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_107, 1);
lean_inc(x_155);
x_156 = lean_ctor_get(x_107, 2);
lean_inc(x_156);
x_157 = lean_ctor_get(x_107, 3);
lean_inc(x_157);
x_158 = lean_ctor_get(x_107, 4);
lean_inc(x_158);
x_159 = lean_ctor_get(x_107, 5);
lean_inc(x_159);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 lean_ctor_release(x_107, 2);
 lean_ctor_release(x_107, 3);
 lean_ctor_release(x_107, 4);
 lean_ctor_release(x_107, 5);
 x_160 = x_107;
} else {
 lean_dec_ref(x_107);
 x_160 = lean_box(0);
}
x_161 = lean_array_get_size(x_157);
x_162 = lean_nat_sub(x_161, x_115);
x_163 = lean_nat_dec_lt(x_162, x_161);
lean_dec(x_161);
if (x_163 == 0)
{
lean_object* x_164; 
lean_dec(x_162);
if (lean_is_scalar(x_160)) {
 x_164 = lean_alloc_ctor(0, 6, 0);
} else {
 x_164 = x_160;
}
lean_ctor_set(x_164, 0, x_154);
lean_ctor_set(x_164, 1, x_155);
lean_ctor_set(x_164, 2, x_156);
lean_ctor_set(x_164, 3, x_157);
lean_ctor_set(x_164, 4, x_158);
lean_ctor_set(x_164, 5, x_159);
x_117 = x_164;
goto block_153;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_165 = lean_array_fget(x_157, x_162);
x_166 = l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1;
x_167 = lean_array_fset(x_157, x_162, x_166);
x_168 = lean_ctor_get(x_165, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_165, 1);
lean_inc(x_169);
x_170 = lean_ctor_get(x_165, 2);
lean_inc(x_170);
x_171 = lean_ctor_get(x_165, 3);
lean_inc(x_171);
if (lean_is_exclusive(x_165)) {
 lean_ctor_release(x_165, 0);
 lean_ctor_release(x_165, 1);
 lean_ctor_release(x_165, 2);
 lean_ctor_release(x_165, 3);
 lean_ctor_release(x_165, 4);
 x_172 = x_165;
} else {
 lean_dec_ref(x_165);
 x_172 = lean_box(0);
}
lean_inc(x_116);
if (lean_is_scalar(x_172)) {
 x_173 = lean_alloc_ctor(0, 5, 0);
} else {
 x_173 = x_172;
}
lean_ctor_set(x_173, 0, x_168);
lean_ctor_set(x_173, 1, x_169);
lean_ctor_set(x_173, 2, x_170);
lean_ctor_set(x_173, 3, x_171);
lean_ctor_set(x_173, 4, x_116);
x_174 = lean_array_fset(x_167, x_162, x_173);
lean_dec(x_162);
if (lean_is_scalar(x_160)) {
 x_175 = lean_alloc_ctor(0, 6, 0);
} else {
 x_175 = x_160;
}
lean_ctor_set(x_175, 0, x_154);
lean_ctor_set(x_175, 1, x_155);
lean_ctor_set(x_175, 2, x_156);
lean_ctor_set(x_175, 3, x_174);
lean_ctor_set(x_175, 4, x_158);
lean_ctor_set(x_175, 5, x_159);
x_117 = x_175;
goto block_153;
}
block_153:
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_138; lean_object* x_139; uint8_t x_140; 
x_118 = l_Lean_Expr_Inhabited;
x_119 = lean_array_get(x_118, x_111, x_116);
lean_dec(x_116);
lean_dec(x_111);
x_138 = lean_ctor_get(x_117, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_138, 4);
lean_inc(x_139);
lean_dec(x_138);
x_140 = lean_ctor_get_uint8(x_139, sizeof(void*)*1);
lean_dec(x_139);
if (x_140 == 0)
{
x_120 = x_117;
goto block_137;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; uint8_t x_144; 
x_141 = l_Lean_Meta_SynthInstance_wakeUp___closed__1;
x_142 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_SynthInstance_trace___spec__1(x_141, x_1, x_117);
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
x_144 = lean_unbox(x_143);
lean_dec(x_143);
if (x_144 == 0)
{
lean_object* x_145; 
x_145 = lean_ctor_get(x_142, 1);
lean_inc(x_145);
lean_dec(x_142);
x_120 = x_145;
goto block_137;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_146 = lean_ctor_get(x_142, 1);
lean_inc(x_146);
lean_dec(x_142);
lean_inc(x_119);
x_147 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_147, 0, x_119);
x_148 = l_Lean_Meta_SynthInstance_generate___closed__3;
x_149 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_147);
x_150 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_151 = l_Lean_Meta_SynthInstance_traceCore(x_150, x_149, x_1, x_146);
x_152 = lean_ctor_get(x_151, 1);
lean_inc(x_152);
lean_dec(x_151);
x_120 = x_152;
goto block_137;
}
}
block_137:
{
lean_object* x_121; 
lean_inc(x_1);
lean_inc(x_108);
x_121 = l_Lean_Meta_SynthInstance_tryResolve(x_110, x_108, x_119, x_1, x_120);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_109);
lean_dec(x_108);
lean_dec(x_1);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_124 = x_121;
} else {
 lean_dec_ref(x_121);
 x_124 = lean_box(0);
}
x_125 = lean_box(0);
if (lean_is_scalar(x_124)) {
 x_126 = lean_alloc_ctor(0, 2, 0);
} else {
 x_126 = x_124;
}
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_123);
return x_126;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_127 = lean_ctor_get(x_122, 0);
lean_inc(x_127);
lean_dec(x_122);
x_128 = lean_ctor_get(x_121, 1);
lean_inc(x_128);
lean_dec(x_121);
x_129 = lean_ctor_get(x_127, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_127, 1);
lean_inc(x_130);
lean_dec(x_127);
x_131 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_131, 0, x_108);
lean_ctor_set(x_131, 1, x_109);
lean_ctor_set(x_131, 2, x_129);
lean_ctor_set(x_131, 3, x_130);
x_132 = l_Lean_Meta_SynthInstance_consume(x_131, x_1, x_128);
return x_132;
}
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_109);
lean_dec(x_108);
lean_dec(x_1);
x_133 = lean_ctor_get(x_121, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_121, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_135 = x_121;
} else {
 lean_dec_ref(x_121);
 x_135 = lean_box(0);
}
if (lean_is_scalar(x_135)) {
 x_136 = lean_alloc_ctor(1, 2, 0);
} else {
 x_136 = x_135;
}
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_134);
return x_136;
}
}
}
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_112);
lean_dec(x_111);
lean_dec(x_110);
lean_dec(x_109);
lean_dec(x_108);
lean_dec(x_1);
x_176 = lean_ctor_get(x_107, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_107, 1);
lean_inc(x_177);
x_178 = lean_ctor_get(x_107, 2);
lean_inc(x_178);
x_179 = lean_ctor_get(x_107, 3);
lean_inc(x_179);
x_180 = lean_ctor_get(x_107, 4);
lean_inc(x_180);
x_181 = lean_ctor_get(x_107, 5);
lean_inc(x_181);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 lean_ctor_release(x_107, 2);
 lean_ctor_release(x_107, 3);
 lean_ctor_release(x_107, 4);
 lean_ctor_release(x_107, 5);
 x_182 = x_107;
} else {
 lean_dec_ref(x_107);
 x_182 = lean_box(0);
}
x_183 = lean_array_pop(x_179);
if (lean_is_scalar(x_182)) {
 x_184 = lean_alloc_ctor(0, 6, 0);
} else {
 x_184 = x_182;
}
lean_ctor_set(x_184, 0, x_176);
lean_ctor_set(x_184, 1, x_177);
lean_ctor_set(x_184, 2, x_178);
lean_ctor_set(x_184, 3, x_183);
lean_ctor_set(x_184, 4, x_180);
lean_ctor_set(x_184, 5, x_181);
x_185 = lean_box(0);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_184);
return x_186;
}
}
}
}
lean_object* _init_l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_SynthInstance_Consumernode_inhabited;
x_2 = l_Lean_Meta_AbstractMVarsResult_inhabited;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_2, x_3);
lean_dec(x_2);
x_5 = l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___closed__1;
x_6 = lean_array_get(x_5, x_1, x_4);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_Meta_SynthInstance_getNextToResume___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 4);
x_4 = l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1(x_3);
x_5 = lean_array_pop(x_3);
lean_ctor_set(x_1, 4, x_5);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_1);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 2);
x_10 = lean_ctor_get(x_1, 3);
x_11 = lean_ctor_get(x_1, 4);
x_12 = lean_ctor_get(x_1, 5);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_13 = l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1(x_11);
x_14 = lean_array_pop(x_11);
x_15 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_8);
lean_ctor_set(x_15, 2, x_9);
lean_ctor_set(x_15, 3, x_10);
lean_ctor_set(x_15, 4, x_14);
lean_ctor_set(x_15, 5, x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_getNextToResume(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_getNextToResume___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_getNextToResume___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_SynthInstance_getNextToResume(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_resume___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("resume found no remaining subgoals");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_resume___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__1;
x_2 = lean_unsigned_to_nat(338u);
x_3 = lean_unsigned_to_nat(19u);
x_4 = l_Lean_Meta_SynthInstance_resume___closed__1;
x_5 = l___private_Init_Util_1__mkPanicMessage(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_SynthInstance_resume(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Lean_Meta_SynthInstance_getNextToResume___rarg(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 3);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = l_Lean_Meta_SynthInstance_getEntry___closed__1;
x_9 = l_Lean_Meta_SynthInstance_resume___closed__2;
x_10 = lean_panic_fn(x_9);
x_11 = lean_apply_2(x_10, x_1, x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_ctor_get(x_4, 1);
lean_inc(x_13);
lean_dec(x_4);
x_14 = !lean_is_exclusive(x_5);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_5, 0);
x_16 = lean_ctor_get(x_5, 1);
x_17 = lean_ctor_get(x_5, 2);
x_18 = lean_ctor_get(x_5, 3);
lean_dec(x_18);
x_19 = lean_ctor_get(x_6, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_6, 1);
lean_inc(x_20);
lean_dec(x_6);
lean_inc(x_1);
x_21 = l_Lean_Meta_SynthInstance_tryAnswer(x_17, x_19, x_13, x_1, x_12);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
lean_dec(x_20);
lean_free_object(x_5);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 0);
lean_dec(x_24);
x_25 = lean_box(0);
lean_ctor_set(x_21, 0, x_25);
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_21, 1);
lean_inc(x_26);
lean_dec(x_21);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_22, 0);
lean_inc(x_29);
lean_dec(x_22);
x_30 = lean_ctor_get(x_21, 1);
lean_inc(x_30);
lean_dec(x_21);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = l_List_append___rarg(x_32, x_20);
lean_ctor_set(x_5, 3, x_33);
lean_ctor_set(x_5, 2, x_31);
x_34 = l_Lean_Meta_SynthInstance_consume(x_5, x_1, x_30);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_20);
lean_free_object(x_5);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_21);
if (x_35 == 0)
{
return x_21;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_21, 0);
x_37 = lean_ctor_get(x_21, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_21);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_ctor_get(x_5, 0);
x_40 = lean_ctor_get(x_5, 1);
x_41 = lean_ctor_get(x_5, 2);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_5);
x_42 = lean_ctor_get(x_6, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_6, 1);
lean_inc(x_43);
lean_dec(x_6);
lean_inc(x_1);
x_44 = l_Lean_Meta_SynthInstance_tryAnswer(x_41, x_42, x_13, x_1, x_12);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_43);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_1);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_47 = x_44;
} else {
 lean_dec_ref(x_44);
 x_47 = lean_box(0);
}
x_48 = lean_box(0);
if (lean_is_scalar(x_47)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_47;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_46);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_50 = lean_ctor_get(x_45, 0);
lean_inc(x_50);
lean_dec(x_45);
x_51 = lean_ctor_get(x_44, 1);
lean_inc(x_51);
lean_dec(x_44);
x_52 = lean_ctor_get(x_50, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_50, 1);
lean_inc(x_53);
lean_dec(x_50);
x_54 = l_List_append___rarg(x_53, x_43);
x_55 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_55, 0, x_39);
lean_ctor_set(x_55, 1, x_40);
lean_ctor_set(x_55, 2, x_52);
lean_ctor_set(x_55, 3, x_54);
x_56 = l_Lean_Meta_SynthInstance_consume(x_55, x_1, x_51);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_43);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_1);
x_57 = lean_ctor_get(x_44, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_44, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_59 = x_44;
} else {
 lean_dec_ref(x_44);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(1, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_step(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 4);
lean_inc(x_3);
x_4 = l_Array_isEmpty___rarg(x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Lean_Meta_SynthInstance_resume(x_1, x_2);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
lean_dec(x_7);
x_8 = 1;
x_9 = lean_box(x_8);
lean_ctor_set(x_5, 0, x_9);
return x_5;
}
else
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = 1;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_5);
if (x_14 == 0)
{
return x_5;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_5, 0);
x_16 = lean_ctor_get(x_5, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_5);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_2, 3);
lean_inc(x_18);
x_19 = l_Array_isEmpty___rarg(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = l_Lean_Meta_SynthInstance_generate(x_1, x_2);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
x_23 = 1;
x_24 = lean_box(x_23);
lean_ctor_set(x_20, 0, x_24);
return x_20;
}
else
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_dec(x_20);
x_26 = 1;
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_20);
if (x_29 == 0)
{
return x_20;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_20, 0);
x_31 = lean_ctor_get(x_20, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_20);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_1);
x_33 = 0;
x_34 = lean_box(x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_2);
return x_35;
}
}
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_synth___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_synth___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_synth___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_synth___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_synth___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_synth___main___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("synthInstance is out of fule");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_synth___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_synth___main___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_synth___main___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_synth___main___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_synth___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
lean_dec(x_1);
lean_inc(x_2);
x_8 = l_Lean_Meta_SynthInstance_step(x_2, x_3);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_7);
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_8, 1);
x_13 = lean_ctor_get(x_8, 0);
lean_dec(x_13);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 4);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get_uint8(x_15, sizeof(void*)*1);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_2);
x_17 = lean_box(0);
lean_ctor_set(x_8, 0, x_17);
return x_8;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_free_object(x_8);
x_18 = l_Lean_Meta_SynthInstance_wakeUp___closed__1;
x_19 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_SynthInstance_trace___spec__1(x_18, x_2, x_12);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
uint8_t x_22; 
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_19);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_19, 0);
lean_dec(x_23);
x_24 = lean_box(0);
lean_ctor_set(x_19, 0, x_24);
return x_19;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_dec(x_19);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_dec(x_19);
x_29 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_30 = l_Lean_Meta_SynthInstance_synth___main___closed__3;
x_31 = l_Lean_Meta_SynthInstance_traceCore(x_29, x_30, x_2, x_28);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
x_34 = lean_box(0);
lean_ctor_set(x_31, 0, x_34);
return x_31;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
lean_dec(x_31);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_38 = lean_ctor_get(x_8, 1);
lean_inc(x_38);
lean_dec(x_8);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_39, 4);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_ctor_get_uint8(x_40, sizeof(void*)*1);
lean_dec(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_2);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_38);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_44 = l_Lean_Meta_SynthInstance_wakeUp___closed__1;
x_45 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_SynthInstance_trace___spec__1(x_44, x_2, x_38);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_unbox(x_46);
lean_dec(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_2);
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_49 = x_45;
} else {
 lean_dec_ref(x_45);
 x_49 = lean_box(0);
}
x_50 = lean_box(0);
if (lean_is_scalar(x_49)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_49;
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_48);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_52 = lean_ctor_get(x_45, 1);
lean_inc(x_52);
lean_dec(x_45);
x_53 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_54 = l_Lean_Meta_SynthInstance_synth___main___closed__3;
x_55 = l_Lean_Meta_SynthInstance_traceCore(x_53, x_54, x_2, x_52);
lean_dec(x_2);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_57 = x_55;
} else {
 lean_dec_ref(x_55);
 x_57 = lean_box(0);
}
x_58 = lean_box(0);
if (lean_is_scalar(x_57)) {
 x_59 = lean_alloc_ctor(0, 2, 0);
} else {
 x_59 = x_57;
}
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_56);
return x_59;
}
}
}
}
else
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_ctor_get(x_8, 1);
lean_inc(x_60);
lean_dec(x_8);
x_61 = !lean_is_exclusive(x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_62 = lean_ctor_get(x_60, 0);
x_63 = lean_ctor_get(x_60, 1);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_inc(x_63);
x_65 = lean_metavar_ctx_get_expr_assignment(x_64, x_63);
if (lean_obj_tag(x_65) == 0)
{
x_1 = x_7;
x_3 = x_60;
goto _start;
}
else
{
uint8_t x_67; 
lean_dec(x_7);
x_67 = !lean_is_exclusive(x_65);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_68 = lean_ctor_get(x_65, 0);
x_69 = l_Lean_Meta_instantiateMVars(x_68, x_2, x_62);
lean_dec(x_2);
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_ctor_get(x_69, 0);
x_72 = lean_ctor_get(x_69, 1);
lean_ctor_set(x_60, 0, x_72);
lean_ctor_set(x_65, 0, x_71);
lean_ctor_set(x_69, 1, x_60);
lean_ctor_set(x_69, 0, x_65);
return x_69;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_69, 0);
x_74 = lean_ctor_get(x_69, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_69);
lean_ctor_set(x_60, 0, x_74);
lean_ctor_set(x_65, 0, x_73);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_65);
lean_ctor_set(x_75, 1, x_60);
return x_75;
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_76 = lean_ctor_get(x_65, 0);
lean_inc(x_76);
lean_dec(x_65);
x_77 = l_Lean_Meta_instantiateMVars(x_76, x_2, x_62);
lean_dec(x_2);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_80 = x_77;
} else {
 lean_dec_ref(x_77);
 x_80 = lean_box(0);
}
lean_ctor_set(x_60, 0, x_79);
x_81 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_81, 0, x_78);
if (lean_is_scalar(x_80)) {
 x_82 = lean_alloc_ctor(0, 2, 0);
} else {
 x_82 = x_80;
}
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_60);
return x_82;
}
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_83 = lean_ctor_get(x_60, 0);
x_84 = lean_ctor_get(x_60, 1);
x_85 = lean_ctor_get(x_60, 2);
x_86 = lean_ctor_get(x_60, 3);
x_87 = lean_ctor_get(x_60, 4);
x_88 = lean_ctor_get(x_60, 5);
lean_inc(x_88);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_60);
x_89 = lean_ctor_get(x_83, 1);
lean_inc(x_89);
lean_inc(x_84);
x_90 = lean_metavar_ctx_get_expr_assignment(x_89, x_84);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; 
x_91 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_91, 0, x_83);
lean_ctor_set(x_91, 1, x_84);
lean_ctor_set(x_91, 2, x_85);
lean_ctor_set(x_91, 3, x_86);
lean_ctor_set(x_91, 4, x_87);
lean_ctor_set(x_91, 5, x_88);
x_1 = x_7;
x_3 = x_91;
goto _start;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_7);
x_93 = lean_ctor_get(x_90, 0);
lean_inc(x_93);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 x_94 = x_90;
} else {
 lean_dec_ref(x_90);
 x_94 = lean_box(0);
}
x_95 = l_Lean_Meta_instantiateMVars(x_93, x_2, x_83);
lean_dec(x_2);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_98 = x_95;
} else {
 lean_dec_ref(x_95);
 x_98 = lean_box(0);
}
x_99 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_84);
lean_ctor_set(x_99, 2, x_85);
lean_ctor_set(x_99, 3, x_86);
lean_ctor_set(x_99, 4, x_87);
lean_ctor_set(x_99, 5, x_88);
if (lean_is_scalar(x_94)) {
 x_100 = lean_alloc_ctor(1, 1, 0);
} else {
 x_100 = x_94;
}
lean_ctor_set(x_100, 0, x_96);
if (lean_is_scalar(x_98)) {
 x_101 = lean_alloc_ctor(0, 2, 0);
} else {
 x_101 = x_98;
}
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
return x_101;
}
}
}
}
else
{
uint8_t x_102; 
lean_dec(x_7);
lean_dec(x_2);
x_102 = !lean_is_exclusive(x_8);
if (x_102 == 0)
{
return x_8;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_8, 0);
x_104 = lean_ctor_get(x_8, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_8);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
}
else
{
lean_object* x_106; lean_object* x_107; uint8_t x_108; 
lean_dec(x_1);
x_106 = lean_ctor_get(x_3, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_106, 4);
lean_inc(x_107);
lean_dec(x_106);
x_108 = lean_ctor_get_uint8(x_107, sizeof(void*)*1);
lean_dec(x_107);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; 
lean_dec(x_2);
x_109 = lean_box(0);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_3);
return x_110;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; uint8_t x_114; 
x_111 = l_Lean_Meta_SynthInstance_wakeUp___closed__1;
x_112 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_SynthInstance_trace___spec__1(x_111, x_2, x_3);
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_unbox(x_113);
lean_dec(x_113);
if (x_114 == 0)
{
uint8_t x_115; 
lean_dec(x_2);
x_115 = !lean_is_exclusive(x_112);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; 
x_116 = lean_ctor_get(x_112, 0);
lean_dec(x_116);
x_117 = lean_box(0);
lean_ctor_set(x_112, 0, x_117);
return x_112;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_112, 1);
lean_inc(x_118);
lean_dec(x_112);
x_119 = lean_box(0);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_118);
return x_120;
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; uint8_t x_125; 
x_121 = lean_ctor_get(x_112, 1);
lean_inc(x_121);
lean_dec(x_112);
x_122 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_123 = l_Lean_Meta_SynthInstance_synth___main___closed__6;
x_124 = l_Lean_Meta_SynthInstance_traceCore(x_122, x_123, x_2, x_121);
lean_dec(x_2);
x_125 = !lean_is_exclusive(x_124);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; 
x_126 = lean_ctor_get(x_124, 0);
lean_dec(x_126);
x_127 = lean_box(0);
lean_ctor_set(x_124, 0, x_127);
return x_124;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_124, 1);
lean_inc(x_128);
lean_dec(x_124);
x_129 = lean_box(0);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_128);
return x_130;
}
}
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_synth(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_SynthInstance_synth___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("main goal ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; lean_object* x_368; uint8_t x_369; 
x_368 = lean_ctor_get(x_4, 4);
lean_inc(x_368);
x_369 = lean_ctor_get_uint8(x_368, sizeof(void*)*1);
lean_dec(x_368);
if (x_369 == 0)
{
uint8_t x_370; 
x_370 = 0;
x_5 = x_370;
x_6 = x_4;
goto block_367;
}
else
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; uint8_t x_375; 
x_371 = l_Lean_Meta_SynthInstance_wakeUp___closed__1;
x_372 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_371, x_3, x_4);
x_373 = lean_ctor_get(x_372, 0);
lean_inc(x_373);
x_374 = lean_ctor_get(x_372, 1);
lean_inc(x_374);
lean_dec(x_372);
x_375 = lean_unbox(x_373);
lean_dec(x_373);
x_5 = x_375;
x_6 = x_374;
goto block_367;
}
block_367:
{
if (x_5 == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_6, 4);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
uint8_t x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_10 = lean_ctor_get_uint8(x_8, sizeof(void*)*1);
x_11 = 0;
lean_ctor_set_uint8(x_8, sizeof(void*)*1, x_11);
x_33 = lean_box(0);
lean_inc(x_3);
lean_inc(x_1);
x_34 = l_Lean_Meta_mkFreshExprMVar(x_1, x_33, x_11, x_3, x_6);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 0);
lean_inc(x_36);
lean_dec(x_34);
x_37 = !lean_is_exclusive(x_35);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_38 = lean_ctor_get(x_35, 1);
x_39 = l_Lean_Meta_SynthInstance_mkTableKey(x_38, x_1);
lean_inc(x_38);
x_40 = l_Lean_Expr_mvarId_x21(x_36);
x_41 = lean_unsigned_to_nat(0u);
x_42 = l_Array_empty___closed__1;
x_43 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
x_44 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_44, 0, x_35);
lean_ctor_set(x_44, 1, x_40);
lean_ctor_set(x_44, 2, x_41);
lean_ctor_set(x_44, 3, x_42);
lean_ctor_set(x_44, 4, x_42);
lean_ctor_set(x_44, 5, x_43);
x_45 = lean_box(1);
lean_inc(x_3);
x_46 = l_Lean_Meta_SynthInstance_newSubgoal(x_38, x_39, x_36, x_45, x_3, x_44);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_48 = l_Lean_Meta_SynthInstance_synth___main(x_2, x_3, x_47);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_ctor_get(x_50, 4);
lean_inc(x_51);
x_52 = !lean_is_exclusive(x_48);
if (x_52 == 0)
{
lean_object* x_53; uint8_t x_54; 
x_53 = lean_ctor_get(x_48, 1);
lean_dec(x_53);
x_54 = !lean_is_exclusive(x_50);
if (x_54 == 0)
{
lean_object* x_55; uint8_t x_56; 
x_55 = lean_ctor_get(x_50, 4);
lean_dec(x_55);
x_56 = !lean_is_exclusive(x_51);
if (x_56 == 0)
{
lean_ctor_set_uint8(x_51, sizeof(void*)*1, x_10);
lean_ctor_set(x_48, 1, x_50);
return x_48;
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_51, 0);
lean_inc(x_57);
lean_dec(x_51);
x_58 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set_uint8(x_58, sizeof(void*)*1, x_10);
lean_ctor_set(x_50, 4, x_58);
lean_ctor_set(x_48, 1, x_50);
return x_48;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_59 = lean_ctor_get(x_50, 0);
x_60 = lean_ctor_get(x_50, 1);
x_61 = lean_ctor_get(x_50, 2);
x_62 = lean_ctor_get(x_50, 3);
x_63 = lean_ctor_get(x_50, 5);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_50);
x_64 = lean_ctor_get(x_51, 0);
lean_inc(x_64);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 x_65 = x_51;
} else {
 lean_dec_ref(x_51);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(0, 1, 1);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set_uint8(x_66, sizeof(void*)*1, x_10);
x_67 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_67, 0, x_59);
lean_ctor_set(x_67, 1, x_60);
lean_ctor_set(x_67, 2, x_61);
lean_ctor_set(x_67, 3, x_62);
lean_ctor_set(x_67, 4, x_66);
lean_ctor_set(x_67, 5, x_63);
lean_ctor_set(x_48, 1, x_67);
return x_48;
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_68 = lean_ctor_get(x_48, 0);
lean_inc(x_68);
lean_dec(x_48);
x_69 = lean_ctor_get(x_50, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_50, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_50, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_50, 3);
lean_inc(x_72);
x_73 = lean_ctor_get(x_50, 5);
lean_inc(x_73);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 lean_ctor_release(x_50, 2);
 lean_ctor_release(x_50, 3);
 lean_ctor_release(x_50, 4);
 lean_ctor_release(x_50, 5);
 x_74 = x_50;
} else {
 lean_dec_ref(x_50);
 x_74 = lean_box(0);
}
x_75 = lean_ctor_get(x_51, 0);
lean_inc(x_75);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 x_76 = x_51;
} else {
 lean_dec_ref(x_51);
 x_76 = lean_box(0);
}
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(0, 1, 1);
} else {
 x_77 = x_76;
}
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set_uint8(x_77, sizeof(void*)*1, x_10);
if (lean_is_scalar(x_74)) {
 x_78 = lean_alloc_ctor(0, 6, 0);
} else {
 x_78 = x_74;
}
lean_ctor_set(x_78, 0, x_69);
lean_ctor_set(x_78, 1, x_70);
lean_ctor_set(x_78, 2, x_71);
lean_ctor_set(x_78, 3, x_72);
lean_ctor_set(x_78, 4, x_77);
lean_ctor_set(x_78, 5, x_73);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_68);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_48, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_48, 1);
lean_inc(x_81);
lean_dec(x_48);
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
lean_dec(x_81);
x_12 = x_80;
x_13 = x_82;
goto block_32;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_3);
lean_dec(x_2);
x_83 = lean_ctor_get(x_46, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_46, 1);
lean_inc(x_84);
lean_dec(x_46);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
lean_dec(x_84);
x_12 = x_83;
x_13 = x_85;
goto block_32;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_86 = lean_ctor_get(x_35, 0);
x_87 = lean_ctor_get(x_35, 1);
x_88 = lean_ctor_get(x_35, 2);
x_89 = lean_ctor_get(x_35, 3);
x_90 = lean_ctor_get(x_35, 4);
x_91 = lean_ctor_get(x_35, 5);
lean_inc(x_91);
lean_inc(x_90);
lean_inc(x_89);
lean_inc(x_88);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_35);
x_92 = l_Lean_Meta_SynthInstance_mkTableKey(x_87, x_1);
lean_inc(x_87);
x_93 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_93, 0, x_86);
lean_ctor_set(x_93, 1, x_87);
lean_ctor_set(x_93, 2, x_88);
lean_ctor_set(x_93, 3, x_89);
lean_ctor_set(x_93, 4, x_90);
lean_ctor_set(x_93, 5, x_91);
x_94 = l_Lean_Expr_mvarId_x21(x_36);
x_95 = lean_unsigned_to_nat(0u);
x_96 = l_Array_empty___closed__1;
x_97 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
x_98 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_98, 0, x_93);
lean_ctor_set(x_98, 1, x_94);
lean_ctor_set(x_98, 2, x_95);
lean_ctor_set(x_98, 3, x_96);
lean_ctor_set(x_98, 4, x_96);
lean_ctor_set(x_98, 5, x_97);
x_99 = lean_box(1);
lean_inc(x_3);
x_100 = l_Lean_Meta_SynthInstance_newSubgoal(x_87, x_92, x_36, x_99, x_3, x_98);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; lean_object* x_102; 
x_101 = lean_ctor_get(x_100, 1);
lean_inc(x_101);
lean_dec(x_100);
x_102 = l_Lean_Meta_SynthInstance_synth___main(x_2, x_3, x_101);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_103 = lean_ctor_get(x_102, 1);
lean_inc(x_103);
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
lean_dec(x_103);
x_105 = lean_ctor_get(x_104, 4);
lean_inc(x_105);
x_106 = lean_ctor_get(x_102, 0);
lean_inc(x_106);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_107 = x_102;
} else {
 lean_dec_ref(x_102);
 x_107 = lean_box(0);
}
x_108 = lean_ctor_get(x_104, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_104, 1);
lean_inc(x_109);
x_110 = lean_ctor_get(x_104, 2);
lean_inc(x_110);
x_111 = lean_ctor_get(x_104, 3);
lean_inc(x_111);
x_112 = lean_ctor_get(x_104, 5);
lean_inc(x_112);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 lean_ctor_release(x_104, 2);
 lean_ctor_release(x_104, 3);
 lean_ctor_release(x_104, 4);
 lean_ctor_release(x_104, 5);
 x_113 = x_104;
} else {
 lean_dec_ref(x_104);
 x_113 = lean_box(0);
}
x_114 = lean_ctor_get(x_105, 0);
lean_inc(x_114);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 x_115 = x_105;
} else {
 lean_dec_ref(x_105);
 x_115 = lean_box(0);
}
if (lean_is_scalar(x_115)) {
 x_116 = lean_alloc_ctor(0, 1, 1);
} else {
 x_116 = x_115;
}
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set_uint8(x_116, sizeof(void*)*1, x_10);
if (lean_is_scalar(x_113)) {
 x_117 = lean_alloc_ctor(0, 6, 0);
} else {
 x_117 = x_113;
}
lean_ctor_set(x_117, 0, x_108);
lean_ctor_set(x_117, 1, x_109);
lean_ctor_set(x_117, 2, x_110);
lean_ctor_set(x_117, 3, x_111);
lean_ctor_set(x_117, 4, x_116);
lean_ctor_set(x_117, 5, x_112);
if (lean_is_scalar(x_107)) {
 x_118 = lean_alloc_ctor(0, 2, 0);
} else {
 x_118 = x_107;
}
lean_ctor_set(x_118, 0, x_106);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_102, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_102, 1);
lean_inc(x_120);
lean_dec(x_102);
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
lean_dec(x_120);
x_12 = x_119;
x_13 = x_121;
goto block_32;
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
lean_dec(x_3);
lean_dec(x_2);
x_122 = lean_ctor_get(x_100, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_100, 1);
lean_inc(x_123);
lean_dec(x_100);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
lean_dec(x_123);
x_12 = x_122;
x_13 = x_124;
goto block_32;
}
}
block_32:
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_13, 4);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_ctor_set_uint8(x_15, sizeof(void*)*1, x_10);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_13);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_15, 0);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set_uint8(x_19, sizeof(void*)*1, x_10);
lean_ctor_set(x_13, 4, x_19);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_12);
lean_ctor_set(x_20, 1, x_13);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_ctor_get(x_13, 4);
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
x_24 = lean_ctor_get(x_13, 2);
x_25 = lean_ctor_get(x_13, 3);
x_26 = lean_ctor_get(x_13, 5);
lean_inc(x_26);
lean_inc(x_21);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
x_27 = lean_ctor_get(x_21, 0);
lean_inc(x_27);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 x_28 = x_21;
} else {
 lean_dec_ref(x_21);
 x_28 = lean_box(0);
}
if (lean_is_scalar(x_28)) {
 x_29 = lean_alloc_ctor(0, 1, 1);
} else {
 x_29 = x_28;
}
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set_uint8(x_29, sizeof(void*)*1, x_10);
x_30 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_30, 0, x_22);
lean_ctor_set(x_30, 1, x_23);
lean_ctor_set(x_30, 2, x_24);
lean_ctor_set(x_30, 3, x_25);
lean_ctor_set(x_30, 4, x_29);
lean_ctor_set(x_30, 5, x_26);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_12);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_125; lean_object* x_126; uint8_t x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_125 = lean_ctor_get_uint8(x_8, sizeof(void*)*1);
x_126 = lean_ctor_get(x_8, 0);
lean_inc(x_126);
lean_dec(x_8);
x_127 = 0;
x_128 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_128, 0, x_126);
lean_ctor_set_uint8(x_128, sizeof(void*)*1, x_127);
lean_ctor_set(x_6, 4, x_128);
x_144 = lean_box(0);
lean_inc(x_3);
lean_inc(x_1);
x_145 = l_Lean_Meta_mkFreshExprMVar(x_1, x_144, x_127, x_3, x_6);
x_146 = lean_ctor_get(x_145, 1);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 0);
lean_inc(x_147);
lean_dec(x_145);
x_148 = lean_ctor_get(x_146, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_146, 1);
lean_inc(x_149);
x_150 = lean_ctor_get(x_146, 2);
lean_inc(x_150);
x_151 = lean_ctor_get(x_146, 3);
lean_inc(x_151);
x_152 = lean_ctor_get(x_146, 4);
lean_inc(x_152);
x_153 = lean_ctor_get(x_146, 5);
lean_inc(x_153);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 lean_ctor_release(x_146, 1);
 lean_ctor_release(x_146, 2);
 lean_ctor_release(x_146, 3);
 lean_ctor_release(x_146, 4);
 lean_ctor_release(x_146, 5);
 x_154 = x_146;
} else {
 lean_dec_ref(x_146);
 x_154 = lean_box(0);
}
x_155 = l_Lean_Meta_SynthInstance_mkTableKey(x_149, x_1);
lean_inc(x_149);
if (lean_is_scalar(x_154)) {
 x_156 = lean_alloc_ctor(0, 6, 0);
} else {
 x_156 = x_154;
}
lean_ctor_set(x_156, 0, x_148);
lean_ctor_set(x_156, 1, x_149);
lean_ctor_set(x_156, 2, x_150);
lean_ctor_set(x_156, 3, x_151);
lean_ctor_set(x_156, 4, x_152);
lean_ctor_set(x_156, 5, x_153);
x_157 = l_Lean_Expr_mvarId_x21(x_147);
x_158 = lean_unsigned_to_nat(0u);
x_159 = l_Array_empty___closed__1;
x_160 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
x_161 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_161, 0, x_156);
lean_ctor_set(x_161, 1, x_157);
lean_ctor_set(x_161, 2, x_158);
lean_ctor_set(x_161, 3, x_159);
lean_ctor_set(x_161, 4, x_159);
lean_ctor_set(x_161, 5, x_160);
x_162 = lean_box(1);
lean_inc(x_3);
x_163 = l_Lean_Meta_SynthInstance_newSubgoal(x_149, x_155, x_147, x_162, x_3, x_161);
if (lean_obj_tag(x_163) == 0)
{
lean_object* x_164; lean_object* x_165; 
x_164 = lean_ctor_get(x_163, 1);
lean_inc(x_164);
lean_dec(x_163);
x_165 = l_Lean_Meta_SynthInstance_synth___main(x_2, x_3, x_164);
if (lean_obj_tag(x_165) == 0)
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_166 = lean_ctor_get(x_165, 1);
lean_inc(x_166);
x_167 = lean_ctor_get(x_166, 0);
lean_inc(x_167);
lean_dec(x_166);
x_168 = lean_ctor_get(x_167, 4);
lean_inc(x_168);
x_169 = lean_ctor_get(x_165, 0);
lean_inc(x_169);
if (lean_is_exclusive(x_165)) {
 lean_ctor_release(x_165, 0);
 lean_ctor_release(x_165, 1);
 x_170 = x_165;
} else {
 lean_dec_ref(x_165);
 x_170 = lean_box(0);
}
x_171 = lean_ctor_get(x_167, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_167, 1);
lean_inc(x_172);
x_173 = lean_ctor_get(x_167, 2);
lean_inc(x_173);
x_174 = lean_ctor_get(x_167, 3);
lean_inc(x_174);
x_175 = lean_ctor_get(x_167, 5);
lean_inc(x_175);
if (lean_is_exclusive(x_167)) {
 lean_ctor_release(x_167, 0);
 lean_ctor_release(x_167, 1);
 lean_ctor_release(x_167, 2);
 lean_ctor_release(x_167, 3);
 lean_ctor_release(x_167, 4);
 lean_ctor_release(x_167, 5);
 x_176 = x_167;
} else {
 lean_dec_ref(x_167);
 x_176 = lean_box(0);
}
x_177 = lean_ctor_get(x_168, 0);
lean_inc(x_177);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 x_178 = x_168;
} else {
 lean_dec_ref(x_168);
 x_178 = lean_box(0);
}
if (lean_is_scalar(x_178)) {
 x_179 = lean_alloc_ctor(0, 1, 1);
} else {
 x_179 = x_178;
}
lean_ctor_set(x_179, 0, x_177);
lean_ctor_set_uint8(x_179, sizeof(void*)*1, x_125);
if (lean_is_scalar(x_176)) {
 x_180 = lean_alloc_ctor(0, 6, 0);
} else {
 x_180 = x_176;
}
lean_ctor_set(x_180, 0, x_171);
lean_ctor_set(x_180, 1, x_172);
lean_ctor_set(x_180, 2, x_173);
lean_ctor_set(x_180, 3, x_174);
lean_ctor_set(x_180, 4, x_179);
lean_ctor_set(x_180, 5, x_175);
if (lean_is_scalar(x_170)) {
 x_181 = lean_alloc_ctor(0, 2, 0);
} else {
 x_181 = x_170;
}
lean_ctor_set(x_181, 0, x_169);
lean_ctor_set(x_181, 1, x_180);
return x_181;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_165, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_165, 1);
lean_inc(x_183);
lean_dec(x_165);
x_184 = lean_ctor_get(x_183, 0);
lean_inc(x_184);
lean_dec(x_183);
x_129 = x_182;
x_130 = x_184;
goto block_143;
}
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; 
lean_dec(x_3);
lean_dec(x_2);
x_185 = lean_ctor_get(x_163, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_163, 1);
lean_inc(x_186);
lean_dec(x_163);
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
lean_dec(x_186);
x_129 = x_185;
x_130 = x_187;
goto block_143;
}
block_143:
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_131 = lean_ctor_get(x_130, 4);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_130, 1);
lean_inc(x_133);
x_134 = lean_ctor_get(x_130, 2);
lean_inc(x_134);
x_135 = lean_ctor_get(x_130, 3);
lean_inc(x_135);
x_136 = lean_ctor_get(x_130, 5);
lean_inc(x_136);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 lean_ctor_release(x_130, 2);
 lean_ctor_release(x_130, 3);
 lean_ctor_release(x_130, 4);
 lean_ctor_release(x_130, 5);
 x_137 = x_130;
} else {
 lean_dec_ref(x_130);
 x_137 = lean_box(0);
}
x_138 = lean_ctor_get(x_131, 0);
lean_inc(x_138);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 x_139 = x_131;
} else {
 lean_dec_ref(x_131);
 x_139 = lean_box(0);
}
if (lean_is_scalar(x_139)) {
 x_140 = lean_alloc_ctor(0, 1, 1);
} else {
 x_140 = x_139;
}
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set_uint8(x_140, sizeof(void*)*1, x_125);
if (lean_is_scalar(x_137)) {
 x_141 = lean_alloc_ctor(0, 6, 0);
} else {
 x_141 = x_137;
}
lean_ctor_set(x_141, 0, x_132);
lean_ctor_set(x_141, 1, x_133);
lean_ctor_set(x_141, 2, x_134);
lean_ctor_set(x_141, 3, x_135);
lean_ctor_set(x_141, 4, x_140);
lean_ctor_set(x_141, 5, x_136);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_129);
lean_ctor_set(x_142, 1, x_141);
return x_142;
}
}
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; uint8_t x_194; lean_object* x_195; lean_object* x_196; uint8_t x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_188 = lean_ctor_get(x_6, 4);
x_189 = lean_ctor_get(x_6, 0);
x_190 = lean_ctor_get(x_6, 1);
x_191 = lean_ctor_get(x_6, 2);
x_192 = lean_ctor_get(x_6, 3);
x_193 = lean_ctor_get(x_6, 5);
lean_inc(x_193);
lean_inc(x_188);
lean_inc(x_192);
lean_inc(x_191);
lean_inc(x_190);
lean_inc(x_189);
lean_dec(x_6);
x_194 = lean_ctor_get_uint8(x_188, sizeof(void*)*1);
x_195 = lean_ctor_get(x_188, 0);
lean_inc(x_195);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 x_196 = x_188;
} else {
 lean_dec_ref(x_188);
 x_196 = lean_box(0);
}
x_197 = 0;
if (lean_is_scalar(x_196)) {
 x_198 = lean_alloc_ctor(0, 1, 1);
} else {
 x_198 = x_196;
}
lean_ctor_set(x_198, 0, x_195);
lean_ctor_set_uint8(x_198, sizeof(void*)*1, x_197);
x_199 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_199, 0, x_189);
lean_ctor_set(x_199, 1, x_190);
lean_ctor_set(x_199, 2, x_191);
lean_ctor_set(x_199, 3, x_192);
lean_ctor_set(x_199, 4, x_198);
lean_ctor_set(x_199, 5, x_193);
x_215 = lean_box(0);
lean_inc(x_3);
lean_inc(x_1);
x_216 = l_Lean_Meta_mkFreshExprMVar(x_1, x_215, x_197, x_3, x_199);
x_217 = lean_ctor_get(x_216, 1);
lean_inc(x_217);
x_218 = lean_ctor_get(x_216, 0);
lean_inc(x_218);
lean_dec(x_216);
x_219 = lean_ctor_get(x_217, 0);
lean_inc(x_219);
x_220 = lean_ctor_get(x_217, 1);
lean_inc(x_220);
x_221 = lean_ctor_get(x_217, 2);
lean_inc(x_221);
x_222 = lean_ctor_get(x_217, 3);
lean_inc(x_222);
x_223 = lean_ctor_get(x_217, 4);
lean_inc(x_223);
x_224 = lean_ctor_get(x_217, 5);
lean_inc(x_224);
if (lean_is_exclusive(x_217)) {
 lean_ctor_release(x_217, 0);
 lean_ctor_release(x_217, 1);
 lean_ctor_release(x_217, 2);
 lean_ctor_release(x_217, 3);
 lean_ctor_release(x_217, 4);
 lean_ctor_release(x_217, 5);
 x_225 = x_217;
} else {
 lean_dec_ref(x_217);
 x_225 = lean_box(0);
}
x_226 = l_Lean_Meta_SynthInstance_mkTableKey(x_220, x_1);
lean_inc(x_220);
if (lean_is_scalar(x_225)) {
 x_227 = lean_alloc_ctor(0, 6, 0);
} else {
 x_227 = x_225;
}
lean_ctor_set(x_227, 0, x_219);
lean_ctor_set(x_227, 1, x_220);
lean_ctor_set(x_227, 2, x_221);
lean_ctor_set(x_227, 3, x_222);
lean_ctor_set(x_227, 4, x_223);
lean_ctor_set(x_227, 5, x_224);
x_228 = l_Lean_Expr_mvarId_x21(x_218);
x_229 = lean_unsigned_to_nat(0u);
x_230 = l_Array_empty___closed__1;
x_231 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
x_232 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_232, 0, x_227);
lean_ctor_set(x_232, 1, x_228);
lean_ctor_set(x_232, 2, x_229);
lean_ctor_set(x_232, 3, x_230);
lean_ctor_set(x_232, 4, x_230);
lean_ctor_set(x_232, 5, x_231);
x_233 = lean_box(1);
lean_inc(x_3);
x_234 = l_Lean_Meta_SynthInstance_newSubgoal(x_220, x_226, x_218, x_233, x_3, x_232);
if (lean_obj_tag(x_234) == 0)
{
lean_object* x_235; lean_object* x_236; 
x_235 = lean_ctor_get(x_234, 1);
lean_inc(x_235);
lean_dec(x_234);
x_236 = l_Lean_Meta_SynthInstance_synth___main(x_2, x_3, x_235);
if (lean_obj_tag(x_236) == 0)
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_237 = lean_ctor_get(x_236, 1);
lean_inc(x_237);
x_238 = lean_ctor_get(x_237, 0);
lean_inc(x_238);
lean_dec(x_237);
x_239 = lean_ctor_get(x_238, 4);
lean_inc(x_239);
x_240 = lean_ctor_get(x_236, 0);
lean_inc(x_240);
if (lean_is_exclusive(x_236)) {
 lean_ctor_release(x_236, 0);
 lean_ctor_release(x_236, 1);
 x_241 = x_236;
} else {
 lean_dec_ref(x_236);
 x_241 = lean_box(0);
}
x_242 = lean_ctor_get(x_238, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_238, 1);
lean_inc(x_243);
x_244 = lean_ctor_get(x_238, 2);
lean_inc(x_244);
x_245 = lean_ctor_get(x_238, 3);
lean_inc(x_245);
x_246 = lean_ctor_get(x_238, 5);
lean_inc(x_246);
if (lean_is_exclusive(x_238)) {
 lean_ctor_release(x_238, 0);
 lean_ctor_release(x_238, 1);
 lean_ctor_release(x_238, 2);
 lean_ctor_release(x_238, 3);
 lean_ctor_release(x_238, 4);
 lean_ctor_release(x_238, 5);
 x_247 = x_238;
} else {
 lean_dec_ref(x_238);
 x_247 = lean_box(0);
}
x_248 = lean_ctor_get(x_239, 0);
lean_inc(x_248);
if (lean_is_exclusive(x_239)) {
 lean_ctor_release(x_239, 0);
 x_249 = x_239;
} else {
 lean_dec_ref(x_239);
 x_249 = lean_box(0);
}
if (lean_is_scalar(x_249)) {
 x_250 = lean_alloc_ctor(0, 1, 1);
} else {
 x_250 = x_249;
}
lean_ctor_set(x_250, 0, x_248);
lean_ctor_set_uint8(x_250, sizeof(void*)*1, x_194);
if (lean_is_scalar(x_247)) {
 x_251 = lean_alloc_ctor(0, 6, 0);
} else {
 x_251 = x_247;
}
lean_ctor_set(x_251, 0, x_242);
lean_ctor_set(x_251, 1, x_243);
lean_ctor_set(x_251, 2, x_244);
lean_ctor_set(x_251, 3, x_245);
lean_ctor_set(x_251, 4, x_250);
lean_ctor_set(x_251, 5, x_246);
if (lean_is_scalar(x_241)) {
 x_252 = lean_alloc_ctor(0, 2, 0);
} else {
 x_252 = x_241;
}
lean_ctor_set(x_252, 0, x_240);
lean_ctor_set(x_252, 1, x_251);
return x_252;
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_253 = lean_ctor_get(x_236, 0);
lean_inc(x_253);
x_254 = lean_ctor_get(x_236, 1);
lean_inc(x_254);
lean_dec(x_236);
x_255 = lean_ctor_get(x_254, 0);
lean_inc(x_255);
lean_dec(x_254);
x_200 = x_253;
x_201 = x_255;
goto block_214;
}
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; 
lean_dec(x_3);
lean_dec(x_2);
x_256 = lean_ctor_get(x_234, 0);
lean_inc(x_256);
x_257 = lean_ctor_get(x_234, 1);
lean_inc(x_257);
lean_dec(x_234);
x_258 = lean_ctor_get(x_257, 0);
lean_inc(x_258);
lean_dec(x_257);
x_200 = x_256;
x_201 = x_258;
goto block_214;
}
block_214:
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_202 = lean_ctor_get(x_201, 4);
lean_inc(x_202);
x_203 = lean_ctor_get(x_201, 0);
lean_inc(x_203);
x_204 = lean_ctor_get(x_201, 1);
lean_inc(x_204);
x_205 = lean_ctor_get(x_201, 2);
lean_inc(x_205);
x_206 = lean_ctor_get(x_201, 3);
lean_inc(x_206);
x_207 = lean_ctor_get(x_201, 5);
lean_inc(x_207);
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 lean_ctor_release(x_201, 1);
 lean_ctor_release(x_201, 2);
 lean_ctor_release(x_201, 3);
 lean_ctor_release(x_201, 4);
 lean_ctor_release(x_201, 5);
 x_208 = x_201;
} else {
 lean_dec_ref(x_201);
 x_208 = lean_box(0);
}
x_209 = lean_ctor_get(x_202, 0);
lean_inc(x_209);
if (lean_is_exclusive(x_202)) {
 lean_ctor_release(x_202, 0);
 x_210 = x_202;
} else {
 lean_dec_ref(x_202);
 x_210 = lean_box(0);
}
if (lean_is_scalar(x_210)) {
 x_211 = lean_alloc_ctor(0, 1, 1);
} else {
 x_211 = x_210;
}
lean_ctor_set(x_211, 0, x_209);
lean_ctor_set_uint8(x_211, sizeof(void*)*1, x_194);
if (lean_is_scalar(x_208)) {
 x_212 = lean_alloc_ctor(0, 6, 0);
} else {
 x_212 = x_208;
}
lean_ctor_set(x_212, 0, x_203);
lean_ctor_set(x_212, 1, x_204);
lean_ctor_set(x_212, 2, x_205);
lean_ctor_set(x_212, 3, x_206);
lean_ctor_set(x_212, 4, x_211);
lean_ctor_set(x_212, 5, x_207);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_200);
lean_ctor_set(x_213, 1, x_212);
return x_213;
}
}
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_349; uint8_t x_350; 
x_259 = l___private_Init_Lean_Trace_2__getResetTraces___at___private_Init_Lean_Meta_LevelDefEq_9__processPostponedStep___spec__6___rarg(x_6);
x_260 = lean_ctor_get(x_259, 0);
lean_inc(x_260);
x_261 = lean_ctor_get(x_259, 1);
lean_inc(x_261);
lean_dec(x_259);
x_349 = lean_ctor_get(x_261, 4);
lean_inc(x_349);
x_350 = lean_ctor_get_uint8(x_349, sizeof(void*)*1);
lean_dec(x_349);
if (x_350 == 0)
{
x_262 = x_261;
goto block_348;
}
else
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; uint8_t x_354; 
x_351 = l_Lean_Meta_SynthInstance_wakeUp___closed__1;
x_352 = l___private_Init_Lean_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_351, x_3, x_261);
x_353 = lean_ctor_get(x_352, 0);
lean_inc(x_353);
x_354 = lean_unbox(x_353);
lean_dec(x_353);
if (x_354 == 0)
{
lean_object* x_355; 
x_355 = lean_ctor_get(x_352, 1);
lean_inc(x_355);
lean_dec(x_352);
x_262 = x_355;
goto block_348;
}
else
{
lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; 
x_356 = lean_ctor_get(x_352, 1);
lean_inc(x_356);
lean_dec(x_352);
x_357 = lean_ctor_get(x_356, 0);
lean_inc(x_357);
x_358 = lean_ctor_get(x_356, 1);
lean_inc(x_358);
x_359 = lean_ctor_get(x_3, 1);
lean_inc(x_359);
lean_inc(x_1);
x_360 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_360, 0, x_1);
x_361 = l_Lean_Meta_SynthInstance_main___closed__3;
x_362 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_362, 0, x_361);
lean_ctor_set(x_362, 1, x_360);
x_363 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_363, 0, x_357);
lean_ctor_set(x_363, 1, x_358);
lean_ctor_set(x_363, 2, x_359);
lean_ctor_set(x_363, 3, x_362);
x_364 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_365 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_364, x_363, x_3, x_356);
x_366 = lean_ctor_get(x_365, 1);
lean_inc(x_366);
lean_dec(x_365);
x_262 = x_366;
goto block_348;
}
}
block_348:
{
lean_object* x_263; uint8_t x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; uint8_t x_268; 
x_263 = lean_box(0);
x_264 = 0;
lean_inc(x_3);
lean_inc(x_1);
x_265 = l_Lean_Meta_mkFreshExprMVar(x_1, x_263, x_264, x_3, x_262);
x_266 = lean_ctor_get(x_265, 1);
lean_inc(x_266);
x_267 = lean_ctor_get(x_265, 0);
lean_inc(x_267);
lean_dec(x_265);
x_268 = !lean_is_exclusive(x_266);
if (x_268 == 0)
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; 
x_269 = lean_ctor_get(x_266, 1);
x_270 = l_Lean_Meta_SynthInstance_mkTableKey(x_269, x_1);
lean_inc(x_269);
x_271 = l_Lean_Expr_mvarId_x21(x_267);
x_272 = lean_unsigned_to_nat(0u);
x_273 = l_Array_empty___closed__1;
x_274 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
x_275 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_275, 0, x_266);
lean_ctor_set(x_275, 1, x_271);
lean_ctor_set(x_275, 2, x_272);
lean_ctor_set(x_275, 3, x_273);
lean_ctor_set(x_275, 4, x_273);
lean_ctor_set(x_275, 5, x_274);
x_276 = lean_box(1);
lean_inc(x_3);
x_277 = l_Lean_Meta_SynthInstance_newSubgoal(x_269, x_270, x_267, x_276, x_3, x_275);
if (lean_obj_tag(x_277) == 0)
{
lean_object* x_278; lean_object* x_279; 
x_278 = lean_ctor_get(x_277, 1);
lean_inc(x_278);
lean_dec(x_277);
lean_inc(x_3);
x_279 = l_Lean_Meta_SynthInstance_synth___main(x_2, x_3, x_278);
if (lean_obj_tag(x_279) == 0)
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; uint8_t x_285; 
x_280 = lean_ctor_get(x_279, 0);
lean_inc(x_280);
x_281 = lean_ctor_get(x_279, 1);
lean_inc(x_281);
lean_dec(x_279);
x_282 = lean_ctor_get(x_281, 0);
lean_inc(x_282);
lean_dec(x_281);
x_283 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_284 = l___private_Init_Lean_Trace_1__addNode___at___private_Init_Lean_Meta_LevelDefEq_9__processPostponedStep___spec__7(x_260, x_283, x_3, x_282);
lean_dec(x_3);
x_285 = !lean_is_exclusive(x_284);
if (x_285 == 0)
{
lean_object* x_286; 
x_286 = lean_ctor_get(x_284, 0);
lean_dec(x_286);
lean_ctor_set(x_284, 0, x_280);
return x_284;
}
else
{
lean_object* x_287; lean_object* x_288; 
x_287 = lean_ctor_get(x_284, 1);
lean_inc(x_287);
lean_dec(x_284);
x_288 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_288, 0, x_280);
lean_ctor_set(x_288, 1, x_287);
return x_288;
}
}
else
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; uint8_t x_294; 
x_289 = lean_ctor_get(x_279, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_279, 1);
lean_inc(x_290);
lean_dec(x_279);
x_291 = lean_ctor_get(x_290, 0);
lean_inc(x_291);
lean_dec(x_290);
x_292 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_293 = l___private_Init_Lean_Trace_1__addNode___at___private_Init_Lean_Meta_LevelDefEq_9__processPostponedStep___spec__7(x_260, x_292, x_3, x_291);
lean_dec(x_3);
x_294 = !lean_is_exclusive(x_293);
if (x_294 == 0)
{
lean_object* x_295; 
x_295 = lean_ctor_get(x_293, 0);
lean_dec(x_295);
lean_ctor_set_tag(x_293, 1);
lean_ctor_set(x_293, 0, x_289);
return x_293;
}
else
{
lean_object* x_296; lean_object* x_297; 
x_296 = lean_ctor_get(x_293, 1);
lean_inc(x_296);
lean_dec(x_293);
x_297 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_297, 0, x_289);
lean_ctor_set(x_297, 1, x_296);
return x_297;
}
}
}
else
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; uint8_t x_303; 
lean_dec(x_2);
x_298 = lean_ctor_get(x_277, 0);
lean_inc(x_298);
x_299 = lean_ctor_get(x_277, 1);
lean_inc(x_299);
lean_dec(x_277);
x_300 = lean_ctor_get(x_299, 0);
lean_inc(x_300);
lean_dec(x_299);
x_301 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_302 = l___private_Init_Lean_Trace_1__addNode___at___private_Init_Lean_Meta_LevelDefEq_9__processPostponedStep___spec__7(x_260, x_301, x_3, x_300);
lean_dec(x_3);
x_303 = !lean_is_exclusive(x_302);
if (x_303 == 0)
{
lean_object* x_304; 
x_304 = lean_ctor_get(x_302, 0);
lean_dec(x_304);
lean_ctor_set_tag(x_302, 1);
lean_ctor_set(x_302, 0, x_298);
return x_302;
}
else
{
lean_object* x_305; lean_object* x_306; 
x_305 = lean_ctor_get(x_302, 1);
lean_inc(x_305);
lean_dec(x_302);
x_306 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_306, 0, x_298);
lean_ctor_set(x_306, 1, x_305);
return x_306;
}
}
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_307 = lean_ctor_get(x_266, 0);
x_308 = lean_ctor_get(x_266, 1);
x_309 = lean_ctor_get(x_266, 2);
x_310 = lean_ctor_get(x_266, 3);
x_311 = lean_ctor_get(x_266, 4);
x_312 = lean_ctor_get(x_266, 5);
lean_inc(x_312);
lean_inc(x_311);
lean_inc(x_310);
lean_inc(x_309);
lean_inc(x_308);
lean_inc(x_307);
lean_dec(x_266);
x_313 = l_Lean_Meta_SynthInstance_mkTableKey(x_308, x_1);
lean_inc(x_308);
x_314 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_314, 0, x_307);
lean_ctor_set(x_314, 1, x_308);
lean_ctor_set(x_314, 2, x_309);
lean_ctor_set(x_314, 3, x_310);
lean_ctor_set(x_314, 4, x_311);
lean_ctor_set(x_314, 5, x_312);
x_315 = l_Lean_Expr_mvarId_x21(x_267);
x_316 = lean_unsigned_to_nat(0u);
x_317 = l_Array_empty___closed__1;
x_318 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
x_319 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_319, 0, x_314);
lean_ctor_set(x_319, 1, x_315);
lean_ctor_set(x_319, 2, x_316);
lean_ctor_set(x_319, 3, x_317);
lean_ctor_set(x_319, 4, x_317);
lean_ctor_set(x_319, 5, x_318);
x_320 = lean_box(1);
lean_inc(x_3);
x_321 = l_Lean_Meta_SynthInstance_newSubgoal(x_308, x_313, x_267, x_320, x_3, x_319);
if (lean_obj_tag(x_321) == 0)
{
lean_object* x_322; lean_object* x_323; 
x_322 = lean_ctor_get(x_321, 1);
lean_inc(x_322);
lean_dec(x_321);
lean_inc(x_3);
x_323 = l_Lean_Meta_SynthInstance_synth___main(x_2, x_3, x_322);
if (lean_obj_tag(x_323) == 0)
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; 
x_324 = lean_ctor_get(x_323, 0);
lean_inc(x_324);
x_325 = lean_ctor_get(x_323, 1);
lean_inc(x_325);
lean_dec(x_323);
x_326 = lean_ctor_get(x_325, 0);
lean_inc(x_326);
lean_dec(x_325);
x_327 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_328 = l___private_Init_Lean_Trace_1__addNode___at___private_Init_Lean_Meta_LevelDefEq_9__processPostponedStep___spec__7(x_260, x_327, x_3, x_326);
lean_dec(x_3);
x_329 = lean_ctor_get(x_328, 1);
lean_inc(x_329);
if (lean_is_exclusive(x_328)) {
 lean_ctor_release(x_328, 0);
 lean_ctor_release(x_328, 1);
 x_330 = x_328;
} else {
 lean_dec_ref(x_328);
 x_330 = lean_box(0);
}
if (lean_is_scalar(x_330)) {
 x_331 = lean_alloc_ctor(0, 2, 0);
} else {
 x_331 = x_330;
}
lean_ctor_set(x_331, 0, x_324);
lean_ctor_set(x_331, 1, x_329);
return x_331;
}
else
{
lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_332 = lean_ctor_get(x_323, 0);
lean_inc(x_332);
x_333 = lean_ctor_get(x_323, 1);
lean_inc(x_333);
lean_dec(x_323);
x_334 = lean_ctor_get(x_333, 0);
lean_inc(x_334);
lean_dec(x_333);
x_335 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_336 = l___private_Init_Lean_Trace_1__addNode___at___private_Init_Lean_Meta_LevelDefEq_9__processPostponedStep___spec__7(x_260, x_335, x_3, x_334);
lean_dec(x_3);
x_337 = lean_ctor_get(x_336, 1);
lean_inc(x_337);
if (lean_is_exclusive(x_336)) {
 lean_ctor_release(x_336, 0);
 lean_ctor_release(x_336, 1);
 x_338 = x_336;
} else {
 lean_dec_ref(x_336);
 x_338 = lean_box(0);
}
if (lean_is_scalar(x_338)) {
 x_339 = lean_alloc_ctor(1, 2, 0);
} else {
 x_339 = x_338;
 lean_ctor_set_tag(x_339, 1);
}
lean_ctor_set(x_339, 0, x_332);
lean_ctor_set(x_339, 1, x_337);
return x_339;
}
}
else
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; 
lean_dec(x_2);
x_340 = lean_ctor_get(x_321, 0);
lean_inc(x_340);
x_341 = lean_ctor_get(x_321, 1);
lean_inc(x_341);
lean_dec(x_321);
x_342 = lean_ctor_get(x_341, 0);
lean_inc(x_342);
lean_dec(x_341);
x_343 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2;
x_344 = l___private_Init_Lean_Trace_1__addNode___at___private_Init_Lean_Meta_LevelDefEq_9__processPostponedStep___spec__7(x_260, x_343, x_3, x_342);
lean_dec(x_3);
x_345 = lean_ctor_get(x_344, 1);
lean_inc(x_345);
if (lean_is_exclusive(x_344)) {
 lean_ctor_release(x_344, 0);
 lean_ctor_release(x_344, 1);
 x_346 = x_344;
} else {
 lean_dec_ref(x_344);
 x_346 = lean_box(0);
}
if (lean_is_scalar(x_346)) {
 x_347 = lean_alloc_ctor(1, 2, 0);
} else {
 x_347 = x_346;
 lean_ctor_set_tag(x_347, 1);
}
lean_ctor_set(x_347, 0, x_340);
lean_ctor_set(x_347, 1, x_345);
return x_347;
}
}
}
}
}
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_4__preprocess___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
x_5 = l_Lean_Meta_whnf(x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Lean_Meta_mkForall(x_1, x_6, x_3, x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_3);
lean_dec(x_1);
x_9 = !lean_is_exclusive(x_5);
if (x_9 == 0)
{
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_5);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* _init_l___private_Init_Lean_Meta_SynthInstance_4__preprocess___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_SynthInstance_4__preprocess___lambda__1), 4, 0);
return x_1;
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_4__preprocess(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l___private_Init_Lean_Meta_SynthInstance_4__preprocess___closed__1;
x_5 = l_Lean_Meta_forallTelescopeReducing___rarg(x_1, x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_List_foldlM___main___at___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
x_9 = l_Lean_Meta_instantiateLevelMVars(x_7, x_3, x_4);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Level_hasMVar(x_10);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_1);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_1, 0);
lean_ctor_set(x_2, 1, x_14);
lean_ctor_set(x_2, 0, x_10);
lean_ctor_set(x_1, 0, x_2);
x_2 = x_8;
x_4 = x_11;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_1, 0);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_1);
lean_ctor_set(x_2, 1, x_16);
lean_ctor_set(x_2, 0, x_10);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_17);
x_1 = x_18;
x_2 = x_8;
x_4 = x_11;
goto _start;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = l_Lean_Meta_mkFreshLevelMVar___rarg(x_11);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = !lean_is_exclusive(x_1);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_1, 0);
x_25 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_ctor_set(x_2, 1, x_24);
lean_ctor_set(x_2, 0, x_21);
lean_ctor_set(x_1, 1, x_21);
lean_ctor_set(x_1, 0, x_10);
x_26 = lean_array_push(x_25, x_1);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_2);
lean_ctor_set(x_27, 1, x_26);
x_1 = x_27;
x_2 = x_8;
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_1, 0);
x_30 = lean_ctor_get(x_1, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_1);
lean_inc(x_21);
lean_ctor_set(x_2, 1, x_29);
lean_ctor_set(x_2, 0, x_21);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_10);
lean_ctor_set(x_31, 1, x_21);
x_32 = lean_array_push(x_30, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_2);
lean_ctor_set(x_33, 1, x_32);
x_1 = x_33;
x_2 = x_8;
x_4 = x_22;
goto _start;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_35 = lean_ctor_get(x_2, 0);
x_36 = lean_ctor_get(x_2, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_2);
x_37 = l_Lean_Meta_instantiateLevelMVars(x_35, x_3, x_4);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_Level_hasMVar(x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_41 = lean_ctor_get(x_1, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_1, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_43 = x_1;
} else {
 lean_dec_ref(x_1);
 x_43 = lean_box(0);
}
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_38);
lean_ctor_set(x_44, 1, x_41);
if (lean_is_scalar(x_43)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_43;
}
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_42);
x_1 = x_45;
x_2 = x_36;
x_4 = x_39;
goto _start;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_47 = l_Lean_Meta_mkFreshLevelMVar___rarg(x_39);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_ctor_get(x_1, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_1, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_52 = x_1;
} else {
 lean_dec_ref(x_1);
 x_52 = lean_box(0);
}
lean_inc(x_48);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_48);
lean_ctor_set(x_53, 1, x_50);
if (lean_is_scalar(x_52)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_52;
}
lean_ctor_set(x_54, 0, x_38);
lean_ctor_set(x_54, 1, x_48);
x_55 = lean_array_push(x_51, x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_53);
lean_ctor_set(x_56, 1, x_55);
x_1 = x_56;
x_2 = x_36;
x_4 = x_49;
goto _start;
}
}
}
}
}
lean_object* _init_l___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Array_empty___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = l___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels___closed__1;
x_5 = l_List_foldlM___main___at___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels___spec__1(x_4, x_1, x_2, x_3);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = l_List_reverse___rarg(x_9);
lean_ctor_set(x_7, 0, x_10);
return x_5;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_7);
x_13 = l_List_reverse___rarg(x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
lean_ctor_set(x_5, 0, x_14);
return x_5;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_15 = lean_ctor_get(x_5, 0);
x_16 = lean_ctor_get(x_5, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_5);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 lean_ctor_release(x_15, 1);
 x_19 = x_15;
} else {
 lean_dec_ref(x_15);
 x_19 = lean_box(0);
}
x_20 = l_List_reverse___rarg(x_17);
if (lean_is_scalar(x_19)) {
 x_21 = lean_alloc_ctor(0, 2, 0);
} else {
 x_21 = x_19;
}
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_16);
return x_22;
}
}
}
lean_object* l_List_foldlM___main___at___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_foldlM___main___at___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* _init_l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("type class resolution failed, insufficient number of arguments");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main___closed__1;
x_2 = lean_alloc_ctor(17, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_1);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_array_fget(x_1, x_2);
lean_inc(x_5);
x_12 = l_Lean_Meta_inferType(x_11, x_5, x_6);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
x_16 = lean_is_out_param(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_free_object(x_12);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_2, x_17);
lean_dec(x_2);
x_2 = x_18;
x_6 = x_15;
goto _start;
}
else
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_array_get_size(x_3);
x_21 = lean_nat_dec_lt(x_2, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main___closed__2;
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_22);
return x_12;
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_free_object(x_12);
x_23 = lean_array_fget(x_3, x_2);
x_24 = lean_box(0);
x_25 = 0;
lean_inc(x_5);
x_26 = l_Lean_Meta_mkFreshExprMVar(x_14, x_24, x_25, x_5, x_15);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_2, x_29);
lean_inc(x_27);
x_31 = lean_array_fset(x_3, x_2, x_27);
lean_dec(x_2);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_23);
lean_ctor_set(x_32, 1, x_27);
x_33 = lean_array_push(x_4, x_32);
x_2 = x_30;
x_3 = x_31;
x_4 = x_33;
x_6 = x_28;
goto _start;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = lean_ctor_get(x_12, 0);
x_36 = lean_ctor_get(x_12, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_12);
lean_inc(x_35);
x_37 = lean_is_out_param(x_35);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_35);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_2, x_38);
lean_dec(x_2);
x_2 = x_39;
x_6 = x_36;
goto _start;
}
else
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_array_get_size(x_3);
x_42 = lean_nat_dec_lt(x_2, x_41);
lean_dec(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_35);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_43 = l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main___closed__2;
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_36);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_45 = lean_array_fget(x_3, x_2);
x_46 = lean_box(0);
x_47 = 0;
lean_inc(x_5);
x_48 = l_Lean_Meta_mkFreshExprMVar(x_35, x_46, x_47, x_5, x_36);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_add(x_2, x_51);
lean_inc(x_49);
x_53 = lean_array_fset(x_3, x_2, x_49);
lean_dec(x_2);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_45);
lean_ctor_set(x_54, 1, x_49);
x_55 = lean_array_push(x_4, x_54);
x_2 = x_52;
x_3 = x_53;
x_4 = x_55;
x_6 = x_50;
goto _start;
}
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_57 = !lean_is_exclusive(x_12);
if (x_57 == 0)
{
return x_12;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_12, 0);
x_59 = lean_ctor_get(x_12, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_12);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = l___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels(x_1, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Array_empty___closed__1;
lean_inc(x_7);
x_16 = l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main(x_5, x_14, x_2, x_15, x_7, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_17, 0);
x_21 = lean_ctor_get(x_17, 1);
x_22 = l_Lean_mkConst(x_3, x_12);
x_23 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_20, x_20, x_14, x_22);
lean_dec(x_20);
x_24 = l_Lean_Meta_mkForall(x_4, x_23, x_7, x_18);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_13);
lean_ctor_set(x_27, 1, x_21);
lean_ctor_set(x_17, 1, x_27);
lean_ctor_set(x_17, 0, x_26);
lean_ctor_set(x_24, 0, x_17);
return x_24;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_24, 0);
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_24);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_13);
lean_ctor_set(x_30, 1, x_21);
lean_ctor_set(x_17, 1, x_30);
lean_ctor_set(x_17, 0, x_28);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_17);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_free_object(x_17);
lean_dec(x_21);
lean_dec(x_13);
x_32 = !lean_is_exclusive(x_24);
if (x_32 == 0)
{
return x_24;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_24, 0);
x_34 = lean_ctor_get(x_24, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_24);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_17, 0);
x_37 = lean_ctor_get(x_17, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_17);
x_38 = l_Lean_mkConst(x_3, x_12);
x_39 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_36, x_36, x_14, x_38);
lean_dec(x_36);
x_40 = l_Lean_Meta_mkForall(x_4, x_39, x_7, x_18);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_43 = x_40;
} else {
 lean_dec_ref(x_40);
 x_43 = lean_box(0);
}
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_13);
lean_ctor_set(x_44, 1, x_37);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_41);
lean_ctor_set(x_45, 1, x_44);
if (lean_is_scalar(x_43)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_43;
}
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_42);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_37);
lean_dec(x_13);
x_47 = lean_ctor_get(x_40, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_40, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_49 = x_40;
} else {
 lean_dec_ref(x_40);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_51 = !lean_is_exclusive(x_16);
if (x_51 == 0)
{
return x_16;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_16, 0);
x_53 = lean_ctor_get(x_16, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_16);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
lean_object* _init_l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_empty___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Expr_getAppFn___main(x_3);
if (lean_obj_tag(x_6) == 4)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_inc(x_7);
x_10 = lean_has_out_params(x_9, x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam___lambda__2___closed__1;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_5);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_1);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lean_Expr_getAppNumArgsAux___main(x_3, x_14);
x_16 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_15);
x_17 = lean_mk_array(x_15, x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_15, x_18);
lean_dec(x_15);
x_20 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_3, x_17, x_19);
lean_inc(x_4);
x_21 = l_Lean_Meta_inferType(x_6, x_4, x_5);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam___lambda__1___boxed), 8, 4);
lean_closure_set(x_24, 0, x_8);
lean_closure_set(x_24, 1, x_20);
lean_closure_set(x_24, 2, x_7);
lean_closure_set(x_24, 3, x_2);
x_25 = l_Lean_Meta_forallTelescopeReducing___rarg(x_22, x_24, x_4, x_23);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_21);
if (x_26 == 0)
{
return x_21;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_21, 0);
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_21);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam___lambda__2___closed__1;
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_5);
return x_32;
}
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam___lambda__2), 5, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Lean_Meta_forallTelescope___rarg(x_1, x_4, x_2, x_3);
return x_5;
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
return x_9;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_nat_dec_lt(x_4, x_3);
if (x_7 == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_8 = 0;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_array_fget(x_2, x_4);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Meta_isLevelDefEqAux___main(x_12, x_13, x_5, x_6);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 0);
lean_dec(x_18);
x_19 = 1;
x_20 = lean_box(x_19);
lean_ctor_set(x_14, 0, x_20);
return x_14;
}
else
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_dec(x_14);
x_22 = 1;
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_14, 1);
lean_inc(x_25);
lean_dec(x_14);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_4, x_26);
lean_dec(x_4);
x_4 = x_27;
x_6 = x_25;
goto _start;
}
}
else
{
uint8_t x_29; 
lean_dec(x_4);
x_29 = !lean_is_exclusive(x_14);
if (x_29 == 0)
{
return x_14;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_14, 0);
x_31 = lean_ctor_get(x_14, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_14);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_nat_dec_lt(x_4, x_3);
if (x_7 == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_4);
x_8 = 0;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_array_fget(x_2, x_4);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_5);
x_14 = l_Lean_Meta_isExprDefEqAux(x_12, x_13, x_5, x_6);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_5);
lean_dec(x_4);
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 0);
lean_dec(x_18);
x_19 = 1;
x_20 = lean_box(x_19);
lean_ctor_set(x_14, 0, x_20);
return x_14;
}
else
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_dec(x_14);
x_22 = 1;
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_14, 1);
lean_inc(x_25);
lean_dec(x_14);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_4, x_26);
lean_dec(x_4);
x_4 = x_27;
x_6 = x_25;
goto _start;
}
}
else
{
uint8_t x_29; 
lean_dec(x_5);
lean_dec(x_4);
x_29 = !lean_is_exclusive(x_14);
if (x_29 == 0)
{
return x_14;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_14, 0);
x_31 = lean_ctor_get(x_14, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_14);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
}
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (x_1 == 0)
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_4 = 1;
x_5 = lean_box(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_7 = 0;
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
}
}
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___lambda__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (x_2 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__2(x_1, x_7, x_8, x_9, x_3, x_4);
lean_dec(x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
x_15 = 1;
x_16 = lean_box(x_15);
lean_ctor_set(x_10, 0, x_16);
return x_10;
}
else
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_dec(x_10);
x_18 = 1;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_10);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_10, 0);
lean_dec(x_22);
x_23 = 0;
x_24 = lean_box(x_23);
lean_ctor_set(x_10, 0, x_24);
return x_10;
}
else
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_10, 1);
lean_inc(x_25);
lean_dec(x_10);
x_26 = 0;
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_10);
if (x_29 == 0)
{
return x_10;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_10, 0);
x_31 = lean_ctor_get(x_10, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_10);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
}
lean_object* _init_l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___lambda__1___boxed), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__1___boxed), 6, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_5);
lean_closure_set(x_7, 3, x_6);
x_8 = l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___closed__1;
x_9 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg), 4, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___lambda__2___boxed), 4, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_24; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
x_14 = lean_ctor_get(x_3, 5);
x_15 = l_PersistentArray_empty___closed__3;
lean_inc(x_13);
lean_inc(x_12);
lean_ctor_set(x_3, 5, x_15);
lean_inc(x_2);
x_24 = l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg(x_9, x_10, x_2, x_3);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_unbox(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_12, x_13, x_14, x_2, x_27);
lean_dec(x_2);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_28, 0);
lean_dec(x_30);
lean_ctor_set(x_28, 0, x_25);
return x_28;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_25);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_25);
x_33 = lean_ctor_get(x_24, 1);
lean_inc(x_33);
lean_dec(x_24);
x_34 = l___private_Init_Lean_Meta_LevelDefEq_11__processPostponed(x_2, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_unbox(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_12, x_13, x_14, x_2, x_37);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_38, 0);
lean_dec(x_40);
lean_ctor_set(x_38, 0, x_35);
return x_38;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_dec(x_38);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_35);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
uint8_t x_43; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_2);
x_43 = !lean_is_exclusive(x_34);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_34, 0);
lean_dec(x_44);
return x_34;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_34, 1);
lean_inc(x_45);
lean_dec(x_34);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_35);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_34, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_34, 1);
lean_inc(x_48);
lean_dec(x_34);
x_16 = x_47;
x_17 = x_48;
goto block_23;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_24, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_24, 1);
lean_inc(x_50);
lean_dec(x_24);
x_16 = x_49;
x_17 = x_50;
goto block_23;
}
block_23:
{
lean_object* x_18; uint8_t x_19; 
x_18 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_12, x_13, x_14, x_2, x_17);
lean_dec(x_2);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set_tag(x_18, 1);
lean_ctor_set(x_18, 0, x_16);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_66; 
x_51 = lean_ctor_get(x_3, 0);
x_52 = lean_ctor_get(x_3, 1);
x_53 = lean_ctor_get(x_3, 2);
x_54 = lean_ctor_get(x_3, 3);
x_55 = lean_ctor_get(x_3, 4);
x_56 = lean_ctor_get(x_3, 5);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_3);
x_57 = l_PersistentArray_empty___closed__3;
lean_inc(x_52);
lean_inc(x_51);
x_58 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_58, 0, x_51);
lean_ctor_set(x_58, 1, x_52);
lean_ctor_set(x_58, 2, x_53);
lean_ctor_set(x_58, 3, x_54);
lean_ctor_set(x_58, 4, x_55);
lean_ctor_set(x_58, 5, x_57);
lean_inc(x_2);
x_66 = l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg(x_9, x_10, x_2, x_58);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; uint8_t x_68; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_unbox(x_67);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_69 = lean_ctor_get(x_66, 1);
lean_inc(x_69);
lean_dec(x_66);
x_70 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_51, x_52, x_56, x_2, x_69);
lean_dec(x_2);
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_72 = x_70;
} else {
 lean_dec_ref(x_70);
 x_72 = lean_box(0);
}
if (lean_is_scalar(x_72)) {
 x_73 = lean_alloc_ctor(0, 2, 0);
} else {
 x_73 = x_72;
}
lean_ctor_set(x_73, 0, x_67);
lean_ctor_set(x_73, 1, x_71);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; 
lean_dec(x_67);
x_74 = lean_ctor_get(x_66, 1);
lean_inc(x_74);
lean_dec(x_66);
x_75 = l___private_Init_Lean_Meta_LevelDefEq_11__processPostponed(x_2, x_74);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; uint8_t x_77; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_unbox(x_76);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_78 = lean_ctor_get(x_75, 1);
lean_inc(x_78);
lean_dec(x_75);
x_79 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_51, x_52, x_56, x_2, x_78);
lean_dec(x_2);
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_81 = x_79;
} else {
 lean_dec_ref(x_79);
 x_81 = lean_box(0);
}
if (lean_is_scalar(x_81)) {
 x_82 = lean_alloc_ctor(0, 2, 0);
} else {
 x_82 = x_81;
}
lean_ctor_set(x_82, 0, x_76);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_56);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_2);
x_83 = lean_ctor_get(x_75, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_84 = x_75;
} else {
 lean_dec_ref(x_75);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_76);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
else
{
lean_object* x_86; lean_object* x_87; 
x_86 = lean_ctor_get(x_75, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_75, 1);
lean_inc(x_87);
lean_dec(x_75);
x_59 = x_86;
x_60 = x_87;
goto block_65;
}
}
}
else
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_ctor_get(x_66, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_66, 1);
lean_inc(x_89);
lean_dec(x_66);
x_59 = x_88;
x_60 = x_89;
goto block_65;
}
block_65:
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_51, x_52, x_56, x_2, x_60);
lean_dec(x_2);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_63 = x_61;
} else {
 lean_dec_ref(x_61);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(1, 2, 0);
} else {
 x_64 = x_63;
 lean_ctor_set_tag(x_64, 1);
}
lean_ctor_set(x_64, 0, x_59);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___lambda__1(x_4, x_2, x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___lambda__2(x_1, x_5, x_3, x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_Meta_synthInstance___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_expr_eqv(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_Meta_synthInstance___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_expr_eqv(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_18 = l_PersistentHashMap_findAux___main___at_Lean_Meta_synthInstance___spec__2(x_16, x_17, x_3);
lean_dec(x_16);
return x_18;
}
default: 
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_PersistentHashMap_findAtAux___main___at_Lean_Meta_synthInstance___spec__3(x_20, x_21, lean_box(0), x_22, x_3);
return x_23;
}
}
}
lean_object* l_PersistentHashMap_find___at_Lean_Meta_synthInstance___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Lean_Expr_hash(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_Meta_synthInstance___spec__2(x_3, x_4, x_2);
return x_5;
}
}
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_Meta_synthInstance___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_expr_eqv(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_synthInstance___spec__7(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = l_Lean_Expr_hash(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstance___spec__5(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstance___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_expr_eqv(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_expr_eqv(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = x_2 >> x_9;
x_37 = x_3 + x_8;
x_38 = l_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstance___spec__5(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = x_2 >> x_9;
x_42 = x_3 + x_8;
x_43 = l_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstance___spec__5(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_52 = x_2 & x_51;
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(2);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_expr_eqv(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = x_2 >> x_50;
x_74 = x_3 + x_49;
x_75 = l_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstance___spec__5(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; size_t x_84; uint8_t x_85; 
x_82 = lean_unsigned_to_nat(0u);
x_83 = l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_Meta_synthInstance___spec__6(x_1, x_82, x_4, x_5);
x_84 = 7;
x_85 = x_84 <= x_3;
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = l_PersistentHashMap_getCollisionNodeSize___rarg(x_83);
x_87 = lean_unsigned_to_nat(4u);
x_88 = lean_nat_dec_lt(x_86, x_87);
lean_dec(x_86);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
lean_dec(x_83);
x_91 = l_PersistentHashMap_insertAux___main___rarg___closed__3;
x_92 = l_Array_iterateMAux___main___at_Lean_Meta_synthInstance___spec__7(x_3, x_89, x_90, x_89, x_82, x_91);
lean_dec(x_90);
lean_dec(x_89);
return x_92;
}
else
{
return x_83;
}
}
else
{
return x_83;
}
}
}
}
lean_object* l_PersistentHashMap_insert___at_Lean_Meta_synthInstance___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Expr_hash(x_2);
x_8 = 1;
x_9 = l_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstance___spec__5(x_5, x_7, x_8, x_2, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = l_Lean_Expr_hash(x_2);
x_15 = 1;
x_16 = l_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstance___spec__5(x_12, x_14, x_15, x_2, x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_13, x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
lean_object* l_Lean_Meta_synthInstance(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = 2;
lean_ctor_set_uint8(x_6, sizeof(void*)*1 + 5, x_8);
x_9 = l_Lean_Meta_instantiateMVars(x_1, x_3, x_4);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_12 = x_9;
} else {
 lean_dec_ref(x_9);
 x_12 = lean_box(0);
}
x_13 = l___private_Init_Lean_Meta_SynthInstance_4__preprocess___closed__1;
lean_inc(x_3);
x_14 = l_Lean_Meta_forallTelescopeReducing___rarg(x_10, x_13, x_3, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_17 = x_14;
} else {
 lean_dec_ref(x_14);
 x_17 = lean_box(0);
}
x_18 = lean_ctor_get(x_15, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_15, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_15, 3);
lean_inc(x_21);
x_22 = lean_ctor_get(x_15, 4);
lean_inc(x_22);
x_23 = lean_ctor_get(x_15, 5);
lean_inc(x_23);
x_24 = lean_ctor_get(x_20, 2);
lean_inc(x_24);
x_25 = l_PersistentHashMap_find___at_Lean_Meta_synthInstance___spec__1(x_24, x_16);
lean_dec(x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_67; lean_object* x_68; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 lean_ctor_release(x_15, 1);
 lean_ctor_release(x_15, 2);
 lean_ctor_release(x_15, 3);
 lean_ctor_release(x_15, 4);
 lean_ctor_release(x_15, 5);
 x_26 = x_15;
} else {
 lean_dec_ref(x_15);
 x_26 = lean_box(0);
}
lean_inc(x_19);
x_80 = l_Lean_MetavarContext_incDepth(x_19);
x_81 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_81, 0, x_18);
lean_ctor_set(x_81, 1, x_80);
lean_ctor_set(x_81, 2, x_20);
lean_ctor_set(x_81, 3, x_21);
lean_ctor_set(x_81, 4, x_22);
lean_ctor_set(x_81, 5, x_23);
lean_inc(x_3);
lean_inc(x_16);
x_82 = l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam(x_16, x_3, x_81);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = lean_ctor_get(x_83, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_83, 1);
lean_inc(x_86);
lean_dec(x_83);
lean_inc(x_3);
x_87 = l_Lean_Meta_SynthInstance_main(x_85, x_2, x_3, x_84);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; 
lean_dec(x_86);
lean_dec(x_12);
lean_dec(x_3);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_27 = x_88;
x_28 = x_89;
goto block_66;
}
else
{
lean_object* x_90; uint8_t x_91; 
x_90 = lean_ctor_get(x_87, 1);
lean_inc(x_90);
lean_dec(x_87);
x_91 = !lean_is_exclusive(x_88);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_ctor_get(x_88, 0);
lean_inc(x_3);
x_93 = l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3(x_86, x_3, x_90);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_94; uint8_t x_95; 
lean_dec(x_12);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_unbox(x_94);
lean_dec(x_94);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; 
lean_free_object(x_88);
lean_dec(x_92);
lean_dec(x_3);
x_96 = lean_ctor_get(x_93, 1);
lean_inc(x_96);
lean_dec(x_93);
x_97 = lean_box(0);
x_27 = x_97;
x_28 = x_96;
goto block_66;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_98 = lean_ctor_get(x_93, 1);
lean_inc(x_98);
lean_dec(x_93);
x_99 = l_Lean_Meta_instantiateMVars(x_92, x_3, x_98);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
lean_dec(x_99);
x_102 = l_Lean_Meta_hasAssignableMVar(x_100, x_3, x_101);
lean_dec(x_3);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_unbox(x_103);
lean_dec(x_103);
if (x_104 == 0)
{
lean_object* x_105; 
x_105 = lean_ctor_get(x_102, 1);
lean_inc(x_105);
lean_dec(x_102);
lean_ctor_set(x_88, 0, x_100);
x_27 = x_88;
x_28 = x_105;
goto block_66;
}
else
{
lean_object* x_106; lean_object* x_107; 
lean_dec(x_100);
lean_free_object(x_88);
x_106 = lean_ctor_get(x_102, 1);
lean_inc(x_106);
lean_dec(x_102);
x_107 = lean_box(0);
x_27 = x_107;
x_28 = x_106;
goto block_66;
}
}
}
else
{
lean_object* x_108; lean_object* x_109; 
lean_free_object(x_88);
lean_dec(x_92);
lean_dec(x_26);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_3);
x_108 = lean_ctor_get(x_93, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_93, 1);
lean_inc(x_109);
lean_dec(x_93);
x_67 = x_108;
x_68 = x_109;
goto block_79;
}
}
else
{
lean_object* x_110; lean_object* x_111; 
x_110 = lean_ctor_get(x_88, 0);
lean_inc(x_110);
lean_dec(x_88);
lean_inc(x_3);
x_111 = l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3(x_86, x_3, x_90);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; uint8_t x_113; 
lean_dec(x_12);
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
x_113 = lean_unbox(x_112);
lean_dec(x_112);
if (x_113 == 0)
{
lean_object* x_114; lean_object* x_115; 
lean_dec(x_110);
lean_dec(x_3);
x_114 = lean_ctor_get(x_111, 1);
lean_inc(x_114);
lean_dec(x_111);
x_115 = lean_box(0);
x_27 = x_115;
x_28 = x_114;
goto block_66;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; 
x_116 = lean_ctor_get(x_111, 1);
lean_inc(x_116);
lean_dec(x_111);
x_117 = l_Lean_Meta_instantiateMVars(x_110, x_3, x_116);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
lean_dec(x_117);
x_120 = l_Lean_Meta_hasAssignableMVar(x_118, x_3, x_119);
lean_dec(x_3);
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_unbox(x_121);
lean_dec(x_121);
if (x_122 == 0)
{
lean_object* x_123; lean_object* x_124; 
x_123 = lean_ctor_get(x_120, 1);
lean_inc(x_123);
lean_dec(x_120);
x_124 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_124, 0, x_118);
x_27 = x_124;
x_28 = x_123;
goto block_66;
}
else
{
lean_object* x_125; lean_object* x_126; 
lean_dec(x_118);
x_125 = lean_ctor_get(x_120, 1);
lean_inc(x_125);
lean_dec(x_120);
x_126 = lean_box(0);
x_27 = x_126;
x_28 = x_125;
goto block_66;
}
}
}
else
{
lean_object* x_127; lean_object* x_128; 
lean_dec(x_110);
lean_dec(x_26);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_3);
x_127 = lean_ctor_get(x_111, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_111, 1);
lean_inc(x_128);
lean_dec(x_111);
x_67 = x_127;
x_68 = x_128;
goto block_79;
}
}
}
}
else
{
lean_object* x_129; lean_object* x_130; 
lean_dec(x_86);
lean_dec(x_26);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_3);
x_129 = lean_ctor_get(x_87, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_87, 1);
lean_inc(x_130);
lean_dec(x_87);
x_67 = x_129;
x_68 = x_130;
goto block_79;
}
}
else
{
lean_object* x_131; lean_object* x_132; 
lean_dec(x_26);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_3);
lean_dec(x_2);
x_131 = lean_ctor_get(x_82, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_82, 1);
lean_inc(x_132);
lean_dec(x_82);
x_67 = x_131;
x_68 = x_132;
goto block_79;
}
block_66:
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_ctor_get(x_28, 2);
x_32 = lean_ctor_get(x_28, 3);
x_33 = lean_ctor_get(x_28, 4);
x_34 = lean_ctor_get(x_28, 5);
x_35 = lean_ctor_get(x_28, 1);
lean_dec(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_19);
lean_inc(x_30);
lean_ctor_set(x_28, 1, x_19);
x_36 = l_Lean_Expr_hasMVar(x_16);
if (x_36 == 0)
{
lean_object* x_37; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_26);
lean_dec(x_19);
lean_dec(x_16);
if (lean_is_scalar(x_17)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_17;
}
lean_ctor_set(x_37, 0, x_27);
lean_ctor_set(x_37, 1, x_28);
return x_37;
}
else
{
uint8_t x_38; 
lean_dec(x_28);
x_38 = !lean_is_exclusive(x_31);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_31, 2);
lean_inc(x_27);
x_40 = l_PersistentHashMap_insert___at_Lean_Meta_synthInstance___spec__4(x_39, x_16, x_27);
lean_ctor_set(x_31, 2, x_40);
if (lean_is_scalar(x_26)) {
 x_41 = lean_alloc_ctor(0, 6, 0);
} else {
 x_41 = x_26;
}
lean_ctor_set(x_41, 0, x_30);
lean_ctor_set(x_41, 1, x_19);
lean_ctor_set(x_41, 2, x_31);
lean_ctor_set(x_41, 3, x_32);
lean_ctor_set(x_41, 4, x_33);
lean_ctor_set(x_41, 5, x_34);
if (lean_is_scalar(x_17)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_17;
}
lean_ctor_set(x_42, 0, x_27);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_43 = lean_ctor_get(x_31, 0);
x_44 = lean_ctor_get(x_31, 1);
x_45 = lean_ctor_get(x_31, 2);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_31);
lean_inc(x_27);
x_46 = l_PersistentHashMap_insert___at_Lean_Meta_synthInstance___spec__4(x_45, x_16, x_27);
x_47 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_47, 0, x_43);
lean_ctor_set(x_47, 1, x_44);
lean_ctor_set(x_47, 2, x_46);
if (lean_is_scalar(x_26)) {
 x_48 = lean_alloc_ctor(0, 6, 0);
} else {
 x_48 = x_26;
}
lean_ctor_set(x_48, 0, x_30);
lean_ctor_set(x_48, 1, x_19);
lean_ctor_set(x_48, 2, x_47);
lean_ctor_set(x_48, 3, x_32);
lean_ctor_set(x_48, 4, x_33);
lean_ctor_set(x_48, 5, x_34);
if (lean_is_scalar(x_17)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_17;
}
lean_ctor_set(x_49, 0, x_27);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_50 = lean_ctor_get(x_28, 0);
x_51 = lean_ctor_get(x_28, 2);
x_52 = lean_ctor_get(x_28, 3);
x_53 = lean_ctor_get(x_28, 4);
x_54 = lean_ctor_get(x_28, 5);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_28);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_19);
lean_inc(x_50);
x_55 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_55, 0, x_50);
lean_ctor_set(x_55, 1, x_19);
lean_ctor_set(x_55, 2, x_51);
lean_ctor_set(x_55, 3, x_52);
lean_ctor_set(x_55, 4, x_53);
lean_ctor_set(x_55, 5, x_54);
x_56 = l_Lean_Expr_hasMVar(x_16);
if (x_56 == 0)
{
lean_object* x_57; 
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_26);
lean_dec(x_19);
lean_dec(x_16);
if (lean_is_scalar(x_17)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_17;
}
lean_ctor_set(x_57, 0, x_27);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_55);
x_58 = lean_ctor_get(x_51, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_51, 1);
lean_inc(x_59);
x_60 = lean_ctor_get(x_51, 2);
lean_inc(x_60);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 lean_ctor_release(x_51, 2);
 x_61 = x_51;
} else {
 lean_dec_ref(x_51);
 x_61 = lean_box(0);
}
lean_inc(x_27);
x_62 = l_PersistentHashMap_insert___at_Lean_Meta_synthInstance___spec__4(x_60, x_16, x_27);
if (lean_is_scalar(x_61)) {
 x_63 = lean_alloc_ctor(0, 3, 0);
} else {
 x_63 = x_61;
}
lean_ctor_set(x_63, 0, x_58);
lean_ctor_set(x_63, 1, x_59);
lean_ctor_set(x_63, 2, x_62);
if (lean_is_scalar(x_26)) {
 x_64 = lean_alloc_ctor(0, 6, 0);
} else {
 x_64 = x_26;
}
lean_ctor_set(x_64, 0, x_50);
lean_ctor_set(x_64, 1, x_19);
lean_ctor_set(x_64, 2, x_63);
lean_ctor_set(x_64, 3, x_52);
lean_ctor_set(x_64, 4, x_53);
lean_ctor_set(x_64, 5, x_54);
if (lean_is_scalar(x_17)) {
 x_65 = lean_alloc_ctor(0, 2, 0);
} else {
 x_65 = x_17;
}
lean_ctor_set(x_65, 0, x_27);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
block_79:
{
uint8_t x_69; 
x_69 = !lean_is_exclusive(x_68);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; 
x_70 = lean_ctor_get(x_68, 1);
lean_dec(x_70);
lean_ctor_set(x_68, 1, x_19);
if (lean_is_scalar(x_12)) {
 x_71 = lean_alloc_ctor(1, 2, 0);
} else {
 x_71 = x_12;
 lean_ctor_set_tag(x_71, 1);
}
lean_ctor_set(x_71, 0, x_67);
lean_ctor_set(x_71, 1, x_68);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_72 = lean_ctor_get(x_68, 0);
x_73 = lean_ctor_get(x_68, 2);
x_74 = lean_ctor_get(x_68, 3);
x_75 = lean_ctor_get(x_68, 4);
x_76 = lean_ctor_get(x_68, 5);
lean_inc(x_76);
lean_inc(x_75);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_68);
x_77 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_77, 0, x_72);
lean_ctor_set(x_77, 1, x_19);
lean_ctor_set(x_77, 2, x_73);
lean_ctor_set(x_77, 3, x_74);
lean_ctor_set(x_77, 4, x_75);
lean_ctor_set(x_77, 5, x_76);
if (lean_is_scalar(x_12)) {
 x_78 = lean_alloc_ctor(1, 2, 0);
} else {
 x_78 = x_12;
 lean_ctor_set_tag(x_78, 1);
}
lean_ctor_set(x_78, 0, x_67);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
lean_object* x_133; lean_object* x_134; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_3);
lean_dec(x_2);
x_133 = lean_ctor_get(x_25, 0);
lean_inc(x_133);
lean_dec(x_25);
if (lean_is_scalar(x_17)) {
 x_134 = lean_alloc_ctor(0, 2, 0);
} else {
 x_134 = x_17;
}
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_15);
return x_134;
}
}
else
{
uint8_t x_135; 
lean_dec(x_12);
lean_dec(x_3);
lean_dec(x_2);
x_135 = !lean_is_exclusive(x_14);
if (x_135 == 0)
{
return x_14;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_136 = lean_ctor_get(x_14, 0);
x_137 = lean_ctor_get(x_14, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_14);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_137);
return x_138;
}
}
}
else
{
lean_object* x_139; uint8_t x_140; uint8_t x_141; uint8_t x_142; uint8_t x_143; uint8_t x_144; uint8_t x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_139 = lean_ctor_get(x_6, 0);
x_140 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_141 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
x_142 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 2);
x_143 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 3);
x_144 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 4);
lean_inc(x_139);
lean_dec(x_6);
x_145 = 2;
x_146 = lean_alloc_ctor(0, 1, 6);
lean_ctor_set(x_146, 0, x_139);
lean_ctor_set_uint8(x_146, sizeof(void*)*1, x_140);
lean_ctor_set_uint8(x_146, sizeof(void*)*1 + 1, x_141);
lean_ctor_set_uint8(x_146, sizeof(void*)*1 + 2, x_142);
lean_ctor_set_uint8(x_146, sizeof(void*)*1 + 3, x_143);
lean_ctor_set_uint8(x_146, sizeof(void*)*1 + 4, x_144);
lean_ctor_set_uint8(x_146, sizeof(void*)*1 + 5, x_145);
lean_ctor_set(x_3, 0, x_146);
x_147 = l_Lean_Meta_instantiateMVars(x_1, x_3, x_4);
x_148 = lean_ctor_get(x_147, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_147, 1);
lean_inc(x_149);
if (lean_is_exclusive(x_147)) {
 lean_ctor_release(x_147, 0);
 lean_ctor_release(x_147, 1);
 x_150 = x_147;
} else {
 lean_dec_ref(x_147);
 x_150 = lean_box(0);
}
x_151 = l___private_Init_Lean_Meta_SynthInstance_4__preprocess___closed__1;
lean_inc(x_3);
x_152 = l_Lean_Meta_forallTelescopeReducing___rarg(x_148, x_151, x_3, x_149);
if (lean_obj_tag(x_152) == 0)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_153 = lean_ctor_get(x_152, 1);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 0);
lean_inc(x_154);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_155 = x_152;
} else {
 lean_dec_ref(x_152);
 x_155 = lean_box(0);
}
x_156 = lean_ctor_get(x_153, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_153, 1);
lean_inc(x_157);
x_158 = lean_ctor_get(x_153, 2);
lean_inc(x_158);
x_159 = lean_ctor_get(x_153, 3);
lean_inc(x_159);
x_160 = lean_ctor_get(x_153, 4);
lean_inc(x_160);
x_161 = lean_ctor_get(x_153, 5);
lean_inc(x_161);
x_162 = lean_ctor_get(x_158, 2);
lean_inc(x_162);
x_163 = l_PersistentHashMap_find___at_Lean_Meta_synthInstance___spec__1(x_162, x_154);
lean_dec(x_162);
if (lean_obj_tag(x_163) == 0)
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_185; lean_object* x_186; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 lean_ctor_release(x_153, 1);
 lean_ctor_release(x_153, 2);
 lean_ctor_release(x_153, 3);
 lean_ctor_release(x_153, 4);
 lean_ctor_release(x_153, 5);
 x_164 = x_153;
} else {
 lean_dec_ref(x_153);
 x_164 = lean_box(0);
}
lean_inc(x_157);
x_196 = l_Lean_MetavarContext_incDepth(x_157);
x_197 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_197, 0, x_156);
lean_ctor_set(x_197, 1, x_196);
lean_ctor_set(x_197, 2, x_158);
lean_ctor_set(x_197, 3, x_159);
lean_ctor_set(x_197, 4, x_160);
lean_ctor_set(x_197, 5, x_161);
lean_inc(x_3);
lean_inc(x_154);
x_198 = l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam(x_154, x_3, x_197);
if (lean_obj_tag(x_198) == 0)
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_199 = lean_ctor_get(x_198, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_198, 1);
lean_inc(x_200);
lean_dec(x_198);
x_201 = lean_ctor_get(x_199, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_199, 1);
lean_inc(x_202);
lean_dec(x_199);
lean_inc(x_3);
x_203 = l_Lean_Meta_SynthInstance_main(x_201, x_2, x_3, x_200);
if (lean_obj_tag(x_203) == 0)
{
lean_object* x_204; 
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
if (lean_obj_tag(x_204) == 0)
{
lean_object* x_205; 
lean_dec(x_202);
lean_dec(x_150);
lean_dec(x_3);
x_205 = lean_ctor_get(x_203, 1);
lean_inc(x_205);
lean_dec(x_203);
x_165 = x_204;
x_166 = x_205;
goto block_184;
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_206 = lean_ctor_get(x_203, 1);
lean_inc(x_206);
lean_dec(x_203);
x_207 = lean_ctor_get(x_204, 0);
lean_inc(x_207);
if (lean_is_exclusive(x_204)) {
 lean_ctor_release(x_204, 0);
 x_208 = x_204;
} else {
 lean_dec_ref(x_204);
 x_208 = lean_box(0);
}
lean_inc(x_3);
x_209 = l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3(x_202, x_3, x_206);
if (lean_obj_tag(x_209) == 0)
{
lean_object* x_210; uint8_t x_211; 
lean_dec(x_150);
x_210 = lean_ctor_get(x_209, 0);
lean_inc(x_210);
x_211 = lean_unbox(x_210);
lean_dec(x_210);
if (x_211 == 0)
{
lean_object* x_212; lean_object* x_213; 
lean_dec(x_208);
lean_dec(x_207);
lean_dec(x_3);
x_212 = lean_ctor_get(x_209, 1);
lean_inc(x_212);
lean_dec(x_209);
x_213 = lean_box(0);
x_165 = x_213;
x_166 = x_212;
goto block_184;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; uint8_t x_220; 
x_214 = lean_ctor_get(x_209, 1);
lean_inc(x_214);
lean_dec(x_209);
x_215 = l_Lean_Meta_instantiateMVars(x_207, x_3, x_214);
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_215, 1);
lean_inc(x_217);
lean_dec(x_215);
x_218 = l_Lean_Meta_hasAssignableMVar(x_216, x_3, x_217);
lean_dec(x_3);
x_219 = lean_ctor_get(x_218, 0);
lean_inc(x_219);
x_220 = lean_unbox(x_219);
lean_dec(x_219);
if (x_220 == 0)
{
lean_object* x_221; lean_object* x_222; 
x_221 = lean_ctor_get(x_218, 1);
lean_inc(x_221);
lean_dec(x_218);
if (lean_is_scalar(x_208)) {
 x_222 = lean_alloc_ctor(1, 1, 0);
} else {
 x_222 = x_208;
}
lean_ctor_set(x_222, 0, x_216);
x_165 = x_222;
x_166 = x_221;
goto block_184;
}
else
{
lean_object* x_223; lean_object* x_224; 
lean_dec(x_216);
lean_dec(x_208);
x_223 = lean_ctor_get(x_218, 1);
lean_inc(x_223);
lean_dec(x_218);
x_224 = lean_box(0);
x_165 = x_224;
x_166 = x_223;
goto block_184;
}
}
}
else
{
lean_object* x_225; lean_object* x_226; 
lean_dec(x_208);
lean_dec(x_207);
lean_dec(x_164);
lean_dec(x_155);
lean_dec(x_154);
lean_dec(x_3);
x_225 = lean_ctor_get(x_209, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_209, 1);
lean_inc(x_226);
lean_dec(x_209);
x_185 = x_225;
x_186 = x_226;
goto block_195;
}
}
}
else
{
lean_object* x_227; lean_object* x_228; 
lean_dec(x_202);
lean_dec(x_164);
lean_dec(x_155);
lean_dec(x_154);
lean_dec(x_3);
x_227 = lean_ctor_get(x_203, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_203, 1);
lean_inc(x_228);
lean_dec(x_203);
x_185 = x_227;
x_186 = x_228;
goto block_195;
}
}
else
{
lean_object* x_229; lean_object* x_230; 
lean_dec(x_164);
lean_dec(x_155);
lean_dec(x_154);
lean_dec(x_3);
lean_dec(x_2);
x_229 = lean_ctor_get(x_198, 0);
lean_inc(x_229);
x_230 = lean_ctor_get(x_198, 1);
lean_inc(x_230);
lean_dec(x_198);
x_185 = x_229;
x_186 = x_230;
goto block_195;
}
block_184:
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; uint8_t x_174; 
x_167 = lean_ctor_get(x_166, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_166, 2);
lean_inc(x_168);
x_169 = lean_ctor_get(x_166, 3);
lean_inc(x_169);
x_170 = lean_ctor_get(x_166, 4);
lean_inc(x_170);
x_171 = lean_ctor_get(x_166, 5);
lean_inc(x_171);
if (lean_is_exclusive(x_166)) {
 lean_ctor_release(x_166, 0);
 lean_ctor_release(x_166, 1);
 lean_ctor_release(x_166, 2);
 lean_ctor_release(x_166, 3);
 lean_ctor_release(x_166, 4);
 lean_ctor_release(x_166, 5);
 x_172 = x_166;
} else {
 lean_dec_ref(x_166);
 x_172 = lean_box(0);
}
lean_inc(x_171);
lean_inc(x_170);
lean_inc(x_169);
lean_inc(x_168);
lean_inc(x_157);
lean_inc(x_167);
if (lean_is_scalar(x_172)) {
 x_173 = lean_alloc_ctor(0, 6, 0);
} else {
 x_173 = x_172;
}
lean_ctor_set(x_173, 0, x_167);
lean_ctor_set(x_173, 1, x_157);
lean_ctor_set(x_173, 2, x_168);
lean_ctor_set(x_173, 3, x_169);
lean_ctor_set(x_173, 4, x_170);
lean_ctor_set(x_173, 5, x_171);
x_174 = l_Lean_Expr_hasMVar(x_154);
if (x_174 == 0)
{
lean_object* x_175; 
lean_dec(x_171);
lean_dec(x_170);
lean_dec(x_169);
lean_dec(x_168);
lean_dec(x_167);
lean_dec(x_164);
lean_dec(x_157);
lean_dec(x_154);
if (lean_is_scalar(x_155)) {
 x_175 = lean_alloc_ctor(0, 2, 0);
} else {
 x_175 = x_155;
}
lean_ctor_set(x_175, 0, x_165);
lean_ctor_set(x_175, 1, x_173);
return x_175;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
lean_dec(x_173);
x_176 = lean_ctor_get(x_168, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_168, 1);
lean_inc(x_177);
x_178 = lean_ctor_get(x_168, 2);
lean_inc(x_178);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 lean_ctor_release(x_168, 2);
 x_179 = x_168;
} else {
 lean_dec_ref(x_168);
 x_179 = lean_box(0);
}
lean_inc(x_165);
x_180 = l_PersistentHashMap_insert___at_Lean_Meta_synthInstance___spec__4(x_178, x_154, x_165);
if (lean_is_scalar(x_179)) {
 x_181 = lean_alloc_ctor(0, 3, 0);
} else {
 x_181 = x_179;
}
lean_ctor_set(x_181, 0, x_176);
lean_ctor_set(x_181, 1, x_177);
lean_ctor_set(x_181, 2, x_180);
if (lean_is_scalar(x_164)) {
 x_182 = lean_alloc_ctor(0, 6, 0);
} else {
 x_182 = x_164;
}
lean_ctor_set(x_182, 0, x_167);
lean_ctor_set(x_182, 1, x_157);
lean_ctor_set(x_182, 2, x_181);
lean_ctor_set(x_182, 3, x_169);
lean_ctor_set(x_182, 4, x_170);
lean_ctor_set(x_182, 5, x_171);
if (lean_is_scalar(x_155)) {
 x_183 = lean_alloc_ctor(0, 2, 0);
} else {
 x_183 = x_155;
}
lean_ctor_set(x_183, 0, x_165);
lean_ctor_set(x_183, 1, x_182);
return x_183;
}
}
block_195:
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_186, 2);
lean_inc(x_188);
x_189 = lean_ctor_get(x_186, 3);
lean_inc(x_189);
x_190 = lean_ctor_get(x_186, 4);
lean_inc(x_190);
x_191 = lean_ctor_get(x_186, 5);
lean_inc(x_191);
if (lean_is_exclusive(x_186)) {
 lean_ctor_release(x_186, 0);
 lean_ctor_release(x_186, 1);
 lean_ctor_release(x_186, 2);
 lean_ctor_release(x_186, 3);
 lean_ctor_release(x_186, 4);
 lean_ctor_release(x_186, 5);
 x_192 = x_186;
} else {
 lean_dec_ref(x_186);
 x_192 = lean_box(0);
}
if (lean_is_scalar(x_192)) {
 x_193 = lean_alloc_ctor(0, 6, 0);
} else {
 x_193 = x_192;
}
lean_ctor_set(x_193, 0, x_187);
lean_ctor_set(x_193, 1, x_157);
lean_ctor_set(x_193, 2, x_188);
lean_ctor_set(x_193, 3, x_189);
lean_ctor_set(x_193, 4, x_190);
lean_ctor_set(x_193, 5, x_191);
if (lean_is_scalar(x_150)) {
 x_194 = lean_alloc_ctor(1, 2, 0);
} else {
 x_194 = x_150;
 lean_ctor_set_tag(x_194, 1);
}
lean_ctor_set(x_194, 0, x_185);
lean_ctor_set(x_194, 1, x_193);
return x_194;
}
}
else
{
lean_object* x_231; lean_object* x_232; 
lean_dec(x_161);
lean_dec(x_160);
lean_dec(x_159);
lean_dec(x_158);
lean_dec(x_157);
lean_dec(x_156);
lean_dec(x_154);
lean_dec(x_150);
lean_dec(x_3);
lean_dec(x_2);
x_231 = lean_ctor_get(x_163, 0);
lean_inc(x_231);
lean_dec(x_163);
if (lean_is_scalar(x_155)) {
 x_232 = lean_alloc_ctor(0, 2, 0);
} else {
 x_232 = x_155;
}
lean_ctor_set(x_232, 0, x_231);
lean_ctor_set(x_232, 1, x_153);
return x_232;
}
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
lean_dec(x_150);
lean_dec(x_3);
lean_dec(x_2);
x_233 = lean_ctor_get(x_152, 0);
lean_inc(x_233);
x_234 = lean_ctor_get(x_152, 1);
lean_inc(x_234);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_235 = x_152;
} else {
 lean_dec_ref(x_152);
 x_235 = lean_box(0);
}
if (lean_is_scalar(x_235)) {
 x_236 = lean_alloc_ctor(1, 2, 0);
} else {
 x_236 = x_235;
}
lean_ctor_set(x_236, 0, x_233);
lean_ctor_set(x_236, 1, x_234);
return x_236;
}
}
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; uint8_t x_241; uint8_t x_242; uint8_t x_243; uint8_t x_244; uint8_t x_245; lean_object* x_246; uint8_t x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_237 = lean_ctor_get(x_3, 0);
x_238 = lean_ctor_get(x_3, 1);
x_239 = lean_ctor_get(x_3, 2);
lean_inc(x_239);
lean_inc(x_238);
lean_inc(x_237);
lean_dec(x_3);
x_240 = lean_ctor_get(x_237, 0);
lean_inc(x_240);
x_241 = lean_ctor_get_uint8(x_237, sizeof(void*)*1);
x_242 = lean_ctor_get_uint8(x_237, sizeof(void*)*1 + 1);
x_243 = lean_ctor_get_uint8(x_237, sizeof(void*)*1 + 2);
x_244 = lean_ctor_get_uint8(x_237, sizeof(void*)*1 + 3);
x_245 = lean_ctor_get_uint8(x_237, sizeof(void*)*1 + 4);
if (lean_is_exclusive(x_237)) {
 lean_ctor_release(x_237, 0);
 x_246 = x_237;
} else {
 lean_dec_ref(x_237);
 x_246 = lean_box(0);
}
x_247 = 2;
if (lean_is_scalar(x_246)) {
 x_248 = lean_alloc_ctor(0, 1, 6);
} else {
 x_248 = x_246;
}
lean_ctor_set(x_248, 0, x_240);
lean_ctor_set_uint8(x_248, sizeof(void*)*1, x_241);
lean_ctor_set_uint8(x_248, sizeof(void*)*1 + 1, x_242);
lean_ctor_set_uint8(x_248, sizeof(void*)*1 + 2, x_243);
lean_ctor_set_uint8(x_248, sizeof(void*)*1 + 3, x_244);
lean_ctor_set_uint8(x_248, sizeof(void*)*1 + 4, x_245);
lean_ctor_set_uint8(x_248, sizeof(void*)*1 + 5, x_247);
x_249 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_238);
lean_ctor_set(x_249, 2, x_239);
x_250 = l_Lean_Meta_instantiateMVars(x_1, x_249, x_4);
x_251 = lean_ctor_get(x_250, 0);
lean_inc(x_251);
x_252 = lean_ctor_get(x_250, 1);
lean_inc(x_252);
if (lean_is_exclusive(x_250)) {
 lean_ctor_release(x_250, 0);
 lean_ctor_release(x_250, 1);
 x_253 = x_250;
} else {
 lean_dec_ref(x_250);
 x_253 = lean_box(0);
}
x_254 = l___private_Init_Lean_Meta_SynthInstance_4__preprocess___closed__1;
lean_inc(x_249);
x_255 = l_Lean_Meta_forallTelescopeReducing___rarg(x_251, x_254, x_249, x_252);
if (lean_obj_tag(x_255) == 0)
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_256 = lean_ctor_get(x_255, 1);
lean_inc(x_256);
x_257 = lean_ctor_get(x_255, 0);
lean_inc(x_257);
if (lean_is_exclusive(x_255)) {
 lean_ctor_release(x_255, 0);
 lean_ctor_release(x_255, 1);
 x_258 = x_255;
} else {
 lean_dec_ref(x_255);
 x_258 = lean_box(0);
}
x_259 = lean_ctor_get(x_256, 0);
lean_inc(x_259);
x_260 = lean_ctor_get(x_256, 1);
lean_inc(x_260);
x_261 = lean_ctor_get(x_256, 2);
lean_inc(x_261);
x_262 = lean_ctor_get(x_256, 3);
lean_inc(x_262);
x_263 = lean_ctor_get(x_256, 4);
lean_inc(x_263);
x_264 = lean_ctor_get(x_256, 5);
lean_inc(x_264);
x_265 = lean_ctor_get(x_261, 2);
lean_inc(x_265);
x_266 = l_PersistentHashMap_find___at_Lean_Meta_synthInstance___spec__1(x_265, x_257);
lean_dec(x_265);
if (lean_obj_tag(x_266) == 0)
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_288; lean_object* x_289; lean_object* x_299; lean_object* x_300; lean_object* x_301; 
if (lean_is_exclusive(x_256)) {
 lean_ctor_release(x_256, 0);
 lean_ctor_release(x_256, 1);
 lean_ctor_release(x_256, 2);
 lean_ctor_release(x_256, 3);
 lean_ctor_release(x_256, 4);
 lean_ctor_release(x_256, 5);
 x_267 = x_256;
} else {
 lean_dec_ref(x_256);
 x_267 = lean_box(0);
}
lean_inc(x_260);
x_299 = l_Lean_MetavarContext_incDepth(x_260);
x_300 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_300, 0, x_259);
lean_ctor_set(x_300, 1, x_299);
lean_ctor_set(x_300, 2, x_261);
lean_ctor_set(x_300, 3, x_262);
lean_ctor_set(x_300, 4, x_263);
lean_ctor_set(x_300, 5, x_264);
lean_inc(x_249);
lean_inc(x_257);
x_301 = l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam(x_257, x_249, x_300);
if (lean_obj_tag(x_301) == 0)
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_302 = lean_ctor_get(x_301, 0);
lean_inc(x_302);
x_303 = lean_ctor_get(x_301, 1);
lean_inc(x_303);
lean_dec(x_301);
x_304 = lean_ctor_get(x_302, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_302, 1);
lean_inc(x_305);
lean_dec(x_302);
lean_inc(x_249);
x_306 = l_Lean_Meta_SynthInstance_main(x_304, x_2, x_249, x_303);
if (lean_obj_tag(x_306) == 0)
{
lean_object* x_307; 
x_307 = lean_ctor_get(x_306, 0);
lean_inc(x_307);
if (lean_obj_tag(x_307) == 0)
{
lean_object* x_308; 
lean_dec(x_305);
lean_dec(x_253);
lean_dec(x_249);
x_308 = lean_ctor_get(x_306, 1);
lean_inc(x_308);
lean_dec(x_306);
x_268 = x_307;
x_269 = x_308;
goto block_287;
}
else
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; 
x_309 = lean_ctor_get(x_306, 1);
lean_inc(x_309);
lean_dec(x_306);
x_310 = lean_ctor_get(x_307, 0);
lean_inc(x_310);
if (lean_is_exclusive(x_307)) {
 lean_ctor_release(x_307, 0);
 x_311 = x_307;
} else {
 lean_dec_ref(x_307);
 x_311 = lean_box(0);
}
lean_inc(x_249);
x_312 = l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3(x_305, x_249, x_309);
if (lean_obj_tag(x_312) == 0)
{
lean_object* x_313; uint8_t x_314; 
lean_dec(x_253);
x_313 = lean_ctor_get(x_312, 0);
lean_inc(x_313);
x_314 = lean_unbox(x_313);
lean_dec(x_313);
if (x_314 == 0)
{
lean_object* x_315; lean_object* x_316; 
lean_dec(x_311);
lean_dec(x_310);
lean_dec(x_249);
x_315 = lean_ctor_get(x_312, 1);
lean_inc(x_315);
lean_dec(x_312);
x_316 = lean_box(0);
x_268 = x_316;
x_269 = x_315;
goto block_287;
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; uint8_t x_323; 
x_317 = lean_ctor_get(x_312, 1);
lean_inc(x_317);
lean_dec(x_312);
x_318 = l_Lean_Meta_instantiateMVars(x_310, x_249, x_317);
x_319 = lean_ctor_get(x_318, 0);
lean_inc(x_319);
x_320 = lean_ctor_get(x_318, 1);
lean_inc(x_320);
lean_dec(x_318);
x_321 = l_Lean_Meta_hasAssignableMVar(x_319, x_249, x_320);
lean_dec(x_249);
x_322 = lean_ctor_get(x_321, 0);
lean_inc(x_322);
x_323 = lean_unbox(x_322);
lean_dec(x_322);
if (x_323 == 0)
{
lean_object* x_324; lean_object* x_325; 
x_324 = lean_ctor_get(x_321, 1);
lean_inc(x_324);
lean_dec(x_321);
if (lean_is_scalar(x_311)) {
 x_325 = lean_alloc_ctor(1, 1, 0);
} else {
 x_325 = x_311;
}
lean_ctor_set(x_325, 0, x_319);
x_268 = x_325;
x_269 = x_324;
goto block_287;
}
else
{
lean_object* x_326; lean_object* x_327; 
lean_dec(x_319);
lean_dec(x_311);
x_326 = lean_ctor_get(x_321, 1);
lean_inc(x_326);
lean_dec(x_321);
x_327 = lean_box(0);
x_268 = x_327;
x_269 = x_326;
goto block_287;
}
}
}
else
{
lean_object* x_328; lean_object* x_329; 
lean_dec(x_311);
lean_dec(x_310);
lean_dec(x_267);
lean_dec(x_258);
lean_dec(x_257);
lean_dec(x_249);
x_328 = lean_ctor_get(x_312, 0);
lean_inc(x_328);
x_329 = lean_ctor_get(x_312, 1);
lean_inc(x_329);
lean_dec(x_312);
x_288 = x_328;
x_289 = x_329;
goto block_298;
}
}
}
else
{
lean_object* x_330; lean_object* x_331; 
lean_dec(x_305);
lean_dec(x_267);
lean_dec(x_258);
lean_dec(x_257);
lean_dec(x_249);
x_330 = lean_ctor_get(x_306, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_306, 1);
lean_inc(x_331);
lean_dec(x_306);
x_288 = x_330;
x_289 = x_331;
goto block_298;
}
}
else
{
lean_object* x_332; lean_object* x_333; 
lean_dec(x_267);
lean_dec(x_258);
lean_dec(x_257);
lean_dec(x_249);
lean_dec(x_2);
x_332 = lean_ctor_get(x_301, 0);
lean_inc(x_332);
x_333 = lean_ctor_get(x_301, 1);
lean_inc(x_333);
lean_dec(x_301);
x_288 = x_332;
x_289 = x_333;
goto block_298;
}
block_287:
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; uint8_t x_277; 
x_270 = lean_ctor_get(x_269, 0);
lean_inc(x_270);
x_271 = lean_ctor_get(x_269, 2);
lean_inc(x_271);
x_272 = lean_ctor_get(x_269, 3);
lean_inc(x_272);
x_273 = lean_ctor_get(x_269, 4);
lean_inc(x_273);
x_274 = lean_ctor_get(x_269, 5);
lean_inc(x_274);
if (lean_is_exclusive(x_269)) {
 lean_ctor_release(x_269, 0);
 lean_ctor_release(x_269, 1);
 lean_ctor_release(x_269, 2);
 lean_ctor_release(x_269, 3);
 lean_ctor_release(x_269, 4);
 lean_ctor_release(x_269, 5);
 x_275 = x_269;
} else {
 lean_dec_ref(x_269);
 x_275 = lean_box(0);
}
lean_inc(x_274);
lean_inc(x_273);
lean_inc(x_272);
lean_inc(x_271);
lean_inc(x_260);
lean_inc(x_270);
if (lean_is_scalar(x_275)) {
 x_276 = lean_alloc_ctor(0, 6, 0);
} else {
 x_276 = x_275;
}
lean_ctor_set(x_276, 0, x_270);
lean_ctor_set(x_276, 1, x_260);
lean_ctor_set(x_276, 2, x_271);
lean_ctor_set(x_276, 3, x_272);
lean_ctor_set(x_276, 4, x_273);
lean_ctor_set(x_276, 5, x_274);
x_277 = l_Lean_Expr_hasMVar(x_257);
if (x_277 == 0)
{
lean_object* x_278; 
lean_dec(x_274);
lean_dec(x_273);
lean_dec(x_272);
lean_dec(x_271);
lean_dec(x_270);
lean_dec(x_267);
lean_dec(x_260);
lean_dec(x_257);
if (lean_is_scalar(x_258)) {
 x_278 = lean_alloc_ctor(0, 2, 0);
} else {
 x_278 = x_258;
}
lean_ctor_set(x_278, 0, x_268);
lean_ctor_set(x_278, 1, x_276);
return x_278;
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; 
lean_dec(x_276);
x_279 = lean_ctor_get(x_271, 0);
lean_inc(x_279);
x_280 = lean_ctor_get(x_271, 1);
lean_inc(x_280);
x_281 = lean_ctor_get(x_271, 2);
lean_inc(x_281);
if (lean_is_exclusive(x_271)) {
 lean_ctor_release(x_271, 0);
 lean_ctor_release(x_271, 1);
 lean_ctor_release(x_271, 2);
 x_282 = x_271;
} else {
 lean_dec_ref(x_271);
 x_282 = lean_box(0);
}
lean_inc(x_268);
x_283 = l_PersistentHashMap_insert___at_Lean_Meta_synthInstance___spec__4(x_281, x_257, x_268);
if (lean_is_scalar(x_282)) {
 x_284 = lean_alloc_ctor(0, 3, 0);
} else {
 x_284 = x_282;
}
lean_ctor_set(x_284, 0, x_279);
lean_ctor_set(x_284, 1, x_280);
lean_ctor_set(x_284, 2, x_283);
if (lean_is_scalar(x_267)) {
 x_285 = lean_alloc_ctor(0, 6, 0);
} else {
 x_285 = x_267;
}
lean_ctor_set(x_285, 0, x_270);
lean_ctor_set(x_285, 1, x_260);
lean_ctor_set(x_285, 2, x_284);
lean_ctor_set(x_285, 3, x_272);
lean_ctor_set(x_285, 4, x_273);
lean_ctor_set(x_285, 5, x_274);
if (lean_is_scalar(x_258)) {
 x_286 = lean_alloc_ctor(0, 2, 0);
} else {
 x_286 = x_258;
}
lean_ctor_set(x_286, 0, x_268);
lean_ctor_set(x_286, 1, x_285);
return x_286;
}
}
block_298:
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; 
x_290 = lean_ctor_get(x_289, 0);
lean_inc(x_290);
x_291 = lean_ctor_get(x_289, 2);
lean_inc(x_291);
x_292 = lean_ctor_get(x_289, 3);
lean_inc(x_292);
x_293 = lean_ctor_get(x_289, 4);
lean_inc(x_293);
x_294 = lean_ctor_get(x_289, 5);
lean_inc(x_294);
if (lean_is_exclusive(x_289)) {
 lean_ctor_release(x_289, 0);
 lean_ctor_release(x_289, 1);
 lean_ctor_release(x_289, 2);
 lean_ctor_release(x_289, 3);
 lean_ctor_release(x_289, 4);
 lean_ctor_release(x_289, 5);
 x_295 = x_289;
} else {
 lean_dec_ref(x_289);
 x_295 = lean_box(0);
}
if (lean_is_scalar(x_295)) {
 x_296 = lean_alloc_ctor(0, 6, 0);
} else {
 x_296 = x_295;
}
lean_ctor_set(x_296, 0, x_290);
lean_ctor_set(x_296, 1, x_260);
lean_ctor_set(x_296, 2, x_291);
lean_ctor_set(x_296, 3, x_292);
lean_ctor_set(x_296, 4, x_293);
lean_ctor_set(x_296, 5, x_294);
if (lean_is_scalar(x_253)) {
 x_297 = lean_alloc_ctor(1, 2, 0);
} else {
 x_297 = x_253;
 lean_ctor_set_tag(x_297, 1);
}
lean_ctor_set(x_297, 0, x_288);
lean_ctor_set(x_297, 1, x_296);
return x_297;
}
}
else
{
lean_object* x_334; lean_object* x_335; 
lean_dec(x_264);
lean_dec(x_263);
lean_dec(x_262);
lean_dec(x_261);
lean_dec(x_260);
lean_dec(x_259);
lean_dec(x_257);
lean_dec(x_253);
lean_dec(x_249);
lean_dec(x_2);
x_334 = lean_ctor_get(x_266, 0);
lean_inc(x_334);
lean_dec(x_266);
if (lean_is_scalar(x_258)) {
 x_335 = lean_alloc_ctor(0, 2, 0);
} else {
 x_335 = x_258;
}
lean_ctor_set(x_335, 0, x_334);
lean_ctor_set(x_335, 1, x_256);
return x_335;
}
}
else
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; 
lean_dec(x_253);
lean_dec(x_249);
lean_dec(x_2);
x_336 = lean_ctor_get(x_255, 0);
lean_inc(x_336);
x_337 = lean_ctor_get(x_255, 1);
lean_inc(x_337);
if (lean_is_exclusive(x_255)) {
 lean_ctor_release(x_255, 0);
 lean_ctor_release(x_255, 1);
 x_338 = x_255;
} else {
 lean_dec_ref(x_255);
 x_338 = lean_box(0);
}
if (lean_is_scalar(x_338)) {
 x_339 = lean_alloc_ctor(1, 2, 0);
} else {
 x_339 = x_338;
}
lean_ctor_set(x_339, 0, x_336);
lean_ctor_set(x_339, 1, x_337);
return x_339;
}
}
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_Meta_synthInstance___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PersistentHashMap_findAtAux___main___at_Lean_Meta_synthInstance___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_Meta_synthInstance___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_Meta_synthInstance___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_PersistentHashMap_find___at_Lean_Meta_synthInstance___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_find___at_Lean_Meta_synthInstance___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_synthInstance___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at_Lean_Meta_synthInstance___spec__7(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstance___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstance___spec__5(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_Meta_trySynthInstance(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
uint8_t x_8; lean_object* x_9; 
x_8 = 1;
lean_ctor_set_uint8(x_6, sizeof(void*)*1 + 3, x_8);
x_9 = l_Lean_Meta_synthInstance(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = l_Option_toLOption___rarg(x_11);
lean_dec(x_11);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = l_Option_toLOption___rarg(x_13);
lean_dec(x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
switch (lean_obj_tag(x_17)) {
case 11:
{
uint8_t x_18; 
lean_dec(x_17);
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_9, 0);
lean_dec(x_19);
x_20 = lean_box(2);
lean_ctor_set_tag(x_9, 0);
lean_ctor_set(x_9, 0, x_20);
return x_9;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_9, 1);
lean_inc(x_21);
lean_dec(x_9);
x_22 = lean_box(2);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
case 12:
{
uint8_t x_24; 
lean_dec(x_17);
x_24 = !lean_is_exclusive(x_9);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_9, 0);
lean_dec(x_25);
x_26 = lean_box(2);
lean_ctor_set_tag(x_9, 0);
lean_ctor_set(x_9, 0, x_26);
return x_9;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_9, 1);
lean_inc(x_27);
lean_dec(x_9);
x_28 = lean_box(2);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
default: 
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_9);
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_9, 0);
lean_dec(x_31);
return x_9;
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_9, 1);
lean_inc(x_32);
lean_dec(x_9);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_17);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
else
{
lean_object* x_34; uint8_t x_35; uint8_t x_36; uint8_t x_37; uint8_t x_38; uint8_t x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; 
x_34 = lean_ctor_get(x_6, 0);
x_35 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_36 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
x_37 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 2);
x_38 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 4);
x_39 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 5);
lean_inc(x_34);
lean_dec(x_6);
x_40 = 1;
x_41 = lean_alloc_ctor(0, 1, 6);
lean_ctor_set(x_41, 0, x_34);
lean_ctor_set_uint8(x_41, sizeof(void*)*1, x_35);
lean_ctor_set_uint8(x_41, sizeof(void*)*1 + 1, x_36);
lean_ctor_set_uint8(x_41, sizeof(void*)*1 + 2, x_37);
lean_ctor_set_uint8(x_41, sizeof(void*)*1 + 3, x_40);
lean_ctor_set_uint8(x_41, sizeof(void*)*1 + 4, x_38);
lean_ctor_set_uint8(x_41, sizeof(void*)*1 + 5, x_39);
lean_ctor_set(x_3, 0, x_41);
x_42 = l_Lean_Meta_synthInstance(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_45 = x_42;
} else {
 lean_dec_ref(x_42);
 x_45 = lean_box(0);
}
x_46 = l_Option_toLOption___rarg(x_43);
lean_dec(x_43);
if (lean_is_scalar(x_45)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_45;
}
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_44);
return x_47;
}
else
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_42, 0);
lean_inc(x_48);
switch (lean_obj_tag(x_48)) {
case 11:
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_48);
x_49 = lean_ctor_get(x_42, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_50 = x_42;
} else {
 lean_dec_ref(x_42);
 x_50 = lean_box(0);
}
x_51 = lean_box(2);
if (lean_is_scalar(x_50)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_50;
 lean_ctor_set_tag(x_52, 0);
}
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_49);
return x_52;
}
case 12:
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_48);
x_53 = lean_ctor_get(x_42, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_54 = x_42;
} else {
 lean_dec_ref(x_42);
 x_54 = lean_box(0);
}
x_55 = lean_box(2);
if (lean_is_scalar(x_54)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_54;
 lean_ctor_set_tag(x_56, 0);
}
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_53);
return x_56;
}
default: 
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_42, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_58 = x_42;
} else {
 lean_dec_ref(x_42);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_48);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; uint8_t x_65; uint8_t x_66; uint8_t x_67; uint8_t x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_60 = lean_ctor_get(x_3, 0);
x_61 = lean_ctor_get(x_3, 1);
x_62 = lean_ctor_get(x_3, 2);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_3);
x_63 = lean_ctor_get(x_60, 0);
lean_inc(x_63);
x_64 = lean_ctor_get_uint8(x_60, sizeof(void*)*1);
x_65 = lean_ctor_get_uint8(x_60, sizeof(void*)*1 + 1);
x_66 = lean_ctor_get_uint8(x_60, sizeof(void*)*1 + 2);
x_67 = lean_ctor_get_uint8(x_60, sizeof(void*)*1 + 4);
x_68 = lean_ctor_get_uint8(x_60, sizeof(void*)*1 + 5);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 x_69 = x_60;
} else {
 lean_dec_ref(x_60);
 x_69 = lean_box(0);
}
x_70 = 1;
if (lean_is_scalar(x_69)) {
 x_71 = lean_alloc_ctor(0, 1, 6);
} else {
 x_71 = x_69;
}
lean_ctor_set(x_71, 0, x_63);
lean_ctor_set_uint8(x_71, sizeof(void*)*1, x_64);
lean_ctor_set_uint8(x_71, sizeof(void*)*1 + 1, x_65);
lean_ctor_set_uint8(x_71, sizeof(void*)*1 + 2, x_66);
lean_ctor_set_uint8(x_71, sizeof(void*)*1 + 3, x_70);
lean_ctor_set_uint8(x_71, sizeof(void*)*1 + 4, x_67);
lean_ctor_set_uint8(x_71, sizeof(void*)*1 + 5, x_68);
x_72 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_61);
lean_ctor_set(x_72, 2, x_62);
x_73 = l_Lean_Meta_synthInstance(x_1, x_2, x_72, x_4);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_76 = x_73;
} else {
 lean_dec_ref(x_73);
 x_76 = lean_box(0);
}
x_77 = l_Option_toLOption___rarg(x_74);
lean_dec(x_74);
if (lean_is_scalar(x_76)) {
 x_78 = lean_alloc_ctor(0, 2, 0);
} else {
 x_78 = x_76;
}
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_75);
return x_78;
}
else
{
lean_object* x_79; 
x_79 = lean_ctor_get(x_73, 0);
lean_inc(x_79);
switch (lean_obj_tag(x_79)) {
case 11:
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_79);
x_80 = lean_ctor_get(x_73, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_81 = x_73;
} else {
 lean_dec_ref(x_73);
 x_81 = lean_box(0);
}
x_82 = lean_box(2);
if (lean_is_scalar(x_81)) {
 x_83 = lean_alloc_ctor(0, 2, 0);
} else {
 x_83 = x_81;
 lean_ctor_set_tag(x_83, 0);
}
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_80);
return x_83;
}
case 12:
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_79);
x_84 = lean_ctor_get(x_73, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_85 = x_73;
} else {
 lean_dec_ref(x_73);
 x_85 = lean_box(0);
}
x_86 = lean_box(2);
if (lean_is_scalar(x_85)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_85;
 lean_ctor_set_tag(x_87, 0);
}
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_84);
return x_87;
}
default: 
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_73, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_89 = x_73;
} else {
 lean_dec_ref(x_73);
 x_89 = lean_box(0);
}
if (lean_is_scalar(x_89)) {
 x_90 = lean_alloc_ctor(1, 2, 0);
} else {
 x_90 = x_89;
}
lean_ctor_set(x_90, 0, x_79);
lean_ctor_set(x_90, 1, x_88);
return x_90;
}
}
}
}
}
}
lean_object* initialize_Init_Default(lean_object*);
lean_object* initialize_Init_Lean_Meta_Basic(lean_object*);
lean_object* initialize_Init_Lean_Meta_Instances(lean_object*);
lean_object* initialize_Init_Lean_Meta_LevelDefEq(lean_object*);
lean_object* initialize_Init_Lean_Meta_AbstractMVars(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Lean_Meta_SynthInstance(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init_Default(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Meta_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Meta_Instances(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Meta_LevelDefEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Meta_AbstractMVars(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1 = _init_l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1);
l_Lean_Meta_SynthInstance_GeneratorNode_inhabited = _init_l_Lean_Meta_SynthInstance_GeneratorNode_inhabited();
lean_mark_persistent(l_Lean_Meta_SynthInstance_GeneratorNode_inhabited);
l_Lean_Meta_SynthInstance_Consumernode_inhabited___closed__1 = _init_l_Lean_Meta_SynthInstance_Consumernode_inhabited___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_Consumernode_inhabited___closed__1);
l_Lean_Meta_SynthInstance_Consumernode_inhabited = _init_l_Lean_Meta_SynthInstance_Consumernode_inhabited();
lean_mark_persistent(l_Lean_Meta_SynthInstance_Consumernode_inhabited);
l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__1 = _init_l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__1);
l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2 = _init_l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2);
l_Lean_Meta_SynthInstance_mkTableKey___closed__1 = _init_l_Lean_Meta_SynthInstance_mkTableKey___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_mkTableKey___closed__1);
l_Lean_Meta_SynthInstance_mkTableKey___closed__2 = _init_l_Lean_Meta_SynthInstance_mkTableKey___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_mkTableKey___closed__2);
l_Lean_Meta_SynthInstance_mkTableKey___closed__3 = _init_l_Lean_Meta_SynthInstance_mkTableKey___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_mkTableKey___closed__3);
l_Lean_Meta_SynthInstance_SynthM_inhabited___closed__1 = _init_l_Lean_Meta_SynthInstance_SynthM_inhabited___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_SynthM_inhabited___closed__1);
l_Lean_Meta_SynthInstance_tracer___closed__1 = _init_l_Lean_Meta_SynthInstance_tracer___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_tracer___closed__1);
l_Lean_Meta_SynthInstance_tracer___closed__2 = _init_l_Lean_Meta_SynthInstance_tracer___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_tracer___closed__2);
l_Lean_Meta_SynthInstance_tracer___closed__3 = _init_l_Lean_Meta_SynthInstance_tracer___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_tracer___closed__3);
l_Lean_Meta_SynthInstance_tracer___closed__4 = _init_l_Lean_Meta_SynthInstance_tracer___closed__4();
lean_mark_persistent(l_Lean_Meta_SynthInstance_tracer___closed__4);
l_Lean_Meta_SynthInstance_tracer = _init_l_Lean_Meta_SynthInstance_tracer();
lean_mark_persistent(l_Lean_Meta_SynthInstance_tracer);
l_Lean_Meta_SynthInstance_meta2Synth___closed__1 = _init_l_Lean_Meta_SynthInstance_meta2Synth___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_meta2Synth___closed__1);
l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__1 = _init_l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__1();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__1);
l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__2 = _init_l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__2();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__2);
l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__3 = _init_l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__3();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__3);
l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__1 = _init_l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__1);
l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2 = _init_l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__2);
l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__3 = _init_l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__3);
l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__4 = _init_l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__4);
l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__5 = _init_l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__5);
l_Lean_Meta_SynthInstance_getInstances___closed__1 = _init_l_Lean_Meta_SynthInstance_getInstances___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_getInstances___closed__1);
l_Lean_Meta_SynthInstance_newSubgoal___closed__1 = _init_l_Lean_Meta_SynthInstance_newSubgoal___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_newSubgoal___closed__1);
l_Lean_Meta_SynthInstance_newSubgoal___closed__2 = _init_l_Lean_Meta_SynthInstance_newSubgoal___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_newSubgoal___closed__2);
l_Lean_Meta_SynthInstance_newSubgoal___closed__3 = _init_l_Lean_Meta_SynthInstance_newSubgoal___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_newSubgoal___closed__3);
l_Lean_Meta_SynthInstance_getEntry___closed__1 = _init_l_Lean_Meta_SynthInstance_getEntry___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_getEntry___closed__1);
l_Lean_Meta_SynthInstance_getEntry___closed__2 = _init_l_Lean_Meta_SynthInstance_getEntry___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_getEntry___closed__2);
l_Lean_Meta_SynthInstance_getEntry___closed__3 = _init_l_Lean_Meta_SynthInstance_getEntry___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_getEntry___closed__3);
l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__1 = _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__1);
l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__2 = _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__2);
l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__3 = _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__3);
l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__4 = _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__4);
l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__5 = _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__5);
l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__6 = _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__6();
lean_mark_persistent(l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__6);
l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__7 = _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__7();
lean_mark_persistent(l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__7);
l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__8 = _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__8();
lean_mark_persistent(l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__8);
l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__9 = _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__9();
lean_mark_persistent(l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__9);
l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__10 = _init_l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__10();
lean_mark_persistent(l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1___closed__10);
l_Lean_Meta_SynthInstance_wakeUp___closed__1 = _init_l_Lean_Meta_SynthInstance_wakeUp___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_wakeUp___closed__1);
l_Lean_Meta_SynthInstance_wakeUp___closed__2 = _init_l_Lean_Meta_SynthInstance_wakeUp___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_wakeUp___closed__2);
l_Lean_Meta_SynthInstance_wakeUp___closed__3 = _init_l_Lean_Meta_SynthInstance_wakeUp___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_wakeUp___closed__3);
l_Lean_Meta_SynthInstance_wakeUp___closed__4 = _init_l_Lean_Meta_SynthInstance_wakeUp___closed__4();
lean_mark_persistent(l_Lean_Meta_SynthInstance_wakeUp___closed__4);
l_Lean_Meta_SynthInstance_wakeUp___closed__5 = _init_l_Lean_Meta_SynthInstance_wakeUp___closed__5();
lean_mark_persistent(l_Lean_Meta_SynthInstance_wakeUp___closed__5);
l_Lean_Meta_SynthInstance_wakeUp___closed__6 = _init_l_Lean_Meta_SynthInstance_wakeUp___closed__6();
lean_mark_persistent(l_Lean_Meta_SynthInstance_wakeUp___closed__6);
l_Lean_Meta_SynthInstance_wakeUp___closed__7 = _init_l_Lean_Meta_SynthInstance_wakeUp___closed__7();
lean_mark_persistent(l_Lean_Meta_SynthInstance_wakeUp___closed__7);
l_Lean_Meta_SynthInstance_generate___closed__1 = _init_l_Lean_Meta_SynthInstance_generate___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_generate___closed__1);
l_Lean_Meta_SynthInstance_generate___closed__2 = _init_l_Lean_Meta_SynthInstance_generate___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_generate___closed__2);
l_Lean_Meta_SynthInstance_generate___closed__3 = _init_l_Lean_Meta_SynthInstance_generate___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_generate___closed__3);
l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___closed__1 = _init_l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___closed__1();
lean_mark_persistent(l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___closed__1);
l_Lean_Meta_SynthInstance_resume___closed__1 = _init_l_Lean_Meta_SynthInstance_resume___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_resume___closed__1);
l_Lean_Meta_SynthInstance_resume___closed__2 = _init_l_Lean_Meta_SynthInstance_resume___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_resume___closed__2);
l_Lean_Meta_SynthInstance_synth___main___closed__1 = _init_l_Lean_Meta_SynthInstance_synth___main___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_synth___main___closed__1);
l_Lean_Meta_SynthInstance_synth___main___closed__2 = _init_l_Lean_Meta_SynthInstance_synth___main___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_synth___main___closed__2);
l_Lean_Meta_SynthInstance_synth___main___closed__3 = _init_l_Lean_Meta_SynthInstance_synth___main___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_synth___main___closed__3);
l_Lean_Meta_SynthInstance_synth___main___closed__4 = _init_l_Lean_Meta_SynthInstance_synth___main___closed__4();
lean_mark_persistent(l_Lean_Meta_SynthInstance_synth___main___closed__4);
l_Lean_Meta_SynthInstance_synth___main___closed__5 = _init_l_Lean_Meta_SynthInstance_synth___main___closed__5();
lean_mark_persistent(l_Lean_Meta_SynthInstance_synth___main___closed__5);
l_Lean_Meta_SynthInstance_synth___main___closed__6 = _init_l_Lean_Meta_SynthInstance_synth___main___closed__6();
lean_mark_persistent(l_Lean_Meta_SynthInstance_synth___main___closed__6);
l_Lean_Meta_SynthInstance_main___closed__1 = _init_l_Lean_Meta_SynthInstance_main___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_main___closed__1);
l_Lean_Meta_SynthInstance_main___closed__2 = _init_l_Lean_Meta_SynthInstance_main___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_main___closed__2);
l_Lean_Meta_SynthInstance_main___closed__3 = _init_l_Lean_Meta_SynthInstance_main___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_main___closed__3);
l___private_Init_Lean_Meta_SynthInstance_4__preprocess___closed__1 = _init_l___private_Init_Lean_Meta_SynthInstance_4__preprocess___closed__1();
lean_mark_persistent(l___private_Init_Lean_Meta_SynthInstance_4__preprocess___closed__1);
l___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels___closed__1 = _init_l___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels___closed__1();
lean_mark_persistent(l___private_Init_Lean_Meta_SynthInstance_5__preprocessLevels___closed__1);
l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main___closed__1 = _init_l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main___closed__1();
lean_mark_persistent(l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main___closed__1);
l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main___closed__2 = _init_l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main___closed__2();
lean_mark_persistent(l___private_Init_Lean_Meta_SynthInstance_6__preprocessArgs___main___closed__2);
l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam___lambda__2___closed__1 = _init_l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam___lambda__2___closed__1();
lean_mark_persistent(l___private_Init_Lean_Meta_SynthInstance_7__preprocessOutParam___lambda__2___closed__1);
l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___closed__1 = _init_l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___closed__1();
lean_mark_persistent(l_Lean_Meta_try___at___private_Init_Lean_Meta_SynthInstance_8__resolveReplacements___spec__3___closed__1);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif