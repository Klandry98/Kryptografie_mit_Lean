// Lean compiler output
// Module: AES.TransformationsProofs
// Imports: public import Init public meta import Init public import AES.Types public import AES.SBox public import AES.Transforms
#include <lean/lean.h>
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
uint8_t lean_uint8_of_nat_mk(lean_object*);
uint8_t l_Nat_decidableForallFin___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallUInt8___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallUInt8___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallUInt8___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallUInt8___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallUInt8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallUInt8___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8___redArg___lam__0(lean_object* v_inst_1_, lean_object* v_a_2_){
_start:
{
lean_object* v___x_3_; uint8_t v___x_4_; 
v___x_3_ = lean_apply_1(v_inst_1_, v_a_2_);
v___x_4_ = lean_unbox(v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8___redArg___lam__0___boxed(lean_object* v_inst_5_, lean_object* v_a_6_){
_start:
{
uint8_t v_res_7_; lean_object* v_r_8_; 
v_res_7_ = lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8___redArg___lam__0(v_inst_5_, v_a_6_);
v_r_8_ = lean_box(v_res_7_);
return v_r_8_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8___redArg(lean_object* v_inst_9_){
_start:
{
lean_object* v___f_10_; lean_object* v___x_11_; uint8_t v___x_12_; 
v___f_10_ = lean_alloc_closure((void*)(lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_10_, 0, v_inst_9_);
v___x_11_ = lean_unsigned_to_nat(256u);
v___x_12_ = l_Nat_decidableForallFin___redArg(v___x_11_, v___f_10_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8___redArg___boxed(lean_object* v_inst_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8___redArg(v_inst_13_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8(lean_object* v_p_16_, lean_object* v_inst_17_){
_start:
{
uint8_t v___x_18_; 
v___x_18_ = lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8___redArg(v_inst_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8___boxed(lean_object* v_p_19_, lean_object* v_inst_20_){
_start:
{
uint8_t v_res_21_; lean_object* v_r_22_; 
v_res_21_ = lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8(v_p_19_, v_inst_20_);
v_r_22_ = lean_box(v_res_21_);
return v_r_22_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallUInt8___redArg___lam__0(lean_object* v_inst_23_, lean_object* v_a_24_){
_start:
{
uint8_t v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; uint8_t v___x_28_; 
v___x_25_ = lean_uint8_of_nat_mk(v_a_24_);
v___x_26_ = lean_box(v___x_25_);
v___x_27_ = lean_apply_1(v_inst_23_, v___x_26_);
v___x_28_ = lean_unbox(v___x_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallUInt8___redArg___lam__0___boxed(lean_object* v_inst_29_, lean_object* v_a_30_){
_start:
{
uint8_t v_res_31_; lean_object* v_r_32_; 
v_res_31_ = lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallUInt8___redArg___lam__0(v_inst_29_, v_a_30_);
v_r_32_ = lean_box(v_res_31_);
return v_r_32_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallUInt8___redArg(lean_object* v_inst_33_){
_start:
{
lean_object* v___f_34_; uint8_t v___x_35_; 
v___f_34_ = lean_alloc_closure((void*)(lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallUInt8___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_34_, 0, v_inst_33_);
v___x_35_ = lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallBitVec8___redArg(v___f_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallUInt8___redArg___boxed(lean_object* v_inst_36_){
_start:
{
uint8_t v_res_37_; lean_object* v_r_38_; 
v_res_37_ = lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallUInt8___redArg(v_inst_36_);
v_r_38_ = lean_box(v_res_37_);
return v_r_38_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallUInt8(lean_object* v_p_39_, lean_object* v_inst_40_){
_start:
{
uint8_t v___x_41_; 
v___x_41_ = lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallUInt8___redArg(v_inst_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallUInt8___boxed(lean_object* v_p_42_, lean_object* v_inst_43_){
_start:
{
uint8_t v_res_44_; lean_object* v_r_45_; 
v_res_44_ = lp_aes__lean___private_AES_TransformationsProofs_0__instDecidableForallUInt8(v_p_42_, v_inst_43_);
v_r_45_ = lean_box(v_res_44_);
return v_r_45_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_aes__lean_AES_Types(uint8_t builtin);
lean_object* initialize_aes__lean_AES_SBox(uint8_t builtin);
lean_object* initialize_aes__lean_AES_Transforms(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_aes__lean_AES_TransformationsProofs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_aes__lean_AES_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_aes__lean_AES_SBox(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_aes__lean_AES_Transforms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
