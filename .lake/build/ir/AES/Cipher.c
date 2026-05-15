// Lean compiler output
// Module: AES.Cipher
// Imports: public import Init public meta import Init public import AES.Types public import AES.Transforms public import AES.KeyExpansion
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
lean_object* l_Array_instInhabited(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lp_aes__lean_invShiftRows(lean_object*);
lean_object* lp_aes__lean_invSubBytes(lean_object*);
lean_object* lp_aes__lean_addRoundKey(lean_object*, lean_object*);
lean_object* lp_aes__lean_invMixColumns(lean_object*);
lean_object* lp_aes__lean_subBytes(lean_object*);
lean_object* lp_aes__lean_shiftRows(lean_object*);
lean_object* lp_aes__lean_expandKey(lean_object*);
lean_object* lp_aes__lean_blockToState(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lp_aes__lean_stateToBlock(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lp_aes__lean_mixColumns(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_aesRound(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_aesRound___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_aesFinalRound(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_aesFinalRound___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invAesRound(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invAesRound___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invAesFinalRound(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invAesFinalRound___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_aes__lean_List_foldl___at___00cipher_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_List_foldl___at___00cipher_spec__0___closed__0;
LEAN_EXPORT lean_object* lp_aes__lean_List_foldl___at___00cipher_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_List_foldl___at___00cipher_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_aes__lean_cipher___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_cipher___closed__0;
LEAN_EXPORT lean_object* lp_aes__lean_cipher(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_cipher___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_List_foldl___at___00invCipher_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_List_foldl___at___00invCipher_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invCipher(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invCipher___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_aesEncrypt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_aesEncrypt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_aesDecrypt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_aesDecrypt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_aesRound(lean_object* v_s_1_, lean_object* v_rk_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_3_ = lp_aes__lean_subBytes(v_s_1_);
v___x_4_ = lp_aes__lean_shiftRows(v___x_3_);
v___x_5_ = lp_aes__lean_mixColumns(v___x_4_);
v___x_6_ = lp_aes__lean_addRoundKey(v___x_5_, v_rk_2_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_aesRound___boxed(lean_object* v_s_7_, lean_object* v_rk_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = lp_aes__lean_aesRound(v_s_7_, v_rk_8_);
lean_dec_ref(v_rk_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_aesFinalRound(lean_object* v_s_10_, lean_object* v_rk_11_){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = lp_aes__lean_subBytes(v_s_10_);
v___x_13_ = lp_aes__lean_shiftRows(v___x_12_);
v___x_14_ = lp_aes__lean_addRoundKey(v___x_13_, v_rk_11_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_aesFinalRound___boxed(lean_object* v_s_15_, lean_object* v_rk_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = lp_aes__lean_aesFinalRound(v_s_15_, v_rk_16_);
lean_dec_ref(v_rk_16_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invAesRound(lean_object* v_s_18_, lean_object* v_rk_19_){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_20_ = lp_aes__lean_invShiftRows(v_s_18_);
v___x_21_ = lp_aes__lean_invSubBytes(v___x_20_);
v___x_22_ = lp_aes__lean_addRoundKey(v___x_21_, v_rk_19_);
v___x_23_ = lp_aes__lean_invMixColumns(v___x_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invAesRound___boxed(lean_object* v_s_24_, lean_object* v_rk_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = lp_aes__lean_invAesRound(v_s_24_, v_rk_25_);
lean_dec_ref(v_rk_25_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invAesFinalRound(lean_object* v_s_27_, lean_object* v_rk_28_){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lp_aes__lean_invShiftRows(v_s_27_);
v___x_30_ = lp_aes__lean_invSubBytes(v___x_29_);
v___x_31_ = lp_aes__lean_addRoundKey(v___x_30_, v_rk_28_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invAesFinalRound___boxed(lean_object* v_s_32_, lean_object* v_rk_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = lp_aes__lean_invAesFinalRound(v_s_32_, v_rk_33_);
lean_dec_ref(v_rk_33_);
return v_res_34_;
}
}
static lean_object* _init_lp_aes__lean_List_foldl___at___00cipher_spec__0___closed__0(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Array_instInhabited(lean_box(0));
return v___x_35_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_List_foldl___at___00cipher_spec__0(lean_object* v_ks_36_, lean_object* v_x_37_, lean_object* v_x_38_){
_start:
{
if (lean_obj_tag(v_x_38_) == 0)
{
return v_x_37_;
}
else
{
lean_object* v_head_39_; lean_object* v_tail_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v_head_39_ = lean_ctor_get(v_x_38_, 0);
v_tail_40_ = lean_ctor_get(v_x_38_, 1);
v___x_41_ = lean_obj_once(&lp_aes__lean_List_foldl___at___00cipher_spec__0___closed__0, &lp_aes__lean_List_foldl___at___00cipher_spec__0___closed__0_once, _init_lp_aes__lean_List_foldl___at___00cipher_spec__0___closed__0);
v___x_42_ = lean_unsigned_to_nat(1u);
v___x_43_ = lean_nat_add(v_head_39_, v___x_42_);
v___x_44_ = lean_array_get_borrowed(v___x_41_, v_ks_36_, v___x_43_);
lean_dec(v___x_43_);
v___x_45_ = lp_aes__lean_aesRound(v_x_37_, v___x_44_);
v_x_37_ = v___x_45_;
v_x_38_ = v_tail_40_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean_List_foldl___at___00cipher_spec__0___boxed(lean_object* v_ks_47_, lean_object* v_x_48_, lean_object* v_x_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = lp_aes__lean_List_foldl___at___00cipher_spec__0(v_ks_47_, v_x_48_, v_x_49_);
lean_dec(v_x_49_);
lean_dec_ref(v_ks_47_);
return v_res_50_;
}
}
static lean_object* _init_lp_aes__lean_cipher___closed__0(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_unsigned_to_nat(9u);
v___x_52_ = l_List_range(v___x_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_cipher(lean_object* v_input_53_, lean_object* v_ks_54_){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v_s_59_; lean_object* v___x_60_; lean_object* v_s_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_55_ = lean_obj_once(&lp_aes__lean_List_foldl___at___00cipher_spec__0___closed__0, &lp_aes__lean_List_foldl___at___00cipher_spec__0___closed__0_once, _init_lp_aes__lean_List_foldl___at___00cipher_spec__0___closed__0);
v___x_56_ = lp_aes__lean_blockToState(v_input_53_);
v___x_57_ = lean_unsigned_to_nat(0u);
v___x_58_ = lean_array_get_borrowed(v___x_55_, v_ks_54_, v___x_57_);
v_s_59_ = lp_aes__lean_addRoundKey(v___x_56_, v___x_58_);
v___x_60_ = lean_obj_once(&lp_aes__lean_cipher___closed__0, &lp_aes__lean_cipher___closed__0_once, _init_lp_aes__lean_cipher___closed__0);
v_s_61_ = lp_aes__lean_List_foldl___at___00cipher_spec__0(v_ks_54_, v_s_59_, v___x_60_);
v___x_62_ = lean_unsigned_to_nat(10u);
v___x_63_ = lean_array_get_borrowed(v___x_55_, v_ks_54_, v___x_62_);
v___x_64_ = lp_aes__lean_aesFinalRound(v_s_61_, v___x_63_);
v___x_65_ = lp_aes__lean_stateToBlock(v___x_64_);
lean_dec_ref(v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_cipher___boxed(lean_object* v_input_66_, lean_object* v_ks_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = lp_aes__lean_cipher(v_input_66_, v_ks_67_);
lean_dec_ref(v_ks_67_);
lean_dec_ref(v_input_66_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_List_foldl___at___00invCipher_spec__0(lean_object* v_ks_69_, lean_object* v_x_70_, lean_object* v_x_71_){
_start:
{
if (lean_obj_tag(v_x_71_) == 0)
{
return v_x_70_;
}
else
{
lean_object* v_head_72_; lean_object* v_tail_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v_head_72_ = lean_ctor_get(v_x_71_, 0);
v_tail_73_ = lean_ctor_get(v_x_71_, 1);
v___x_74_ = lean_obj_once(&lp_aes__lean_List_foldl___at___00cipher_spec__0___closed__0, &lp_aes__lean_List_foldl___at___00cipher_spec__0___closed__0_once, _init_lp_aes__lean_List_foldl___at___00cipher_spec__0___closed__0);
v___x_75_ = lean_unsigned_to_nat(9u);
v___x_76_ = lean_nat_sub(v___x_75_, v_head_72_);
v___x_77_ = lean_array_get_borrowed(v___x_74_, v_ks_69_, v___x_76_);
lean_dec(v___x_76_);
v___x_78_ = lp_aes__lean_invAesRound(v_x_70_, v___x_77_);
v_x_70_ = v___x_78_;
v_x_71_ = v_tail_73_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean_List_foldl___at___00invCipher_spec__0___boxed(lean_object* v_ks_80_, lean_object* v_x_81_, lean_object* v_x_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = lp_aes__lean_List_foldl___at___00invCipher_spec__0(v_ks_80_, v_x_81_, v_x_82_);
lean_dec(v_x_82_);
lean_dec_ref(v_ks_80_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invCipher(lean_object* v_input_84_, lean_object* v_ks_85_){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v_s_90_; lean_object* v___x_91_; lean_object* v_s_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_86_ = lean_obj_once(&lp_aes__lean_List_foldl___at___00cipher_spec__0___closed__0, &lp_aes__lean_List_foldl___at___00cipher_spec__0___closed__0_once, _init_lp_aes__lean_List_foldl___at___00cipher_spec__0___closed__0);
v___x_87_ = lp_aes__lean_blockToState(v_input_84_);
v___x_88_ = lean_unsigned_to_nat(10u);
v___x_89_ = lean_array_get_borrowed(v___x_86_, v_ks_85_, v___x_88_);
v_s_90_ = lp_aes__lean_addRoundKey(v___x_87_, v___x_89_);
v___x_91_ = lean_obj_once(&lp_aes__lean_cipher___closed__0, &lp_aes__lean_cipher___closed__0_once, _init_lp_aes__lean_cipher___closed__0);
v_s_92_ = lp_aes__lean_List_foldl___at___00invCipher_spec__0(v_ks_85_, v_s_90_, v___x_91_);
v___x_93_ = lean_unsigned_to_nat(0u);
v___x_94_ = lean_array_get_borrowed(v___x_86_, v_ks_85_, v___x_93_);
v___x_95_ = lp_aes__lean_invAesFinalRound(v_s_92_, v___x_94_);
v___x_96_ = lp_aes__lean_stateToBlock(v___x_95_);
lean_dec_ref(v___x_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invCipher___boxed(lean_object* v_input_97_, lean_object* v_ks_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = lp_aes__lean_invCipher(v_input_97_, v_ks_98_);
lean_dec_ref(v_ks_98_);
lean_dec_ref(v_input_97_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_aesEncrypt(lean_object* v_plaintext_100_, lean_object* v_key_101_){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = lp_aes__lean_expandKey(v_key_101_);
v___x_103_ = lp_aes__lean_cipher(v_plaintext_100_, v___x_102_);
lean_dec_ref(v___x_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_aesEncrypt___boxed(lean_object* v_plaintext_104_, lean_object* v_key_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = lp_aes__lean_aesEncrypt(v_plaintext_104_, v_key_105_);
lean_dec_ref(v_plaintext_104_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_aesDecrypt(lean_object* v_ciphertext_107_, lean_object* v_key_108_){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = lp_aes__lean_expandKey(v_key_108_);
v___x_110_ = lp_aes__lean_invCipher(v_ciphertext_107_, v___x_109_);
lean_dec_ref(v___x_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_aesDecrypt___boxed(lean_object* v_ciphertext_111_, lean_object* v_key_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = lp_aes__lean_aesDecrypt(v_ciphertext_111_, v_key_112_);
lean_dec_ref(v_ciphertext_111_);
return v_res_113_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_aes__lean_AES_Types(uint8_t builtin);
lean_object* initialize_aes__lean_AES_Transforms(uint8_t builtin);
lean_object* initialize_aes__lean_AES_KeyExpansion(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_aes__lean_AES_Cipher(uint8_t builtin) {
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
res = initialize_aes__lean_AES_Transforms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_aes__lean_AES_KeyExpansion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
