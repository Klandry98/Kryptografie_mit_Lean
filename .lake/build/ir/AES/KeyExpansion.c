// Lean compiler output
// Module: AES.KeyExpansion
// Imports: public import Init public meta import Init public import AES.Types public import AES.SBox
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
extern uint8_t l_instInhabitedUInt8;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_uint8_xor(uint8_t, uint8_t);
lean_object* l_Array_ofFn___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t lp_aes__lean_subByte(uint8_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
static const lean_array_object lp_aes__lean_rcon___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*10, .m_other = 0, .m_tag = 246}, .m_size = 10, .m_capacity = 10, .m_data = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(64) << 1) | 1)),((lean_object*)(((size_t)(128) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)(((size_t)(54) << 1) | 1))}};
static const lean_object* lp_aes__lean_rcon___closed__0 = (const lean_object*)&lp_aes__lean_rcon___closed__0_value;
LEAN_EXPORT const lean_object* lp_aes__lean_rcon = (const lean_object*)&lp_aes__lean_rcon___closed__0_value;
LEAN_EXPORT lean_object* lp_aes__lean_rotWord(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_rotWord___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subWord_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subWord_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_subWord(lean_object*);
LEAN_EXPORT uint8_t lp_aes__lean_xorWord___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_xorWord___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_xorWord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_extractWord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_extractWord___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_aes__lean_expandKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_aes__lean_expandKey___closed__0 = (const lean_object*)&lp_aes__lean_expandKey___closed__0_value;
static const lean_ctor_object lp_aes__lean_expandKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_aes__lean_expandKey___closed__1 = (const lean_object*)&lp_aes__lean_expandKey___closed__1_value;
static const lean_ctor_object lp_aes__lean_expandKey___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_aes__lean_expandKey___closed__2 = (const lean_object*)&lp_aes__lean_expandKey___closed__2_value;
static const lean_ctor_object lp_aes__lean_expandKey___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_aes__lean_expandKey___closed__3 = (const lean_object*)&lp_aes__lean_expandKey___closed__3_value;
LEAN_EXPORT lean_object* lp_aes__lean_expandKey(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_expandKey___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_rotWord(lean_object* v_w_34_){
_start:
{
uint8_t v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_35_ = l_instInhabitedUInt8;
v___x_36_ = lean_unsigned_to_nat(1u);
v___x_37_ = lean_box(v___x_35_);
v___x_38_ = lean_array_get(v___x_37_, v_w_34_, v___x_36_);
lean_dec(v___x_37_);
v___x_39_ = lean_unsigned_to_nat(2u);
v___x_40_ = lean_box(v___x_35_);
v___x_41_ = lean_array_get(v___x_40_, v_w_34_, v___x_39_);
lean_dec(v___x_40_);
v___x_42_ = lean_unsigned_to_nat(3u);
v___x_43_ = lean_box(v___x_35_);
v___x_44_ = lean_array_get(v___x_43_, v_w_34_, v___x_42_);
lean_dec(v___x_43_);
v___x_45_ = lean_unsigned_to_nat(0u);
v___x_46_ = lean_box(v___x_35_);
v___x_47_ = lean_array_get(v___x_46_, v_w_34_, v___x_45_);
lean_dec(v___x_46_);
v___x_48_ = lean_unsigned_to_nat(4u);
v___x_49_ = lean_mk_empty_array_with_capacity(v___x_48_);
v___x_50_ = lean_array_push(v___x_49_, v___x_38_);
v___x_51_ = lean_array_push(v___x_50_, v___x_41_);
v___x_52_ = lean_array_push(v___x_51_, v___x_44_);
v___x_53_ = lean_array_push(v___x_52_, v___x_47_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_rotWord___boxed(lean_object* v_w_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = lp_aes__lean_rotWord(v_w_54_);
lean_dec_ref(v_w_54_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subWord_spec__0(size_t v_sz_56_, size_t v_i_57_, lean_object* v_bs_58_){
_start:
{
uint8_t v___x_59_; 
v___x_59_ = lean_usize_dec_lt(v_i_57_, v_sz_56_);
if (v___x_59_ == 0)
{
return v_bs_58_;
}
else
{
lean_object* v_v_60_; lean_object* v___x_61_; lean_object* v_bs_x27_62_; uint8_t v___x_63_; uint8_t v___x_64_; size_t v___x_65_; size_t v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v_v_60_ = lean_array_uget(v_bs_58_, v_i_57_);
v___x_61_ = lean_unsigned_to_nat(0u);
v_bs_x27_62_ = lean_array_uset(v_bs_58_, v_i_57_, v___x_61_);
v___x_63_ = lean_unbox(v_v_60_);
lean_dec(v_v_60_);
v___x_64_ = lp_aes__lean_subByte(v___x_63_);
v___x_65_ = ((size_t)1ULL);
v___x_66_ = lean_usize_add(v_i_57_, v___x_65_);
v___x_67_ = lean_box(v___x_64_);
v___x_68_ = lean_array_uset(v_bs_x27_62_, v_i_57_, v___x_67_);
v_i_57_ = v___x_66_;
v_bs_58_ = v___x_68_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subWord_spec__0___boxed(lean_object* v_sz_70_, lean_object* v_i_71_, lean_object* v_bs_72_){
_start:
{
size_t v_sz_boxed_73_; size_t v_i_boxed_74_; lean_object* v_res_75_; 
v_sz_boxed_73_ = lean_unbox_usize(v_sz_70_);
lean_dec(v_sz_70_);
v_i_boxed_74_ = lean_unbox_usize(v_i_71_);
lean_dec(v_i_71_);
v_res_75_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subWord_spec__0(v_sz_boxed_73_, v_i_boxed_74_, v_bs_72_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_subWord(lean_object* v_w_76_){
_start:
{
size_t v_sz_77_; size_t v___x_78_; lean_object* v___x_79_; 
v_sz_77_ = lean_array_size(v_w_76_);
v___x_78_ = ((size_t)0ULL);
v___x_79_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subWord_spec__0(v_sz_77_, v___x_78_, v_w_76_);
return v___x_79_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean_xorWord___lam__0(uint8_t v___x_80_, lean_object* v_a_81_, lean_object* v_b_82_, lean_object* v_i_83_){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; uint8_t v___x_88_; uint8_t v___x_89_; uint8_t v___x_90_; 
v___x_84_ = lean_box(v___x_80_);
v___x_85_ = lean_array_get(v___x_84_, v_a_81_, v_i_83_);
lean_dec(v___x_84_);
v___x_86_ = lean_box(v___x_80_);
v___x_87_ = lean_array_get(v___x_86_, v_b_82_, v_i_83_);
lean_dec(v___x_86_);
v___x_88_ = lean_unbox(v___x_85_);
lean_dec(v___x_85_);
v___x_89_ = lean_unbox(v___x_87_);
lean_dec(v___x_87_);
v___x_90_ = lean_uint8_xor(v___x_88_, v___x_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_xorWord___lam__0___boxed(lean_object* v___x_91_, lean_object* v_a_92_, lean_object* v_b_93_, lean_object* v_i_94_){
_start:
{
uint8_t v___x_43__boxed_95_; uint8_t v_res_96_; lean_object* v_r_97_; 
v___x_43__boxed_95_ = lean_unbox(v___x_91_);
v_res_96_ = lp_aes__lean_xorWord___lam__0(v___x_43__boxed_95_, v_a_92_, v_b_93_, v_i_94_);
lean_dec(v_i_94_);
lean_dec_ref(v_b_93_);
lean_dec_ref(v_a_92_);
v_r_97_ = lean_box(v_res_96_);
return v_r_97_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_xorWord(lean_object* v_a_98_, lean_object* v_b_99_){
_start:
{
uint8_t v___x_100_; lean_object* v___x_101_; lean_object* v___f_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_100_ = l_instInhabitedUInt8;
v___x_101_ = lean_box(v___x_100_);
v___f_102_ = lean_alloc_closure((void*)(lp_aes__lean_xorWord___lam__0___boxed), 4, 3);
lean_closure_set(v___f_102_, 0, v___x_101_);
lean_closure_set(v___f_102_, 1, v_a_98_);
lean_closure_set(v___f_102_, 2, v_b_99_);
v___x_103_ = lean_unsigned_to_nat(4u);
v___x_104_ = l_Array_ofFn___redArg(v___x_103_, v___f_102_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_extractWord(lean_object* v_block_105_, lean_object* v_idx_106_){
_start:
{
uint8_t v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_107_ = l_instInhabitedUInt8;
v___x_108_ = lean_unsigned_to_nat(4u);
v___x_109_ = lean_nat_mul(v___x_108_, v_idx_106_);
v___x_110_ = lean_box(v___x_107_);
v___x_111_ = lean_array_get(v___x_110_, v_block_105_, v___x_109_);
lean_dec(v___x_110_);
v___x_112_ = lean_unsigned_to_nat(1u);
v___x_113_ = lean_nat_add(v___x_109_, v___x_112_);
v___x_114_ = lean_box(v___x_107_);
v___x_115_ = lean_array_get(v___x_114_, v_block_105_, v___x_113_);
lean_dec(v___x_113_);
lean_dec(v___x_114_);
v___x_116_ = lean_unsigned_to_nat(2u);
v___x_117_ = lean_nat_add(v___x_109_, v___x_116_);
v___x_118_ = lean_box(v___x_107_);
v___x_119_ = lean_array_get(v___x_118_, v_block_105_, v___x_117_);
lean_dec(v___x_117_);
lean_dec(v___x_118_);
v___x_120_ = lean_unsigned_to_nat(3u);
v___x_121_ = lean_nat_add(v___x_109_, v___x_120_);
lean_dec(v___x_109_);
v___x_122_ = lean_box(v___x_107_);
v___x_123_ = lean_array_get(v___x_122_, v_block_105_, v___x_121_);
lean_dec(v___x_121_);
lean_dec(v___x_122_);
v___x_124_ = lean_mk_empty_array_with_capacity(v___x_108_);
v___x_125_ = lean_array_push(v___x_124_, v___x_111_);
v___x_126_ = lean_array_push(v___x_125_, v___x_115_);
v___x_127_ = lean_array_push(v___x_126_, v___x_119_);
v___x_128_ = lean_array_push(v___x_127_, v___x_123_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_extractWord___boxed(lean_object* v_block_129_, lean_object* v_idx_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = lp_aes__lean_extractWord(v_block_129_, v_idx_130_);
lean_dec(v_idx_130_);
lean_dec_ref(v_block_129_);
return v_res_131_;
}
}
static lean_object* _init_lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = l_Array_instInhabited(lean_box(0));
return v___x_132_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___redArg(lean_object* v___x_133_, lean_object* v_range_134_, lean_object* v_b_135_, lean_object* v_i_136_){
_start:
{
lean_object* v_stop_137_; lean_object* v_step_138_; uint8_t v___x_139_; 
v_stop_137_ = lean_ctor_get(v_range_134_, 1);
v_step_138_ = lean_ctor_get(v_range_134_, 2);
v___x_139_ = lean_nat_dec_lt(v_i_136_, v_stop_137_);
if (v___x_139_ == 0)
{
lean_dec(v_i_136_);
return v_b_135_;
}
else
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_140_ = lean_unsigned_to_nat(4u);
v___x_141_ = lean_obj_once(&lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___redArg___closed__0, &lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___redArg___closed__0_once, _init_lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___redArg___closed__0);
v___x_142_ = lean_unsigned_to_nat(1u);
v___x_143_ = lean_nat_mul(v___x_140_, v_i_136_);
v___x_144_ = lean_array_get_borrowed(v___x_141_, v___x_133_, v___x_143_);
v___x_145_ = lean_nat_add(v___x_143_, v___x_142_);
v___x_146_ = lean_array_get_borrowed(v___x_141_, v___x_133_, v___x_145_);
lean_dec(v___x_145_);
v___x_147_ = lean_unsigned_to_nat(2u);
v___x_148_ = lean_nat_add(v___x_143_, v___x_147_);
v___x_149_ = lean_array_get_borrowed(v___x_141_, v___x_133_, v___x_148_);
lean_dec(v___x_148_);
v___x_150_ = lean_unsigned_to_nat(3u);
v___x_151_ = lean_nat_add(v___x_143_, v___x_150_);
lean_dec(v___x_143_);
v___x_152_ = lean_array_get_borrowed(v___x_141_, v___x_133_, v___x_151_);
lean_dec(v___x_151_);
lean_inc(v___x_144_);
v___x_153_ = l_Array_append___redArg(v___x_144_, v___x_146_);
v___x_154_ = l_Array_append___redArg(v___x_153_, v___x_149_);
v___x_155_ = l_Array_append___redArg(v___x_154_, v___x_152_);
v___x_156_ = lean_array_push(v_b_135_, v___x_155_);
v___x_157_ = lean_nat_add(v_i_136_, v_step_138_);
lean_dec(v_i_136_);
v_b_135_ = v___x_156_;
v_i_136_ = v___x_157_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___redArg___boxed(lean_object* v___x_159_, lean_object* v_range_160_, lean_object* v_b_161_, lean_object* v_i_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___redArg(v___x_159_, v_range_160_, v_b_161_, v_i_162_);
lean_dec_ref(v_range_160_);
lean_dec_ref(v___x_159_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__1___redArg(lean_object* v_range_164_, lean_object* v_b_165_, lean_object* v_i_166_){
_start:
{
lean_object* v_stop_167_; lean_object* v_step_168_; lean_object* v___y_170_; uint8_t v___x_174_; 
v_stop_167_ = lean_ctor_get(v_range_164_, 1);
v_step_168_ = lean_ctor_get(v_range_164_, 2);
v___x_174_ = lean_nat_dec_lt(v_i_166_, v_stop_167_);
if (v___x_174_ == 0)
{
lean_dec(v_i_166_);
return v_b_165_;
}
else
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_175_ = lean_unsigned_to_nat(1u);
v___x_176_ = lean_obj_once(&lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___redArg___closed__0, &lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___redArg___closed__0_once, _init_lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___redArg___closed__0);
v___x_177_ = lean_unsigned_to_nat(4u);
v___x_178_ = lean_unsigned_to_nat(0u);
v___x_179_ = lean_nat_sub(v_i_166_, v___x_175_);
v___x_180_ = lean_array_get_borrowed(v___x_176_, v_b_165_, v___x_179_);
lean_dec(v___x_179_);
v___x_181_ = lean_nat_sub(v_i_166_, v___x_177_);
v___x_182_ = lean_array_get_borrowed(v___x_176_, v_b_165_, v___x_181_);
lean_dec(v___x_181_);
v___x_183_ = lean_nat_mod(v_i_166_, v___x_177_);
v___x_184_ = lean_nat_dec_eq(v___x_183_, v___x_178_);
lean_dec(v___x_183_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; 
lean_inc(v___x_180_);
lean_inc(v___x_182_);
v___x_185_ = lp_aes__lean_xorWord(v___x_182_, v___x_180_);
v___y_170_ = v___x_185_;
goto v___jp_169_;
}
else
{
lean_object* v___x_186_; lean_object* v___x_187_; uint8_t v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; uint8_t v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_186_ = lp_aes__lean_rotWord(v___x_180_);
v___x_187_ = lp_aes__lean_subWord(v___x_186_);
v___x_188_ = l_instInhabitedUInt8;
v___x_189_ = ((lean_object*)(lp_aes__lean_rcon));
v___x_190_ = lean_unsigned_to_nat(2u);
v___x_191_ = lean_nat_shiftr(v_i_166_, v___x_190_);
v___x_192_ = lean_nat_sub(v___x_191_, v___x_175_);
lean_dec(v___x_191_);
v___x_193_ = lean_box(v___x_188_);
v___x_194_ = lean_array_get(v___x_193_, v___x_189_, v___x_192_);
lean_dec(v___x_192_);
lean_dec(v___x_193_);
v___x_195_ = 0;
v___x_196_ = lean_mk_empty_array_with_capacity(v___x_177_);
v___x_197_ = lean_array_push(v___x_196_, v___x_194_);
v___x_198_ = lean_box(v___x_195_);
v___x_199_ = lean_array_push(v___x_197_, v___x_198_);
v___x_200_ = lean_box(v___x_195_);
v___x_201_ = lean_array_push(v___x_199_, v___x_200_);
v___x_202_ = lean_box(v___x_195_);
v___x_203_ = lean_array_push(v___x_201_, v___x_202_);
lean_inc(v___x_182_);
v___x_204_ = lp_aes__lean_xorWord(v___x_182_, v___x_187_);
v___x_205_ = lp_aes__lean_xorWord(v___x_204_, v___x_203_);
v___y_170_ = v___x_205_;
goto v___jp_169_;
}
}
v___jp_169_:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = lean_array_push(v_b_165_, v___y_170_);
v___x_172_ = lean_nat_add(v_i_166_, v_step_168_);
lean_dec(v_i_166_);
v_b_165_ = v___x_171_;
v_i_166_ = v___x_172_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__1___redArg___boxed(lean_object* v_range_206_, lean_object* v_b_207_, lean_object* v_i_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__1___redArg(v_range_206_, v_b_207_, v_i_208_);
lean_dec_ref(v_range_206_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__0___redArg(lean_object* v_key_210_, lean_object* v_range_211_, lean_object* v_b_212_, lean_object* v_i_213_){
_start:
{
lean_object* v_stop_214_; lean_object* v_step_215_; uint8_t v___x_216_; 
v_stop_214_ = lean_ctor_get(v_range_211_, 1);
v_step_215_ = lean_ctor_get(v_range_211_, 2);
v___x_216_ = lean_nat_dec_lt(v_i_213_, v_stop_214_);
if (v___x_216_ == 0)
{
lean_dec(v_i_213_);
return v_b_212_;
}
else
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_217_ = lp_aes__lean_extractWord(v_key_210_, v_i_213_);
v___x_218_ = lean_array_push(v_b_212_, v___x_217_);
v___x_219_ = lean_nat_add(v_i_213_, v_step_215_);
lean_dec(v_i_213_);
v_b_212_ = v___x_218_;
v_i_213_ = v___x_219_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__0___redArg___boxed(lean_object* v_key_221_, lean_object* v_range_222_, lean_object* v_b_223_, lean_object* v_i_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__0___redArg(v_key_221_, v_range_222_, v_b_223_, v_i_224_);
lean_dec_ref(v_range_222_);
lean_dec_ref(v_key_221_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_expandKey(lean_object* v_key_240_){
_start:
{
lean_object* v___x_241_; lean_object* v_words_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_241_ = lean_unsigned_to_nat(0u);
v_words_242_ = ((lean_object*)(lp_aes__lean_expandKey___closed__0));
v___x_243_ = lean_unsigned_to_nat(4u);
v___x_244_ = ((lean_object*)(lp_aes__lean_expandKey___closed__1));
v___x_245_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__0___redArg(v_key_240_, v___x_244_, v_words_242_, v___x_241_);
v___x_246_ = ((lean_object*)(lp_aes__lean_expandKey___closed__2));
v___x_247_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__1___redArg(v___x_246_, v___x_245_, v___x_243_);
v___x_248_ = ((lean_object*)(lp_aes__lean_expandKey___closed__3));
v___x_249_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___redArg(v___x_247_, v___x_248_, v_words_242_, v___x_241_);
lean_dec_ref(v___x_247_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_expandKey___boxed(lean_object* v_key_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = lp_aes__lean_expandKey(v_key_250_);
lean_dec_ref(v_key_250_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__0(lean_object* v_key_252_, lean_object* v_range_253_, lean_object* v_b_254_, lean_object* v_i_255_, lean_object* v_hs_256_, lean_object* v_hl_257_){
_start:
{
lean_object* v___x_258_; 
v___x_258_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__0___redArg(v_key_252_, v_range_253_, v_b_254_, v_i_255_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__0___boxed(lean_object* v_key_259_, lean_object* v_range_260_, lean_object* v_b_261_, lean_object* v_i_262_, lean_object* v_hs_263_, lean_object* v_hl_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__0(v_key_259_, v_range_260_, v_b_261_, v_i_262_, v_hs_263_, v_hl_264_);
lean_dec_ref(v_range_260_);
lean_dec_ref(v_key_259_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__1(lean_object* v_range_266_, lean_object* v_b_267_, lean_object* v_i_268_, lean_object* v_hs_269_, lean_object* v_hl_270_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__1___redArg(v_range_266_, v_b_267_, v_i_268_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__1___boxed(lean_object* v_range_272_, lean_object* v_b_273_, lean_object* v_i_274_, lean_object* v_hs_275_, lean_object* v_hl_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__1(v_range_272_, v_b_273_, v_i_274_, v_hs_275_, v_hl_276_);
lean_dec_ref(v_range_272_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2(lean_object* v___x_278_, lean_object* v_range_279_, lean_object* v_b_280_, lean_object* v_i_281_, lean_object* v_hs_282_, lean_object* v_hl_283_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___redArg(v___x_278_, v_range_279_, v_b_280_, v_i_281_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2___boxed(lean_object* v___x_285_, lean_object* v_range_286_, lean_object* v_b_287_, lean_object* v_i_288_, lean_object* v_hs_289_, lean_object* v_hl_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00expandKey_spec__2(v___x_285_, v_range_286_, v_b_287_, v_i_288_, v_hs_289_, v_hl_290_);
lean_dec_ref(v_range_286_);
lean_dec_ref(v___x_285_);
return v_res_291_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_aes__lean_AES_Types(uint8_t builtin);
lean_object* initialize_aes__lean_AES_SBox(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_aes__lean_AES_KeyExpansion(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
