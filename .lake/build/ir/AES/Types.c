// Lean compiler output
// Module: AES.Types
// Imports: public import Init public meta import Init
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
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_uint8_of_nat(lean_object*);
uint8_t lean_uint8_sub(uint8_t, uint8_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_string_data(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_uint8_shift_left(uint8_t, uint8_t);
uint8_t lean_uint8_lor(uint8_t, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_uint8_shift_right(uint8_t, uint8_t);
uint8_t lean_uint8_land(uint8_t, uint8_t);
uint8_t lean_uint8_dec_lt(uint8_t, uint8_t);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t l_Char_ofNat(lean_object*);
lean_object* lean_string_mk(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern uint8_t l_instInhabitedUInt8;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_blockToState(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_blockToState___boxed(lean_object*);
static lean_once_cell_t lp_aes__lean_stateToBlock___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_stateToBlock___closed__0;
LEAN_EXPORT lean_object* lp_aes__lean_stateToBlock(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_stateToBlock___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_aes__lean_hexCharToNibble(uint32_t);
LEAN_EXPORT lean_object* lp_aes__lean_hexCharToNibble___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_hexToBlock_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_hexToBlock_go___boxed(lean_object*, lean_object*);
static const lean_array_object lp_aes__lean_hexToBlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_aes__lean_hexToBlock___closed__0 = (const lean_object*)&lp_aes__lean_hexToBlock___closed__0_value;
LEAN_EXPORT lean_object* lp_aes__lean_hexToBlock(lean_object*);
LEAN_EXPORT uint32_t lp_aes__lean_byteToHex___lam__0(uint8_t);
LEAN_EXPORT lean_object* lp_aes__lean_byteToHex___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_byteToHex(uint8_t);
LEAN_EXPORT lean_object* lp_aes__lean_byteToHex___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00blockToHex_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00blockToHex_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_aes__lean_blockToHex___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_aes__lean_blockToHex___closed__0 = (const lean_object*)&lp_aes__lean_blockToHex___closed__0_value;
LEAN_EXPORT lean_object* lp_aes__lean_blockToHex(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_blockToHex___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_blockToState(lean_object* v_b_1_){
_start:
{
uint8_t v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_2_ = l_instInhabitedUInt8;
v___x_3_ = lean_unsigned_to_nat(0u);
v___x_4_ = lean_box(v___x_2_);
v___x_5_ = lean_array_get(v___x_4_, v_b_1_, v___x_3_);
lean_dec(v___x_4_);
v___x_6_ = lean_unsigned_to_nat(1u);
v___x_7_ = lean_box(v___x_2_);
v___x_8_ = lean_array_get(v___x_7_, v_b_1_, v___x_6_);
lean_dec(v___x_7_);
v___x_9_ = lean_unsigned_to_nat(2u);
v___x_10_ = lean_box(v___x_2_);
v___x_11_ = lean_array_get(v___x_10_, v_b_1_, v___x_9_);
lean_dec(v___x_10_);
v___x_12_ = lean_unsigned_to_nat(3u);
v___x_13_ = lean_box(v___x_2_);
v___x_14_ = lean_array_get(v___x_13_, v_b_1_, v___x_12_);
lean_dec(v___x_13_);
v___x_15_ = lean_unsigned_to_nat(4u);
v___x_16_ = lean_mk_empty_array_with_capacity(v___x_15_);
lean_inc_ref_n(v___x_16_, 4);
v___x_17_ = lean_array_push(v___x_16_, v___x_5_);
v___x_18_ = lean_array_push(v___x_17_, v___x_8_);
v___x_19_ = lean_array_push(v___x_18_, v___x_11_);
v___x_20_ = lean_array_push(v___x_19_, v___x_14_);
v___x_21_ = lean_box(v___x_2_);
v___x_22_ = lean_array_get(v___x_21_, v_b_1_, v___x_15_);
lean_dec(v___x_21_);
v___x_23_ = lean_unsigned_to_nat(5u);
v___x_24_ = lean_box(v___x_2_);
v___x_25_ = lean_array_get(v___x_24_, v_b_1_, v___x_23_);
lean_dec(v___x_24_);
v___x_26_ = lean_unsigned_to_nat(6u);
v___x_27_ = lean_box(v___x_2_);
v___x_28_ = lean_array_get(v___x_27_, v_b_1_, v___x_26_);
lean_dec(v___x_27_);
v___x_29_ = lean_unsigned_to_nat(7u);
v___x_30_ = lean_box(v___x_2_);
v___x_31_ = lean_array_get(v___x_30_, v_b_1_, v___x_29_);
lean_dec(v___x_30_);
v___x_32_ = lean_array_push(v___x_16_, v___x_22_);
v___x_33_ = lean_array_push(v___x_32_, v___x_25_);
v___x_34_ = lean_array_push(v___x_33_, v___x_28_);
v___x_35_ = lean_array_push(v___x_34_, v___x_31_);
v___x_36_ = lean_unsigned_to_nat(8u);
v___x_37_ = lean_box(v___x_2_);
v___x_38_ = lean_array_get(v___x_37_, v_b_1_, v___x_36_);
lean_dec(v___x_37_);
v___x_39_ = lean_unsigned_to_nat(9u);
v___x_40_ = lean_box(v___x_2_);
v___x_41_ = lean_array_get(v___x_40_, v_b_1_, v___x_39_);
lean_dec(v___x_40_);
v___x_42_ = lean_unsigned_to_nat(10u);
v___x_43_ = lean_box(v___x_2_);
v___x_44_ = lean_array_get(v___x_43_, v_b_1_, v___x_42_);
lean_dec(v___x_43_);
v___x_45_ = lean_unsigned_to_nat(11u);
v___x_46_ = lean_box(v___x_2_);
v___x_47_ = lean_array_get(v___x_46_, v_b_1_, v___x_45_);
lean_dec(v___x_46_);
v___x_48_ = lean_array_push(v___x_16_, v___x_38_);
v___x_49_ = lean_array_push(v___x_48_, v___x_41_);
v___x_50_ = lean_array_push(v___x_49_, v___x_44_);
v___x_51_ = lean_array_push(v___x_50_, v___x_47_);
v___x_52_ = lean_unsigned_to_nat(12u);
v___x_53_ = lean_box(v___x_2_);
v___x_54_ = lean_array_get(v___x_53_, v_b_1_, v___x_52_);
lean_dec(v___x_53_);
v___x_55_ = lean_unsigned_to_nat(13u);
v___x_56_ = lean_box(v___x_2_);
v___x_57_ = lean_array_get(v___x_56_, v_b_1_, v___x_55_);
lean_dec(v___x_56_);
v___x_58_ = lean_unsigned_to_nat(14u);
v___x_59_ = lean_box(v___x_2_);
v___x_60_ = lean_array_get(v___x_59_, v_b_1_, v___x_58_);
lean_dec(v___x_59_);
v___x_61_ = lean_unsigned_to_nat(15u);
v___x_62_ = lean_box(v___x_2_);
v___x_63_ = lean_array_get(v___x_62_, v_b_1_, v___x_61_);
lean_dec(v___x_62_);
v___x_64_ = lean_array_push(v___x_16_, v___x_54_);
v___x_65_ = lean_array_push(v___x_64_, v___x_57_);
v___x_66_ = lean_array_push(v___x_65_, v___x_60_);
v___x_67_ = lean_array_push(v___x_66_, v___x_63_);
v___x_68_ = lean_array_push(v___x_16_, v___x_20_);
v___x_69_ = lean_array_push(v___x_68_, v___x_35_);
v___x_70_ = lean_array_push(v___x_69_, v___x_51_);
v___x_71_ = lean_array_push(v___x_70_, v___x_67_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_blockToState___boxed(lean_object* v_b_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = lp_aes__lean_blockToState(v_b_72_);
lean_dec_ref(v_b_72_);
return v_res_73_;
}
}
static lean_object* _init_lp_aes__lean_stateToBlock___closed__0(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_Array_instInhabited(lean_box(0));
return v___x_74_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_stateToBlock(lean_object* v_s_75_){
_start:
{
lean_object* v___x_76_; uint8_t v___x_77_; lean_object* v___x_78_; lean_object* v_col0_79_; lean_object* v___x_80_; lean_object* v_col1_81_; lean_object* v___x_82_; lean_object* v_col2_83_; lean_object* v___x_84_; lean_object* v_col3_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_76_ = lean_obj_once(&lp_aes__lean_stateToBlock___closed__0, &lp_aes__lean_stateToBlock___closed__0_once, _init_lp_aes__lean_stateToBlock___closed__0);
v___x_77_ = l_instInhabitedUInt8;
v___x_78_ = lean_unsigned_to_nat(0u);
v_col0_79_ = lean_array_get_borrowed(v___x_76_, v_s_75_, v___x_78_);
v___x_80_ = lean_unsigned_to_nat(1u);
v_col1_81_ = lean_array_get_borrowed(v___x_76_, v_s_75_, v___x_80_);
v___x_82_ = lean_unsigned_to_nat(2u);
v_col2_83_ = lean_array_get_borrowed(v___x_76_, v_s_75_, v___x_82_);
v___x_84_ = lean_unsigned_to_nat(3u);
v_col3_85_ = lean_array_get_borrowed(v___x_76_, v_s_75_, v___x_84_);
v___x_86_ = lean_box(v___x_77_);
v___x_87_ = lean_array_get(v___x_86_, v_col0_79_, v___x_78_);
lean_dec(v___x_86_);
v___x_88_ = lean_box(v___x_77_);
v___x_89_ = lean_array_get(v___x_88_, v_col0_79_, v___x_80_);
lean_dec(v___x_88_);
v___x_90_ = lean_box(v___x_77_);
v___x_91_ = lean_array_get(v___x_90_, v_col0_79_, v___x_82_);
lean_dec(v___x_90_);
v___x_92_ = lean_box(v___x_77_);
v___x_93_ = lean_array_get(v___x_92_, v_col0_79_, v___x_84_);
lean_dec(v___x_92_);
v___x_94_ = lean_box(v___x_77_);
v___x_95_ = lean_array_get(v___x_94_, v_col1_81_, v___x_78_);
lean_dec(v___x_94_);
v___x_96_ = lean_box(v___x_77_);
v___x_97_ = lean_array_get(v___x_96_, v_col1_81_, v___x_80_);
lean_dec(v___x_96_);
v___x_98_ = lean_box(v___x_77_);
v___x_99_ = lean_array_get(v___x_98_, v_col1_81_, v___x_82_);
lean_dec(v___x_98_);
v___x_100_ = lean_box(v___x_77_);
v___x_101_ = lean_array_get(v___x_100_, v_col1_81_, v___x_84_);
lean_dec(v___x_100_);
v___x_102_ = lean_box(v___x_77_);
v___x_103_ = lean_array_get(v___x_102_, v_col2_83_, v___x_78_);
lean_dec(v___x_102_);
v___x_104_ = lean_box(v___x_77_);
v___x_105_ = lean_array_get(v___x_104_, v_col2_83_, v___x_80_);
lean_dec(v___x_104_);
v___x_106_ = lean_box(v___x_77_);
v___x_107_ = lean_array_get(v___x_106_, v_col2_83_, v___x_82_);
lean_dec(v___x_106_);
v___x_108_ = lean_box(v___x_77_);
v___x_109_ = lean_array_get(v___x_108_, v_col2_83_, v___x_84_);
lean_dec(v___x_108_);
v___x_110_ = lean_box(v___x_77_);
v___x_111_ = lean_array_get(v___x_110_, v_col3_85_, v___x_78_);
lean_dec(v___x_110_);
v___x_112_ = lean_box(v___x_77_);
v___x_113_ = lean_array_get(v___x_112_, v_col3_85_, v___x_80_);
lean_dec(v___x_112_);
v___x_114_ = lean_box(v___x_77_);
v___x_115_ = lean_array_get(v___x_114_, v_col3_85_, v___x_82_);
lean_dec(v___x_114_);
v___x_116_ = lean_box(v___x_77_);
v___x_117_ = lean_array_get(v___x_116_, v_col3_85_, v___x_84_);
lean_dec(v___x_116_);
v___x_118_ = lean_unsigned_to_nat(16u);
v___x_119_ = lean_mk_empty_array_with_capacity(v___x_118_);
v___x_120_ = lean_array_push(v___x_119_, v___x_87_);
v___x_121_ = lean_array_push(v___x_120_, v___x_89_);
v___x_122_ = lean_array_push(v___x_121_, v___x_91_);
v___x_123_ = lean_array_push(v___x_122_, v___x_93_);
v___x_124_ = lean_array_push(v___x_123_, v___x_95_);
v___x_125_ = lean_array_push(v___x_124_, v___x_97_);
v___x_126_ = lean_array_push(v___x_125_, v___x_99_);
v___x_127_ = lean_array_push(v___x_126_, v___x_101_);
v___x_128_ = lean_array_push(v___x_127_, v___x_103_);
v___x_129_ = lean_array_push(v___x_128_, v___x_105_);
v___x_130_ = lean_array_push(v___x_129_, v___x_107_);
v___x_131_ = lean_array_push(v___x_130_, v___x_109_);
v___x_132_ = lean_array_push(v___x_131_, v___x_111_);
v___x_133_ = lean_array_push(v___x_132_, v___x_113_);
v___x_134_ = lean_array_push(v___x_133_, v___x_115_);
v___x_135_ = lean_array_push(v___x_134_, v___x_117_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_stateToBlock___boxed(lean_object* v_s_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = lp_aes__lean_stateToBlock(v_s_136_);
lean_dec_ref(v_s_136_);
return v_res_137_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean_hexCharToNibble(uint32_t v_c_138_){
_start:
{
uint8_t v___y_140_; uint8_t v___y_147_; uint8_t v___y_157_; uint32_t v___x_166_; uint8_t v___x_167_; 
v___x_166_ = 48;
v___x_167_ = lean_uint32_dec_le(v___x_166_, v_c_138_);
if (v___x_167_ == 0)
{
v___y_157_ = v___x_167_;
goto v___jp_156_;
}
else
{
uint32_t v___x_168_; uint8_t v___x_169_; 
v___x_168_ = 57;
v___x_169_ = lean_uint32_dec_le(v_c_138_, v___x_168_);
v___y_157_ = v___x_169_;
goto v___jp_156_;
}
v___jp_139_:
{
if (v___y_140_ == 0)
{
uint8_t v___x_141_; 
v___x_141_ = 0;
return v___x_141_;
}
else
{
lean_object* v___x_142_; uint8_t v___x_143_; uint8_t v___x_144_; uint8_t v___x_145_; 
v___x_142_ = lean_uint32_to_nat(v_c_138_);
v___x_143_ = lean_uint8_of_nat(v___x_142_);
lean_dec(v___x_142_);
v___x_144_ = 55;
v___x_145_ = lean_uint8_sub(v___x_143_, v___x_144_);
return v___x_145_;
}
}
v___jp_146_:
{
if (v___y_147_ == 0)
{
uint32_t v___x_148_; uint8_t v___x_149_; 
v___x_148_ = 65;
v___x_149_ = lean_uint32_dec_le(v___x_148_, v_c_138_);
if (v___x_149_ == 0)
{
v___y_140_ = v___x_149_;
goto v___jp_139_;
}
else
{
uint32_t v___x_150_; uint8_t v___x_151_; 
v___x_150_ = 70;
v___x_151_ = lean_uint32_dec_le(v_c_138_, v___x_150_);
v___y_140_ = v___x_151_;
goto v___jp_139_;
}
}
else
{
lean_object* v___x_152_; uint8_t v___x_153_; uint8_t v___x_154_; uint8_t v___x_155_; 
v___x_152_ = lean_uint32_to_nat(v_c_138_);
v___x_153_ = lean_uint8_of_nat(v___x_152_);
lean_dec(v___x_152_);
v___x_154_ = 87;
v___x_155_ = lean_uint8_sub(v___x_153_, v___x_154_);
return v___x_155_;
}
}
v___jp_156_:
{
if (v___y_157_ == 0)
{
uint32_t v___x_158_; uint8_t v___x_159_; 
v___x_158_ = 97;
v___x_159_ = lean_uint32_dec_le(v___x_158_, v_c_138_);
if (v___x_159_ == 0)
{
v___y_147_ = v___x_159_;
goto v___jp_146_;
}
else
{
uint32_t v___x_160_; uint8_t v___x_161_; 
v___x_160_ = 102;
v___x_161_ = lean_uint32_dec_le(v_c_138_, v___x_160_);
v___y_147_ = v___x_161_;
goto v___jp_146_;
}
}
else
{
lean_object* v___x_162_; uint8_t v___x_163_; uint8_t v___x_164_; uint8_t v___x_165_; 
v___x_162_ = lean_uint32_to_nat(v_c_138_);
v___x_163_ = lean_uint8_of_nat(v___x_162_);
lean_dec(v___x_162_);
v___x_164_ = 48;
v___x_165_ = lean_uint8_sub(v___x_163_, v___x_164_);
return v___x_165_;
}
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean_hexCharToNibble___boxed(lean_object* v_c_170_){
_start:
{
uint32_t v_c_boxed_171_; uint8_t v_res_172_; lean_object* v_r_173_; 
v_c_boxed_171_ = lean_unbox_uint32(v_c_170_);
lean_dec(v_c_170_);
v_res_172_ = lp_aes__lean_hexCharToNibble(v_c_boxed_171_);
v_r_173_ = lean_box(v_res_172_);
return v_r_173_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_hexToBlock_go(lean_object* v_a_174_, lean_object* v_a_175_){
_start:
{
if (lean_obj_tag(v_a_174_) == 1)
{
lean_object* v_tail_176_; 
v_tail_176_ = lean_ctor_get(v_a_174_, 1);
if (lean_obj_tag(v_tail_176_) == 1)
{
lean_object* v_head_177_; lean_object* v_head_178_; lean_object* v_tail_179_; uint32_t v___x_180_; uint8_t v___x_181_; uint8_t v___x_182_; uint8_t v___x_183_; uint32_t v___x_184_; uint8_t v___x_185_; uint8_t v_byte_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v_head_177_ = lean_ctor_get(v_a_174_, 0);
v_head_178_ = lean_ctor_get(v_tail_176_, 0);
v_tail_179_ = lean_ctor_get(v_tail_176_, 1);
v___x_180_ = lean_unbox_uint32(v_head_177_);
v___x_181_ = lp_aes__lean_hexCharToNibble(v___x_180_);
v___x_182_ = 4;
v___x_183_ = lean_uint8_shift_left(v___x_181_, v___x_182_);
v___x_184_ = lean_unbox_uint32(v_head_178_);
v___x_185_ = lp_aes__lean_hexCharToNibble(v___x_184_);
v_byte_186_ = lean_uint8_lor(v___x_183_, v___x_185_);
v___x_187_ = lean_box(v_byte_186_);
v___x_188_ = lean_array_push(v_a_175_, v___x_187_);
v_a_174_ = v_tail_179_;
v_a_175_ = v___x_188_;
goto _start;
}
else
{
return v_a_175_;
}
}
else
{
return v_a_175_;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean_hexToBlock_go___boxed(lean_object* v_a_190_, lean_object* v_a_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = lp_aes__lean_hexToBlock_go(v_a_190_, v_a_191_);
lean_dec(v_a_190_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_hexToBlock(lean_object* v_s_195_){
_start:
{
lean_object* v_chars_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v_chars_196_ = lean_string_data(v_s_195_);
v___x_197_ = ((lean_object*)(lp_aes__lean_hexToBlock___closed__0));
v___x_198_ = lp_aes__lean_hexToBlock_go(v_chars_196_, v___x_197_);
lean_dec(v_chars_196_);
return v___x_198_;
}
}
LEAN_EXPORT uint32_t lp_aes__lean_byteToHex___lam__0(uint8_t v_n_199_){
_start:
{
uint8_t v___x_200_; uint8_t v___x_201_; 
v___x_200_ = 10;
v___x_201_ = lean_uint8_dec_lt(v_n_199_, v___x_200_);
if (v___x_201_ == 0)
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; uint32_t v___x_205_; 
v___x_202_ = lean_uint8_to_nat(v_n_199_);
v___x_203_ = lean_unsigned_to_nat(87u);
v___x_204_ = lean_nat_add(v___x_202_, v___x_203_);
v___x_205_ = l_Char_ofNat(v___x_204_);
lean_dec(v___x_204_);
return v___x_205_;
}
else
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; uint32_t v___x_209_; 
v___x_206_ = lean_uint8_to_nat(v_n_199_);
v___x_207_ = lean_unsigned_to_nat(48u);
v___x_208_ = lean_nat_add(v___x_206_, v___x_207_);
v___x_209_ = l_Char_ofNat(v___x_208_);
lean_dec(v___x_208_);
return v___x_209_;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean_byteToHex___lam__0___boxed(lean_object* v_n_210_){
_start:
{
uint8_t v_n_boxed_211_; uint32_t v_res_212_; lean_object* v_r_213_; 
v_n_boxed_211_ = lean_unbox(v_n_210_);
v_res_212_ = lp_aes__lean_byteToHex___lam__0(v_n_boxed_211_);
v_r_213_ = lean_box_uint32(v_res_212_);
return v_r_213_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_byteToHex(uint8_t v_b_214_){
_start:
{
uint8_t v___x_215_; uint8_t v_hi_216_; uint8_t v___x_217_; uint8_t v_lo_218_; uint32_t v___x_219_; uint32_t v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_215_ = 4;
v_hi_216_ = lean_uint8_shift_right(v_b_214_, v___x_215_);
v___x_217_ = 15;
v_lo_218_ = lean_uint8_land(v_b_214_, v___x_217_);
v___x_219_ = lp_aes__lean_byteToHex___lam__0(v_hi_216_);
v___x_220_ = lp_aes__lean_byteToHex___lam__0(v_lo_218_);
v___x_221_ = lean_box(0);
v___x_222_ = lean_box_uint32(v___x_220_);
v___x_223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
lean_ctor_set(v___x_223_, 1, v___x_221_);
v___x_224_ = lean_box_uint32(v___x_219_);
v___x_225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
lean_ctor_set(v___x_225_, 1, v___x_223_);
v___x_226_ = lean_string_mk(v___x_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_byteToHex___boxed(lean_object* v_b_227_){
_start:
{
uint8_t v_b_boxed_228_; lean_object* v_res_229_; 
v_b_boxed_228_ = lean_unbox(v_b_227_);
v_res_229_ = lp_aes__lean_byteToHex(v_b_boxed_228_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00blockToHex_spec__0(lean_object* v_as_230_, size_t v_i_231_, size_t v_stop_232_, lean_object* v_b_233_){
_start:
{
uint8_t v___x_234_; 
v___x_234_ = lean_usize_dec_eq(v_i_231_, v_stop_232_);
if (v___x_234_ == 0)
{
lean_object* v___x_235_; uint8_t v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; size_t v___x_239_; size_t v___x_240_; 
v___x_235_ = lean_array_uget_borrowed(v_as_230_, v_i_231_);
v___x_236_ = lean_unbox(v___x_235_);
v___x_237_ = lp_aes__lean_byteToHex(v___x_236_);
v___x_238_ = lean_string_append(v_b_233_, v___x_237_);
lean_dec_ref(v___x_237_);
v___x_239_ = ((size_t)1ULL);
v___x_240_ = lean_usize_add(v_i_231_, v___x_239_);
v_i_231_ = v___x_240_;
v_b_233_ = v___x_238_;
goto _start;
}
else
{
return v_b_233_;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00blockToHex_spec__0___boxed(lean_object* v_as_242_, lean_object* v_i_243_, lean_object* v_stop_244_, lean_object* v_b_245_){
_start:
{
size_t v_i_boxed_246_; size_t v_stop_boxed_247_; lean_object* v_res_248_; 
v_i_boxed_246_ = lean_unbox_usize(v_i_243_);
lean_dec(v_i_243_);
v_stop_boxed_247_ = lean_unbox_usize(v_stop_244_);
lean_dec(v_stop_244_);
v_res_248_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00blockToHex_spec__0(v_as_242_, v_i_boxed_246_, v_stop_boxed_247_, v_b_245_);
lean_dec_ref(v_as_242_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_blockToHex(lean_object* v_b_250_){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; uint8_t v___x_254_; 
v___x_251_ = ((lean_object*)(lp_aes__lean_blockToHex___closed__0));
v___x_252_ = lean_unsigned_to_nat(0u);
v___x_253_ = lean_array_get_size(v_b_250_);
v___x_254_ = lean_nat_dec_lt(v___x_252_, v___x_253_);
if (v___x_254_ == 0)
{
return v___x_251_;
}
else
{
uint8_t v___x_255_; 
v___x_255_ = lean_nat_dec_le(v___x_253_, v___x_253_);
if (v___x_255_ == 0)
{
if (v___x_254_ == 0)
{
return v___x_251_;
}
else
{
size_t v___x_256_; size_t v___x_257_; lean_object* v___x_258_; 
v___x_256_ = ((size_t)0ULL);
v___x_257_ = lean_usize_of_nat(v___x_253_);
v___x_258_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00blockToHex_spec__0(v_b_250_, v___x_256_, v___x_257_, v___x_251_);
return v___x_258_;
}
}
else
{
size_t v___x_259_; size_t v___x_260_; lean_object* v___x_261_; 
v___x_259_ = ((size_t)0ULL);
v___x_260_ = lean_usize_of_nat(v___x_253_);
v___x_261_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00blockToHex_spec__0(v_b_250_, v___x_259_, v___x_260_, v___x_251_);
return v___x_261_;
}
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean_blockToHex___boxed(lean_object* v_b_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = lp_aes__lean_blockToHex(v_b_262_);
lean_dec_ref(v_b_262_);
return v_res_263_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_aes__lean_AES_Types(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
