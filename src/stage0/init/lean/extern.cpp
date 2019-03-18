// Lean compiler output
// Module: init.lean.extern
// Imports: init.lean.expr init.data.option.basic
#include "runtime/object.h"
#include "runtime/apply.h"
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
obj* l_lean_extern__entry_backend___boxed(obj*);
obj* l_lean_extern__entry_backend___main___boxed(obj*);
obj* l_list_nth___main___rarg(obj*, obj*);
obj* l_lean_get__extern__entry__for__aux___main___boxed(obj*, obj*);
obj* l_lean_get__extern__entry__for__aux(obj*, obj*);
obj* l_lean_get__extern__entry__for__aux___boxed(obj*, obj*);
namespace lean {
obj* nat_add(obj*, obj*);
}
extern obj* l_string_iterator_extract___main___closed__1;
obj* l_lean_expand__extern__entry(obj*, obj*);
namespace lean {
obj* expand_extern_pattern_core(obj*, obj*);
}
extern "C" obj* lean_name_mk_string(obj*, obj*);
obj* l_list_foldl___main___at_lean_mk__simple__fn__call___spec__1(obj*, obj*);
namespace lean {
obj* mk_adhoc_ext_entry_core(obj*);
}
namespace lean {
obj* string_length(obj*);
}
namespace lean {
obj* string_append(obj*, obj*);
}
obj* l_lean_get__extern__entry__for__aux___main___closed__1;
obj* l___private_init_lean_extern_1__parse__opt__num___main(obj*, obj*, obj*);
obj* l_string_iterator_remaining___main(obj*);
obj* l_option_get__or__else___main___rarg(obj*, obj*);
extern obj* l_list_repr__aux___main___rarg___closed__1;
extern obj* l___private_init_data_string_basic_9__to__nat__core___main___closed__1;
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
namespace lean {
obj* mk_std_ext_entry_core(obj*, obj*);
}
obj* l_lean_get__extern__entry__for__aux___main(obj*, obj*);
namespace lean {
obj* mk_inline_ext_entry_core(obj*, obj*);
}
namespace lean {
obj* uint32_to_nat(uint32);
}
obj* l_lean_expand__extern__pattern__aux___main(obj*, obj*, obj*, obj*);
namespace lean {
obj* mk_extern_call_core(obj*, obj*, obj*);
}
obj* l_list_intersperse___main___rarg(obj*, obj*);
obj* l_lean_extern__entry_backend(obj*);
extern "C" uint8 lean_name_dec_eq(obj*, obj*);
obj* l_lean_expand__extern__pattern__aux(obj*, obj*, obj*, obj*);
extern obj* l_prod_has__repr___rarg___closed__1;
obj* l_lean_extern__entry_backend___main(obj*);
obj* l_string_mk__iterator(obj*);
namespace lean {
obj* mk_foreign_ext_entry_core(obj*, obj*);
}
namespace lean {
obj* mk_extern_attr_data_core(obj*, obj*);
}
uint32 l_string_iterator_curr___main(obj*);
uint8 l_string_iterator_has__next___main(obj*);
namespace lean {
uint32 uint32_of_nat(obj*);
}
namespace lean {
obj* nat_mul(obj*, obj*);
}
obj* l_lean_expand__extern__entry___main(obj*, obj*);
obj* l_lean_mk__simple__fn__call(obj*, obj*);
obj* l_list_foldl___main___at_lean_mk__simple__fn__call___spec__1___boxed(obj*, obj*);
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l___private_init_lean_extern_1__parse__opt__num(obj*, obj*, obj*);
extern obj* l_option_has__repr___rarg___closed__3;
namespace lean {
obj* string_push(obj*, uint32);
}
namespace lean {
obj* get_extern_entry_for_core(obj*, obj*);
}
obj* l_string_iterator_next___main(obj*);
namespace lean {
obj* mk_adhoc_ext_entry_core(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
}
namespace lean {
obj* mk_inline_ext_entry_core(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
}
namespace lean {
obj* mk_std_ext_entry_core(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_cnstr(2, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
}
namespace lean {
obj* mk_foreign_ext_entry_core(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_cnstr(3, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
}
namespace lean {
obj* mk_extern_attr_data_core(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
}
obj* l___private_init_lean_extern_1__parse__opt__num___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = l_string_iterator_has__next___main(x_1);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_1);
lean::cnstr_set(x_7, 1, x_2);
return x_7;
}
else
{
uint32 x_8; uint32 x_9; uint8 x_10; 
x_8 = l_string_iterator_curr___main(x_1);
x_9 = 48;
x_10 = x_9 <= x_8;
if (x_10 == 0)
{
obj* x_12; 
lean::dec(x_0);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_1);
lean::cnstr_set(x_12, 1, x_2);
return x_12;
}
else
{
uint32 x_13; uint8 x_14; 
x_13 = 57;
x_14 = x_8 <= x_13;
if (x_14 == 0)
{
obj* x_16; 
lean::dec(x_0);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_1);
lean::cnstr_set(x_16, 1, x_2);
return x_16;
}
else
{
obj* x_17; obj* x_18; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_28; 
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_sub(x_0, x_17);
lean::dec(x_0);
x_20 = l_string_iterator_next___main(x_1);
x_21 = lean::mk_nat_obj(10u);
x_22 = lean::nat_mul(x_2, x_21);
lean::dec(x_2);
x_24 = lean::uint32_to_nat(x_8);
x_25 = l___private_init_data_string_basic_9__to__nat__core___main___closed__1;
x_26 = lean::nat_sub(x_24, x_25);
lean::dec(x_24);
x_28 = lean::nat_add(x_22, x_26);
lean::dec(x_26);
lean::dec(x_22);
x_0 = x_18;
x_1 = x_20;
x_2 = x_28;
goto _start;
}
}
}
}
else
{
obj* x_33; 
lean::dec(x_0);
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_1);
lean::cnstr_set(x_33, 1, x_2);
return x_33;
}
}
}
obj* l___private_init_lean_extern_1__parse__opt__num(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l___private_init_lean_extern_1__parse__opt__num___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_expand__extern__pattern__aux___main(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
uint8 x_6; 
x_6 = l_string_iterator_has__next___main(x_2);
if (x_6 == 0)
{
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
return x_3;
}
else
{
obj* x_10; obj* x_11; uint32 x_13; uint32 x_14; uint8 x_15; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_1, x_10);
lean::dec(x_1);
x_13 = l_string_iterator_curr___main(x_2);
x_14 = 35;
x_15 = x_13 == x_14;
if (x_15 == 0)
{
obj* x_16; obj* x_17; 
x_16 = l_string_iterator_next___main(x_2);
x_17 = lean::string_push(x_3, x_13);
x_1 = x_11;
x_2 = x_16;
x_3 = x_17;
goto _start;
}
else
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_27; obj* x_30; obj* x_31; obj* x_32; obj* x_34; 
x_19 = l_string_iterator_next___main(x_2);
x_20 = l_string_iterator_remaining___main(x_19);
x_21 = l___private_init_lean_extern_1__parse__opt__num___main(x_20, x_19, x_4);
x_22 = lean::cnstr_get(x_21, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_21, 1);
lean::inc(x_24);
lean::dec(x_21);
x_27 = lean::nat_sub(x_24, x_10);
lean::dec(x_24);
lean::inc(x_0);
x_30 = l_list_nth___main___rarg(x_0, x_27);
x_31 = l_string_iterator_extract___main___closed__1;
x_32 = l_option_get__or__else___main___rarg(x_30, x_31);
lean::dec(x_30);
x_34 = lean::string_append(x_3, x_32);
lean::dec(x_32);
x_1 = x_11;
x_2 = x_22;
x_3 = x_34;
goto _start;
}
}
}
else
{
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
return x_3;
}
}
}
obj* l_lean_expand__extern__pattern__aux(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_expand__extern__pattern__aux___main(x_0, x_1, x_2, x_3);
return x_4;
}
}
namespace lean {
obj* expand_extern_pattern_core(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::string_length(x_0);
x_3 = l_string_mk__iterator(x_0);
x_4 = l_string_iterator_extract___main___closed__1;
x_5 = l_lean_expand__extern__pattern__aux___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
}
obj* l_list_foldl___main___at_lean_mk__simple__fn__call___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_3; obj* x_4; 
x_2 = lean::cnstr_get(x_1, 0);
x_3 = lean::cnstr_get(x_1, 1);
x_4 = lean::string_append(x_0, x_2);
x_0 = x_4;
x_1 = x_3;
goto _start;
}
}
}
obj* l_lean_mk__simple__fn__call(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_11; obj* x_12; 
x_2 = l_prod_has__repr___rarg___closed__1;
x_3 = lean::string_append(x_0, x_2);
x_4 = l_list_repr__aux___main___rarg___closed__1;
x_5 = l_list_intersperse___main___rarg(x_4, x_1);
x_6 = l_string_iterator_extract___main___closed__1;
x_7 = l_list_foldl___main___at_lean_mk__simple__fn__call___spec__1(x_6, x_5);
lean::dec(x_5);
x_9 = lean::string_append(x_3, x_7);
lean::dec(x_7);
x_11 = l_option_has__repr___rarg___closed__3;
x_12 = lean::string_append(x_9, x_11);
return x_12;
}
}
obj* l_list_foldl___main___at_lean_mk__simple__fn__call___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_list_foldl___main___at_lean_mk__simple__fn__call___spec__1(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_expand__extern__entry___main(obj* x_0, obj* x_1) {
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
obj* x_5; obj* x_8; obj* x_9; 
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::expand_extern_pattern_core(x_5, x_1);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
default:
{
obj* x_10; obj* x_13; obj* x_14; 
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
lean::dec(x_0);
x_13 = l_lean_mk__simple__fn__call(x_10, x_1);
x_14 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_14, 0, x_13);
return x_14;
}
}
}
}
obj* l_lean_expand__extern__entry(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expand__extern__entry___main(x_0, x_1);
return x_2;
}
}
obj* l_lean_extern__entry_backend___main(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
return x_1;
}
}
obj* l_lean_extern__entry_backend___main___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_extern__entry_backend___main(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_extern__entry_backend(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_extern__entry_backend___main(x_0);
return x_1;
}
}
obj* l_lean_extern__entry_backend___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_extern__entry_backend(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_get__extern__entry__for__aux___main___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("all");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_get__extern__entry__for__aux___main(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; 
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; uint8 x_10; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_lean_extern__entry_backend___main(x_3);
x_9 = l_lean_get__extern__entry__for__aux___main___closed__1;
x_10 = lean_name_dec_eq(x_8, x_9);
if (x_10 == 0)
{
uint8 x_11; 
x_11 = lean_name_dec_eq(x_8, x_0);
lean::dec(x_8);
if (x_11 == 0)
{
lean::dec(x_3);
x_1 = x_5;
goto _start;
}
else
{
obj* x_16; 
lean::dec(x_5);
x_16 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_16, 0, x_3);
return x_16;
}
}
else
{
obj* x_19; 
lean::dec(x_8);
lean::dec(x_5);
x_19 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_19, 0, x_3);
return x_19;
}
}
}
}
obj* l_lean_get__extern__entry__for__aux___main___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_get__extern__entry__for__aux___main(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_lean_get__extern__entry__for__aux(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_get__extern__entry__for__aux___main(x_0, x_1);
return x_2;
}
}
obj* l_lean_get__extern__entry__for__aux___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_get__extern__entry__for__aux(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
namespace lean {
obj* get_extern_entry_for_core(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_lean_get__extern__entry__for__aux___main(x_1, x_2);
lean::dec(x_1);
return x_5;
}
}
}
namespace lean {
obj* mk_extern_call_core(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::get_extern_entry_for_core(x_0, x_1);
if (lean::obj_tag(x_3) == 0)
{
obj* x_5; 
lean::dec(x_2);
x_5 = lean::box(0);
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
lean::dec(x_3);
x_9 = l_lean_expand__extern__entry___main(x_6, x_2);
return x_9;
}
}
}
}
obj* initialize_init_lean_expr(obj*);
obj* initialize_init_data_option_basic(obj*);
static bool _G_initialized = false;
obj* initialize_init_lean_extern(obj* w) {
 if (_G_initialized) return w;
 _G_initialized = true;
if (io_result_is_error(w)) return w;
w = initialize_init_lean_expr(w);
if (io_result_is_error(w)) return w;
w = initialize_init_data_option_basic(w);
 l_lean_get__extern__entry__for__aux___main___closed__1 = _init_l_lean_get__extern__entry__for__aux___main___closed__1();
lean::mark_persistent(l_lean_get__extern__entry__for__aux___main___closed__1);
return w;
}