/* The Legend of Zelda: Spirit Tracks, Europe Rev 1 (BKIP)
 * ARM9 overlay 0: 100 independently reconstructed functions.
 *
 * Each function has been compiled with Clang ARMv5TE and instruction bytes
 * compared against the user's locally extracted original overlay.
 * This file is only research. It is not CodeWarrior-matched or linked into
 * the official Nintendo DS build. Names/signatures have provisional types.
 * No ROM bytes, resources, or assembly are included in this source.
 */
#include <stdint.h>

/* 0x02057ED8 · write_word · 8 original ARM bytes */
void st_ov000_02057ED8(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+4) = value; }

/* 0x020580E4 · write_word · 8 original ARM bytes */
void st_ov000_020580E4(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+96) = value; }

/* 0x0205A084 · nested_indexed_read · 12 original ARM bytes */
unsigned int st_ov000_0205A084(const void *p,unsigned int idx) { const unsigned int *q=*(const unsigned int*const*)((const unsigned char*)p+24);return q[idx]; }

/* 0x0205A090 · read_nested_word · 12 original ARM bytes */
unsigned int st_ov000_0205A090(const void *p) { const unsigned char *q = *(const unsigned char * const*)((const unsigned char*)p+28); return *(const unsigned int*)(q+0); }

/* 0x0205A09C · read_nested_word · 12 original ARM bytes */
unsigned int st_ov000_0205A09C(const void *p) { const unsigned char *q = *(const unsigned char * const*)((const unsigned char*)p+24); return *(const unsigned int*)(q+0); }

/* 0x0205C188 · write_word · 8 original ARM bytes */
void st_ov000_0205C188(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+0) = value; }

/* 0x0205C888 · masked_increment · 12 original ARM bytes */
unsigned int st_ov000_0205C888(unsigned int v) { return (v+1u)&3u; }

/* 0x02061030 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_02061030(void) { return 0u; }

/* 0x02061224 · set_byte · 12 original ARM bytes */
void st_ov000_02061224(void *p) { ((unsigned char*)p)[293] = 1u; }

/* 0x02061230 · set_byte · 12 original ARM bytes */
void st_ov000_02061230(void *p) { ((unsigned char*)p)[292] = 1u; }

/* 0x0206123C · set_byte · 12 original ARM bytes */
void st_ov000_0206123C(void *p) { ((unsigned char*)p)[294] = 1u; }

/* 0x02064548 · read_byte · 8 original ARM bytes */
unsigned int st_ov000_02064548(const void* p) { return *((const unsigned char*)p+24); }

/* 0x02066364 · set_word · 12 original ARM bytes */
void st_ov000_02066364(void *p) { *(unsigned int*)((unsigned char*)p+0) = 1u; }

/* 0x020669D0 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_020669D0(void) { return 0u; }

/* 0x02067234 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_02067234(void) { return 1u; }

/* 0x0206723C · return_not_constant · 8 original ARM bytes */
unsigned int st_ov000_0206723C(void) { return 4294967295u; }

/* 0x02067BF0 · read_word · 8 original ARM bytes */
unsigned int st_ov000_02067BF0(const void* p) { return *(const unsigned int*)((const unsigned char*)p+32); }

/* 0x02067BF8 · read_word · 8 original ARM bytes */
unsigned int st_ov000_02067BF8(const void* p) { return *(const unsigned int*)((const unsigned char*)p+36); }

/* 0x0206869C · write_word · 8 original ARM bytes */
void st_ov000_0206869C(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+4) = value; }

/* 0x020691D8 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_020691D8(void) { return 0u; }

/* 0x02069814 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_02069814(void) { return 0u; }

/* 0x02069C14 · write_word · 8 original ARM bytes */
void st_ov000_02069C14(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+28) = value; }

/* 0x0206A5C0 · indexed_write · 12 original ARM bytes */
void st_ov000_0206A5C0(unsigned int*base,unsigned int idx,unsigned int value) { base[idx+42]=value; }

/* 0x0206A5CC · indexed_read · 12 original ARM bytes */
unsigned int st_ov000_0206A5CC(const unsigned int*base,unsigned int idx) { return base[idx+42]; }

/* 0x0206F994 · set_byte · 12 original ARM bytes */
void st_ov000_0206F994(void *p) { ((unsigned char*)p)[18] = 0u; }

/* 0x020702D0 · nested_indexed_read · 12 original ARM bytes */
unsigned int st_ov000_020702D0(const void *p,unsigned int idx) { const unsigned int *q=*(const unsigned int*const*)((const unsigned char*)p+0);return q[idx]; }

/* 0x020703F0 · fourth_parameter · 8 original ARM bytes */
unsigned int st_ov000_020703F0(unsigned int a,unsigned int b,unsigned int c,unsigned int d) { return d; }

/* 0x0207056C · nested_pointer_offset · 12 original ARM bytes */
unsigned char* st_ov000_0207056C(const void *p) { unsigned char *q = *(unsigned char*const*)((const unsigned char*)p+88); return q+160u; }

/* 0x02070588 · read_nested_word · 12 original ARM bytes */
unsigned int st_ov000_02070588(const void *p) { const unsigned char *q = *(const unsigned char * const*)((const unsigned char*)p+88); return *(const unsigned int*)(q+180); }

/* 0x02070594 · nested_pointer_offset · 12 original ARM bytes */
unsigned char* st_ov000_02070594(const void *p) { unsigned char *q = *(unsigned char*const*)((const unsigned char*)p+88); return q+120u; }

/* 0x02073180 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_02073180(void) { return 4u; }

/* 0x020731A4 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_020731A4(void) { return 0u; }

/* 0x020731AC · set_byte · 12 original ARM bytes */
void st_ov000_020731AC(void *p) { ((unsigned char*)p)[4] = 0u; }

/* 0x02073704 · read_word · 8 original ARM bytes */
unsigned int st_ov000_02073704(const void* p) { return *(const unsigned int*)((const unsigned char*)p+4); }

/* 0x0207370C · read_word · 8 original ARM bytes */
unsigned int st_ov000_0207370C(const void* p) { return *(const unsigned int*)((const unsigned char*)p+8); }

/* 0x02073EB4 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_02073EB4(void) { return 0u; }

/* 0x020746E4 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_020746E4(void) { return 3u; }

/* 0x02074790 · set_byte · 12 original ARM bytes */
void st_ov000_02074790(void *p) { ((unsigned char*)p)[4] = 0u; }

/* 0x02074814 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_02074814(void) { return 2u; }

/* 0x02078D20 · set_word · 12 original ARM bytes */
void st_ov000_02078D20(void *p) { *(unsigned int*)((unsigned char*)p+612) = 205u; }

/* 0x02079058 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_02079058(void) { return 1u; }

/* 0x020791FC · return_constant · 8 original ARM bytes */
unsigned int st_ov000_020791FC(void) { return 2u; }

/* 0x02079500 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_02079500(void) { return 0u; }

/* 0x0207ABE8 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0207ABE8(void) { return 3u; }

/* 0x0207AD50 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0207AD50(void) { return 4u; }

/* 0x0207AEBC · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0207AEBC(void) { return 5u; }

/* 0x0207B4D4 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0207B4D4(void) { return 6u; }

/* 0x0207C034 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0207C034(void) { return 1u; }

/* 0x0207C03C · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0207C03C(void) { return 1u; }

/* 0x0207C044 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0207C044(void) { return 1u; }

/* 0x0207C308 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0207C308(void) { return 0u; }

/* 0x0207C4D0 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0207C4D0(void) { return 2u; }

/* 0x0207CAF4 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0207CAF4(void) { return 1u; }

/* 0x0207D40C · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0207D40C(void) { return 3u; }

/* 0x0207EDB8 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0207EDB8(void) { return 1u; }

/* 0x0207EEB8 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0207EEB8(void) { return 1u; }

/* 0x0207FAD8 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0207FAD8(void) { return 0u; }

/* 0x0207FAE0 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0207FAE0(void) { return 2u; }

/* 0x0207FAE8 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0207FAE8(void) { return 0u; }

/* 0x0207FBC4 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0207FBC4(void) { return 1u; }

/* 0x02080900 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_02080900(void) { return 0u; }

/* 0x020819D0 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_020819D0(void) { return 1u; }

/* 0x02081B9C · nested_pointer_offset · 12 original ARM bytes */
unsigned char* st_ov000_02081B9C(const void *p) { unsigned char *q = *(unsigned char*const*)((const unsigned char*)p+12); return q+16u; }

/* 0x02082368 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_02082368(void) { return 1u; }

/* 0x02082E14 · nested_pointer_offset · 12 original ARM bytes */
unsigned char* st_ov000_02082E14(const void *p) { unsigned char *q = *(unsigned char*const*)((const unsigned char*)p+20); return q+104u; }

/* 0x02082E20 · nested_pointer_offset · 12 original ARM bytes */
unsigned char* st_ov000_02082E20(const void *p) { unsigned char *q = *(unsigned char*const*)((const unsigned char*)p+20); return q+144u; }

/* 0x0208DC34 · read_nested_byte · 12 original ARM bytes */
unsigned int st_ov000_0208DC34(const void *p) { const unsigned char *q = *(const unsigned char * const*)((const unsigned char*)p+160); return q[126]; }

/* 0x020901F0 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_020901F0(void) { return 0u; }

/* 0x02093BD8 · nested_pointer_offset · 12 original ARM bytes */
unsigned char* st_ov000_02093BD8(const void *p) { unsigned char *q = *(unsigned char*const*)((const unsigned char*)p+128); return q+4u; }

/* 0x02096CF0 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_02096CF0(void) { return 2048u; }

/* 0x02096CF8 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_02096CF8(void) { return 3072u; }

/* 0x02096D00 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_02096D00(void) { return 12288u; }

/* 0x02096D08 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_02096D08(void) { return 10240u; }

/* 0x02096D14 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_02096D14(void) { return 1u; }

/* 0x020977A0 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_020977A0(void) { return 0u; }

/* 0x02097998 · pointer_offset · 8 original ARM bytes */
unsigned char* st_ov000_02097998(unsigned char* p) { return p + 60u; }

/* 0x02097A38 · read_word · 8 original ARM bytes */
unsigned int st_ov000_02097A38(const void* p) { return *(const unsigned int*)((const unsigned char*)p+60); }

/* 0x020984FC · return_constant · 8 original ARM bytes */
unsigned int st_ov000_020984FC(void) { return 1u; }

/* 0x0209851C · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0209851C(void) { return 1u; }

/* 0x02099A70 · set_word · 12 original ARM bytes */
void st_ov000_02099A70(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }

/* 0x0209A190 · read_word · 8 original ARM bytes */
unsigned int st_ov000_0209A190(const void* p) { return *(const unsigned int*)((const unsigned char*)p+4); }

/* 0x0209A198 · read_word · 8 original ARM bytes */
unsigned int st_ov000_0209A198(const void* p) { return *(const unsigned int*)((const unsigned char*)p+4); }

/* 0x0209A760 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0209A760(void) { return 0u; }

/* 0x0209C338 · write_word · 8 original ARM bytes */
void st_ov000_0209C338(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+148) = value; }

/* 0x0209C874 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0209C874(void) { return 246u; }

/* 0x0209C930 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0209C930(void) { return 0u; }

/* 0x0209CA64 · pointer_offset · 8 original ARM bytes */
unsigned char* st_ov000_0209CA64(unsigned char* p) { return p + 32u; }

/* 0x0209CB0C · read_word · 8 original ARM bytes */
unsigned int st_ov000_0209CB0C(const void* p) { return *(const unsigned int*)((const unsigned char*)p+32); }

/* 0x0209D104 · return_constant · 8 original ARM bytes */
unsigned int st_ov000_0209D104(void) { return 1u; }

/* 0x0209D22C · set_word · 12 original ARM bytes */
void st_ov000_0209D22C(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }

/* 0x0209F160 · read_nested_word · 12 original ARM bytes */
unsigned int st_ov000_0209F160(const void *p) { const unsigned char *q = *(const unsigned char * const*)((const unsigned char*)p+0); return *(const unsigned int*)(q+52); }

/* 0x020A1348 · pointer_offset · 8 original ARM bytes */
unsigned char* st_ov000_020A1348(unsigned char* p) { return p + 96u; }

/* 0x020A1350 · read_byte · 8 original ARM bytes */
unsigned int st_ov000_020A1350(const void* p) { return *((const unsigned char*)p+98); }

/* 0x020A4E7C · read_word · 8 original ARM bytes */
unsigned int st_ov000_020A4E7C(const void* p) { return *(const unsigned int*)((const unsigned char*)p+4); }

/* 0x020A5660 · set_byte · 12 original ARM bytes */
void st_ov000_020A5660(void *p) { ((unsigned char*)p)[42] = 1u; }

/* 0x020A5670 · return_not_constant · 8 original ARM bytes */
unsigned int st_ov000_020A5670(void) { return 4294967295u; }

/* 0x020A6178 · read_word · 8 original ARM bytes */
unsigned int st_ov000_020A6178(const void* p) { return *(const unsigned int*)((const unsigned char*)p+4); }

/* 0x020A6184 · set_word · 12 original ARM bytes */
void st_ov000_020A6184(void *p) { *(unsigned int*)((unsigned char*)p+4) = 0u; }

/* 0x020A8FC0 · set_word · 12 original ARM bytes */
void st_ov000_020A8FC0(void *p) { *(unsigned int*)((unsigned char*)p+172) = 246u; }

/* 0x020A91FC · return_not_constant · 8 original ARM bytes */
unsigned int st_ov000_020A91FC(void) { return 4294967295u; }
