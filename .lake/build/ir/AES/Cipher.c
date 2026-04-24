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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lp_aes__lean_invShiftRows(lean_object*);
lean_object* lp_aes__lean_invSubBytes(lean_object*);
lean_object* lp_aes__lean_addRoundKey(lean_object*, lean_object*);
lean_object* lp_aes__lean_invMixColumns(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lp_aes__lean_subBytes(lean_object*);
lean_object* lp_aes__lean_shiftRows(lean_object*);
lean_object* lp_aes__lean_mixColumns(lean_object*);
lean_object* lp_aes__lean_expandKey(lean_object*);
lean_object* lp_aes__lean_blockToState(lean_object*);
lean_object* lp_aes__lean_stateToBlock(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_aesRound(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_aesRound___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_aesFinalRound(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_aesFinalRound___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invAesRound(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invAesRound___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invAesFinalRound(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invAesFinalRound___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_aes__lean_cipher___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_aes__lean_cipher___closed__0 = (const lean_object*)&lp_aes__lean_cipher___closed__0_value;
LEAN_EXPORT lean_object* lp_aes__lean_cipher(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_cipher___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00invCipher_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00invCipher_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invCipher(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invCipher___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00invCipher_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00invCipher_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_dec_ref(v___x_3_);
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
lean_dec_ref(v___x_12_);
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
lean_dec_ref(v_s_24_);
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
lean_dec_ref(v_s_32_);
return v_res_34_;
}
}
static lean_object* _init_lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Array_instInhabited(lean_box(0));
return v___x_35_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg(lean_object* v_ks_36_, lean_object* v_range_37_, lean_object* v_b_38_, lean_object* v_i_39_){
_start:
{
lean_object* v_stop_40_; lean_object* v_step_41_; uint8_t v___x_42_; 
v_stop_40_ = lean_ctor_get(v_range_37_, 1);
v_step_41_ = lean_ctor_get(v_range_37_, 2);
v___x_42_ = lean_nat_dec_lt(v_i_39_, v_stop_40_);
if (v___x_42_ == 0)
{
lean_dec(v_i_39_);
return v_b_38_;
}
else
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_43_ = lean_obj_once(&lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg___closed__0, &lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg___closed__0_once, _init_lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg___closed__0);
v___x_44_ = lean_array_get_borrowed(v___x_43_, v_ks_36_, v_i_39_);
v___x_45_ = lp_aes__lean_aesRound(v_b_38_, v___x_44_);
v___x_46_ = lean_nat_add(v_i_39_, v_step_41_);
lean_dec(v_i_39_);
v_b_38_ = v___x_45_;
v_i_39_ = v___x_46_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg___boxed(lean_object* v_ks_48_, lean_object* v_range_49_, lean_object* v_b_50_, lean_object* v_i_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg(v_ks_48_, v_range_49_, v_b_50_, v_i_51_);
lean_dec_ref(v_range_49_);
lean_dec_ref(v_ks_48_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_cipher(lean_object* v_input_56_, lean_object* v_ks_57_){
_start:
{
lean_object* v___x_58_; lean_object* v_s_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v_s_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_58_ = lean_obj_once(&lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg___closed__0, &lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg___closed__0_once, _init_lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg___closed__0);
v_s_59_ = lp_aes__lean_blockToState(v_input_56_);
v___x_60_ = lean_unsigned_to_nat(0u);
v___x_61_ = lean_array_get_borrowed(v___x_58_, v_ks_57_, v___x_60_);
v_s_62_ = lp_aes__lean_addRoundKey(v_s_59_, v___x_61_);
v___x_63_ = lean_unsigned_to_nat(1u);
v___x_64_ = lean_unsigned_to_nat(10u);
v___x_65_ = ((lean_object*)(lp_aes__lean_cipher___closed__0));
v___x_66_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg(v_ks_57_, v___x_65_, v_s_62_, v___x_63_);
v___x_67_ = lean_array_get_borrowed(v___x_58_, v_ks_57_, v___x_64_);
v___x_68_ = lp_aes__lean_aesFinalRound(v___x_66_, v___x_67_);
v___x_69_ = lp_aes__lean_stateToBlock(v___x_68_);
lean_dec_ref(v___x_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_cipher___boxed(lean_object* v_input_70_, lean_object* v_ks_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = lp_aes__lean_cipher(v_input_70_, v_ks_71_);
lean_dec_ref(v_ks_71_);
lean_dec_ref(v_input_70_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0(lean_object* v_ks_73_, lean_object* v_range_74_, lean_object* v_b_75_, lean_object* v_i_76_, lean_object* v_hs_77_, lean_object* v_hl_78_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg(v_ks_73_, v_range_74_, v_b_75_, v_i_76_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___boxed(lean_object* v_ks_80_, lean_object* v_range_81_, lean_object* v_b_82_, lean_object* v_i_83_, lean_object* v_hs_84_, lean_object* v_hl_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0(v_ks_80_, v_range_81_, v_b_82_, v_i_83_, v_hs_84_, v_hl_85_);
lean_dec_ref(v_range_81_);
lean_dec_ref(v_ks_80_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00invCipher_spec__0___redArg(lean_object* v_ks_87_, lean_object* v_range_88_, lean_object* v_b_89_, lean_object* v_i_90_){
_start:
{
lean_object* v_stop_91_; lean_object* v_step_92_; uint8_t v___x_93_; 
v_stop_91_ = lean_ctor_get(v_range_88_, 1);
v_step_92_ = lean_ctor_get(v_range_88_, 2);
v___x_93_ = lean_nat_dec_lt(v_i_90_, v_stop_91_);
if (v___x_93_ == 0)
{
lean_dec(v_i_90_);
return v_b_89_;
}
else
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_94_ = lean_unsigned_to_nat(10u);
v___x_95_ = lean_obj_once(&lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg___closed__0, &lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg___closed__0_once, _init_lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg___closed__0);
v___x_96_ = lean_nat_sub(v___x_94_, v_i_90_);
v___x_97_ = lean_array_get_borrowed(v___x_95_, v_ks_87_, v___x_96_);
lean_dec(v___x_96_);
v___x_98_ = lp_aes__lean_invAesRound(v_b_89_, v___x_97_);
lean_dec_ref(v_b_89_);
v___x_99_ = lean_nat_add(v_i_90_, v_step_92_);
lean_dec(v_i_90_);
v_b_89_ = v___x_98_;
v_i_90_ = v___x_99_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00invCipher_spec__0___redArg___boxed(lean_object* v_ks_101_, lean_object* v_range_102_, lean_object* v_b_103_, lean_object* v_i_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00invCipher_spec__0___redArg(v_ks_101_, v_range_102_, v_b_103_, v_i_104_);
lean_dec_ref(v_range_102_);
lean_dec_ref(v_ks_101_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invCipher(lean_object* v_input_106_, lean_object* v_ks_107_){
_start:
{
lean_object* v___x_108_; lean_object* v_s_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v_s_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_108_ = lean_obj_once(&lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg___closed__0, &lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg___closed__0_once, _init_lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00cipher_spec__0___redArg___closed__0);
v_s_109_ = lp_aes__lean_blockToState(v_input_106_);
v___x_110_ = lean_unsigned_to_nat(10u);
v___x_111_ = lean_array_get_borrowed(v___x_108_, v_ks_107_, v___x_110_);
v_s_112_ = lp_aes__lean_addRoundKey(v_s_109_, v___x_111_);
v___x_113_ = lean_unsigned_to_nat(1u);
v___x_114_ = ((lean_object*)(lp_aes__lean_cipher___closed__0));
v___x_115_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00invCipher_spec__0___redArg(v_ks_107_, v___x_114_, v_s_112_, v___x_113_);
v___x_116_ = lean_unsigned_to_nat(0u);
v___x_117_ = lean_array_get_borrowed(v___x_108_, v_ks_107_, v___x_116_);
v___x_118_ = lp_aes__lean_invAesFinalRound(v___x_115_, v___x_117_);
lean_dec_ref(v___x_115_);
v___x_119_ = lp_aes__lean_stateToBlock(v___x_118_);
lean_dec_ref(v___x_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invCipher___boxed(lean_object* v_input_120_, lean_object* v_ks_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = lp_aes__lean_invCipher(v_input_120_, v_ks_121_);
lean_dec_ref(v_ks_121_);
lean_dec_ref(v_input_120_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00invCipher_spec__0(lean_object* v_ks_123_, lean_object* v_range_124_, lean_object* v_b_125_, lean_object* v_i_126_, lean_object* v_hs_127_, lean_object* v_hl_128_){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00invCipher_spec__0___redArg(v_ks_123_, v_range_124_, v_b_125_, v_i_126_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00invCipher_spec__0___boxed(lean_object* v_ks_130_, lean_object* v_range_131_, lean_object* v_b_132_, lean_object* v_i_133_, lean_object* v_hs_134_, lean_object* v_hl_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00invCipher_spec__0(v_ks_130_, v_range_131_, v_b_132_, v_i_133_, v_hs_134_, v_hl_135_);
lean_dec_ref(v_range_131_);
lean_dec_ref(v_ks_130_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_aesEncrypt(lean_object* v_plaintext_137_, lean_object* v_key_138_){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_139_ = lp_aes__lean_expandKey(v_key_138_);
v___x_140_ = lp_aes__lean_cipher(v_plaintext_137_, v___x_139_);
lean_dec_ref(v___x_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_aesEncrypt___boxed(lean_object* v_plaintext_141_, lean_object* v_key_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = lp_aes__lean_aesEncrypt(v_plaintext_141_, v_key_142_);
lean_dec_ref(v_key_142_);
lean_dec_ref(v_plaintext_141_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_aesDecrypt(lean_object* v_ciphertext_144_, lean_object* v_key_145_){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = lp_aes__lean_expandKey(v_key_145_);
v___x_147_ = lp_aes__lean_invCipher(v_ciphertext_144_, v___x_146_);
lean_dec_ref(v___x_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_aesDecrypt___boxed(lean_object* v_ciphertext_148_, lean_object* v_key_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = lp_aes__lean_aesDecrypt(v_ciphertext_148_, v_key_149_);
lean_dec_ref(v_key_149_);
lean_dec_ref(v_ciphertext_148_);
return v_res_150_;
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
