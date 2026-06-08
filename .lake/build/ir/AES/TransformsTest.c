// Lean compiler output
// Module: AES.TransformsTest
// Imports: public import Init public meta import Init public import AES.Transforms
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
static const lean_array_object lp_aes__lean_exampleState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_aes__lean_exampleState___closed__0 = (const lean_object*)&lp_aes__lean_exampleState___closed__0_value;
static const lean_array_object lp_aes__lean_exampleState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_aes__lean_exampleState___closed__1 = (const lean_object*)&lp_aes__lean_exampleState___closed__1_value;
static const lean_array_object lp_aes__lean_exampleState___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1))}};
static const lean_object* lp_aes__lean_exampleState___closed__2 = (const lean_object*)&lp_aes__lean_exampleState___closed__2_value;
static const lean_array_object lp_aes__lean_exampleState___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* lp_aes__lean_exampleState___closed__3 = (const lean_object*)&lp_aes__lean_exampleState___closed__3_value;
static const lean_array_object lp_aes__lean_exampleState___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&lp_aes__lean_exampleState___closed__0_value),((lean_object*)&lp_aes__lean_exampleState___closed__1_value),((lean_object*)&lp_aes__lean_exampleState___closed__2_value),((lean_object*)&lp_aes__lean_exampleState___closed__3_value)}};
static const lean_object* lp_aes__lean_exampleState___closed__4 = (const lean_object*)&lp_aes__lean_exampleState___closed__4_value;
LEAN_EXPORT const lean_object* lp_aes__lean_exampleState = (const lean_object*)&lp_aes__lean_exampleState___closed__4_value;
static const lean_array_object lp_aes__lean_nistState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(160) << 1) | 1)),((lean_object*)(((size_t)(154) << 1) | 1)),((lean_object*)(((size_t)(233) << 1) | 1))}};
static const lean_object* lp_aes__lean_nistState___closed__0 = (const lean_object*)&lp_aes__lean_nistState___closed__0_value;
static const lean_array_object lp_aes__lean_nistState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)(((size_t)(61) << 1) | 1)),((lean_object*)(((size_t)(244) << 1) | 1)),((lean_object*)(((size_t)(198) << 1) | 1)),((lean_object*)(((size_t)(248) << 1) | 1))}};
static const lean_object* lp_aes__lean_nistState___closed__1 = (const lean_object*)&lp_aes__lean_nistState___closed__1_value;
static const lean_array_object lp_aes__lean_nistState___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)(((size_t)(227) << 1) | 1)),((lean_object*)(((size_t)(226) << 1) | 1)),((lean_object*)(((size_t)(141) << 1) | 1)),((lean_object*)(((size_t)(72) << 1) | 1))}};
static const lean_object* lp_aes__lean_nistState___closed__2 = (const lean_object*)&lp_aes__lean_nistState___closed__2_value;
static const lean_array_object lp_aes__lean_nistState___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)(((size_t)(190) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_aes__lean_nistState___closed__3 = (const lean_object*)&lp_aes__lean_nistState___closed__3_value;
static const lean_array_object lp_aes__lean_nistState___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&lp_aes__lean_nistState___closed__0_value),((lean_object*)&lp_aes__lean_nistState___closed__1_value),((lean_object*)&lp_aes__lean_nistState___closed__2_value),((lean_object*)&lp_aes__lean_nistState___closed__3_value)}};
static const lean_object* lp_aes__lean_nistState___closed__4 = (const lean_object*)&lp_aes__lean_nistState___closed__4_value;
LEAN_EXPORT const lean_object* lp_aes__lean_nistState = (const lean_object*)&lp_aes__lean_nistState___closed__4_value;
static const lean_array_object lp_aes__lean_nistKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*16, .m_other = 0, .m_tag = 246}, .m_size = 16, .m_capacity = 16, .m_data = {((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)(((size_t)(126) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)(((size_t)(40) << 1) | 1)),((lean_object*)(((size_t)(174) << 1) | 1)),((lean_object*)(((size_t)(210) << 1) | 1)),((lean_object*)(((size_t)(166) << 1) | 1)),((lean_object*)(((size_t)(171) << 1) | 1)),((lean_object*)(((size_t)(247) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(136) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(207) << 1) | 1)),((lean_object*)(((size_t)(79) << 1) | 1)),((lean_object*)(((size_t)(60) << 1) | 1))}};
static const lean_object* lp_aes__lean_nistKey___closed__0 = (const lean_object*)&lp_aes__lean_nistKey___closed__0_value;
LEAN_EXPORT const lean_object* lp_aes__lean_nistKey = (const lean_object*)&lp_aes__lean_nistKey___closed__0_value;
static const lean_array_object lp_aes__lean_zeroKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*16, .m_other = 0, .m_tag = 246}, .m_size = 16, .m_capacity = 16, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_aes__lean_zeroKey___closed__0 = (const lean_object*)&lp_aes__lean_zeroKey___closed__0_value;
LEAN_EXPORT const lean_object* lp_aes__lean_zeroKey = (const lean_object*)&lp_aes__lean_zeroKey___closed__0_value;
static const lean_array_object lp_aes__lean_altKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*16, .m_other = 0, .m_tag = 246}, .m_size = 16, .m_capacity = 16, .m_data = {((lean_object*)(((size_t)(255) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(255) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(255) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(255) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(255) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(255) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(255) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(255) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_aes__lean_altKey___closed__0 = (const lean_object*)&lp_aes__lean_altKey___closed__0_value;
LEAN_EXPORT const lean_object* lp_aes__lean_altKey = (const lean_object*)&lp_aes__lean_altKey___closed__0_value;
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_aes__lean_AES_Transforms(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_aes__lean_AES_TransformsTest(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
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
