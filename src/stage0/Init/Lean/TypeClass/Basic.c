// Lean compiler output
// Module: Init.Lean.TypeClass.Basic
// Imports: Init.Lean.Environment Init.Lean.TypeClass.Synth
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
extern lean_object* l_Array_empty___closed__1;
extern lean_object* l_PersistentHashMap_HasEmptyc___closed__1;
lean_object* l_Lean_TypeClass_synthCommand___closed__1;
lean_object* l_Queue_empty(lean_object*);
lean_object* l_Lean_TypeClass_synth(lean_object*, lean_object*, lean_object*);
lean_object* lean_typeclass_synth_command(lean_object*, lean_object*);
extern lean_object* l_Lean_exprIsInhabited___closed__1;
lean_object* _init_l_Lean_TypeClass_synthCommand___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Queue_empty(lean_box(0));
return x_1;
}
}
lean_object* lean_typeclass_synth_command(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_box(0);
x_4 = l_Lean_exprIsInhabited___closed__1;
x_5 = l_Array_empty___closed__1;
x_6 = l_Lean_TypeClass_synthCommand___closed__1;
x_7 = l_PersistentHashMap_HasEmptyc___closed__1;
x_8 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_3);
lean_ctor_set(x_8, 2, x_4);
lean_ctor_set(x_8, 3, x_5);
lean_ctor_set(x_8, 4, x_5);
lean_ctor_set(x_8, 5, x_6);
lean_ctor_set(x_8, 6, x_7);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = lean_unsigned_to_nat(100000u);
x_12 = l_Lean_TypeClass_synth(x_2, x_11, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
lean_object* initialize_Init_Lean_Environment(lean_object*);
lean_object* initialize_Init_Lean_TypeClass_Synth(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Lean_TypeClass_Basic(lean_object* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (lean_io_result_is_error(w)) return w;
w = initialize_Init_Lean_Environment(w);
if (lean_io_result_is_error(w)) return w;
w = initialize_Init_Lean_TypeClass_Synth(w);
if (lean_io_result_is_error(w)) return w;
l_Lean_TypeClass_synthCommand___closed__1 = _init_l_Lean_TypeClass_synthCommand___closed__1();
lean_mark_persistent(l_Lean_TypeClass_synthCommand___closed__1);
return w;
}
#ifdef __cplusplus
}
#endif