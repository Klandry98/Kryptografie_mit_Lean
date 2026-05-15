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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern uint8_t l_instInhabitedUInt8;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
uint8_t lean_uint8_xor(uint8_t, uint8_t);
uint8_t lean_uint8_shift_right(uint8_t, uint8_t);
uint8_t lean_uint8_land(uint8_t, uint8_t);
uint8_t lean_uint8_shift_left(uint8_t, uint8_t);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_ofFn___redArg(lean_object*, lean_object*);
uint8_t lp_aes__lean_invSubByte(uint8_t);
size_t lean_array_size(lean_object*);
lean_object* lp_aes__lean_blockToState(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t lp_aes__lean_getRow___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_getRow___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_aes__lean_getRow___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_getRow___closed__0;
LEAN_EXPORT lean_object* lp_aes__lean_getRow(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_aes__lean_stateFromRows___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_stateFromRows___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_stateFromRows___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_stateFromRows___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_stateFromRows(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_aes__lean_rotateLeft___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_rotateLeft___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_rotateLeft(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_aes__lean_rotateRight___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_rotateRight___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_rotateRight(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_shiftRows(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_invShiftRows(lean_object*);
LEAN_EXPORT uint8_t lp_aes__lean_xtime(uint8_t);
LEAN_EXPORT lean_object* lp_aes__lean_xtime___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_List_foldl___at___00gfMul_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_List_foldl___at___00gfMul_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_aes__lean_gfMul___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_gfMul___closed__0;
LEAN_EXPORT uint8_t lp_aes__lean_gfMul(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_aes__lean_gfMul___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t lp_aes__lean_getRow___lam__0(lean_object* v___x_89_, lean_object* v_s_90_, uint8_t v___x_91_, lean_object* v_i_92_, lean_object* v_j_93_){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; uint8_t v___x_97_; 
v___x_94_ = lean_array_get_borrowed(v___x_89_, v_s_90_, v_j_93_);
v___x_95_ = lean_box(v___x_91_);
v___x_96_ = lean_array_get(v___x_95_, v___x_94_, v_i_92_);
lean_dec(v___x_95_);
v___x_97_ = lean_unbox(v___x_96_);
lean_dec(v___x_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_getRow___lam__0___boxed(lean_object* v___x_98_, lean_object* v_s_99_, lean_object* v___x_100_, lean_object* v_i_101_, lean_object* v_j_102_){
_start:
{
uint8_t v___x_46__boxed_103_; uint8_t v_res_104_; lean_object* v_r_105_; 
v___x_46__boxed_103_ = lean_unbox(v___x_100_);
v_res_104_ = lp_aes__lean_getRow___lam__0(v___x_98_, v_s_99_, v___x_46__boxed_103_, v_i_101_, v_j_102_);
lean_dec(v_j_102_);
lean_dec(v_i_101_);
lean_dec_ref(v_s_99_);
lean_dec_ref(v___x_98_);
v_r_105_ = lean_box(v_res_104_);
return v_r_105_;
}
}
static lean_object* _init_lp_aes__lean_getRow___closed__0(void){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Array_instInhabited(lean_box(0));
return v___x_106_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_getRow(lean_object* v_s_107_, lean_object* v_i_108_){
_start:
{
uint8_t v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___f_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_109_ = l_instInhabitedUInt8;
v___x_110_ = lean_obj_once(&lp_aes__lean_getRow___closed__0, &lp_aes__lean_getRow___closed__0_once, _init_lp_aes__lean_getRow___closed__0);
v___x_111_ = lean_box(v___x_109_);
v___f_112_ = lean_alloc_closure((void*)(lp_aes__lean_getRow___lam__0___boxed), 5, 4);
lean_closure_set(v___f_112_, 0, v___x_110_);
lean_closure_set(v___f_112_, 1, v_s_107_);
lean_closure_set(v___f_112_, 2, v___x_111_);
lean_closure_set(v___f_112_, 3, v_i_108_);
v___x_113_ = lean_unsigned_to_nat(4u);
v___x_114_ = l_Array_ofFn___redArg(v___x_113_, v___f_112_);
return v___x_114_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean_stateFromRows___lam__0(lean_object* v___x_115_, lean_object* v_rows_116_, uint8_t v___x_117_, lean_object* v_j_118_, lean_object* v_i_119_){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; uint8_t v___x_123_; 
v___x_120_ = lean_array_get_borrowed(v___x_115_, v_rows_116_, v_i_119_);
v___x_121_ = lean_box(v___x_117_);
v___x_122_ = lean_array_get(v___x_121_, v___x_120_, v_j_118_);
lean_dec(v___x_121_);
v___x_123_ = lean_unbox(v___x_122_);
lean_dec(v___x_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_stateFromRows___lam__0___boxed(lean_object* v___x_124_, lean_object* v_rows_125_, lean_object* v___x_126_, lean_object* v_j_127_, lean_object* v_i_128_){
_start:
{
uint8_t v___x_66__boxed_129_; uint8_t v_res_130_; lean_object* v_r_131_; 
v___x_66__boxed_129_ = lean_unbox(v___x_126_);
v_res_130_ = lp_aes__lean_stateFromRows___lam__0(v___x_124_, v_rows_125_, v___x_66__boxed_129_, v_j_127_, v_i_128_);
lean_dec(v_i_128_);
lean_dec(v_j_127_);
lean_dec_ref(v_rows_125_);
lean_dec_ref(v___x_124_);
v_r_131_ = lean_box(v_res_130_);
return v_r_131_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_stateFromRows___lam__1(lean_object* v___x_132_, lean_object* v_rows_133_, uint8_t v___x_134_, lean_object* v___x_135_, lean_object* v_j_136_){
_start:
{
lean_object* v___x_137_; lean_object* v___f_138_; lean_object* v___x_139_; 
v___x_137_ = lean_box(v___x_134_);
v___f_138_ = lean_alloc_closure((void*)(lp_aes__lean_stateFromRows___lam__0___boxed), 5, 4);
lean_closure_set(v___f_138_, 0, v___x_132_);
lean_closure_set(v___f_138_, 1, v_rows_133_);
lean_closure_set(v___f_138_, 2, v___x_137_);
lean_closure_set(v___f_138_, 3, v_j_136_);
v___x_139_ = l_Array_ofFn___redArg(v___x_135_, v___f_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_stateFromRows___lam__1___boxed(lean_object* v___x_140_, lean_object* v_rows_141_, lean_object* v___x_142_, lean_object* v___x_143_, lean_object* v_j_144_){
_start:
{
uint8_t v___x_80__boxed_145_; lean_object* v_res_146_; 
v___x_80__boxed_145_ = lean_unbox(v___x_142_);
v_res_146_ = lp_aes__lean_stateFromRows___lam__1(v___x_140_, v_rows_141_, v___x_80__boxed_145_, v___x_143_, v_j_144_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_stateFromRows(lean_object* v_r0_147_, lean_object* v_r1_148_, lean_object* v_r2_149_, lean_object* v_r3_150_){
_start:
{
uint8_t v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v_rows_158_; lean_object* v___x_159_; lean_object* v___f_160_; lean_object* v___x_161_; 
v___x_151_ = l_instInhabitedUInt8;
v___x_152_ = lean_obj_once(&lp_aes__lean_getRow___closed__0, &lp_aes__lean_getRow___closed__0_once, _init_lp_aes__lean_getRow___closed__0);
v___x_153_ = lean_unsigned_to_nat(4u);
v___x_154_ = lean_mk_empty_array_with_capacity(v___x_153_);
v___x_155_ = lean_array_push(v___x_154_, v_r0_147_);
v___x_156_ = lean_array_push(v___x_155_, v_r1_148_);
v___x_157_ = lean_array_push(v___x_156_, v_r2_149_);
v_rows_158_ = lean_array_push(v___x_157_, v_r3_150_);
v___x_159_ = lean_box(v___x_151_);
v___f_160_ = lean_alloc_closure((void*)(lp_aes__lean_stateFromRows___lam__1___boxed), 5, 4);
lean_closure_set(v___f_160_, 0, v___x_152_);
lean_closure_set(v___f_160_, 1, v_rows_158_);
lean_closure_set(v___f_160_, 2, v___x_159_);
lean_closure_set(v___f_160_, 3, v___x_153_);
v___x_161_ = l_Array_ofFn___redArg(v___x_153_, v___f_160_);
return v___x_161_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean_rotateLeft___lam__0(lean_object* v_n_162_, lean_object* v___x_163_, uint8_t v___x_164_, lean_object* v_row_165_, lean_object* v_i_166_){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; uint8_t v___x_171_; 
v___x_167_ = lean_nat_add(v_i_166_, v_n_162_);
v___x_168_ = lean_nat_mod(v___x_167_, v___x_163_);
lean_dec(v___x_167_);
v___x_169_ = lean_box(v___x_164_);
v___x_170_ = lean_array_get(v___x_169_, v_row_165_, v___x_168_);
lean_dec(v___x_168_);
lean_dec(v___x_169_);
v___x_171_ = lean_unbox(v___x_170_);
lean_dec(v___x_170_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_rotateLeft___lam__0___boxed(lean_object* v_n_172_, lean_object* v___x_173_, lean_object* v___x_174_, lean_object* v_row_175_, lean_object* v_i_176_){
_start:
{
uint8_t v___x_55__boxed_177_; uint8_t v_res_178_; lean_object* v_r_179_; 
v___x_55__boxed_177_ = lean_unbox(v___x_174_);
v_res_178_ = lp_aes__lean_rotateLeft___lam__0(v_n_172_, v___x_173_, v___x_55__boxed_177_, v_row_175_, v_i_176_);
lean_dec(v_i_176_);
lean_dec_ref(v_row_175_);
lean_dec(v___x_173_);
lean_dec(v_n_172_);
v_r_179_ = lean_box(v_res_178_);
return v_r_179_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_rotateLeft(lean_object* v_row_180_, lean_object* v_n_181_){
_start:
{
uint8_t v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___f_185_; lean_object* v___x_186_; 
v___x_182_ = l_instInhabitedUInt8;
v___x_183_ = lean_unsigned_to_nat(4u);
v___x_184_ = lean_box(v___x_182_);
v___f_185_ = lean_alloc_closure((void*)(lp_aes__lean_rotateLeft___lam__0___boxed), 5, 4);
lean_closure_set(v___f_185_, 0, v_n_181_);
lean_closure_set(v___f_185_, 1, v___x_183_);
lean_closure_set(v___f_185_, 2, v___x_184_);
lean_closure_set(v___f_185_, 3, v_row_180_);
v___x_186_ = l_Array_ofFn___redArg(v___x_183_, v___f_185_);
return v___x_186_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean_rotateRight___lam__0(lean_object* v___x_187_, lean_object* v_n_188_, uint8_t v___x_189_, lean_object* v_row_190_, lean_object* v_i_191_){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_192_ = lean_nat_add(v_i_191_, v___x_187_);
v___x_193_ = lean_nat_mod(v_n_188_, v___x_187_);
v___x_194_ = lean_nat_sub(v___x_192_, v___x_193_);
lean_dec(v___x_193_);
lean_dec(v___x_192_);
v___x_195_ = lean_nat_mod(v___x_194_, v___x_187_);
lean_dec(v___x_194_);
v___x_196_ = lean_box(v___x_189_);
v___x_197_ = lean_array_get(v___x_196_, v_row_190_, v___x_195_);
lean_dec(v___x_195_);
lean_dec(v___x_196_);
v___x_198_ = lean_unbox(v___x_197_);
lean_dec(v___x_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_rotateRight___lam__0___boxed(lean_object* v___x_199_, lean_object* v_n_200_, lean_object* v___x_201_, lean_object* v_row_202_, lean_object* v_i_203_){
_start:
{
uint8_t v___x_74__boxed_204_; uint8_t v_res_205_; lean_object* v_r_206_; 
v___x_74__boxed_204_ = lean_unbox(v___x_201_);
v_res_205_ = lp_aes__lean_rotateRight___lam__0(v___x_199_, v_n_200_, v___x_74__boxed_204_, v_row_202_, v_i_203_);
lean_dec(v_i_203_);
lean_dec_ref(v_row_202_);
lean_dec(v_n_200_);
lean_dec(v___x_199_);
v_r_206_ = lean_box(v_res_205_);
return v_r_206_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_rotateRight(lean_object* v_row_207_, lean_object* v_n_208_){
_start:
{
uint8_t v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___f_212_; lean_object* v___x_213_; 
v___x_209_ = l_instInhabitedUInt8;
v___x_210_ = lean_unsigned_to_nat(4u);
v___x_211_ = lean_box(v___x_209_);
v___f_212_ = lean_alloc_closure((void*)(lp_aes__lean_rotateRight___lam__0___boxed), 5, 4);
lean_closure_set(v___f_212_, 0, v___x_210_);
lean_closure_set(v___f_212_, 1, v_n_208_);
lean_closure_set(v___f_212_, 2, v___x_211_);
lean_closure_set(v___f_212_, 3, v_row_207_);
v___x_213_ = l_Array_ofFn___redArg(v___x_210_, v___f_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_shiftRows(lean_object* v_s_214_){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_215_ = lean_unsigned_to_nat(0u);
lean_inc_ref_n(v_s_214_, 3);
v___x_216_ = lp_aes__lean_getRow(v_s_214_, v___x_215_);
v___x_217_ = lean_unsigned_to_nat(1u);
v___x_218_ = lp_aes__lean_getRow(v_s_214_, v___x_217_);
v___x_219_ = lp_aes__lean_rotateLeft(v___x_218_, v___x_217_);
v___x_220_ = lean_unsigned_to_nat(2u);
v___x_221_ = lp_aes__lean_getRow(v_s_214_, v___x_220_);
v___x_222_ = lp_aes__lean_rotateLeft(v___x_221_, v___x_220_);
v___x_223_ = lean_unsigned_to_nat(3u);
v___x_224_ = lp_aes__lean_getRow(v_s_214_, v___x_223_);
v___x_225_ = lp_aes__lean_rotateLeft(v___x_224_, v___x_223_);
v___x_226_ = lp_aes__lean_stateFromRows(v___x_216_, v___x_219_, v___x_222_, v___x_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invShiftRows(lean_object* v_s_227_){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_228_ = lean_unsigned_to_nat(0u);
lean_inc_ref_n(v_s_227_, 3);
v___x_229_ = lp_aes__lean_getRow(v_s_227_, v___x_228_);
v___x_230_ = lean_unsigned_to_nat(1u);
v___x_231_ = lp_aes__lean_getRow(v_s_227_, v___x_230_);
v___x_232_ = lp_aes__lean_rotateRight(v___x_231_, v___x_230_);
v___x_233_ = lean_unsigned_to_nat(2u);
v___x_234_ = lp_aes__lean_getRow(v_s_227_, v___x_233_);
v___x_235_ = lp_aes__lean_rotateRight(v___x_234_, v___x_233_);
v___x_236_ = lean_unsigned_to_nat(3u);
v___x_237_ = lp_aes__lean_getRow(v_s_227_, v___x_236_);
v___x_238_ = lp_aes__lean_rotateRight(v___x_237_, v___x_236_);
v___x_239_ = lp_aes__lean_stateFromRows(v___x_229_, v___x_232_, v___x_235_, v___x_238_);
return v___x_239_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean_xtime(uint8_t v_b_240_){
_start:
{
uint8_t v___x_241_; uint8_t v_shifted_242_; uint8_t v___x_243_; uint8_t v___x_244_; uint8_t v___x_245_; uint8_t v___x_246_; 
v___x_241_ = 1;
v_shifted_242_ = lean_uint8_shift_left(v_b_240_, v___x_241_);
v___x_243_ = 128;
v___x_244_ = lean_uint8_land(v_b_240_, v___x_243_);
v___x_245_ = 0;
v___x_246_ = lean_uint8_dec_eq(v___x_244_, v___x_245_);
if (v___x_246_ == 0)
{
uint8_t v___x_247_; uint8_t v___x_248_; 
v___x_247_ = 27;
v___x_248_ = lean_uint8_xor(v_shifted_242_, v___x_247_);
return v___x_248_;
}
else
{
return v_shifted_242_;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean_xtime___boxed(lean_object* v_b_249_){
_start:
{
uint8_t v_b_boxed_250_; uint8_t v_res_251_; lean_object* v_r_252_; 
v_b_boxed_250_ = lean_unbox(v_b_249_);
v_res_251_ = lp_aes__lean_xtime(v_b_boxed_250_);
v_r_252_ = lean_box(v_res_251_);
return v_r_252_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_List_foldl___at___00gfMul_spec__0(lean_object* v_x_253_, lean_object* v_x_254_){
_start:
{
if (lean_obj_tag(v_x_254_) == 0)
{
return v_x_253_;
}
else
{
lean_object* v_snd_255_; lean_object* v_tail_256_; lean_object* v_fst_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_302_; 
v_snd_255_ = lean_ctor_get(v_x_253_, 1);
lean_inc(v_snd_255_);
v_tail_256_ = lean_ctor_get(v_x_254_, 1);
v_fst_257_ = lean_ctor_get(v_x_253_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v_x_253_);
if (v_isSharedCheck_302_ == 0)
{
lean_object* v_unused_303_; 
v_unused_303_ = lean_ctor_get(v_x_253_, 1);
lean_dec(v_unused_303_);
v___x_259_ = v_x_253_;
v_isShared_260_ = v_isSharedCheck_302_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_fst_257_);
lean_dec(v_x_253_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_302_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v_fst_261_; lean_object* v_snd_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_301_; 
v_fst_261_ = lean_ctor_get(v_snd_255_, 0);
v_snd_262_ = lean_ctor_get(v_snd_255_, 1);
v_isSharedCheck_301_ = !lean_is_exclusive(v_snd_255_);
if (v_isSharedCheck_301_ == 0)
{
v___x_264_ = v_snd_255_;
v_isShared_265_ = v_isSharedCheck_301_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_snd_262_);
lean_inc(v_fst_261_);
lean_dec(v_snd_255_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_301_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
uint8_t v___x_266_; uint8_t v___y_268_; uint8_t v___y_269_; uint8_t v___y_270_; uint8_t v___x_284_; uint8_t v___x_285_; uint8_t v___x_286_; uint8_t v___y_288_; uint8_t v___x_296_; 
v___x_266_ = 1;
v___x_284_ = lean_unbox(v_snd_262_);
v___x_285_ = lean_uint8_land(v___x_284_, v___x_266_);
v___x_286_ = 0;
v___x_296_ = lean_uint8_dec_eq(v___x_285_, v___x_286_);
if (v___x_296_ == 0)
{
uint8_t v___x_297_; uint8_t v___x_298_; uint8_t v___x_299_; 
v___x_297_ = lean_unbox(v_fst_257_);
lean_dec(v_fst_257_);
v___x_298_ = lean_unbox(v_fst_261_);
v___x_299_ = lean_uint8_xor(v___x_297_, v___x_298_);
v___y_288_ = v___x_299_;
goto v___jp_287_;
}
else
{
uint8_t v___x_300_; 
v___x_300_ = lean_unbox(v_fst_257_);
lean_dec(v_fst_257_);
v___y_288_ = v___x_300_;
goto v___jp_287_;
}
v___jp_267_:
{
uint8_t v_aa_x27_271_; uint8_t v___x_272_; uint8_t v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_277_; 
v_aa_x27_271_ = lean_uint8_xor(v___y_269_, v___y_270_);
v___x_272_ = lean_unbox(v_snd_262_);
lean_dec(v_snd_262_);
v___x_273_ = lean_uint8_shift_right(v___x_272_, v___x_266_);
v___x_274_ = lean_box(v_aa_x27_271_);
v___x_275_ = lean_box(v___x_273_);
if (v_isShared_265_ == 0)
{
lean_ctor_set(v___x_264_, 1, v___x_275_);
lean_ctor_set(v___x_264_, 0, v___x_274_);
v___x_277_ = v___x_264_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_274_);
lean_ctor_set(v_reuseFailAlloc_283_, 1, v___x_275_);
v___x_277_ = v_reuseFailAlloc_283_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
lean_object* v___x_278_; lean_object* v___x_280_; 
v___x_278_ = lean_box(v___y_268_);
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 1, v___x_277_);
lean_ctor_set(v___x_259_, 0, v___x_278_);
v___x_280_ = v___x_259_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_278_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v___x_277_);
v___x_280_ = v_reuseFailAlloc_282_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
v_x_253_ = v___x_280_;
v_x_254_ = v_tail_256_;
goto _start;
}
}
}
v___jp_287_:
{
uint8_t v___x_289_; uint8_t v___x_290_; uint8_t v_hiBit_291_; uint8_t v___x_292_; uint8_t v___x_293_; uint8_t v___x_294_; 
v___x_289_ = 128;
v___x_290_ = lean_unbox(v_fst_261_);
v_hiBit_291_ = lean_uint8_land(v___x_290_, v___x_289_);
v___x_292_ = lean_unbox(v_fst_261_);
lean_dec(v_fst_261_);
v___x_293_ = lean_uint8_shift_left(v___x_292_, v___x_266_);
v___x_294_ = lean_uint8_dec_eq(v_hiBit_291_, v___x_286_);
if (v___x_294_ == 0)
{
uint8_t v___x_295_; 
v___x_295_ = 27;
v___y_268_ = v___y_288_;
v___y_269_ = v___x_293_;
v___y_270_ = v___x_295_;
goto v___jp_267_;
}
else
{
v___y_268_ = v___y_288_;
v___y_269_ = v___x_293_;
v___y_270_ = v___x_286_;
goto v___jp_267_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean_List_foldl___at___00gfMul_spec__0___boxed(lean_object* v_x_304_, lean_object* v_x_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = lp_aes__lean_List_foldl___at___00gfMul_spec__0(v_x_304_, v_x_305_);
lean_dec(v_x_305_);
return v_res_306_;
}
}
static lean_object* _init_lp_aes__lean_gfMul___closed__0(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_unsigned_to_nat(8u);
v___x_308_ = l_List_range(v___x_307_);
return v___x_308_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean_gfMul(uint8_t v_a_309_, uint8_t v_b_310_){
_start:
{
uint8_t v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v_fst_319_; uint8_t v___x_320_; 
v___x_311_ = 0;
v___x_312_ = lean_box(v_a_309_);
v___x_313_ = lean_box(v_b_310_);
v___x_314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_314_, 0, v___x_312_);
lean_ctor_set(v___x_314_, 1, v___x_313_);
v___x_315_ = lean_box(v___x_311_);
v___x_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
lean_ctor_set(v___x_316_, 1, v___x_314_);
v___x_317_ = lean_obj_once(&lp_aes__lean_gfMul___closed__0, &lp_aes__lean_gfMul___closed__0_once, _init_lp_aes__lean_gfMul___closed__0);
v___x_318_ = lp_aes__lean_List_foldl___at___00gfMul_spec__0(v___x_316_, v___x_317_);
v_fst_319_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_fst_319_);
lean_dec_ref(v___x_318_);
v___x_320_ = lean_unbox(v_fst_319_);
lean_dec(v_fst_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_gfMul___boxed(lean_object* v_a_321_, lean_object* v_b_322_){
_start:
{
uint8_t v_a_boxed_323_; uint8_t v_b_boxed_324_; uint8_t v_res_325_; lean_object* v_r_326_; 
v_a_boxed_323_ = lean_unbox(v_a_321_);
v_b_boxed_324_ = lean_unbox(v_b_322_);
v_res_325_ = lp_aes__lean_gfMul(v_a_boxed_323_, v_b_boxed_324_);
v_r_326_ = lean_box(v_res_325_);
return v_r_326_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_mixColumn(lean_object* v_col_327_){
_start:
{
uint8_t v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v_s0_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v_s1_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v_s2_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v_s3_340_; uint8_t v___x_341_; uint8_t v___x_342_; uint8_t v___x_343_; uint8_t v___x_344_; uint8_t v___x_345_; uint8_t v___x_346_; uint8_t v___x_347_; uint8_t v___x_348_; uint8_t v___x_349_; uint8_t v___x_350_; uint8_t v___x_351_; uint8_t v___x_352_; uint8_t v___x_353_; uint8_t v___x_354_; uint8_t v___x_355_; uint8_t v___x_356_; uint8_t v___x_357_; uint8_t v___x_358_; uint8_t v___x_359_; uint8_t v___x_360_; uint8_t v___x_361_; uint8_t v___x_362_; uint8_t v___x_363_; uint8_t v___x_364_; uint8_t v___x_365_; uint8_t v___x_366_; uint8_t v___x_367_; uint8_t v___x_368_; uint8_t v___x_369_; uint8_t v___x_370_; uint8_t v___x_371_; uint8_t v___x_372_; uint8_t v___x_373_; uint8_t v___x_374_; uint8_t v___x_375_; uint8_t v___x_376_; uint8_t v___x_377_; uint8_t v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_328_ = l_instInhabitedUInt8;
v___x_329_ = lean_unsigned_to_nat(0u);
v___x_330_ = lean_box(v___x_328_);
v_s0_331_ = lean_array_get(v___x_330_, v_col_327_, v___x_329_);
lean_dec(v___x_330_);
v___x_332_ = lean_unsigned_to_nat(1u);
v___x_333_ = lean_box(v___x_328_);
v_s1_334_ = lean_array_get(v___x_333_, v_col_327_, v___x_332_);
lean_dec(v___x_333_);
v___x_335_ = lean_unsigned_to_nat(2u);
v___x_336_ = lean_box(v___x_328_);
v_s2_337_ = lean_array_get(v___x_336_, v_col_327_, v___x_335_);
lean_dec(v___x_336_);
v___x_338_ = lean_unsigned_to_nat(3u);
v___x_339_ = lean_box(v___x_328_);
v_s3_340_ = lean_array_get(v___x_339_, v_col_327_, v___x_338_);
lean_dec(v___x_339_);
v___x_341_ = 2;
v___x_342_ = lean_unbox(v_s0_331_);
v___x_343_ = lp_aes__lean_gfMul(v___x_341_, v___x_342_);
v___x_344_ = 3;
v___x_345_ = lean_unbox(v_s1_334_);
v___x_346_ = lp_aes__lean_gfMul(v___x_344_, v___x_345_);
v___x_347_ = lean_uint8_xor(v___x_343_, v___x_346_);
v___x_348_ = lean_unbox(v_s2_337_);
v___x_349_ = lean_uint8_xor(v___x_347_, v___x_348_);
v___x_350_ = lean_unbox(v_s3_340_);
v___x_351_ = lean_uint8_xor(v___x_349_, v___x_350_);
v___x_352_ = lean_unbox(v_s1_334_);
v___x_353_ = lp_aes__lean_gfMul(v___x_341_, v___x_352_);
v___x_354_ = lean_unbox(v_s0_331_);
v___x_355_ = lean_uint8_xor(v___x_354_, v___x_353_);
v___x_356_ = lean_unbox(v_s2_337_);
v___x_357_ = lp_aes__lean_gfMul(v___x_344_, v___x_356_);
v___x_358_ = lean_uint8_xor(v___x_355_, v___x_357_);
v___x_359_ = lean_unbox(v_s3_340_);
v___x_360_ = lean_uint8_xor(v___x_358_, v___x_359_);
v___x_361_ = lean_unbox(v_s0_331_);
v___x_362_ = lean_unbox(v_s1_334_);
v___x_363_ = lean_uint8_xor(v___x_361_, v___x_362_);
v___x_364_ = lean_unbox(v_s2_337_);
v___x_365_ = lp_aes__lean_gfMul(v___x_341_, v___x_364_);
v___x_366_ = lean_uint8_xor(v___x_363_, v___x_365_);
v___x_367_ = lean_unbox(v_s3_340_);
v___x_368_ = lp_aes__lean_gfMul(v___x_344_, v___x_367_);
v___x_369_ = lean_uint8_xor(v___x_366_, v___x_368_);
v___x_370_ = lean_unbox(v_s0_331_);
lean_dec(v_s0_331_);
v___x_371_ = lp_aes__lean_gfMul(v___x_344_, v___x_370_);
v___x_372_ = lean_unbox(v_s1_334_);
lean_dec(v_s1_334_);
v___x_373_ = lean_uint8_xor(v___x_371_, v___x_372_);
v___x_374_ = lean_unbox(v_s2_337_);
lean_dec(v_s2_337_);
v___x_375_ = lean_uint8_xor(v___x_373_, v___x_374_);
v___x_376_ = lean_unbox(v_s3_340_);
lean_dec(v_s3_340_);
v___x_377_ = lp_aes__lean_gfMul(v___x_341_, v___x_376_);
v___x_378_ = lean_uint8_xor(v___x_375_, v___x_377_);
v___x_379_ = lean_unsigned_to_nat(4u);
v___x_380_ = lean_mk_empty_array_with_capacity(v___x_379_);
v___x_381_ = lean_box(v___x_351_);
v___x_382_ = lean_array_push(v___x_380_, v___x_381_);
v___x_383_ = lean_box(v___x_360_);
v___x_384_ = lean_array_push(v___x_382_, v___x_383_);
v___x_385_ = lean_box(v___x_369_);
v___x_386_ = lean_array_push(v___x_384_, v___x_385_);
v___x_387_ = lean_box(v___x_378_);
v___x_388_ = lean_array_push(v___x_386_, v___x_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_mixColumn___boxed(lean_object* v_col_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = lp_aes__lean_mixColumn(v_col_389_);
lean_dec_ref(v_col_389_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invMixColumn(lean_object* v_col_391_){
_start:
{
uint8_t v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v_s0_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v_s1_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v_s2_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v_s3_404_; uint8_t v___x_405_; uint8_t v___x_406_; uint8_t v___x_407_; uint8_t v___x_408_; uint8_t v___x_409_; uint8_t v___x_410_; uint8_t v___x_411_; uint8_t v___x_412_; uint8_t v___x_413_; uint8_t v___x_414_; uint8_t v___x_415_; uint8_t v___x_416_; uint8_t v___x_417_; uint8_t v___x_418_; uint8_t v___x_419_; uint8_t v___x_420_; uint8_t v___x_421_; uint8_t v___x_422_; uint8_t v___x_423_; uint8_t v___x_424_; uint8_t v___x_425_; uint8_t v___x_426_; uint8_t v___x_427_; uint8_t v___x_428_; uint8_t v___x_429_; uint8_t v___x_430_; uint8_t v___x_431_; uint8_t v___x_432_; uint8_t v___x_433_; uint8_t v___x_434_; uint8_t v___x_435_; uint8_t v___x_436_; uint8_t v___x_437_; uint8_t v___x_438_; uint8_t v___x_439_; uint8_t v___x_440_; uint8_t v___x_441_; uint8_t v___x_442_; uint8_t v___x_443_; uint8_t v___x_444_; uint8_t v___x_445_; uint8_t v___x_446_; uint8_t v___x_447_; uint8_t v___x_448_; uint8_t v___x_449_; uint8_t v___x_450_; uint8_t v___x_451_; uint8_t v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_392_ = l_instInhabitedUInt8;
v___x_393_ = lean_unsigned_to_nat(0u);
v___x_394_ = lean_box(v___x_392_);
v_s0_395_ = lean_array_get(v___x_394_, v_col_391_, v___x_393_);
lean_dec(v___x_394_);
v___x_396_ = lean_unsigned_to_nat(1u);
v___x_397_ = lean_box(v___x_392_);
v_s1_398_ = lean_array_get(v___x_397_, v_col_391_, v___x_396_);
lean_dec(v___x_397_);
v___x_399_ = lean_unsigned_to_nat(2u);
v___x_400_ = lean_box(v___x_392_);
v_s2_401_ = lean_array_get(v___x_400_, v_col_391_, v___x_399_);
lean_dec(v___x_400_);
v___x_402_ = lean_unsigned_to_nat(3u);
v___x_403_ = lean_box(v___x_392_);
v_s3_404_ = lean_array_get(v___x_403_, v_col_391_, v___x_402_);
lean_dec(v___x_403_);
v___x_405_ = 14;
v___x_406_ = lean_unbox(v_s0_395_);
v___x_407_ = lp_aes__lean_gfMul(v___x_405_, v___x_406_);
v___x_408_ = 11;
v___x_409_ = lean_unbox(v_s1_398_);
v___x_410_ = lp_aes__lean_gfMul(v___x_408_, v___x_409_);
v___x_411_ = lean_uint8_xor(v___x_407_, v___x_410_);
v___x_412_ = 13;
v___x_413_ = lean_unbox(v_s2_401_);
v___x_414_ = lp_aes__lean_gfMul(v___x_412_, v___x_413_);
v___x_415_ = lean_uint8_xor(v___x_411_, v___x_414_);
v___x_416_ = 9;
v___x_417_ = lean_unbox(v_s3_404_);
v___x_418_ = lp_aes__lean_gfMul(v___x_416_, v___x_417_);
v___x_419_ = lean_uint8_xor(v___x_415_, v___x_418_);
v___x_420_ = lean_unbox(v_s0_395_);
v___x_421_ = lp_aes__lean_gfMul(v___x_416_, v___x_420_);
v___x_422_ = lean_unbox(v_s1_398_);
v___x_423_ = lp_aes__lean_gfMul(v___x_405_, v___x_422_);
v___x_424_ = lean_uint8_xor(v___x_421_, v___x_423_);
v___x_425_ = lean_unbox(v_s2_401_);
v___x_426_ = lp_aes__lean_gfMul(v___x_408_, v___x_425_);
v___x_427_ = lean_uint8_xor(v___x_424_, v___x_426_);
v___x_428_ = lean_unbox(v_s3_404_);
v___x_429_ = lp_aes__lean_gfMul(v___x_412_, v___x_428_);
v___x_430_ = lean_uint8_xor(v___x_427_, v___x_429_);
v___x_431_ = lean_unbox(v_s0_395_);
v___x_432_ = lp_aes__lean_gfMul(v___x_412_, v___x_431_);
v___x_433_ = lean_unbox(v_s1_398_);
v___x_434_ = lp_aes__lean_gfMul(v___x_416_, v___x_433_);
v___x_435_ = lean_uint8_xor(v___x_432_, v___x_434_);
v___x_436_ = lean_unbox(v_s2_401_);
v___x_437_ = lp_aes__lean_gfMul(v___x_405_, v___x_436_);
v___x_438_ = lean_uint8_xor(v___x_435_, v___x_437_);
v___x_439_ = lean_unbox(v_s3_404_);
v___x_440_ = lp_aes__lean_gfMul(v___x_408_, v___x_439_);
v___x_441_ = lean_uint8_xor(v___x_438_, v___x_440_);
v___x_442_ = lean_unbox(v_s0_395_);
lean_dec(v_s0_395_);
v___x_443_ = lp_aes__lean_gfMul(v___x_408_, v___x_442_);
v___x_444_ = lean_unbox(v_s1_398_);
lean_dec(v_s1_398_);
v___x_445_ = lp_aes__lean_gfMul(v___x_412_, v___x_444_);
v___x_446_ = lean_uint8_xor(v___x_443_, v___x_445_);
v___x_447_ = lean_unbox(v_s2_401_);
lean_dec(v_s2_401_);
v___x_448_ = lp_aes__lean_gfMul(v___x_416_, v___x_447_);
v___x_449_ = lean_uint8_xor(v___x_446_, v___x_448_);
v___x_450_ = lean_unbox(v_s3_404_);
lean_dec(v_s3_404_);
v___x_451_ = lp_aes__lean_gfMul(v___x_405_, v___x_450_);
v___x_452_ = lean_uint8_xor(v___x_449_, v___x_451_);
v___x_453_ = lean_unsigned_to_nat(4u);
v___x_454_ = lean_mk_empty_array_with_capacity(v___x_453_);
v___x_455_ = lean_box(v___x_419_);
v___x_456_ = lean_array_push(v___x_454_, v___x_455_);
v___x_457_ = lean_box(v___x_430_);
v___x_458_ = lean_array_push(v___x_456_, v___x_457_);
v___x_459_ = lean_box(v___x_441_);
v___x_460_ = lean_array_push(v___x_458_, v___x_459_);
v___x_461_ = lean_box(v___x_452_);
v___x_462_ = lean_array_push(v___x_460_, v___x_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invMixColumn___boxed(lean_object* v_col_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = lp_aes__lean_invMixColumn(v_col_463_);
lean_dec_ref(v_col_463_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00mixColumns_spec__0(size_t v_sz_465_, size_t v_i_466_, lean_object* v_bs_467_){
_start:
{
uint8_t v___x_468_; 
v___x_468_ = lean_usize_dec_lt(v_i_466_, v_sz_465_);
if (v___x_468_ == 0)
{
return v_bs_467_;
}
else
{
lean_object* v_v_469_; lean_object* v___x_470_; lean_object* v_bs_x27_471_; lean_object* v___x_472_; size_t v___x_473_; size_t v___x_474_; lean_object* v___x_475_; 
v_v_469_ = lean_array_uget(v_bs_467_, v_i_466_);
v___x_470_ = lean_unsigned_to_nat(0u);
v_bs_x27_471_ = lean_array_uset(v_bs_467_, v_i_466_, v___x_470_);
v___x_472_ = lp_aes__lean_mixColumn(v_v_469_);
lean_dec(v_v_469_);
v___x_473_ = ((size_t)1ULL);
v___x_474_ = lean_usize_add(v_i_466_, v___x_473_);
v___x_475_ = lean_array_uset(v_bs_x27_471_, v_i_466_, v___x_472_);
v_i_466_ = v___x_474_;
v_bs_467_ = v___x_475_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00mixColumns_spec__0___boxed(lean_object* v_sz_477_, lean_object* v_i_478_, lean_object* v_bs_479_){
_start:
{
size_t v_sz_boxed_480_; size_t v_i_boxed_481_; lean_object* v_res_482_; 
v_sz_boxed_480_ = lean_unbox_usize(v_sz_477_);
lean_dec(v_sz_477_);
v_i_boxed_481_ = lean_unbox_usize(v_i_478_);
lean_dec(v_i_478_);
v_res_482_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00mixColumns_spec__0(v_sz_boxed_480_, v_i_boxed_481_, v_bs_479_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_mixColumns(lean_object* v_s_483_){
_start:
{
size_t v_sz_484_; size_t v___x_485_; lean_object* v___x_486_; 
v_sz_484_ = lean_array_size(v_s_483_);
v___x_485_ = ((size_t)0ULL);
v___x_486_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00mixColumns_spec__0(v_sz_484_, v___x_485_, v_s_483_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invMixColumns_spec__0(size_t v_sz_487_, size_t v_i_488_, lean_object* v_bs_489_){
_start:
{
uint8_t v___x_490_; 
v___x_490_ = lean_usize_dec_lt(v_i_488_, v_sz_487_);
if (v___x_490_ == 0)
{
return v_bs_489_;
}
else
{
lean_object* v_v_491_; lean_object* v___x_492_; lean_object* v_bs_x27_493_; lean_object* v___x_494_; size_t v___x_495_; size_t v___x_496_; lean_object* v___x_497_; 
v_v_491_ = lean_array_uget(v_bs_489_, v_i_488_);
v___x_492_ = lean_unsigned_to_nat(0u);
v_bs_x27_493_ = lean_array_uset(v_bs_489_, v_i_488_, v___x_492_);
v___x_494_ = lp_aes__lean_invMixColumn(v_v_491_);
lean_dec(v_v_491_);
v___x_495_ = ((size_t)1ULL);
v___x_496_ = lean_usize_add(v_i_488_, v___x_495_);
v___x_497_ = lean_array_uset(v_bs_x27_493_, v_i_488_, v___x_494_);
v_i_488_ = v___x_496_;
v_bs_489_ = v___x_497_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invMixColumns_spec__0___boxed(lean_object* v_sz_499_, lean_object* v_i_500_, lean_object* v_bs_501_){
_start:
{
size_t v_sz_boxed_502_; size_t v_i_boxed_503_; lean_object* v_res_504_; 
v_sz_boxed_502_ = lean_unbox_usize(v_sz_499_);
lean_dec(v_sz_499_);
v_i_boxed_503_ = lean_unbox_usize(v_i_500_);
lean_dec(v_i_500_);
v_res_504_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invMixColumns_spec__0(v_sz_boxed_502_, v_i_boxed_503_, v_bs_501_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_invMixColumns(lean_object* v_s_505_){
_start:
{
size_t v_sz_506_; size_t v___x_507_; lean_object* v___x_508_; 
v_sz_506_ = lean_array_size(v_s_505_);
v___x_507_ = ((size_t)0ULL);
v___x_508_ = lp_aes__lean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00invMixColumns_spec__0(v_sz_506_, v___x_507_, v_s_505_);
return v___x_508_;
}
}
LEAN_EXPORT uint8_t lp_aes__lean_addRoundKey___lam__0(lean_object* v___x_509_, lean_object* v_s_510_, lean_object* v_j_511_, uint8_t v___x_512_, lean_object* v_rkState_513_, lean_object* v_i_514_){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; uint8_t v___x_521_; uint8_t v___x_522_; uint8_t v___x_523_; 
v___x_515_ = lean_array_get_borrowed(v___x_509_, v_s_510_, v_j_511_);
v___x_516_ = lean_box(v___x_512_);
v___x_517_ = lean_array_get(v___x_516_, v___x_515_, v_i_514_);
lean_dec(v___x_516_);
v___x_518_ = lean_array_get_borrowed(v___x_509_, v_rkState_513_, v_j_511_);
v___x_519_ = lean_box(v___x_512_);
v___x_520_ = lean_array_get(v___x_519_, v___x_518_, v_i_514_);
lean_dec(v___x_519_);
v___x_521_ = lean_unbox(v___x_517_);
lean_dec(v___x_517_);
v___x_522_ = lean_unbox(v___x_520_);
lean_dec(v___x_520_);
v___x_523_ = lean_uint8_xor(v___x_521_, v___x_522_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_addRoundKey___lam__0___boxed(lean_object* v___x_524_, lean_object* v_s_525_, lean_object* v_j_526_, lean_object* v___x_527_, lean_object* v_rkState_528_, lean_object* v_i_529_){
_start:
{
uint8_t v___x_74__boxed_530_; uint8_t v_res_531_; lean_object* v_r_532_; 
v___x_74__boxed_530_ = lean_unbox(v___x_527_);
v_res_531_ = lp_aes__lean_addRoundKey___lam__0(v___x_524_, v_s_525_, v_j_526_, v___x_74__boxed_530_, v_rkState_528_, v_i_529_);
lean_dec(v_i_529_);
lean_dec_ref(v_rkState_528_);
lean_dec(v_j_526_);
lean_dec_ref(v_s_525_);
lean_dec_ref(v___x_524_);
v_r_532_ = lean_box(v_res_531_);
return v_r_532_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_addRoundKey___lam__1(lean_object* v___x_533_, lean_object* v_s_534_, uint8_t v___x_535_, lean_object* v_rkState_536_, lean_object* v___x_537_, lean_object* v_j_538_){
_start:
{
lean_object* v___x_539_; lean_object* v___f_540_; lean_object* v___x_541_; 
v___x_539_ = lean_box(v___x_535_);
v___f_540_ = lean_alloc_closure((void*)(lp_aes__lean_addRoundKey___lam__0___boxed), 6, 5);
lean_closure_set(v___f_540_, 0, v___x_533_);
lean_closure_set(v___f_540_, 1, v_s_534_);
lean_closure_set(v___f_540_, 2, v_j_538_);
lean_closure_set(v___f_540_, 3, v___x_539_);
lean_closure_set(v___f_540_, 4, v_rkState_536_);
v___x_541_ = l_Array_ofFn___redArg(v___x_537_, v___f_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_addRoundKey___lam__1___boxed(lean_object* v___x_542_, lean_object* v_s_543_, lean_object* v___x_544_, lean_object* v_rkState_545_, lean_object* v___x_546_, lean_object* v_j_547_){
_start:
{
uint8_t v___x_98__boxed_548_; lean_object* v_res_549_; 
v___x_98__boxed_548_ = lean_unbox(v___x_544_);
v_res_549_ = lp_aes__lean_addRoundKey___lam__1(v___x_542_, v_s_543_, v___x_98__boxed_548_, v_rkState_545_, v___x_546_, v_j_547_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_addRoundKey(lean_object* v_s_550_, lean_object* v_rk_551_){
_start:
{
uint8_t v___x_552_; lean_object* v___x_553_; lean_object* v_rkState_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___f_557_; lean_object* v___x_558_; 
v___x_552_ = l_instInhabitedUInt8;
v___x_553_ = lean_obj_once(&lp_aes__lean_getRow___closed__0, &lp_aes__lean_getRow___closed__0_once, _init_lp_aes__lean_getRow___closed__0);
v_rkState_554_ = lp_aes__lean_blockToState(v_rk_551_);
v___x_555_ = lean_unsigned_to_nat(4u);
v___x_556_ = lean_box(v___x_552_);
v___f_557_ = lean_alloc_closure((void*)(lp_aes__lean_addRoundKey___lam__1___boxed), 6, 5);
lean_closure_set(v___f_557_, 0, v___x_553_);
lean_closure_set(v___f_557_, 1, v_s_550_);
lean_closure_set(v___f_557_, 2, v___x_556_);
lean_closure_set(v___f_557_, 3, v_rkState_554_);
lean_closure_set(v___f_557_, 4, v___x_555_);
v___x_558_ = l_Array_ofFn___redArg(v___x_555_, v___f_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_addRoundKey___boxed(lean_object* v_s_559_, lean_object* v_rk_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = lp_aes__lean_addRoundKey(v_s_559_, v_rk_560_);
lean_dec_ref(v_rk_560_);
return v_res_561_;
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
