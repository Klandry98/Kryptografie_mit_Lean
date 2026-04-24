// Lean compiler output
// Module: AES.Transforms
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
extern uint8_t l_instInhabitedUInt8;
lean_object* l_Array_instInhabited(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_uint8_shift_right(uint8_t, uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_uint8_land(uint8_t, uint8_t);
uint8_t lean_uint8_shift_left(uint8_t, uint8_t);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint8_xor(uint8_t, uint8_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
size_t lean_array_size(lean_object*);
uint8_t lp_aes__lean_invSubByte(uint8_t);
lean_object* lp_aes__lean_blockToState(lean_object*);
lean_object* l_Array_ofFn___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lp_aes__lean_subByte(uint8_t);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subBytes_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subBytes_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subBytes_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subBytes_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_subBytes(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invSubBytes_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invSubBytes_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invSubBytes_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invSubBytes_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invSubBytes(lean_object*);
static lean_once_cell_t lp_aes__lean_getRow___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_getRow___closed__0;
LEAN_EXPORT lean_object* lp_aes__lean_getRow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_getRow___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_stateFromRows(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_stateFromRows___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_aes__lean_rotateLeft___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_rotateLeft___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_rotateLeft(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_aes__lean_rotateRight___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_rotateRight___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_rotateRight(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_shiftRows(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_shiftRows___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invShiftRows(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invShiftRows___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_aes__lean_xtime(uint8_t);
LEAN_EXPORT lean_object* lp_aes__lean_xtime___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00gfMul_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00gfMul_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_aes__lean_gfMul___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_aes__lean_gfMul___closed__0 = (const lean_object*)&lp_aes__lean_gfMul___closed__0_value;
LEAN_EXPORT uint8_t lp_aes__lean_gfMul(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_aes__lean_gfMul___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00gfMul_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00gfMul_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_mixColumn(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_mixColumn___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invMixColumn(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invMixColumn___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00mixColumns_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00mixColumns_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_mixColumns(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invMixColumns_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invMixColumns_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invMixColumns(lean_object*);
LEAN_EXPORT uint8_t lp_aes__lean_addRoundKey___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_addRoundKey___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_addRoundKey___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_addRoundKey___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_addRoundKey(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_addRoundKey___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subBytes_spec__0(size_t v_sz_1_, size_t v_i_2_, lean_object* v_bs_3_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = lean_usize_dec_lt(v_i_2_, v_sz_1_);
if (v___x_4_ == 0)
{
return v_bs_3_;
}
else
{
lean_object* v_v_5_; lean_object* v___x_6_; lean_object* v_bs_x27_7_; uint8_t v___x_8_; uint8_t v___x_9_; size_t v___x_10_; size_t v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v_v_5_ = lean_array_uget(v_bs_3_, v_i_2_);
v___x_6_ = lean_unsigned_to_nat(0u);
v_bs_x27_7_ = lean_array_uset(v_bs_3_, v_i_2_, v___x_6_);
v___x_8_ = lean_unbox(v_v_5_);
lean_dec(v_v_5_);
v___x_9_ = lp_aes__lean_subByte(v___x_8_);
v___x_10_ = ((size_t)1ULL);
v___x_11_ = lean_usize_add(v_i_2_, v___x_10_);
v___x_12_ = lean_box(v___x_9_);
v___x_13_ = lean_array_uset(v_bs_x27_7_, v_i_2_, v___x_12_);
v_i_2_ = v___x_11_;
v_bs_3_ = v___x_13_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subBytes_spec__0___boxed(lean_object* v_sz_15_, lean_object* v_i_16_, lean_object* v_bs_17_){
_start:
{
size_t v_sz_boxed_18_; size_t v_i_boxed_19_; lean_object* v_res_20_; 
v_sz_boxed_18_ = lean_unbox_usize(v_sz_15_);
lean_dec(v_sz_15_);
v_i_boxed_19_ = lean_unbox_usize(v_i_16_);
lean_dec(v_i_16_);
v_res_20_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subBytes_spec__0(v_sz_boxed_18_, v_i_boxed_19_, v_bs_17_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subBytes_spec__1(size_t v_sz_21_, size_t v_i_22_, lean_object* v_bs_23_){
_start:
{
uint8_t v___x_24_; 
v___x_24_ = lean_usize_dec_lt(v_i_22_, v_sz_21_);
if (v___x_24_ == 0)
{
return v_bs_23_;
}
else
{
lean_object* v_v_25_; lean_object* v___x_26_; lean_object* v_bs_x27_27_; size_t v_sz_28_; size_t v___x_29_; lean_object* v___x_30_; size_t v___x_31_; size_t v___x_32_; lean_object* v___x_33_; 
v_v_25_ = lean_array_uget(v_bs_23_, v_i_22_);
v___x_26_ = lean_unsigned_to_nat(0u);
v_bs_x27_27_ = lean_array_uset(v_bs_23_, v_i_22_, v___x_26_);
v_sz_28_ = lean_array_size(v_v_25_);
v___x_29_ = ((size_t)0ULL);
v___x_30_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subBytes_spec__0(v_sz_28_, v___x_29_, v_v_25_);
v___x_31_ = ((size_t)1ULL);
v___x_32_ = lean_usize_add(v_i_22_, v___x_31_);
v___x_33_ = lean_array_uset(v_bs_x27_27_, v_i_22_, v___x_30_);
v_i_22_ = v___x_32_;
v_bs_23_ = v___x_33_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subBytes_spec__1___boxed(lean_object* v_sz_35_, lean_object* v_i_36_, lean_object* v_bs_37_){
_start:
{
size_t v_sz_boxed_38_; size_t v_i_boxed_39_; lean_object* v_res_40_; 
v_sz_boxed_38_ = lean_unbox_usize(v_sz_35_);
lean_dec(v_sz_35_);
v_i_boxed_39_ = lean_unbox_usize(v_i_36_);
lean_dec(v_i_36_);
v_res_40_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subBytes_spec__1(v_sz_boxed_38_, v_i_boxed_39_, v_bs_37_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_subBytes(lean_object* v_s_41_){
_start:
{
size_t v_sz_42_; size_t v___x_43_; lean_object* v___x_44_; 
v_sz_42_ = lean_array_size(v_s_41_);
v___x_43_ = ((size_t)0ULL);
v___x_44_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00subBytes_spec__1(v_sz_42_, v___x_43_, v_s_41_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invSubBytes_spec__0(size_t v_sz_45_, size_t v_i_46_, lean_object* v_bs_47_){
_start:
{
uint8_t v___x_48_; 
v___x_48_ = lean_usize_dec_lt(v_i_46_, v_sz_45_);
if (v___x_48_ == 0)
{
return v_bs_47_;
}
else
{
lean_object* v_v_49_; lean_object* v___x_50_; lean_object* v_bs_x27_51_; uint8_t v___x_52_; uint8_t v___x_53_; size_t v___x_54_; size_t v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v_v_49_ = lean_array_uget(v_bs_47_, v_i_46_);
v___x_50_ = lean_unsigned_to_nat(0u);
v_bs_x27_51_ = lean_array_uset(v_bs_47_, v_i_46_, v___x_50_);
v___x_52_ = lean_unbox(v_v_49_);
lean_dec(v_v_49_);
v___x_53_ = lp_aes__lean_invSubByte(v___x_52_);
v___x_54_ = ((size_t)1ULL);
v___x_55_ = lean_usize_add(v_i_46_, v___x_54_);
v___x_56_ = lean_box(v___x_53_);
v___x_57_ = lean_array_uset(v_bs_x27_51_, v_i_46_, v___x_56_);
v_i_46_ = v___x_55_;
v_bs_47_ = v___x_57_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invSubBytes_spec__0___boxed(lean_object* v_sz_59_, lean_object* v_i_60_, lean_object* v_bs_61_){
_start:
{
size_t v_sz_boxed_62_; size_t v_i_boxed_63_; lean_object* v_res_64_; 
v_sz_boxed_62_ = lean_unbox_usize(v_sz_59_);
lean_dec(v_sz_59_);
v_i_boxed_63_ = lean_unbox_usize(v_i_60_);
lean_dec(v_i_60_);
v_res_64_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invSubBytes_spec__0(v_sz_boxed_62_, v_i_boxed_63_, v_bs_61_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invSubBytes_spec__1(size_t v_sz_65_, size_t v_i_66_, lean_object* v_bs_67_){
_start:
{
uint8_t v___x_68_; 
v___x_68_ = lean_usize_dec_lt(v_i_66_, v_sz_65_);
if (v___x_68_ == 0)
{
return v_bs_67_;
}
else
{
lean_object* v_v_69_; lean_object* v___x_70_; lean_object* v_bs_x27_71_; size_t v_sz_72_; size_t v___x_73_; lean_object* v___x_74_; size_t v___x_75_; size_t v___x_76_; lean_object* v___x_77_; 
v_v_69_ = lean_array_uget(v_bs_67_, v_i_66_);
v___x_70_ = lean_unsigned_to_nat(0u);
v_bs_x27_71_ = lean_array_uset(v_bs_67_, v_i_66_, v___x_70_);
v_sz_72_ = lean_array_size(v_v_69_);
v___x_73_ = ((size_t)0ULL);
v___x_74_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invSubBytes_spec__0(v_sz_72_, v___x_73_, v_v_69_);
v___x_75_ = ((size_t)1ULL);
v___x_76_ = lean_usize_add(v_i_66_, v___x_75_);
v___x_77_ = lean_array_uset(v_bs_x27_71_, v_i_66_, v___x_74_);
v_i_66_ = v___x_76_;
v_bs_67_ = v___x_77_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invSubBytes_spec__1___boxed(lean_object* v_sz_79_, lean_object* v_i_80_, lean_object* v_bs_81_){
_start:
{
size_t v_sz_boxed_82_; size_t v_i_boxed_83_; lean_object* v_res_84_; 
v_sz_boxed_82_ = lean_unbox_usize(v_sz_79_);
lean_dec(v_sz_79_);
v_i_boxed_83_ = lean_unbox_usize(v_i_80_);
lean_dec(v_i_80_);
v_res_84_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invSubBytes_spec__1(v_sz_boxed_82_, v_i_boxed_83_, v_bs_81_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invSubBytes(lean_object* v_s_85_){
_start:
{
size_t v_sz_86_; size_t v___x_87_; lean_object* v___x_88_; 
v_sz_86_ = lean_array_size(v_s_85_);
v___x_87_ = ((size_t)0ULL);
v___x_88_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invSubBytes_spec__1(v_sz_86_, v___x_87_, v_s_85_);
return v___x_88_;
}
}
static lean_object* _init_lp_aes__lean_getRow___closed__0(void){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = l_Array_instInhabited(lean_box(0));
return v___x_89_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_getRow(lean_object* v_s_90_, lean_object* v_i_91_){
_start:
{
uint8_t v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_92_ = l_instInhabitedUInt8;
v___x_93_ = lean_obj_once(&lp_aes__lean_getRow___closed__0, &lp_aes__lean_getRow___closed__0_once, _init_lp_aes__lean_getRow___closed__0);
v___x_94_ = lean_unsigned_to_nat(0u);
v___x_95_ = lean_array_get_borrowed(v___x_93_, v_s_90_, v___x_94_);
v___x_96_ = lean_box(v___x_92_);
v___x_97_ = lean_array_get(v___x_96_, v___x_95_, v_i_91_);
lean_dec(v___x_96_);
v___x_98_ = lean_unsigned_to_nat(1u);
v___x_99_ = lean_array_get_borrowed(v___x_93_, v_s_90_, v___x_98_);
v___x_100_ = lean_box(v___x_92_);
v___x_101_ = lean_array_get(v___x_100_, v___x_99_, v_i_91_);
lean_dec(v___x_100_);
v___x_102_ = lean_unsigned_to_nat(2u);
v___x_103_ = lean_array_get_borrowed(v___x_93_, v_s_90_, v___x_102_);
v___x_104_ = lean_box(v___x_92_);
v___x_105_ = lean_array_get(v___x_104_, v___x_103_, v_i_91_);
lean_dec(v___x_104_);
v___x_106_ = lean_unsigned_to_nat(3u);
v___x_107_ = lean_array_get_borrowed(v___x_93_, v_s_90_, v___x_106_);
v___x_108_ = lean_box(v___x_92_);
v___x_109_ = lean_array_get(v___x_108_, v___x_107_, v_i_91_);
lean_dec(v___x_108_);
v___x_110_ = lean_unsigned_to_nat(4u);
v___x_111_ = lean_mk_empty_array_with_capacity(v___x_110_);
v___x_112_ = lean_array_push(v___x_111_, v___x_97_);
v___x_113_ = lean_array_push(v___x_112_, v___x_101_);
v___x_114_ = lean_array_push(v___x_113_, v___x_105_);
v___x_115_ = lean_array_push(v___x_114_, v___x_109_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_getRow___boxed(lean_object* v_s_116_, lean_object* v_i_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = lp_aes__lean_getRow(v_s_116_, v_i_117_);
lean_dec(v_i_117_);
lean_dec_ref(v_s_116_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_stateFromRows(lean_object* v_r0_119_, lean_object* v_r1_120_, lean_object* v_r2_121_, lean_object* v_r3_122_){
_start:
{
uint8_t v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_123_ = l_instInhabitedUInt8;
v___x_124_ = lean_unsigned_to_nat(0u);
v___x_125_ = lean_box(v___x_123_);
v___x_126_ = lean_array_get(v___x_125_, v_r0_119_, v___x_124_);
lean_dec(v___x_125_);
v___x_127_ = lean_box(v___x_123_);
v___x_128_ = lean_array_get(v___x_127_, v_r1_120_, v___x_124_);
lean_dec(v___x_127_);
v___x_129_ = lean_box(v___x_123_);
v___x_130_ = lean_array_get(v___x_129_, v_r2_121_, v___x_124_);
lean_dec(v___x_129_);
v___x_131_ = lean_box(v___x_123_);
v___x_132_ = lean_array_get(v___x_131_, v_r3_122_, v___x_124_);
lean_dec(v___x_131_);
v___x_133_ = lean_unsigned_to_nat(4u);
v___x_134_ = lean_mk_empty_array_with_capacity(v___x_133_);
lean_inc_ref_n(v___x_134_, 4);
v___x_135_ = lean_array_push(v___x_134_, v___x_126_);
v___x_136_ = lean_array_push(v___x_135_, v___x_128_);
v___x_137_ = lean_array_push(v___x_136_, v___x_130_);
v___x_138_ = lean_array_push(v___x_137_, v___x_132_);
v___x_139_ = lean_unsigned_to_nat(1u);
v___x_140_ = lean_box(v___x_123_);
v___x_141_ = lean_array_get(v___x_140_, v_r0_119_, v___x_139_);
lean_dec(v___x_140_);
v___x_142_ = lean_box(v___x_123_);
v___x_143_ = lean_array_get(v___x_142_, v_r1_120_, v___x_139_);
lean_dec(v___x_142_);
v___x_144_ = lean_box(v___x_123_);
v___x_145_ = lean_array_get(v___x_144_, v_r2_121_, v___x_139_);
lean_dec(v___x_144_);
v___x_146_ = lean_box(v___x_123_);
v___x_147_ = lean_array_get(v___x_146_, v_r3_122_, v___x_139_);
lean_dec(v___x_146_);
v___x_148_ = lean_array_push(v___x_134_, v___x_141_);
v___x_149_ = lean_array_push(v___x_148_, v___x_143_);
v___x_150_ = lean_array_push(v___x_149_, v___x_145_);
v___x_151_ = lean_array_push(v___x_150_, v___x_147_);
v___x_152_ = lean_unsigned_to_nat(2u);
v___x_153_ = lean_box(v___x_123_);
v___x_154_ = lean_array_get(v___x_153_, v_r0_119_, v___x_152_);
lean_dec(v___x_153_);
v___x_155_ = lean_box(v___x_123_);
v___x_156_ = lean_array_get(v___x_155_, v_r1_120_, v___x_152_);
lean_dec(v___x_155_);
v___x_157_ = lean_box(v___x_123_);
v___x_158_ = lean_array_get(v___x_157_, v_r2_121_, v___x_152_);
lean_dec(v___x_157_);
v___x_159_ = lean_box(v___x_123_);
v___x_160_ = lean_array_get(v___x_159_, v_r3_122_, v___x_152_);
lean_dec(v___x_159_);
v___x_161_ = lean_array_push(v___x_134_, v___x_154_);
v___x_162_ = lean_array_push(v___x_161_, v___x_156_);
v___x_163_ = lean_array_push(v___x_162_, v___x_158_);
v___x_164_ = lean_array_push(v___x_163_, v___x_160_);
v___x_165_ = lean_unsigned_to_nat(3u);
v___x_166_ = lean_box(v___x_123_);
v___x_167_ = lean_array_get(v___x_166_, v_r0_119_, v___x_165_);
lean_dec(v___x_166_);
v___x_168_ = lean_box(v___x_123_);
v___x_169_ = lean_array_get(v___x_168_, v_r1_120_, v___x_165_);
lean_dec(v___x_168_);
v___x_170_ = lean_box(v___x_123_);
v___x_171_ = lean_array_get(v___x_170_, v_r2_121_, v___x_165_);
lean_dec(v___x_170_);
v___x_172_ = lean_box(v___x_123_);
v___x_173_ = lean_array_get(v___x_172_, v_r3_122_, v___x_165_);
lean_dec(v___x_172_);
v___x_174_ = lean_array_push(v___x_134_, v___x_167_);
v___x_175_ = lean_array_push(v___x_174_, v___x_169_);
v___x_176_ = lean_array_push(v___x_175_, v___x_171_);
v___x_177_ = lean_array_push(v___x_176_, v___x_173_);
v___x_178_ = lean_array_push(v___x_134_, v___x_138_);
v___x_179_ = lean_array_push(v___x_178_, v___x_151_);
v___x_180_ = lean_array_push(v___x_179_, v___x_164_);
v___x_181_ = lean_array_push(v___x_180_, v___x_177_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_stateFromRows___boxed(lean_object* v_r0_182_, lean_object* v_r1_183_, lean_object* v_r2_184_, lean_object* v_r3_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = lp_aes__lean_stateFromRows(v_r0_182_, v_r1_183_, v_r2_184_, v_r3_185_);
lean_dec_ref(v_r3_185_);
lean_dec_ref(v_r2_184_);
lean_dec_ref(v_r1_183_);
lean_dec_ref(v_r0_182_);
return v_res_186_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean_rotateLeft___lam__0(lean_object* v_n_187_, lean_object* v___x_188_, uint8_t v___x_189_, lean_object* v_row_190_, lean_object* v_i_191_){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_192_ = lean_nat_add(v_i_191_, v_n_187_);
v___x_193_ = lean_nat_mod(v___x_192_, v___x_188_);
lean_dec(v___x_192_);
v___x_194_ = lean_box(v___x_189_);
v___x_195_ = lean_array_get(v___x_194_, v_row_190_, v___x_193_);
lean_dec(v___x_193_);
lean_dec(v___x_194_);
v___x_196_ = lean_unbox(v___x_195_);
lean_dec(v___x_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_rotateLeft___lam__0___boxed(lean_object* v_n_197_, lean_object* v___x_198_, lean_object* v___x_199_, lean_object* v_row_200_, lean_object* v_i_201_){
_start:
{
uint8_t v___x_55__boxed_202_; uint8_t v_res_203_; lean_object* v_r_204_; 
v___x_55__boxed_202_ = lean_unbox(v___x_199_);
v_res_203_ = lp_aes__lean_rotateLeft___lam__0(v_n_197_, v___x_198_, v___x_55__boxed_202_, v_row_200_, v_i_201_);
lean_dec(v_i_201_);
lean_dec_ref(v_row_200_);
lean_dec(v___x_198_);
lean_dec(v_n_197_);
v_r_204_ = lean_box(v_res_203_);
return v_r_204_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_rotateLeft(lean_object* v_row_205_, lean_object* v_n_206_){
_start:
{
uint8_t v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___f_210_; lean_object* v___x_211_; 
v___x_207_ = l_instInhabitedUInt8;
v___x_208_ = lean_unsigned_to_nat(4u);
v___x_209_ = lean_box(v___x_207_);
v___f_210_ = lean_alloc_closure((void*)(lp_aes__lean_rotateLeft___lam__0___boxed), 5, 4);
lean_closure_set(v___f_210_, 0, v_n_206_);
lean_closure_set(v___f_210_, 1, v___x_208_);
lean_closure_set(v___f_210_, 2, v___x_209_);
lean_closure_set(v___f_210_, 3, v_row_205_);
v___x_211_ = l_Array_ofFn___redArg(v___x_208_, v___f_210_);
return v___x_211_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean_rotateRight___lam__0(lean_object* v___x_212_, lean_object* v_n_213_, uint8_t v___x_214_, lean_object* v_row_215_, lean_object* v_i_216_){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_217_ = lean_nat_add(v_i_216_, v___x_212_);
v___x_218_ = lean_nat_mod(v_n_213_, v___x_212_);
v___x_219_ = lean_nat_sub(v___x_217_, v___x_218_);
lean_dec(v___x_218_);
lean_dec(v___x_217_);
v___x_220_ = lean_nat_mod(v___x_219_, v___x_212_);
lean_dec(v___x_219_);
v___x_221_ = lean_box(v___x_214_);
v___x_222_ = lean_array_get(v___x_221_, v_row_215_, v___x_220_);
lean_dec(v___x_220_);
lean_dec(v___x_221_);
v___x_223_ = lean_unbox(v___x_222_);
lean_dec(v___x_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_rotateRight___lam__0___boxed(lean_object* v___x_224_, lean_object* v_n_225_, lean_object* v___x_226_, lean_object* v_row_227_, lean_object* v_i_228_){
_start:
{
uint8_t v___x_74__boxed_229_; uint8_t v_res_230_; lean_object* v_r_231_; 
v___x_74__boxed_229_ = lean_unbox(v___x_226_);
v_res_230_ = lp_aes__lean_rotateRight___lam__0(v___x_224_, v_n_225_, v___x_74__boxed_229_, v_row_227_, v_i_228_);
lean_dec(v_i_228_);
lean_dec_ref(v_row_227_);
lean_dec(v_n_225_);
lean_dec(v___x_224_);
v_r_231_ = lean_box(v_res_230_);
return v_r_231_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_rotateRight(lean_object* v_row_232_, lean_object* v_n_233_){
_start:
{
uint8_t v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___f_237_; lean_object* v___x_238_; 
v___x_234_ = l_instInhabitedUInt8;
v___x_235_ = lean_unsigned_to_nat(4u);
v___x_236_ = lean_box(v___x_234_);
v___f_237_ = lean_alloc_closure((void*)(lp_aes__lean_rotateRight___lam__0___boxed), 5, 4);
lean_closure_set(v___f_237_, 0, v___x_235_);
lean_closure_set(v___f_237_, 1, v_n_233_);
lean_closure_set(v___f_237_, 2, v___x_236_);
lean_closure_set(v___f_237_, 3, v_row_232_);
v___x_238_ = l_Array_ofFn___redArg(v___x_235_, v___f_237_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_shiftRows(lean_object* v_s_239_){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_240_ = lean_unsigned_to_nat(0u);
v___x_241_ = lp_aes__lean_getRow(v_s_239_, v___x_240_);
v___x_242_ = lean_unsigned_to_nat(1u);
v___x_243_ = lp_aes__lean_getRow(v_s_239_, v___x_242_);
v___x_244_ = lp_aes__lean_rotateLeft(v___x_243_, v___x_242_);
v___x_245_ = lean_unsigned_to_nat(2u);
v___x_246_ = lp_aes__lean_getRow(v_s_239_, v___x_245_);
v___x_247_ = lp_aes__lean_rotateLeft(v___x_246_, v___x_245_);
v___x_248_ = lean_unsigned_to_nat(3u);
v___x_249_ = lp_aes__lean_getRow(v_s_239_, v___x_248_);
v___x_250_ = lp_aes__lean_rotateLeft(v___x_249_, v___x_248_);
v___x_251_ = lp_aes__lean_stateFromRows(v___x_241_, v___x_244_, v___x_247_, v___x_250_);
lean_dec_ref(v___x_250_);
lean_dec_ref(v___x_247_);
lean_dec_ref(v___x_244_);
lean_dec_ref(v___x_241_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_shiftRows___boxed(lean_object* v_s_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = lp_aes__lean_shiftRows(v_s_252_);
lean_dec_ref(v_s_252_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invShiftRows(lean_object* v_s_254_){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_255_ = lean_unsigned_to_nat(0u);
v___x_256_ = lp_aes__lean_getRow(v_s_254_, v___x_255_);
v___x_257_ = lean_unsigned_to_nat(1u);
v___x_258_ = lp_aes__lean_getRow(v_s_254_, v___x_257_);
v___x_259_ = lp_aes__lean_rotateRight(v___x_258_, v___x_257_);
v___x_260_ = lean_unsigned_to_nat(2u);
v___x_261_ = lp_aes__lean_getRow(v_s_254_, v___x_260_);
v___x_262_ = lp_aes__lean_rotateRight(v___x_261_, v___x_260_);
v___x_263_ = lean_unsigned_to_nat(3u);
v___x_264_ = lp_aes__lean_getRow(v_s_254_, v___x_263_);
v___x_265_ = lp_aes__lean_rotateRight(v___x_264_, v___x_263_);
v___x_266_ = lp_aes__lean_stateFromRows(v___x_256_, v___x_259_, v___x_262_, v___x_265_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___x_262_);
lean_dec_ref(v___x_259_);
lean_dec_ref(v___x_256_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invShiftRows___boxed(lean_object* v_s_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = lp_aes__lean_invShiftRows(v_s_267_);
lean_dec_ref(v_s_267_);
return v_res_268_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean_xtime(uint8_t v_b_269_){
_start:
{
uint8_t v___x_270_; uint8_t v_shifted_271_; uint8_t v___x_272_; uint8_t v___x_273_; uint8_t v___x_274_; uint8_t v___x_275_; 
v___x_270_ = 1;
v_shifted_271_ = lean_uint8_shift_left(v_b_269_, v___x_270_);
v___x_272_ = 128;
v___x_273_ = lean_uint8_land(v_b_269_, v___x_272_);
v___x_274_ = 0;
v___x_275_ = lean_uint8_dec_eq(v___x_273_, v___x_274_);
if (v___x_275_ == 0)
{
uint8_t v___x_276_; uint8_t v___x_277_; 
v___x_276_ = 27;
v___x_277_ = lean_uint8_xor(v_shifted_271_, v___x_276_);
return v___x_277_;
}
else
{
return v_shifted_271_;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean_xtime___boxed(lean_object* v_b_278_){
_start:
{
uint8_t v_b_boxed_279_; uint8_t v_res_280_; lean_object* v_r_281_; 
v_b_boxed_279_ = lean_unbox(v_b_278_);
v_res_280_ = lp_aes__lean_xtime(v_b_boxed_279_);
v_r_281_ = lean_box(v_res_280_);
return v_r_281_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00gfMul_spec__0___redArg(lean_object* v_range_282_, lean_object* v_b_283_, lean_object* v_i_284_){
_start:
{
lean_object* v_stop_285_; lean_object* v_step_286_; uint8_t v___y_288_; uint8_t v___y_289_; uint8_t v_aa_290_; uint8_t v_bb_291_; uint8_t v___x_300_; 
v_stop_285_ = lean_ctor_get(v_range_282_, 1);
v_step_286_ = lean_ctor_get(v_range_282_, 2);
v___x_300_ = lean_nat_dec_lt(v_i_284_, v_stop_285_);
if (v___x_300_ == 0)
{
lean_dec(v_i_284_);
return v_b_283_;
}
else
{
lean_object* v_snd_301_; lean_object* v_fst_302_; lean_object* v_fst_303_; lean_object* v_snd_304_; uint8_t v_result_305_; uint8_t v_aa_307_; uint8_t v_result_308_; uint8_t v___x_318_; uint8_t v___x_319_; uint8_t v___x_320_; uint8_t v___x_321_; 
v_snd_301_ = lean_ctor_get(v_b_283_, 1);
lean_inc(v_snd_301_);
v_fst_302_ = lean_ctor_get(v_b_283_, 0);
lean_inc(v_fst_302_);
lean_dec_ref(v_b_283_);
v_fst_303_ = lean_ctor_get(v_snd_301_, 0);
lean_inc(v_fst_303_);
v_snd_304_ = lean_ctor_get(v_snd_301_, 1);
lean_inc(v_snd_304_);
lean_dec(v_snd_301_);
v_result_305_ = 0;
v___x_318_ = 1;
v___x_319_ = lean_unbox(v_fst_303_);
v___x_320_ = lean_uint8_land(v___x_319_, v___x_318_);
v___x_321_ = lean_uint8_dec_eq(v___x_320_, v_result_305_);
if (v___x_321_ == 0)
{
uint8_t v___x_322_; uint8_t v___x_323_; uint8_t v___x_324_; uint8_t v___x_325_; 
v___x_322_ = lean_unbox(v_snd_304_);
lean_dec(v_snd_304_);
v___x_323_ = lean_unbox(v_fst_302_);
v___x_324_ = lean_uint8_xor(v___x_322_, v___x_323_);
v___x_325_ = lean_unbox(v_fst_302_);
lean_dec(v_fst_302_);
v_aa_307_ = v___x_325_;
v_result_308_ = v___x_324_;
goto v___jp_306_;
}
else
{
uint8_t v___x_326_; uint8_t v___x_327_; 
v___x_326_ = lean_unbox(v_fst_302_);
lean_dec(v_fst_302_);
v___x_327_ = lean_unbox(v_snd_304_);
lean_dec(v_snd_304_);
v_aa_307_ = v___x_326_;
v_result_308_ = v___x_327_;
goto v___jp_306_;
}
v___jp_306_:
{
uint8_t v___x_309_; uint8_t v___x_310_; uint8_t v___x_311_; uint8_t v___x_312_; uint8_t v___x_313_; 
v___x_309_ = 128;
v___x_310_ = lean_uint8_land(v_aa_307_, v___x_309_);
v___x_311_ = 1;
v___x_312_ = lean_uint8_shift_left(v_aa_307_, v___x_311_);
v___x_313_ = lean_uint8_dec_eq(v___x_310_, v_result_305_);
if (v___x_313_ == 0)
{
uint8_t v___x_314_; uint8_t v___x_315_; uint8_t v___x_316_; 
v___x_314_ = 27;
v___x_315_ = lean_uint8_xor(v___x_312_, v___x_314_);
v___x_316_ = lean_unbox(v_fst_303_);
lean_dec(v_fst_303_);
v___y_288_ = v_result_308_;
v___y_289_ = v___x_311_;
v_aa_290_ = v___x_315_;
v_bb_291_ = v___x_316_;
goto v___jp_287_;
}
else
{
uint8_t v___x_317_; 
v___x_317_ = lean_unbox(v_fst_303_);
lean_dec(v_fst_303_);
v___y_288_ = v_result_308_;
v___y_289_ = v___x_311_;
v_aa_290_ = v___x_312_;
v_bb_291_ = v___x_317_;
goto v___jp_287_;
}
}
}
v___jp_287_:
{
uint8_t v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_292_ = lean_uint8_shift_right(v_bb_291_, v___y_289_);
v___x_293_ = lean_box(v___x_292_);
v___x_294_ = lean_box(v___y_288_);
v___x_295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_293_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
v___x_296_ = lean_box(v_aa_290_);
v___x_297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set(v___x_297_, 1, v___x_295_);
v___x_298_ = lean_nat_add(v_i_284_, v_step_286_);
lean_dec(v_i_284_);
v_b_283_ = v___x_297_;
v_i_284_ = v___x_298_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00gfMul_spec__0___redArg___boxed(lean_object* v_range_328_, lean_object* v_b_329_, lean_object* v_i_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00gfMul_spec__0___redArg(v_range_328_, v_b_329_, v_i_330_);
lean_dec_ref(v_range_328_);
return v_res_331_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean_gfMul(uint8_t v_a_336_, uint8_t v_b_337_){
_start:
{
lean_object* v___x_338_; uint8_t v_result_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v_snd_347_; lean_object* v_snd_348_; uint8_t v___x_349_; 
v___x_338_ = lean_unsigned_to_nat(0u);
v_result_339_ = 0;
v___x_340_ = ((lean_object*)(lp_aes__lean_gfMul___closed__0));
v___x_341_ = lean_box(v_b_337_);
v___x_342_ = lean_box(v_result_339_);
v___x_343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_343_, 0, v___x_341_);
lean_ctor_set(v___x_343_, 1, v___x_342_);
v___x_344_ = lean_box(v_a_336_);
v___x_345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_345_, 0, v___x_344_);
lean_ctor_set(v___x_345_, 1, v___x_343_);
v___x_346_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00gfMul_spec__0___redArg(v___x_340_, v___x_345_, v___x_338_);
v_snd_347_ = lean_ctor_get(v___x_346_, 1);
lean_inc(v_snd_347_);
lean_dec_ref(v___x_346_);
v_snd_348_ = lean_ctor_get(v_snd_347_, 1);
lean_inc(v_snd_348_);
lean_dec(v_snd_347_);
v___x_349_ = lean_unbox(v_snd_348_);
lean_dec(v_snd_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_gfMul___boxed(lean_object* v_a_350_, lean_object* v_b_351_){
_start:
{
uint8_t v_a_boxed_352_; uint8_t v_b_boxed_353_; uint8_t v_res_354_; lean_object* v_r_355_; 
v_a_boxed_352_ = lean_unbox(v_a_350_);
v_b_boxed_353_ = lean_unbox(v_b_351_);
v_res_354_ = lp_aes__lean_gfMul(v_a_boxed_352_, v_b_boxed_353_);
v_r_355_ = lean_box(v_res_354_);
return v_r_355_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00gfMul_spec__0(lean_object* v_range_356_, lean_object* v_b_357_, lean_object* v_i_358_, lean_object* v_hs_359_, lean_object* v_hl_360_){
_start:
{
lean_object* v___x_361_; 
v___x_361_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00gfMul_spec__0___redArg(v_range_356_, v_b_357_, v_i_358_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00gfMul_spec__0___boxed(lean_object* v_range_362_, lean_object* v_b_363_, lean_object* v_i_364_, lean_object* v_hs_365_, lean_object* v_hl_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = lp_aes__lean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00gfMul_spec__0(v_range_362_, v_b_363_, v_i_364_, v_hs_365_, v_hl_366_);
lean_dec_ref(v_range_362_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_mixColumn(lean_object* v_col_368_){
_start:
{
uint8_t v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v_s0_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v_s1_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v_s2_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v_s3_381_; uint8_t v___x_382_; uint8_t v___x_383_; uint8_t v___x_384_; uint8_t v___x_385_; uint8_t v___x_386_; uint8_t v___x_387_; uint8_t v___x_388_; uint8_t v___x_389_; uint8_t v___x_390_; uint8_t v___x_391_; uint8_t v___x_392_; uint8_t v___x_393_; uint8_t v___x_394_; uint8_t v___x_395_; uint8_t v___x_396_; uint8_t v___x_397_; uint8_t v___x_398_; uint8_t v___x_399_; uint8_t v___x_400_; uint8_t v___x_401_; uint8_t v___x_402_; uint8_t v___x_403_; uint8_t v___x_404_; uint8_t v___x_405_; uint8_t v___x_406_; uint8_t v___x_407_; uint8_t v___x_408_; uint8_t v___x_409_; uint8_t v___x_410_; uint8_t v___x_411_; uint8_t v___x_412_; uint8_t v___x_413_; uint8_t v___x_414_; uint8_t v___x_415_; uint8_t v___x_416_; uint8_t v___x_417_; uint8_t v___x_418_; uint8_t v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_369_ = l_instInhabitedUInt8;
v___x_370_ = lean_unsigned_to_nat(0u);
v___x_371_ = lean_box(v___x_369_);
v_s0_372_ = lean_array_get(v___x_371_, v_col_368_, v___x_370_);
lean_dec(v___x_371_);
v___x_373_ = lean_unsigned_to_nat(1u);
v___x_374_ = lean_box(v___x_369_);
v_s1_375_ = lean_array_get(v___x_374_, v_col_368_, v___x_373_);
lean_dec(v___x_374_);
v___x_376_ = lean_unsigned_to_nat(2u);
v___x_377_ = lean_box(v___x_369_);
v_s2_378_ = lean_array_get(v___x_377_, v_col_368_, v___x_376_);
lean_dec(v___x_377_);
v___x_379_ = lean_unsigned_to_nat(3u);
v___x_380_ = lean_box(v___x_369_);
v_s3_381_ = lean_array_get(v___x_380_, v_col_368_, v___x_379_);
lean_dec(v___x_380_);
v___x_382_ = 2;
v___x_383_ = lean_unbox(v_s0_372_);
v___x_384_ = lp_aes__lean_gfMul(v___x_382_, v___x_383_);
v___x_385_ = 3;
v___x_386_ = lean_unbox(v_s1_375_);
v___x_387_ = lp_aes__lean_gfMul(v___x_385_, v___x_386_);
v___x_388_ = lean_uint8_xor(v___x_384_, v___x_387_);
v___x_389_ = lean_unbox(v_s2_378_);
v___x_390_ = lean_uint8_xor(v___x_388_, v___x_389_);
v___x_391_ = lean_unbox(v_s3_381_);
v___x_392_ = lean_uint8_xor(v___x_390_, v___x_391_);
v___x_393_ = lean_unbox(v_s1_375_);
v___x_394_ = lp_aes__lean_gfMul(v___x_382_, v___x_393_);
v___x_395_ = lean_unbox(v_s0_372_);
v___x_396_ = lean_uint8_xor(v___x_395_, v___x_394_);
v___x_397_ = lean_unbox(v_s2_378_);
v___x_398_ = lp_aes__lean_gfMul(v___x_385_, v___x_397_);
v___x_399_ = lean_uint8_xor(v___x_396_, v___x_398_);
v___x_400_ = lean_unbox(v_s3_381_);
v___x_401_ = lean_uint8_xor(v___x_399_, v___x_400_);
v___x_402_ = lean_unbox(v_s0_372_);
v___x_403_ = lean_unbox(v_s1_375_);
v___x_404_ = lean_uint8_xor(v___x_402_, v___x_403_);
v___x_405_ = lean_unbox(v_s2_378_);
v___x_406_ = lp_aes__lean_gfMul(v___x_382_, v___x_405_);
v___x_407_ = lean_uint8_xor(v___x_404_, v___x_406_);
v___x_408_ = lean_unbox(v_s3_381_);
v___x_409_ = lp_aes__lean_gfMul(v___x_385_, v___x_408_);
v___x_410_ = lean_uint8_xor(v___x_407_, v___x_409_);
v___x_411_ = lean_unbox(v_s0_372_);
lean_dec(v_s0_372_);
v___x_412_ = lp_aes__lean_gfMul(v___x_385_, v___x_411_);
v___x_413_ = lean_unbox(v_s1_375_);
lean_dec(v_s1_375_);
v___x_414_ = lean_uint8_xor(v___x_412_, v___x_413_);
v___x_415_ = lean_unbox(v_s2_378_);
lean_dec(v_s2_378_);
v___x_416_ = lean_uint8_xor(v___x_414_, v___x_415_);
v___x_417_ = lean_unbox(v_s3_381_);
lean_dec(v_s3_381_);
v___x_418_ = lp_aes__lean_gfMul(v___x_382_, v___x_417_);
v___x_419_ = lean_uint8_xor(v___x_416_, v___x_418_);
v___x_420_ = lean_unsigned_to_nat(4u);
v___x_421_ = lean_mk_empty_array_with_capacity(v___x_420_);
v___x_422_ = lean_box(v___x_392_);
v___x_423_ = lean_array_push(v___x_421_, v___x_422_);
v___x_424_ = lean_box(v___x_401_);
v___x_425_ = lean_array_push(v___x_423_, v___x_424_);
v___x_426_ = lean_box(v___x_410_);
v___x_427_ = lean_array_push(v___x_425_, v___x_426_);
v___x_428_ = lean_box(v___x_419_);
v___x_429_ = lean_array_push(v___x_427_, v___x_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_mixColumn___boxed(lean_object* v_col_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = lp_aes__lean_mixColumn(v_col_430_);
lean_dec_ref(v_col_430_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invMixColumn(lean_object* v_col_432_){
_start:
{
uint8_t v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v_s0_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v_s1_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v_s2_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v_s3_445_; uint8_t v___x_446_; uint8_t v___x_447_; uint8_t v___x_448_; uint8_t v___x_449_; uint8_t v___x_450_; uint8_t v___x_451_; uint8_t v___x_452_; uint8_t v___x_453_; uint8_t v___x_454_; uint8_t v___x_455_; uint8_t v___x_456_; uint8_t v___x_457_; uint8_t v___x_458_; uint8_t v___x_459_; uint8_t v___x_460_; uint8_t v___x_461_; uint8_t v___x_462_; uint8_t v___x_463_; uint8_t v___x_464_; uint8_t v___x_465_; uint8_t v___x_466_; uint8_t v___x_467_; uint8_t v___x_468_; uint8_t v___x_469_; uint8_t v___x_470_; uint8_t v___x_471_; uint8_t v___x_472_; uint8_t v___x_473_; uint8_t v___x_474_; uint8_t v___x_475_; uint8_t v___x_476_; uint8_t v___x_477_; uint8_t v___x_478_; uint8_t v___x_479_; uint8_t v___x_480_; uint8_t v___x_481_; uint8_t v___x_482_; uint8_t v___x_483_; uint8_t v___x_484_; uint8_t v___x_485_; uint8_t v___x_486_; uint8_t v___x_487_; uint8_t v___x_488_; uint8_t v___x_489_; uint8_t v___x_490_; uint8_t v___x_491_; uint8_t v___x_492_; uint8_t v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_433_ = l_instInhabitedUInt8;
v___x_434_ = lean_unsigned_to_nat(0u);
v___x_435_ = lean_box(v___x_433_);
v_s0_436_ = lean_array_get(v___x_435_, v_col_432_, v___x_434_);
lean_dec(v___x_435_);
v___x_437_ = lean_unsigned_to_nat(1u);
v___x_438_ = lean_box(v___x_433_);
v_s1_439_ = lean_array_get(v___x_438_, v_col_432_, v___x_437_);
lean_dec(v___x_438_);
v___x_440_ = lean_unsigned_to_nat(2u);
v___x_441_ = lean_box(v___x_433_);
v_s2_442_ = lean_array_get(v___x_441_, v_col_432_, v___x_440_);
lean_dec(v___x_441_);
v___x_443_ = lean_unsigned_to_nat(3u);
v___x_444_ = lean_box(v___x_433_);
v_s3_445_ = lean_array_get(v___x_444_, v_col_432_, v___x_443_);
lean_dec(v___x_444_);
v___x_446_ = 14;
v___x_447_ = lean_unbox(v_s0_436_);
v___x_448_ = lp_aes__lean_gfMul(v___x_446_, v___x_447_);
v___x_449_ = 11;
v___x_450_ = lean_unbox(v_s1_439_);
v___x_451_ = lp_aes__lean_gfMul(v___x_449_, v___x_450_);
v___x_452_ = lean_uint8_xor(v___x_448_, v___x_451_);
v___x_453_ = 13;
v___x_454_ = lean_unbox(v_s2_442_);
v___x_455_ = lp_aes__lean_gfMul(v___x_453_, v___x_454_);
v___x_456_ = lean_uint8_xor(v___x_452_, v___x_455_);
v___x_457_ = 9;
v___x_458_ = lean_unbox(v_s3_445_);
v___x_459_ = lp_aes__lean_gfMul(v___x_457_, v___x_458_);
v___x_460_ = lean_uint8_xor(v___x_456_, v___x_459_);
v___x_461_ = lean_unbox(v_s0_436_);
v___x_462_ = lp_aes__lean_gfMul(v___x_457_, v___x_461_);
v___x_463_ = lean_unbox(v_s1_439_);
v___x_464_ = lp_aes__lean_gfMul(v___x_446_, v___x_463_);
v___x_465_ = lean_uint8_xor(v___x_462_, v___x_464_);
v___x_466_ = lean_unbox(v_s2_442_);
v___x_467_ = lp_aes__lean_gfMul(v___x_449_, v___x_466_);
v___x_468_ = lean_uint8_xor(v___x_465_, v___x_467_);
v___x_469_ = lean_unbox(v_s3_445_);
v___x_470_ = lp_aes__lean_gfMul(v___x_453_, v___x_469_);
v___x_471_ = lean_uint8_xor(v___x_468_, v___x_470_);
v___x_472_ = lean_unbox(v_s0_436_);
v___x_473_ = lp_aes__lean_gfMul(v___x_453_, v___x_472_);
v___x_474_ = lean_unbox(v_s1_439_);
v___x_475_ = lp_aes__lean_gfMul(v___x_457_, v___x_474_);
v___x_476_ = lean_uint8_xor(v___x_473_, v___x_475_);
v___x_477_ = lean_unbox(v_s2_442_);
v___x_478_ = lp_aes__lean_gfMul(v___x_446_, v___x_477_);
v___x_479_ = lean_uint8_xor(v___x_476_, v___x_478_);
v___x_480_ = lean_unbox(v_s3_445_);
v___x_481_ = lp_aes__lean_gfMul(v___x_449_, v___x_480_);
v___x_482_ = lean_uint8_xor(v___x_479_, v___x_481_);
v___x_483_ = lean_unbox(v_s0_436_);
lean_dec(v_s0_436_);
v___x_484_ = lp_aes__lean_gfMul(v___x_449_, v___x_483_);
v___x_485_ = lean_unbox(v_s1_439_);
lean_dec(v_s1_439_);
v___x_486_ = lp_aes__lean_gfMul(v___x_453_, v___x_485_);
v___x_487_ = lean_uint8_xor(v___x_484_, v___x_486_);
v___x_488_ = lean_unbox(v_s2_442_);
lean_dec(v_s2_442_);
v___x_489_ = lp_aes__lean_gfMul(v___x_457_, v___x_488_);
v___x_490_ = lean_uint8_xor(v___x_487_, v___x_489_);
v___x_491_ = lean_unbox(v_s3_445_);
lean_dec(v_s3_445_);
v___x_492_ = lp_aes__lean_gfMul(v___x_446_, v___x_491_);
v___x_493_ = lean_uint8_xor(v___x_490_, v___x_492_);
v___x_494_ = lean_unsigned_to_nat(4u);
v___x_495_ = lean_mk_empty_array_with_capacity(v___x_494_);
v___x_496_ = lean_box(v___x_460_);
v___x_497_ = lean_array_push(v___x_495_, v___x_496_);
v___x_498_ = lean_box(v___x_471_);
v___x_499_ = lean_array_push(v___x_497_, v___x_498_);
v___x_500_ = lean_box(v___x_482_);
v___x_501_ = lean_array_push(v___x_499_, v___x_500_);
v___x_502_ = lean_box(v___x_493_);
v___x_503_ = lean_array_push(v___x_501_, v___x_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invMixColumn___boxed(lean_object* v_col_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = lp_aes__lean_invMixColumn(v_col_504_);
lean_dec_ref(v_col_504_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00mixColumns_spec__0(size_t v_sz_506_, size_t v_i_507_, lean_object* v_bs_508_){
_start:
{
uint8_t v___x_509_; 
v___x_509_ = lean_usize_dec_lt(v_i_507_, v_sz_506_);
if (v___x_509_ == 0)
{
return v_bs_508_;
}
else
{
lean_object* v_v_510_; lean_object* v___x_511_; lean_object* v_bs_x27_512_; lean_object* v___x_513_; size_t v___x_514_; size_t v___x_515_; lean_object* v___x_516_; 
v_v_510_ = lean_array_uget(v_bs_508_, v_i_507_);
v___x_511_ = lean_unsigned_to_nat(0u);
v_bs_x27_512_ = lean_array_uset(v_bs_508_, v_i_507_, v___x_511_);
v___x_513_ = lp_aes__lean_mixColumn(v_v_510_);
lean_dec(v_v_510_);
v___x_514_ = ((size_t)1ULL);
v___x_515_ = lean_usize_add(v_i_507_, v___x_514_);
v___x_516_ = lean_array_uset(v_bs_x27_512_, v_i_507_, v___x_513_);
v_i_507_ = v___x_515_;
v_bs_508_ = v___x_516_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00mixColumns_spec__0___boxed(lean_object* v_sz_518_, lean_object* v_i_519_, lean_object* v_bs_520_){
_start:
{
size_t v_sz_boxed_521_; size_t v_i_boxed_522_; lean_object* v_res_523_; 
v_sz_boxed_521_ = lean_unbox_usize(v_sz_518_);
lean_dec(v_sz_518_);
v_i_boxed_522_ = lean_unbox_usize(v_i_519_);
lean_dec(v_i_519_);
v_res_523_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00mixColumns_spec__0(v_sz_boxed_521_, v_i_boxed_522_, v_bs_520_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_mixColumns(lean_object* v_s_524_){
_start:
{
size_t v_sz_525_; size_t v___x_526_; lean_object* v___x_527_; 
v_sz_525_ = lean_array_size(v_s_524_);
v___x_526_ = ((size_t)0ULL);
v___x_527_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00mixColumns_spec__0(v_sz_525_, v___x_526_, v_s_524_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invMixColumns_spec__0(size_t v_sz_528_, size_t v_i_529_, lean_object* v_bs_530_){
_start:
{
uint8_t v___x_531_; 
v___x_531_ = lean_usize_dec_lt(v_i_529_, v_sz_528_);
if (v___x_531_ == 0)
{
return v_bs_530_;
}
else
{
lean_object* v_v_532_; lean_object* v___x_533_; lean_object* v_bs_x27_534_; lean_object* v___x_535_; size_t v___x_536_; size_t v___x_537_; lean_object* v___x_538_; 
v_v_532_ = lean_array_uget(v_bs_530_, v_i_529_);
v___x_533_ = lean_unsigned_to_nat(0u);
v_bs_x27_534_ = lean_array_uset(v_bs_530_, v_i_529_, v___x_533_);
v___x_535_ = lp_aes__lean_invMixColumn(v_v_532_);
lean_dec(v_v_532_);
v___x_536_ = ((size_t)1ULL);
v___x_537_ = lean_usize_add(v_i_529_, v___x_536_);
v___x_538_ = lean_array_uset(v_bs_x27_534_, v_i_529_, v___x_535_);
v_i_529_ = v___x_537_;
v_bs_530_ = v___x_538_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invMixColumns_spec__0___boxed(lean_object* v_sz_540_, lean_object* v_i_541_, lean_object* v_bs_542_){
_start:
{
size_t v_sz_boxed_543_; size_t v_i_boxed_544_; lean_object* v_res_545_; 
v_sz_boxed_543_ = lean_unbox_usize(v_sz_540_);
lean_dec(v_sz_540_);
v_i_boxed_544_ = lean_unbox_usize(v_i_541_);
lean_dec(v_i_541_);
v_res_545_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invMixColumns_spec__0(v_sz_boxed_543_, v_i_boxed_544_, v_bs_542_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invMixColumns(lean_object* v_s_546_){
_start:
{
size_t v_sz_547_; size_t v___x_548_; lean_object* v___x_549_; 
v_sz_547_ = lean_array_size(v_s_546_);
v___x_548_ = ((size_t)0ULL);
v___x_549_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invMixColumns_spec__0(v_sz_547_, v___x_548_, v_s_546_);
return v___x_549_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean_addRoundKey___lam__0(lean_object* v___x_550_, lean_object* v_s_551_, lean_object* v_j_552_, uint8_t v___x_553_, lean_object* v_rkState_554_, lean_object* v_i_555_){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; uint8_t v___x_562_; uint8_t v___x_563_; uint8_t v___x_564_; 
v___x_556_ = lean_array_get_borrowed(v___x_550_, v_s_551_, v_j_552_);
v___x_557_ = lean_box(v___x_553_);
v___x_558_ = lean_array_get(v___x_557_, v___x_556_, v_i_555_);
lean_dec(v___x_557_);
v___x_559_ = lean_array_get_borrowed(v___x_550_, v_rkState_554_, v_j_552_);
v___x_560_ = lean_box(v___x_553_);
v___x_561_ = lean_array_get(v___x_560_, v___x_559_, v_i_555_);
lean_dec(v___x_560_);
v___x_562_ = lean_unbox(v___x_558_);
lean_dec(v___x_558_);
v___x_563_ = lean_unbox(v___x_561_);
lean_dec(v___x_561_);
v___x_564_ = lean_uint8_xor(v___x_562_, v___x_563_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_addRoundKey___lam__0___boxed(lean_object* v___x_565_, lean_object* v_s_566_, lean_object* v_j_567_, lean_object* v___x_568_, lean_object* v_rkState_569_, lean_object* v_i_570_){
_start:
{
uint8_t v___x_74__boxed_571_; uint8_t v_res_572_; lean_object* v_r_573_; 
v___x_74__boxed_571_ = lean_unbox(v___x_568_);
v_res_572_ = lp_aes__lean_addRoundKey___lam__0(v___x_565_, v_s_566_, v_j_567_, v___x_74__boxed_571_, v_rkState_569_, v_i_570_);
lean_dec(v_i_570_);
lean_dec_ref(v_rkState_569_);
lean_dec(v_j_567_);
lean_dec_ref(v_s_566_);
lean_dec_ref(v___x_565_);
v_r_573_ = lean_box(v_res_572_);
return v_r_573_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_addRoundKey___lam__1(lean_object* v___x_574_, lean_object* v_s_575_, uint8_t v___x_576_, lean_object* v_rkState_577_, lean_object* v___x_578_, lean_object* v_j_579_){
_start:
{
lean_object* v___x_580_; lean_object* v___f_581_; lean_object* v___x_582_; 
v___x_580_ = lean_box(v___x_576_);
v___f_581_ = lean_alloc_closure((void*)(lp_aes__lean_addRoundKey___lam__0___boxed), 6, 5);
lean_closure_set(v___f_581_, 0, v___x_574_);
lean_closure_set(v___f_581_, 1, v_s_575_);
lean_closure_set(v___f_581_, 2, v_j_579_);
lean_closure_set(v___f_581_, 3, v___x_580_);
lean_closure_set(v___f_581_, 4, v_rkState_577_);
v___x_582_ = l_Array_ofFn___redArg(v___x_578_, v___f_581_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_addRoundKey___lam__1___boxed(lean_object* v___x_583_, lean_object* v_s_584_, lean_object* v___x_585_, lean_object* v_rkState_586_, lean_object* v___x_587_, lean_object* v_j_588_){
_start:
{
uint8_t v___x_98__boxed_589_; lean_object* v_res_590_; 
v___x_98__boxed_589_ = lean_unbox(v___x_585_);
v_res_590_ = lp_aes__lean_addRoundKey___lam__1(v___x_583_, v_s_584_, v___x_98__boxed_589_, v_rkState_586_, v___x_587_, v_j_588_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_addRoundKey(lean_object* v_s_591_, lean_object* v_rk_592_){
_start:
{
uint8_t v___x_593_; lean_object* v___x_594_; lean_object* v_rkState_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___f_598_; lean_object* v___x_599_; 
v___x_593_ = l_instInhabitedUInt8;
v___x_594_ = lean_obj_once(&lp_aes__lean_getRow___closed__0, &lp_aes__lean_getRow___closed__0_once, _init_lp_aes__lean_getRow___closed__0);
v_rkState_595_ = lp_aes__lean_blockToState(v_rk_592_);
v___x_596_ = lean_unsigned_to_nat(4u);
v___x_597_ = lean_box(v___x_593_);
v___f_598_ = lean_alloc_closure((void*)(lp_aes__lean_addRoundKey___lam__1___boxed), 6, 5);
lean_closure_set(v___f_598_, 0, v___x_594_);
lean_closure_set(v___f_598_, 1, v_s_591_);
lean_closure_set(v___f_598_, 2, v___x_597_);
lean_closure_set(v___f_598_, 3, v_rkState_595_);
lean_closure_set(v___f_598_, 4, v___x_596_);
v___x_599_ = l_Array_ofFn___redArg(v___x_596_, v___f_598_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_addRoundKey___boxed(lean_object* v_s_600_, lean_object* v_rk_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = lp_aes__lean_addRoundKey(v_s_600_, v_rk_601_);
lean_dec_ref(v_rk_601_);
return v_res_602_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_aes__lean_AES_Types(uint8_t builtin);
lean_object* initialize_aes__lean_AES_SBox(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_aes__lean_AES_Transforms(uint8_t builtin) {
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
