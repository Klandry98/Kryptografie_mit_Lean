// Lean compiler output
// Module: Main
// Imports: public import Init public meta import Init public import AES.Cipher
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
lean_object* lp_aes__lean_hexToBlock(lean_object*);
lean_object* lp_aes__lean_aesEncrypt(lean_object*, lean_object*);
lean_object* lp_aes__lean_aesDecrypt(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_aes__lean_blockToHex(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
uint8_t l_Array_isEqvAux___at___00ByteArray_instBEq_beq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_IO_print___at___00IO_println___at___00test__gfsbox__1_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_IO_print___at___00IO_println___at___00test__gfsbox__1_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_aes__lean_test__gfsbox__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Key:       00000000000000000000000000000000"};
static const lean_object* lp_aes__lean_test__gfsbox__1___closed__0 = (const lean_object*)&lp_aes__lean_test__gfsbox__1___closed__0_value;
static const lean_string_object lp_aes__lean_test__gfsbox__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Plaintext: f34481ec3cc627bacd5dc3fb08f273e6"};
static const lean_object* lp_aes__lean_test__gfsbox__1___closed__1 = (const lean_object*)&lp_aes__lean_test__gfsbox__1___closed__1_value;
static const lean_string_object lp_aes__lean_test__gfsbox__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Expected:  0336763e966d92595a567cc9ce537f5e"};
static const lean_object* lp_aes__lean_test__gfsbox__1___closed__2 = (const lean_object*)&lp_aes__lean_test__gfsbox__1___closed__2_value;
static const lean_string_object lp_aes__lean_test__gfsbox__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "00000000000000000000000000000000"};
static const lean_object* lp_aes__lean_test__gfsbox__1___closed__3 = (const lean_object*)&lp_aes__lean_test__gfsbox__1___closed__3_value;
static lean_once_cell_t lp_aes__lean_test__gfsbox__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__gfsbox__1___closed__4;
static const lean_string_object lp_aes__lean_test__gfsbox__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "f34481ec3cc627bacd5dc3fb08f273e6"};
static const lean_object* lp_aes__lean_test__gfsbox__1___closed__5 = (const lean_object*)&lp_aes__lean_test__gfsbox__1___closed__5_value;
static lean_once_cell_t lp_aes__lean_test__gfsbox__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__gfsbox__1___closed__6;
static lean_once_cell_t lp_aes__lean_test__gfsbox__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__gfsbox__1___closed__7;
static const lean_string_object lp_aes__lean_test__gfsbox__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Got:       "};
static const lean_object* lp_aes__lean_test__gfsbox__1___closed__8 = (const lean_object*)&lp_aes__lean_test__gfsbox__1___closed__8_value;
static lean_once_cell_t lp_aes__lean_test__gfsbox__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__gfsbox__1___closed__9;
static lean_once_cell_t lp_aes__lean_test__gfsbox__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__gfsbox__1___closed__10;
static const lean_string_object lp_aes__lean_test__gfsbox__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "0336763e966d92595a567cc9ce537f5e"};
static const lean_object* lp_aes__lean_test__gfsbox__1___closed__11 = (const lean_object*)&lp_aes__lean_test__gfsbox__1___closed__11_value;
static lean_once_cell_t lp_aes__lean_test__gfsbox__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__gfsbox__1___closed__12;
static const lean_string_object lp_aes__lean_test__gfsbox__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Match:     "};
static const lean_object* lp_aes__lean_test__gfsbox__1___closed__13 = (const lean_object*)&lp_aes__lean_test__gfsbox__1___closed__13_value;
static const lean_string_object lp_aes__lean_test__gfsbox__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* lp_aes__lean_test__gfsbox__1___closed__14 = (const lean_object*)&lp_aes__lean_test__gfsbox__1___closed__14_value;
static lean_once_cell_t lp_aes__lean_test__gfsbox__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__gfsbox__1___closed__15;
static lean_once_cell_t lp_aes__lean_test__gfsbox__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__gfsbox__1___closed__16;
static lean_once_cell_t lp_aes__lean_test__gfsbox__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_aes__lean_test__gfsbox__1___closed__17;
static lean_once_cell_t lp_aes__lean_test__gfsbox__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_aes__lean_test__gfsbox__1___closed__18;
static const lean_string_object lp_aes__lean_test__gfsbox__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* lp_aes__lean_test__gfsbox__1___closed__19 = (const lean_object*)&lp_aes__lean_test__gfsbox__1___closed__19_value;
LEAN_EXPORT lean_object* lp_aes__lean_test__gfsbox__1();
LEAN_EXPORT lean_object* lp_aes__lean_test__gfsbox__1___boxed(lean_object*);
static const lean_string_object lp_aes__lean_test__fips197___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_aes__lean_test__fips197___closed__0 = (const lean_object*)&lp_aes__lean_test__fips197___closed__0_value;
static const lean_string_object lp_aes__lean_test__fips197___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "=== FIPS 197 Appendix B ==="};
static const lean_object* lp_aes__lean_test__fips197___closed__1 = (const lean_object*)&lp_aes__lean_test__fips197___closed__1_value;
static const lean_string_object lp_aes__lean_test__fips197___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Key:       2b7e151628aed2a6abf7158809cf4f3c"};
static const lean_object* lp_aes__lean_test__fips197___closed__2 = (const lean_object*)&lp_aes__lean_test__fips197___closed__2_value;
static const lean_string_object lp_aes__lean_test__fips197___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Plaintext: 3243f6a8885a308d313198a2e0370734"};
static const lean_object* lp_aes__lean_test__fips197___closed__3 = (const lean_object*)&lp_aes__lean_test__fips197___closed__3_value;
static const lean_string_object lp_aes__lean_test__fips197___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Expected:  3925841d02dc09fbdc118597196a0b32"};
static const lean_object* lp_aes__lean_test__fips197___closed__4 = (const lean_object*)&lp_aes__lean_test__fips197___closed__4_value;
static const lean_string_object lp_aes__lean_test__fips197___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "2b7e151628aed2a6abf7158809cf4f3c"};
static const lean_object* lp_aes__lean_test__fips197___closed__5 = (const lean_object*)&lp_aes__lean_test__fips197___closed__5_value;
static lean_once_cell_t lp_aes__lean_test__fips197___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__fips197___closed__6;
static const lean_string_object lp_aes__lean_test__fips197___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "3243f6a8885a308d313198a2e0370734"};
static const lean_object* lp_aes__lean_test__fips197___closed__7 = (const lean_object*)&lp_aes__lean_test__fips197___closed__7_value;
static lean_once_cell_t lp_aes__lean_test__fips197___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__fips197___closed__8;
static lean_once_cell_t lp_aes__lean_test__fips197___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__fips197___closed__9;
static lean_once_cell_t lp_aes__lean_test__fips197___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__fips197___closed__10;
static lean_once_cell_t lp_aes__lean_test__fips197___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__fips197___closed__11;
static const lean_string_object lp_aes__lean_test__fips197___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "3925841d02dc09fbdc118597196a0b32"};
static const lean_object* lp_aes__lean_test__fips197___closed__12 = (const lean_object*)&lp_aes__lean_test__fips197___closed__12_value;
static lean_once_cell_t lp_aes__lean_test__fips197___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__fips197___closed__13;
static lean_once_cell_t lp_aes__lean_test__fips197___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__fips197___closed__14;
static lean_once_cell_t lp_aes__lean_test__fips197___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__fips197___closed__15;
static lean_once_cell_t lp_aes__lean_test__fips197___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_aes__lean_test__fips197___closed__16;
static lean_once_cell_t lp_aes__lean_test__fips197___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_aes__lean_test__fips197___closed__17;
LEAN_EXPORT lean_object* lp_aes__lean_test__fips197();
LEAN_EXPORT lean_object* lp_aes__lean_test__fips197___boxed(lean_object*);
static const lean_string_object lp_aes__lean_test__roundtrip___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "=== Roundtrip Test ==="};
static const lean_object* lp_aes__lean_test__roundtrip___closed__0 = (const lean_object*)&lp_aes__lean_test__roundtrip___closed__0_value;
static const lean_string_object lp_aes__lean_test__roundtrip___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Original:  "};
static const lean_object* lp_aes__lean_test__roundtrip___closed__1 = (const lean_object*)&lp_aes__lean_test__roundtrip___closed__1_value;
static lean_once_cell_t lp_aes__lean_test__roundtrip___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__roundtrip___closed__2;
static lean_once_cell_t lp_aes__lean_test__roundtrip___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__roundtrip___closed__3;
static const lean_string_object lp_aes__lean_test__roundtrip___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Encrypted: "};
static const lean_object* lp_aes__lean_test__roundtrip___closed__4 = (const lean_object*)&lp_aes__lean_test__roundtrip___closed__4_value;
static lean_once_cell_t lp_aes__lean_test__roundtrip___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__roundtrip___closed__5;
static lean_once_cell_t lp_aes__lean_test__roundtrip___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__roundtrip___closed__6;
static const lean_string_object lp_aes__lean_test__roundtrip___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Decrypted: "};
static const lean_object* lp_aes__lean_test__roundtrip___closed__7 = (const lean_object*)&lp_aes__lean_test__roundtrip___closed__7_value;
static lean_once_cell_t lp_aes__lean_test__roundtrip___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__roundtrip___closed__8;
static lean_once_cell_t lp_aes__lean_test__roundtrip___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__roundtrip___closed__9;
static lean_once_cell_t lp_aes__lean_test__roundtrip___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__roundtrip___closed__10;
static lean_once_cell_t lp_aes__lean_test__roundtrip___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_aes__lean_test__roundtrip___closed__11;
static lean_once_cell_t lp_aes__lean_test__roundtrip___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_aes__lean_test__roundtrip___closed__12;
static lean_once_cell_t lp_aes__lean_test__roundtrip___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_aes__lean_test__roundtrip___closed__13;
LEAN_EXPORT lean_object* lp_aes__lean_test__roundtrip();
LEAN_EXPORT lean_object* lp_aes__lean_test__roundtrip___boxed(lean_object*);
static const lean_string_object lp_aes__lean_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 42, .m_data = "=== AES-128 Lean 4 — AESAVS Validation ==="};
static const lean_object* lp_aes__lean_main___closed__0 = (const lean_object*)&lp_aes__lean_main___closed__0_value;
static const lean_string_object lp_aes__lean_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "=== GFSbox Test #1 ==="};
static const lean_object* lp_aes__lean_main___closed__1 = (const lean_object*)&lp_aes__lean_main___closed__1_value;
static const lean_string_object lp_aes__lean_main___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "=== Done ==="};
static const lean_object* lp_aes__lean_main___closed__2 = (const lean_object*)&lp_aes__lean_main___closed__2_value;
LEAN_EXPORT lean_object* _lean_main();
LEAN_EXPORT lean_object* lp_aes__lean_main___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_aes__lean_IO_print___at___00IO_println___at___00test__gfsbox__1_spec__0_spec__0(lean_object* v_s_1_){
_start:
{
lean_object* v___x_3_; lean_object* v_putStr_4_; lean_object* v___x_5_; 
v___x_3_ = lean_get_stdout();
v_putStr_4_ = lean_ctor_get(v___x_3_, 4);
lean_inc_ref(v_putStr_4_);
lean_dec_ref(v___x_3_);
v___x_5_ = lean_apply_2(v_putStr_4_, v_s_1_, lean_box(0));
return v___x_5_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_IO_print___at___00IO_println___at___00test__gfsbox__1_spec__0_spec__0___boxed(lean_object* v_s_6_, lean_object* v_a_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = lp_aes__lean_IO_print___at___00IO_println___at___00test__gfsbox__1_spec__0_spec__0(v_s_6_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(lean_object* v_s_9_){
_start:
{
uint32_t v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = 10;
v___x_12_ = lean_string_push(v_s_9_, v___x_11_);
v___x_13_ = lp_aes__lean_IO_print___at___00IO_println___at___00test__gfsbox__1_spec__0_spec__0(v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0___boxed(lean_object* v_s_14_, lean_object* v_a_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v_s_14_);
return v_res_16_;
}
}
static lean_object* _init_lp_aes__lean_test__gfsbox__1___closed__4(void){
_start:
{
lean_object* v___x_21_; lean_object* v_key_22_; 
v___x_21_ = ((lean_object*)(lp_aes__lean_test__gfsbox__1___closed__3));
v_key_22_ = lp_aes__lean_hexToBlock(v___x_21_);
return v_key_22_;
}
}
static lean_object* _init_lp_aes__lean_test__gfsbox__1___closed__6(void){
_start:
{
lean_object* v___x_24_; lean_object* v_pt_25_; 
v___x_24_ = ((lean_object*)(lp_aes__lean_test__gfsbox__1___closed__5));
v_pt_25_ = lp_aes__lean_hexToBlock(v___x_24_);
return v_pt_25_;
}
}
static lean_object* _init_lp_aes__lean_test__gfsbox__1___closed__7(void){
_start:
{
lean_object* v_key_26_; lean_object* v_pt_27_; lean_object* v_ct_28_; 
v_key_26_ = lean_obj_once(&lp_aes__lean_test__gfsbox__1___closed__4, &lp_aes__lean_test__gfsbox__1___closed__4_once, _init_lp_aes__lean_test__gfsbox__1___closed__4);
v_pt_27_ = lean_obj_once(&lp_aes__lean_test__gfsbox__1___closed__6, &lp_aes__lean_test__gfsbox__1___closed__6_once, _init_lp_aes__lean_test__gfsbox__1___closed__6);
v_ct_28_ = lp_aes__lean_aesEncrypt(v_pt_27_, v_key_26_);
return v_ct_28_;
}
}
static lean_object* _init_lp_aes__lean_test__gfsbox__1___closed__9(void){
_start:
{
lean_object* v_ct_30_; lean_object* v___x_31_; 
v_ct_30_ = lean_obj_once(&lp_aes__lean_test__gfsbox__1___closed__7, &lp_aes__lean_test__gfsbox__1___closed__7_once, _init_lp_aes__lean_test__gfsbox__1___closed__7);
v___x_31_ = lp_aes__lean_blockToHex(v_ct_30_);
return v___x_31_;
}
}
static lean_object* _init_lp_aes__lean_test__gfsbox__1___closed__10(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_32_ = lean_obj_once(&lp_aes__lean_test__gfsbox__1___closed__9, &lp_aes__lean_test__gfsbox__1___closed__9_once, _init_lp_aes__lean_test__gfsbox__1___closed__9);
v___x_33_ = ((lean_object*)(lp_aes__lean_test__gfsbox__1___closed__8));
v___x_34_ = lean_string_append(v___x_33_, v___x_32_);
return v___x_34_;
}
}
static lean_object* _init_lp_aes__lean_test__gfsbox__1___closed__12(void){
_start:
{
lean_object* v___x_36_; lean_object* v_expected__ct_37_; 
v___x_36_ = ((lean_object*)(lp_aes__lean_test__gfsbox__1___closed__11));
v_expected__ct_37_ = lp_aes__lean_hexToBlock(v___x_36_);
return v_expected__ct_37_;
}
}
static lean_object* _init_lp_aes__lean_test__gfsbox__1___closed__15(void){
_start:
{
lean_object* v_ct_40_; lean_object* v___x_41_; 
v_ct_40_ = lean_obj_once(&lp_aes__lean_test__gfsbox__1___closed__7, &lp_aes__lean_test__gfsbox__1___closed__7_once, _init_lp_aes__lean_test__gfsbox__1___closed__7);
v___x_41_ = lean_array_get_size(v_ct_40_);
return v___x_41_;
}
}
static lean_object* _init_lp_aes__lean_test__gfsbox__1___closed__16(void){
_start:
{
lean_object* v_expected__ct_42_; lean_object* v___x_43_; 
v_expected__ct_42_ = lean_obj_once(&lp_aes__lean_test__gfsbox__1___closed__12, &lp_aes__lean_test__gfsbox__1___closed__12_once, _init_lp_aes__lean_test__gfsbox__1___closed__12);
v___x_43_ = lean_array_get_size(v_expected__ct_42_);
return v___x_43_;
}
}
static uint8_t _init_lp_aes__lean_test__gfsbox__1___closed__17(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; uint8_t v___x_46_; 
v___x_44_ = lean_obj_once(&lp_aes__lean_test__gfsbox__1___closed__16, &lp_aes__lean_test__gfsbox__1___closed__16_once, _init_lp_aes__lean_test__gfsbox__1___closed__16);
v___x_45_ = lean_obj_once(&lp_aes__lean_test__gfsbox__1___closed__15, &lp_aes__lean_test__gfsbox__1___closed__15_once, _init_lp_aes__lean_test__gfsbox__1___closed__15);
v___x_46_ = lean_nat_dec_eq(v___x_45_, v___x_44_);
return v___x_46_;
}
}
static uint8_t _init_lp_aes__lean_test__gfsbox__1___closed__18(void){
_start:
{
lean_object* v___x_47_; lean_object* v_expected__ct_48_; lean_object* v_ct_49_; uint8_t v___x_50_; 
v___x_47_ = lean_obj_once(&lp_aes__lean_test__gfsbox__1___closed__15, &lp_aes__lean_test__gfsbox__1___closed__15_once, _init_lp_aes__lean_test__gfsbox__1___closed__15);
v_expected__ct_48_ = lean_obj_once(&lp_aes__lean_test__gfsbox__1___closed__12, &lp_aes__lean_test__gfsbox__1___closed__12_once, _init_lp_aes__lean_test__gfsbox__1___closed__12);
v_ct_49_ = lean_obj_once(&lp_aes__lean_test__gfsbox__1___closed__7, &lp_aes__lean_test__gfsbox__1___closed__7_once, _init_lp_aes__lean_test__gfsbox__1___closed__7);
v___x_50_ = l_Array_isEqvAux___at___00ByteArray_instBEq_beq_spec__0___redArg(v_ct_49_, v_expected__ct_48_, v___x_47_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_test__gfsbox__1(){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = ((lean_object*)(lp_aes__lean_test__gfsbox__1___closed__0));
v___x_54_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_53_);
if (lean_obj_tag(v___x_54_) == 0)
{
lean_object* v___x_55_; lean_object* v___x_56_; 
lean_dec_ref(v___x_54_);
v___x_55_ = ((lean_object*)(lp_aes__lean_test__gfsbox__1___closed__1));
v___x_56_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_55_);
if (lean_obj_tag(v___x_56_) == 0)
{
lean_object* v___x_57_; lean_object* v___x_58_; 
lean_dec_ref(v___x_56_);
v___x_57_ = ((lean_object*)(lp_aes__lean_test__gfsbox__1___closed__2));
v___x_58_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_57_);
if (lean_obj_tag(v___x_58_) == 0)
{
lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec_ref(v___x_58_);
v___x_59_ = lean_obj_once(&lp_aes__lean_test__gfsbox__1___closed__10, &lp_aes__lean_test__gfsbox__1___closed__10_once, _init_lp_aes__lean_test__gfsbox__1___closed__10);
v___x_60_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_59_);
if (lean_obj_tag(v___x_60_) == 0)
{
lean_object* v___x_61_; lean_object* v___y_63_; uint8_t v___x_68_; 
lean_dec_ref(v___x_60_);
v___x_61_ = ((lean_object*)(lp_aes__lean_test__gfsbox__1___closed__13));
v___x_68_ = lean_uint8_once(&lp_aes__lean_test__gfsbox__1___closed__17, &lp_aes__lean_test__gfsbox__1___closed__17_once, _init_lp_aes__lean_test__gfsbox__1___closed__17);
if (v___x_68_ == 0)
{
goto v___jp_66_;
}
else
{
uint8_t v___x_69_; 
v___x_69_ = lean_uint8_once(&lp_aes__lean_test__gfsbox__1___closed__18, &lp_aes__lean_test__gfsbox__1___closed__18_once, _init_lp_aes__lean_test__gfsbox__1___closed__18);
if (v___x_69_ == 0)
{
goto v___jp_66_;
}
else
{
lean_object* v___x_70_; 
v___x_70_ = ((lean_object*)(lp_aes__lean_test__gfsbox__1___closed__19));
v___y_63_ = v___x_70_;
goto v___jp_62_;
}
}
v___jp_62_:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_string_append(v___x_61_, v___y_63_);
v___x_65_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_64_);
return v___x_65_;
}
v___jp_66_:
{
lean_object* v___x_67_; 
v___x_67_ = ((lean_object*)(lp_aes__lean_test__gfsbox__1___closed__14));
v___y_63_ = v___x_67_;
goto v___jp_62_;
}
}
else
{
return v___x_60_;
}
}
else
{
return v___x_58_;
}
}
else
{
return v___x_56_;
}
}
else
{
return v___x_54_;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean_test__gfsbox__1___boxed(lean_object* v_a_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = lp_aes__lean_test__gfsbox__1();
return v_res_72_;
}
}
static lean_object* _init_lp_aes__lean_test__fips197___closed__6(void){
_start:
{
lean_object* v___x_79_; lean_object* v_key_80_; 
v___x_79_ = ((lean_object*)(lp_aes__lean_test__fips197___closed__5));
v_key_80_ = lp_aes__lean_hexToBlock(v___x_79_);
return v_key_80_;
}
}
static lean_object* _init_lp_aes__lean_test__fips197___closed__8(void){
_start:
{
lean_object* v___x_82_; lean_object* v_pt_83_; 
v___x_82_ = ((lean_object*)(lp_aes__lean_test__fips197___closed__7));
v_pt_83_ = lp_aes__lean_hexToBlock(v___x_82_);
return v_pt_83_;
}
}
static lean_object* _init_lp_aes__lean_test__fips197___closed__9(void){
_start:
{
lean_object* v_key_84_; lean_object* v_pt_85_; lean_object* v_ct_86_; 
v_key_84_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__6, &lp_aes__lean_test__fips197___closed__6_once, _init_lp_aes__lean_test__fips197___closed__6);
v_pt_85_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__8, &lp_aes__lean_test__fips197___closed__8_once, _init_lp_aes__lean_test__fips197___closed__8);
v_ct_86_ = lp_aes__lean_aesEncrypt(v_pt_85_, v_key_84_);
return v_ct_86_;
}
}
static lean_object* _init_lp_aes__lean_test__fips197___closed__10(void){
_start:
{
lean_object* v_ct_87_; lean_object* v___x_88_; 
v_ct_87_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__9, &lp_aes__lean_test__fips197___closed__9_once, _init_lp_aes__lean_test__fips197___closed__9);
v___x_88_ = lp_aes__lean_blockToHex(v_ct_87_);
return v___x_88_;
}
}
static lean_object* _init_lp_aes__lean_test__fips197___closed__11(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_89_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__10, &lp_aes__lean_test__fips197___closed__10_once, _init_lp_aes__lean_test__fips197___closed__10);
v___x_90_ = ((lean_object*)(lp_aes__lean_test__gfsbox__1___closed__8));
v___x_91_ = lean_string_append(v___x_90_, v___x_89_);
return v___x_91_;
}
}
static lean_object* _init_lp_aes__lean_test__fips197___closed__13(void){
_start:
{
lean_object* v___x_93_; lean_object* v_expected__ct_94_; 
v___x_93_ = ((lean_object*)(lp_aes__lean_test__fips197___closed__12));
v_expected__ct_94_ = lp_aes__lean_hexToBlock(v___x_93_);
return v_expected__ct_94_;
}
}
static lean_object* _init_lp_aes__lean_test__fips197___closed__14(void){
_start:
{
lean_object* v_ct_95_; lean_object* v___x_96_; 
v_ct_95_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__9, &lp_aes__lean_test__fips197___closed__9_once, _init_lp_aes__lean_test__fips197___closed__9);
v___x_96_ = lean_array_get_size(v_ct_95_);
return v___x_96_;
}
}
static lean_object* _init_lp_aes__lean_test__fips197___closed__15(void){
_start:
{
lean_object* v_expected__ct_97_; lean_object* v___x_98_; 
v_expected__ct_97_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__13, &lp_aes__lean_test__fips197___closed__13_once, _init_lp_aes__lean_test__fips197___closed__13);
v___x_98_ = lean_array_get_size(v_expected__ct_97_);
return v___x_98_;
}
}
static uint8_t _init_lp_aes__lean_test__fips197___closed__16(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_99_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__15, &lp_aes__lean_test__fips197___closed__15_once, _init_lp_aes__lean_test__fips197___closed__15);
v___x_100_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__14, &lp_aes__lean_test__fips197___closed__14_once, _init_lp_aes__lean_test__fips197___closed__14);
v___x_101_ = lean_nat_dec_eq(v___x_100_, v___x_99_);
return v___x_101_;
}
}
static uint8_t _init_lp_aes__lean_test__fips197___closed__17(void){
_start:
{
lean_object* v___x_102_; lean_object* v_expected__ct_103_; lean_object* v_ct_104_; uint8_t v___x_105_; 
v___x_102_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__14, &lp_aes__lean_test__fips197___closed__14_once, _init_lp_aes__lean_test__fips197___closed__14);
v_expected__ct_103_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__13, &lp_aes__lean_test__fips197___closed__13_once, _init_lp_aes__lean_test__fips197___closed__13);
v_ct_104_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__9, &lp_aes__lean_test__fips197___closed__9_once, _init_lp_aes__lean_test__fips197___closed__9);
v___x_105_ = l_Array_isEqvAux___at___00ByteArray_instBEq_beq_spec__0___redArg(v_ct_104_, v_expected__ct_103_, v___x_102_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_test__fips197(){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = ((lean_object*)(lp_aes__lean_test__fips197___closed__0));
v___x_108_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_107_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v___x_109_; lean_object* v___x_110_; 
lean_dec_ref(v___x_108_);
v___x_109_ = ((lean_object*)(lp_aes__lean_test__fips197___closed__1));
v___x_110_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_109_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v___x_111_; lean_object* v___x_112_; 
lean_dec_ref(v___x_110_);
v___x_111_ = ((lean_object*)(lp_aes__lean_test__fips197___closed__2));
v___x_112_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_111_);
if (lean_obj_tag(v___x_112_) == 0)
{
lean_object* v___x_113_; lean_object* v___x_114_; 
lean_dec_ref(v___x_112_);
v___x_113_ = ((lean_object*)(lp_aes__lean_test__fips197___closed__3));
v___x_114_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_113_);
if (lean_obj_tag(v___x_114_) == 0)
{
lean_object* v___x_115_; lean_object* v___x_116_; 
lean_dec_ref(v___x_114_);
v___x_115_ = ((lean_object*)(lp_aes__lean_test__fips197___closed__4));
v___x_116_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_115_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v___x_117_; lean_object* v___x_118_; 
lean_dec_ref(v___x_116_);
v___x_117_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__11, &lp_aes__lean_test__fips197___closed__11_once, _init_lp_aes__lean_test__fips197___closed__11);
v___x_118_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_117_);
if (lean_obj_tag(v___x_118_) == 0)
{
lean_object* v___x_119_; lean_object* v___y_121_; uint8_t v___x_126_; 
lean_dec_ref(v___x_118_);
v___x_119_ = ((lean_object*)(lp_aes__lean_test__gfsbox__1___closed__13));
v___x_126_ = lean_uint8_once(&lp_aes__lean_test__fips197___closed__16, &lp_aes__lean_test__fips197___closed__16_once, _init_lp_aes__lean_test__fips197___closed__16);
if (v___x_126_ == 0)
{
goto v___jp_124_;
}
else
{
uint8_t v___x_127_; 
v___x_127_ = lean_uint8_once(&lp_aes__lean_test__fips197___closed__17, &lp_aes__lean_test__fips197___closed__17_once, _init_lp_aes__lean_test__fips197___closed__17);
if (v___x_127_ == 0)
{
goto v___jp_124_;
}
else
{
lean_object* v___x_128_; 
v___x_128_ = ((lean_object*)(lp_aes__lean_test__gfsbox__1___closed__19));
v___y_121_ = v___x_128_;
goto v___jp_120_;
}
}
v___jp_120_:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = lean_string_append(v___x_119_, v___y_121_);
v___x_123_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_122_);
return v___x_123_;
}
v___jp_124_:
{
lean_object* v___x_125_; 
v___x_125_ = ((lean_object*)(lp_aes__lean_test__gfsbox__1___closed__14));
v___y_121_ = v___x_125_;
goto v___jp_120_;
}
}
else
{
return v___x_118_;
}
}
else
{
return v___x_116_;
}
}
else
{
return v___x_114_;
}
}
else
{
return v___x_112_;
}
}
else
{
return v___x_110_;
}
}
else
{
return v___x_108_;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean_test__fips197___boxed(lean_object* v_a_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = lp_aes__lean_test__fips197();
return v_res_130_;
}
}
static lean_object* _init_lp_aes__lean_test__roundtrip___closed__2(void){
_start:
{
lean_object* v_pt_133_; lean_object* v___x_134_; 
v_pt_133_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__8, &lp_aes__lean_test__fips197___closed__8_once, _init_lp_aes__lean_test__fips197___closed__8);
v___x_134_ = lp_aes__lean_blockToHex(v_pt_133_);
return v___x_134_;
}
}
static lean_object* _init_lp_aes__lean_test__roundtrip___closed__3(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_135_ = lean_obj_once(&lp_aes__lean_test__roundtrip___closed__2, &lp_aes__lean_test__roundtrip___closed__2_once, _init_lp_aes__lean_test__roundtrip___closed__2);
v___x_136_ = ((lean_object*)(lp_aes__lean_test__roundtrip___closed__1));
v___x_137_ = lean_string_append(v___x_136_, v___x_135_);
return v___x_137_;
}
}
static lean_object* _init_lp_aes__lean_test__roundtrip___closed__5(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_139_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__10, &lp_aes__lean_test__fips197___closed__10_once, _init_lp_aes__lean_test__fips197___closed__10);
v___x_140_ = ((lean_object*)(lp_aes__lean_test__roundtrip___closed__4));
v___x_141_ = lean_string_append(v___x_140_, v___x_139_);
return v___x_141_;
}
}
static lean_object* _init_lp_aes__lean_test__roundtrip___closed__6(void){
_start:
{
lean_object* v_key_142_; lean_object* v_ct_143_; lean_object* v_pt2_144_; 
v_key_142_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__6, &lp_aes__lean_test__fips197___closed__6_once, _init_lp_aes__lean_test__fips197___closed__6);
v_ct_143_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__9, &lp_aes__lean_test__fips197___closed__9_once, _init_lp_aes__lean_test__fips197___closed__9);
v_pt2_144_ = lp_aes__lean_aesDecrypt(v_ct_143_, v_key_142_);
return v_pt2_144_;
}
}
static lean_object* _init_lp_aes__lean_test__roundtrip___closed__8(void){
_start:
{
lean_object* v_pt2_146_; lean_object* v___x_147_; 
v_pt2_146_ = lean_obj_once(&lp_aes__lean_test__roundtrip___closed__6, &lp_aes__lean_test__roundtrip___closed__6_once, _init_lp_aes__lean_test__roundtrip___closed__6);
v___x_147_ = lp_aes__lean_blockToHex(v_pt2_146_);
return v___x_147_;
}
}
static lean_object* _init_lp_aes__lean_test__roundtrip___closed__9(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = lean_obj_once(&lp_aes__lean_test__roundtrip___closed__8, &lp_aes__lean_test__roundtrip___closed__8_once, _init_lp_aes__lean_test__roundtrip___closed__8);
v___x_149_ = ((lean_object*)(lp_aes__lean_test__roundtrip___closed__7));
v___x_150_ = lean_string_append(v___x_149_, v___x_148_);
return v___x_150_;
}
}
static lean_object* _init_lp_aes__lean_test__roundtrip___closed__10(void){
_start:
{
lean_object* v_pt_151_; lean_object* v___x_152_; 
v_pt_151_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__8, &lp_aes__lean_test__fips197___closed__8_once, _init_lp_aes__lean_test__fips197___closed__8);
v___x_152_ = lean_array_get_size(v_pt_151_);
return v___x_152_;
}
}
static lean_object* _init_lp_aes__lean_test__roundtrip___closed__11(void){
_start:
{
lean_object* v_pt2_153_; lean_object* v___x_154_; 
v_pt2_153_ = lean_obj_once(&lp_aes__lean_test__roundtrip___closed__6, &lp_aes__lean_test__roundtrip___closed__6_once, _init_lp_aes__lean_test__roundtrip___closed__6);
v___x_154_ = lean_array_get_size(v_pt2_153_);
return v___x_154_;
}
}
static uint8_t _init_lp_aes__lean_test__roundtrip___closed__12(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
v___x_155_ = lean_obj_once(&lp_aes__lean_test__roundtrip___closed__11, &lp_aes__lean_test__roundtrip___closed__11_once, _init_lp_aes__lean_test__roundtrip___closed__11);
v___x_156_ = lean_obj_once(&lp_aes__lean_test__roundtrip___closed__10, &lp_aes__lean_test__roundtrip___closed__10_once, _init_lp_aes__lean_test__roundtrip___closed__10);
v___x_157_ = lean_nat_dec_eq(v___x_156_, v___x_155_);
return v___x_157_;
}
}
static uint8_t _init_lp_aes__lean_test__roundtrip___closed__13(void){
_start:
{
lean_object* v___x_158_; lean_object* v_pt2_159_; lean_object* v_pt_160_; uint8_t v___x_161_; 
v___x_158_ = lean_obj_once(&lp_aes__lean_test__roundtrip___closed__10, &lp_aes__lean_test__roundtrip___closed__10_once, _init_lp_aes__lean_test__roundtrip___closed__10);
v_pt2_159_ = lean_obj_once(&lp_aes__lean_test__roundtrip___closed__6, &lp_aes__lean_test__roundtrip___closed__6_once, _init_lp_aes__lean_test__roundtrip___closed__6);
v_pt_160_ = lean_obj_once(&lp_aes__lean_test__fips197___closed__8, &lp_aes__lean_test__fips197___closed__8_once, _init_lp_aes__lean_test__fips197___closed__8);
v___x_161_ = l_Array_isEqvAux___at___00ByteArray_instBEq_beq_spec__0___redArg(v_pt_160_, v_pt2_159_, v___x_158_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* lp_aes__lean_test__roundtrip(){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = ((lean_object*)(lp_aes__lean_test__fips197___closed__0));
v___x_164_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_163_);
if (lean_obj_tag(v___x_164_) == 0)
{
lean_object* v___x_165_; lean_object* v___x_166_; 
lean_dec_ref(v___x_164_);
v___x_165_ = ((lean_object*)(lp_aes__lean_test__roundtrip___closed__0));
v___x_166_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_165_);
if (lean_obj_tag(v___x_166_) == 0)
{
lean_object* v___x_167_; lean_object* v___x_168_; 
lean_dec_ref(v___x_166_);
v___x_167_ = lean_obj_once(&lp_aes__lean_test__roundtrip___closed__3, &lp_aes__lean_test__roundtrip___closed__3_once, _init_lp_aes__lean_test__roundtrip___closed__3);
v___x_168_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_167_);
if (lean_obj_tag(v___x_168_) == 0)
{
lean_object* v___x_169_; lean_object* v___x_170_; 
lean_dec_ref(v___x_168_);
v___x_169_ = lean_obj_once(&lp_aes__lean_test__roundtrip___closed__5, &lp_aes__lean_test__roundtrip___closed__5_once, _init_lp_aes__lean_test__roundtrip___closed__5);
v___x_170_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_169_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v___x_171_; lean_object* v___x_172_; 
lean_dec_ref(v___x_170_);
v___x_171_ = lean_obj_once(&lp_aes__lean_test__roundtrip___closed__9, &lp_aes__lean_test__roundtrip___closed__9_once, _init_lp_aes__lean_test__roundtrip___closed__9);
v___x_172_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_171_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v___x_173_; lean_object* v___y_175_; uint8_t v___x_180_; 
lean_dec_ref(v___x_172_);
v___x_173_ = ((lean_object*)(lp_aes__lean_test__gfsbox__1___closed__13));
v___x_180_ = lean_uint8_once(&lp_aes__lean_test__roundtrip___closed__12, &lp_aes__lean_test__roundtrip___closed__12_once, _init_lp_aes__lean_test__roundtrip___closed__12);
if (v___x_180_ == 0)
{
goto v___jp_178_;
}
else
{
uint8_t v___x_181_; 
v___x_181_ = lean_uint8_once(&lp_aes__lean_test__roundtrip___closed__13, &lp_aes__lean_test__roundtrip___closed__13_once, _init_lp_aes__lean_test__roundtrip___closed__13);
if (v___x_181_ == 0)
{
goto v___jp_178_;
}
else
{
lean_object* v___x_182_; 
v___x_182_ = ((lean_object*)(lp_aes__lean_test__gfsbox__1___closed__19));
v___y_175_ = v___x_182_;
goto v___jp_174_;
}
}
v___jp_174_:
{
lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_176_ = lean_string_append(v___x_173_, v___y_175_);
v___x_177_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_176_);
return v___x_177_;
}
v___jp_178_:
{
lean_object* v___x_179_; 
v___x_179_ = ((lean_object*)(lp_aes__lean_test__gfsbox__1___closed__14));
v___y_175_ = v___x_179_;
goto v___jp_174_;
}
}
else
{
return v___x_172_;
}
}
else
{
return v___x_170_;
}
}
else
{
return v___x_168_;
}
}
else
{
return v___x_166_;
}
}
else
{
return v___x_164_;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean_test__roundtrip___boxed(lean_object* v_a_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = lp_aes__lean_test__roundtrip();
return v_res_184_;
}
}
LEAN_EXPORT lean_object* _lean_main(){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = ((lean_object*)(lp_aes__lean_main___closed__0));
v___x_190_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_189_);
if (lean_obj_tag(v___x_190_) == 0)
{
lean_object* v___x_191_; lean_object* v___x_192_; 
lean_dec_ref(v___x_190_);
v___x_191_ = ((lean_object*)(lp_aes__lean_test__fips197___closed__0));
v___x_192_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_191_);
if (lean_obj_tag(v___x_192_) == 0)
{
lean_object* v___x_193_; lean_object* v___x_194_; 
lean_dec_ref(v___x_192_);
v___x_193_ = ((lean_object*)(lp_aes__lean_main___closed__1));
v___x_194_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_193_);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v___x_195_; 
lean_dec_ref(v___x_194_);
v___x_195_ = lp_aes__lean_test__gfsbox__1();
if (lean_obj_tag(v___x_195_) == 0)
{
lean_object* v___x_196_; 
lean_dec_ref(v___x_195_);
v___x_196_ = lp_aes__lean_test__fips197();
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v___x_197_; 
lean_dec_ref(v___x_196_);
v___x_197_ = lp_aes__lean_test__roundtrip();
if (lean_obj_tag(v___x_197_) == 0)
{
lean_object* v___x_198_; 
lean_dec_ref(v___x_197_);
v___x_198_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_191_);
if (lean_obj_tag(v___x_198_) == 0)
{
lean_object* v___x_199_; lean_object* v___x_200_; 
lean_dec_ref(v___x_198_);
v___x_199_ = ((lean_object*)(lp_aes__lean_main___closed__2));
v___x_200_ = lp_aes__lean_IO_println___at___00test__gfsbox__1_spec__0(v___x_199_);
return v___x_200_;
}
else
{
return v___x_198_;
}
}
else
{
return v___x_197_;
}
}
else
{
return v___x_196_;
}
}
else
{
return v___x_195_;
}
}
else
{
return v___x_194_;
}
}
else
{
return v___x_192_;
}
}
else
{
return v___x_190_;
}
}
}
LEAN_EXPORT lean_object* lp_aes__lean_main___boxed(lean_object* v_a_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = _lean_main();
return v_res_202_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_aes__lean_AES_Cipher(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_aes__lean_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_aes__lean_AES_Cipher(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
char ** lean_setup_args(int argc, char ** argv);
void lean_initialize_runtime_module();
#if defined(WIN32) || defined(_WIN32)
#include <windows.h>
#endif
lean_object* run_main(int argc, char ** argv) {
    return _lean_main();
}
int main(int argc, char ** argv) {
#if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
#endif
  lean_object* res;
  argv = lean_setup_args(argc, argv);
  lean_initialize_runtime_module();
  res = initialize_aes__lean_Main(1 /* builtin */);
  lean_io_mark_end_initialization();
  if (lean_io_result_is_ok(res)) {
    lean_dec_ref(res);
    lean_init_task_manager();
    res = lean_run_main(&run_main, argc, argv);
  }
  lean_finalize_task_manager();
  if (lean_io_result_is_ok(res)) {
    int ret = 0;
    lean_dec_ref(res);
    return ret;
  } else {
    lean_io_result_show_error(res);
    lean_dec_ref(res);
    return 1;
  }
}
#ifdef __cplusplus
}
#endif
