/* The Legend of Zelda: Spirit Tracks (Europe Rev 1 / BKIP) */
/* THIRD research batch: 500 NEW ARM9-overlay C function bodies. */
/* Clang ARMv5TE -O2 exact bytes locally verified against EUR1 ROM. */
/* NOT original Nintendo CodeWarrior matching; not integrated into DS build. */
/* Function prototypes and C++ ownership remain provisional. */
/* Empty BX LR routines are included but do not constitute gameplay progress. */
/* No original ROM bytes, game assets, or disassembled instructions embedded. */
#include <stdint.h>
#include <stddef.h>
/* ==== Original ARM9 overlay 000 ==== */
/* #001: 0x02057608, 8 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov000_02057608(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r0 = *(uint16_t*)(uintptr_t)(r0+6u);
  return r0;
}
/* #002: 0x0206D324, 8 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov000_0206D324(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r0 = ((uint32_t)((int32_t)r0 >> 10));
  return r0;
}
/* #003: 0x02072CF8, 16 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov000_02072CF8(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r0 = (r0 + (r1 << 2));
  r0 = *( uint32_t* )(uintptr_t)(r0 + 4u);
  *(uint16_t*)(uintptr_t)(r0+4u) = r2;
  return r0;
}
/* #004: 0x0208BACC, 20 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov000_0208BACC(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r0 = *( uint32_t* )(uintptr_t)(r0 + 64u);
  r0 = (r0 + (r1 << 2));
  r0 = *( uint32_t* )(uintptr_t)(r0 + 812u);
  r0 = (r0 + 12u);
  return r0;
}
/* #005: 0x0208BBA0, 24 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov000_0208BBA0(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = *( uint32_t* )(uintptr_t)(r1 + 64u);
  r1 = (r1 + (r2 << 2));
  r1 = *( uint32_t* )(uintptr_t)(r1 + 812u);
  r1 = *( uint32_t* )(uintptr_t)(r1 + 52u);
  *( uint32_t* )(uintptr_t)(r0 + 0u) = (uint32_t)r1;
  return r0;
}
/* #006: 0x0208C00C, 20 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov000_0208C00C(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = *( uint32_t* )(uintptr_t)(r0 + 64u);
  if (r1 != 0u) { r0 = (r1 + 280u); }
  if (r1 != 0u) { *( uint32_t* )(uintptr_t)(r1 + 328u) = (uint32_t)r0; }
  return r0;
}
/* #007: 0x0209A80C, 12 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov000_0209A80C(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  *( uint32_t* )(uintptr_t)(r0 + 100u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 104u) = (uint32_t)r2;
  return r0;
}
/* #008: 0x020A04E8, 32 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov000_020A04E8(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = 0u;
  *( uint32_t* )(uintptr_t)(r0 + 0u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 4u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 8u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 12u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 16u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 20u) = (uint32_t)r1;
  return r0;
}
/* #009: 0x020A7128, 28 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov000_020A7128(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r3 = (r1 + (r2 << 3));
  *( uint32_t* )(uintptr_t)(r0 + 40u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 44u) = (uint32_t)r2;
  *( uint32_t* )(uintptr_t)(r0 + 48u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 52u) = (uint32_t)r3;
  *( uint32_t* )(uintptr_t)(r0 + 56u) = (uint32_t)r1;
  return r0;
}
/* ==== Original ARM9 overlay 016 ==== */
/* #010: 0x020B7760, 12 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov016_020B7760(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = (r2 | (r1 << 16));
  *( uint32_t* )(uintptr_t)(r0 + 24u) = (uint32_t)r1;
  return r0;
}
/* ==== Original ARM9 overlay 020 ==== */
/* #011: 0x020C92A0, 20 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov020_020C92A0(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = (r0 + (r1 << 2));
  *( uint32_t* )(uintptr_t)(r1 + 8u) = (uint32_t)r2;
  r1 = 1u;
  *( uint8_t* )(uintptr_t)(r0 + 61u) = (uint8_t)r1;
  return r0;
}
/* #012: 0x020C9580, 16 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov020_020C9580(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r2 = *( uint32_t* )(uintptr_t)(r0 + 0u);
  if (r2 == 0u) { *( uint32_t* )(uintptr_t)(r0 + 0u) = (uint32_t)r1; }
  return r0;
}
/* ==== Original ARM9 overlay 021 ==== */
/* #013: 0x020FB554, 8 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov021_020FB554(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  *( uint32_t* )(uintptr_t)(r0 + 128u) = (uint32_t)r0;
  return r0;
}
/* #014: 0x020FFB3C, 16 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov021_020FFB3C(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r2 = 0u;
  *( uint32_t* )(uintptr_t)(r0 + 140u) = (uint32_t)r1;
  *(uint16_t*)(uintptr_t)(r0+156u) = r2;
  return r0;
}
/* ==== Original ARM9 overlay 022 ==== */
/* #015: 0x020EA900, 8 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov022_020EA900(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  *(uint16_t*)(uintptr_t)(r0+102u) = r1;
  return r0;
}
/* ==== Original ARM9 overlay 026 ==== */
/* #016: 0x020E65D4, 16 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov026_020E65D4(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r0 = *( uint32_t* )(uintptr_t)(r0 + 88u);
  r0 = *( uint32_t* )(uintptr_t)(r0 + 12u);
  r0 = (r0 + 164u);
  return r0;
}
/* #017: 0x020E65E4, 16 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov026_020E65E4(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r0 = *( uint32_t* )(uintptr_t)(r0 + 88u);
  r0 = *( uint32_t* )(uintptr_t)(r0 + 12u);
  r0 = (r0 + 116u);
  return r0;
}
/* #018: 0x020E7F1C, 12 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov026_020E7F1C(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r0 = *( uint32_t* )(uintptr_t)(r0 + 12u);
  *( uint32_t* )(uintptr_t)(r0 + 60u) = (uint32_t)r1;
  return r0;
}
/* #019: 0x020E823C, 20 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov026_020E823C(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = (r1 + (r2 << 2));
  r1 = *( uint32_t* )(uintptr_t)(r1 + 788u);
  r1 = *( uint32_t* )(uintptr_t)(r1 + 4u);
  *( uint32_t* )(uintptr_t)(r0 + 0u) = (uint32_t)r1;
  return r0;
}
/* #020: 0x020EE658, 28 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov026_020EE658(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r2 = *( uint32_t* )(uintptr_t)(r0 + 24u);
  r2 = (r0 + (r2 << 2));
  *( uint32_t* )(uintptr_t)(r2 + 28u) = (uint32_t)r1;
  r1 = *( uint32_t* )(uintptr_t)(r0 + 24u);
  r1 = (r1 + 1u);
  *( uint32_t* )(uintptr_t)(r0 + 24u) = (uint32_t)r1;
  return r0;
}
/* #021: 0x020FB554, 20 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov026_020FB554(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = *( uint32_t* )(uintptr_t)(r0 + 16u);
  if (r1 != 0u) { r0 = *( uint32_t* )(uintptr_t)(r0 + 28u); }
  if (r1 == 0u) { r0 = 0u; }
  return r0;
}
/* #022: 0x020FF5B8, 24 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov026_020FF5B8(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r2 = 0u;
  r1 = 31u;
  *( uint32_t* )(uintptr_t)(r0 + 0u) = (uint32_t)r2;
  *( uint32_t* )(uintptr_t)(r0 + 4u) = (uint32_t)r2;
  *( uint32_t* )(uintptr_t)(r0 + 8u) = (uint32_t)r1;
  return r0;
}
/* #023: 0x0211AAF4, 8 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov026_0211AAF4(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r0 = *(uint16_t*)(uintptr_t)(r0+108u);
  return r0;
}
/* ==== Original ARM9 overlay 028 ==== */
/* #024: 0x02143DDC, 4 bytes, empty, upstream_symbol */
void st_ov028_02143DDC(void) {}
/* #025: 0x021447BC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov028_021447BC(void) { return 0u; }
/* #026: 0x021447C4, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov028_021447C4(void) { return 1u; }
/* #027: 0x021447CC, 4 bytes, empty, upstream_symbol */
void st_ov028_021447CC(void) {}
/* #028: 0x021448DC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov028_021448DC(void) { return 0u; }
/* #029: 0x02144BDC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov028_02144BDC(void) { return 0u; }
/* #030: 0x02144EDC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov028_02144EDC(void) { return 0u; }
/* #031: 0x021451DC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov028_021451DC(void) { return 0u; }
/* #032: 0x02145A78, 8 bytes, write_word, upstream_symbol */
void st_ov028_02145A78(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+220) = value; }
/* #033: 0x02145C9C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov028_02145C9C(void) { return 58u; }
/* #034: 0x02145E1C, 4 bytes, empty, upstream_symbol */
void st_ov028_02145E1C(void) {}
/* #035: 0x02145E20, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov028_02145E20(void) { return 0u; }
/* #036: 0x02145E3C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov028_02145E3C(void) { return 0u; }
/* #037: 0x02145E44, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov028_02145E44(void) { return 43u; }
/* #038: 0x02146124, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov028_02146124(void) { return 0u; }
/* ==== Original ARM9 overlay 029 ==== */
/* #039: 0x02141F14, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov029_02141F14(void) { return 0u; }
/* #040: 0x02141F1C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov029_02141F1C(void) { return 1u; }
/* #041: 0x02141F24, 4 bytes, empty, upstream_symbol */
void st_ov029_02141F24(void) {}
/* #042: 0x02141F28, 4 bytes, empty, upstream_symbol */
void st_ov029_02141F28(void) {}
/* #043: 0x021425FC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov029_021425FC(void) { return 0u; }
/* #044: 0x021428B4, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov029_021428B4(void) { return 0u; }
/* #045: 0x02142D58, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov029_02142D58(void) { return 0u; }
/* #046: 0x02142D60, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov029_02142D60(void) { return 1u; }
/* #047: 0x02142D68, 4 bytes, empty, upstream_symbol */
void st_ov029_02142D68(void) {}
/* #048: 0x02143250, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov029_02143250(void) { return 0u; }
/* #049: 0x021435C0, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov029_021435C0(void) { return 0u; }
/* #050: 0x02143880, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov029_02143880(void) { return 0u; }
/* #051: 0x021440FC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov029_021440FC(void) { return 0u; }
/* #052: 0x02144920, 4 bytes, empty, upstream_symbol */
void st_ov029_02144920(void) {}
/* #053: 0x02146024, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov029_02146024(void) { return 0u; }
/* #054: 0x0214A468, 16 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov029_0214A468(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = *( uint8_t* )(uintptr_t)(r0 + 881u);
  r1 = (r1 - 1u);
  *( uint8_t* )(uintptr_t)(r0 + 881u) = (uint8_t)r1;
  return r0;
}
/* #055: 0x0214AFE0, 4 bytes, empty, upstream_symbol */
void st_ov029_0214AFE0(void) {}
/* #056: 0x0214EFD8, 4 bytes, empty, upstream_symbol */
void st_ov029_0214EFD8(void) {}
/* #057: 0x0214F6D8, 12 bytes, set_word, upstream_symbol */
void st_ov029_0214F6D8(void *p) { *(unsigned int*)((unsigned char*)p+400) = 0u; }
/* #058: 0x0214F724, 4 bytes, empty, upstream_symbol */
void st_ov029_0214F724(void) {}
/* ==== Original ARM9 overlay 030 ==== */
/* #059: 0x02142308, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov030_02142308(void) { return 0u; }
/* #060: 0x02142310, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov030_02142310(void) { return 1u; }
/* #061: 0x02142318, 4 bytes, empty, upstream_symbol */
void st_ov030_02142318(void) {}
/* #062: 0x021426B4, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov030_021426B4(void) { return 0u; }
/* #063: 0x02142D8C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov030_02142D8C(void) { return 0u; }
/* #064: 0x02142D94, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov030_02142D94(void) { return 1u; }
/* #065: 0x02142D9C, 4 bytes, empty, upstream_symbol */
void st_ov030_02142D9C(void) {}
/* #066: 0x02142EAC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov030_02142EAC(void) { return 0u; }
/* #067: 0x02143210, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov030_02143210(void) { return 0u; }
/* #068: 0x02143554, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov030_02143554(void) { return 0u; }
/* #069: 0x0214385C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov030_0214385C(void) { return 0u; }
/* #070: 0x02143B78, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov030_02143B78(void) { return 0u; }
/* #071: 0x0214B0EC, 12 bytes, set_word, upstream_symbol */
void st_ov030_0214B0EC(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #072: 0x0214B378, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov030_0214B378(void) { return 1u; }
/* #073: 0x0214CC64, 12 bytes, set_byte, upstream_symbol */
void st_ov030_0214CC64(void *p) { ((unsigned char*)p)[358] = 1u; }
/* #074: 0x0214D170, 4 bytes, empty, upstream_symbol */
void st_ov030_0214D170(void) {}
/* #075: 0x0214D6F4, 4 bytes, empty, upstream_symbol */
void st_ov030_0214D6F4(void) {}
/* #076: 0x0214E1C0, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov030_0214E1C0(void) { return 1u; }
/* #077: 0x0214F5D0, 4 bytes, empty, upstream_symbol */
void st_ov030_0214F5D0(void) {}
/* ==== Original ARM9 overlay 031 ==== */
/* #078: 0x020DBA74, 4 bytes, empty, upstream_symbol */
void st_ov031_020DBA74(void) {}
/* #079: 0x020DBB5C, 4 bytes, empty, upstream_symbol */
void st_ov031_020DBB5C(void) {}
/* #080: 0x020E2100, 4 bytes, empty, upstream_symbol */
void st_ov031_020E2100(void) {}
/* #081: 0x020E221C, 4 bytes, empty, upstream_symbol */
void st_ov031_020E221C(void) {}
/* #082: 0x020E3CB4, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov031_020E3CB4(void) { return 2048u; }
/* #083: 0x020E4194, 4 bytes, empty, upstream_symbol */
void st_ov031_020E4194(void) {}
/* #084: 0x020E4198, 4 bytes, empty, upstream_symbol */
void st_ov031_020E4198(void) {}
/* #085: 0x020E5824, 12 bytes, set_word, upstream_symbol */
void st_ov031_020E5824(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #086: 0x020E78D4, 4 bytes, empty, upstream_symbol */
void st_ov031_020E78D4(void) {}
/* #087: 0x020E83F8, 4 bytes, empty, upstream_symbol */
void st_ov031_020E83F8(void) {}
/* #088: 0x020E9548, 4 bytes, empty, upstream_symbol */
void st_ov031_020E9548(void) {}
/* #089: 0x020E954C, 4 bytes, empty, upstream_symbol */
void st_ov031_020E954C(void) {}
/* #090: 0x020E9550, 4 bytes, empty, upstream_symbol */
void st_ov031_020E9550(void) {}
/* #091: 0x020E9554, 4 bytes, empty, upstream_symbol */
void st_ov031_020E9554(void) {}
/* #092: 0x020E96CC, 4 bytes, empty, upstream_symbol */
void st_ov031_020E96CC(void) {}
/* #093: 0x020EA8C4, 4 bytes, empty, upstream_symbol */
void st_ov031_020EA8C4(void) {}
/* #094: 0x020EA984, 4 bytes, empty, upstream_symbol */
void st_ov031_020EA984(void) {}
/* #095: 0x020EA988, 4 bytes, empty, upstream_symbol */
void st_ov031_020EA988(void) {}
/* #096: 0x020EA98C, 4 bytes, empty, upstream_symbol */
void st_ov031_020EA98C(void) {}
/* #097: 0x020EA9E0, 4 bytes, empty, upstream_symbol */
void st_ov031_020EA9E0(void) {}
/* #098: 0x020EA9E4, 4 bytes, empty, upstream_symbol */
void st_ov031_020EA9E4(void) {}
/* #099: 0x020EA9E8, 4 bytes, empty, upstream_symbol */
void st_ov031_020EA9E8(void) {}
/* #100: 0x020EABA8, 4 bytes, empty, upstream_symbol */
void st_ov031_020EABA8(void) {}
/* #101: 0x020EAE98, 4 bytes, empty, upstream_symbol */
void st_ov031_020EAE98(void) {}
/* #102: 0x020EC178, 4 bytes, empty, upstream_symbol */
void st_ov031_020EC178(void) {}
/* #103: 0x020EC9DC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov031_020EC9DC(void) { return 1u; }
/* #104: 0x020EF40C, 12 bytes, set_word, upstream_symbol */
void st_ov031_020EF40C(void *p) { *(unsigned int*)((unsigned char*)p+32) = 1024u; }
/* #105: 0x020EF564, 4 bytes, empty, upstream_symbol */
void st_ov031_020EF564(void) {}
/* #106: 0x020F018C, 4 bytes, empty, upstream_symbol */
void st_ov031_020F018C(void) {}
/* #107: 0x020F01C0, 4 bytes, empty, upstream_symbol */
void st_ov031_020F01C0(void) {}
/* #108: 0x020F01C4, 4 bytes, empty, upstream_symbol */
void st_ov031_020F01C4(void) {}
/* #109: 0x020F01C8, 4 bytes, empty, upstream_symbol */
void st_ov031_020F01C8(void) {}
/* #110: 0x020F01CC, 4 bytes, empty, upstream_symbol */
void st_ov031_020F01CC(void) {}
/* #111: 0x020F077C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov031_020F077C(void) { return 2048u; }
/* #112: 0x020F0784, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov031_020F0784(void) { return 4u; }
/* #113: 0x020F3434, 12 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov031_020F3434(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = 0u;
  *(uint16_t*)(uintptr_t)(r0+24u) = r1;
  return r0;
}
/* #114: 0x020F47DC, 20 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov031_020F47DC(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = 0u;
  *( uint32_t* )(uintptr_t)(r0 + 0u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 4u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 8u) = (uint32_t)r1;
  return r0;
}
/* ==== Original ARM9 overlay 034 ==== */
/* #115: 0x0211EE74, 20 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov034_0211EE74(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = (r0 + r1);
  r1 = *( uint8_t* )(uintptr_t)(r1 + 164u);
  r0 = (r0 + (r1 << 3));
  *( uint8_t* )(uintptr_t)(r0 + 279u) = (uint8_t)r2;
  return r0;
}
/* ==== Original ARM9 overlay 036 ==== */
/* #116: 0x02119580, 4 bytes, empty, upstream_symbol */
void st_ov036_02119580(void) {}
/* #117: 0x021195F0, 4 bytes, empty, upstream_symbol */
void st_ov036_021195F0(void) {}
/* #118: 0x02119CA0, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov036_02119CA0(void) { return 0u; }
/* #119: 0x02119D1C, 4 bytes, empty, upstream_symbol */
void st_ov036_02119D1C(void) {}
/* #120: 0x02119D64, 4 bytes, empty, upstream_symbol */
void st_ov036_02119D64(void) {}
/* #121: 0x0211A308, 4 bytes, empty, upstream_symbol */
void st_ov036_0211A308(void) {}
/* #122: 0x0211A35C, 4 bytes, empty, upstream_symbol */
void st_ov036_0211A35C(void) {}
/* #123: 0x0211A360, 4 bytes, empty, upstream_symbol */
void st_ov036_0211A360(void) {}
/* #124: 0x0211A364, 4 bytes, empty, upstream_symbol */
void st_ov036_0211A364(void) {}
/* #125: 0x0211AA78, 4 bytes, empty, upstream_symbol */
void st_ov036_0211AA78(void) {}
/* #126: 0x0211AA7C, 4 bytes, empty, upstream_symbol */
void st_ov036_0211AA7C(void) {}
/* #127: 0x0211ABC4, 4 bytes, empty, upstream_symbol */
void st_ov036_0211ABC4(void) {}
/* #128: 0x0211ABC8, 4 bytes, empty, upstream_symbol */
void st_ov036_0211ABC8(void) {}
/* #129: 0x0211C228, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov036_0211C228(void) { return 1u; }
/* #130: 0x0211C920, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov036_0211C920(void) { return 1u; }
/* #131: 0x0211CAB0, 4 bytes, empty, upstream_symbol */
void st_ov036_0211CAB0(void) {}
/* #132: 0x0211CAB4, 4 bytes, empty, upstream_symbol */
void st_ov036_0211CAB4(void) {}
/* #133: 0x0211CAB8, 4 bytes, empty, upstream_symbol */
void st_ov036_0211CAB8(void) {}
/* #134: 0x0211CABC, 4 bytes, empty, upstream_symbol */
void st_ov036_0211CABC(void) {}
/* #135: 0x0211CAC0, 4 bytes, empty, upstream_symbol */
void st_ov036_0211CAC0(void) {}
/* #136: 0x0211CAC4, 4 bytes, empty, upstream_symbol */
void st_ov036_0211CAC4(void) {}
/* #137: 0x0211CAD8, 4 bytes, empty, upstream_symbol */
void st_ov036_0211CAD8(void) {}
/* #138: 0x0211CB10, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov036_0211CB10(void) { return 0u; }
/* #139: 0x0211D8D4, 12 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov036_0211D8D4(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r0 = *( uint32_t* )(uintptr_t)(r0 + 228u);
  r0 = (r0 - 70u);
  return r0;
}
/* #140: 0x0211DE24, 4 bytes, empty, upstream_symbol */
void st_ov036_0211DE24(void) {}
/* #141: 0x0211DE28, 4 bytes, empty, upstream_symbol */
void st_ov036_0211DE28(void) {}
/* #142: 0x0211DE2C, 4 bytes, empty, upstream_symbol */
void st_ov036_0211DE2C(void) {}
/* #143: 0x0211DE30, 4 bytes, empty, upstream_symbol */
void st_ov036_0211DE30(void) {}
/* #144: 0x0211DE34, 4 bytes, empty, upstream_symbol */
void st_ov036_0211DE34(void) {}
/* #145: 0x0211DE48, 4 bytes, empty, upstream_symbol */
void st_ov036_0211DE48(void) {}
/* ==== Original ARM9 overlay 037 ==== */
/* #146: 0x0211A444, 4 bytes, empty, upstream_symbol */
void st_ov037_0211A444(void) {}
/* #147: 0x0211A448, 4 bytes, empty, upstream_symbol */
void st_ov037_0211A448(void) {}
/* #148: 0x0211A46C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov037_0211A46C(void) { return 2u; }
/* #149: 0x0211B2D8, 4 bytes, empty, upstream_symbol */
void st_ov037_0211B2D8(void) {}
/* #150: 0x0211B534, 4 bytes, empty, upstream_symbol */
void st_ov037_0211B534(void) {}
/* #151: 0x0211B538, 4 bytes, empty, upstream_symbol */
void st_ov037_0211B538(void) {}
/* #152: 0x0211E07C, 4 bytes, empty, upstream_symbol */
void st_ov037_0211E07C(void) {}
/* ==== Original ARM9 overlay 039 ==== */
/* #153: 0x02119FA8, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov039_02119FA8(void) { return 0u; }
/* #154: 0x02119FE8, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov039_02119FE8(void) { return 0u; }
/* #155: 0x0211BB40, 16 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov039_0211BB40(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = *( uint32_t* )(uintptr_t)(r0 + 88u);
  r1 = (r1 & ~(1u));
  *( uint32_t* )(uintptr_t)(r0 + 88u) = (uint32_t)r1;
  return r0;
}
/* #156: 0x0211C7FC, 4 bytes, empty, upstream_symbol */
void st_ov039_0211C7FC(void) {}
/* #157: 0x0211CAA0, 4 bytes, empty, upstream_symbol */
void st_ov039_0211CAA0(void) {}
/* #158: 0x0211CAA4, 4 bytes, empty, upstream_symbol */
void st_ov039_0211CAA4(void) {}
/* ==== Original ARM9 overlay 040 ==== */
/* #159: 0x02123F8C, 4 bytes, empty, upstream_symbol */
void st_ov040_02123F8C(void) {}
/* #160: 0x0212AA04, 4 bytes, empty, upstream_symbol */
void st_ov040_0212AA04(void) {}
/* #161: 0x0212ABB4, 4 bytes, empty, upstream_symbol */
void st_ov040_0212ABB4(void) {}
/* #162: 0x0212ACA4, 8 bytes, read_word, upstream_symbol */
unsigned int st_ov040_0212ACA4(const void* p) { return *(const unsigned int*)((const unsigned char*)p+216); }
/* #163: 0x0212AD34, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov040_0212AD34(void) { return 0u; }
/* #164: 0x0212AD74, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov040_0212AD74(void) { return 0u; }
/* #165: 0x0212C118, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov040_0212C118(void) { return 1u; }
/* #166: 0x0212C294, 4 bytes, empty, upstream_symbol */
void st_ov040_0212C294(void) {}
/* #167: 0x0212C298, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov040_0212C298(void) { return 1u; }
/* ==== Original ARM9 overlay 049 ==== */
/* #168: 0x02131C44, 4 bytes, empty, upstream_symbol */
void st_ov049_02131C44(void) {}
/* #169: 0x02131DE0, 12 bytes, set_word, upstream_symbol */
void st_ov049_02131DE0(void *p) { *(unsigned int*)((unsigned char*)p+44) = 205u; }
/* #170: 0x02134238, 12 bytes, set_word, upstream_symbol */
void st_ov049_02134238(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #171: 0x0213430C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov049_0213430C(void) { return 1u; }
/* #172: 0x02134508, 4 bytes, empty, upstream_symbol */
void st_ov049_02134508(void) {}
/* #173: 0x0213450C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov049_0213450C(void) { return 0u; }
/* #174: 0x02134F60, 4 bytes, empty, upstream_symbol */
void st_ov049_02134F60(void) {}
/* #175: 0x02134F88, 12 bytes, set_byte, upstream_symbol */
void st_ov049_02134F88(void *p) { ((unsigned char*)p)[74] = 5u; }
/* #176: 0x02136190, 4 bytes, empty, upstream_symbol */
void st_ov049_02136190(void) {}
/* ==== Original ARM9 overlay 052 ==== */
/* #177: 0x02135BEC, 12 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov052_02135BEC(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = (r2 | (r1 << 16));
  *( uint32_t* )(uintptr_t)(r0 + 24u) = (uint32_t)r1;
  return r0;
}
/* ==== Original ARM9 overlay 055 ==== */
/* #178: 0x02138FEC, 4 bytes, empty, upstream_symbol */
void st_ov055_02138FEC(void) {}
/* #179: 0x02138FF0, 4 bytes, empty, upstream_symbol */
void st_ov055_02138FF0(void) {}
/* #180: 0x0213BB08, 4 bytes, empty, upstream_symbol */
void st_ov055_0213BB08(void) {}
/* #181: 0x0213C46C, 4 bytes, empty, upstream_symbol */
void st_ov055_0213C46C(void) {}
/* #182: 0x0213C470, 4 bytes, empty, upstream_symbol */
void st_ov055_0213C470(void) {}
/* #183: 0x0213C474, 4 bytes, empty, upstream_symbol */
void st_ov055_0213C474(void) {}
/* #184: 0x0213C7D8, 4 bytes, empty, upstream_symbol */
void st_ov055_0213C7D8(void) {}
/* ==== Original ARM9 overlay 056 ==== */
/* #185: 0x0213A688, 4 bytes, empty, upstream_symbol */
void st_ov056_0213A688(void) {}
/* #186: 0x0213A68C, 4 bytes, empty, upstream_symbol */
void st_ov056_0213A68C(void) {}
/* #187: 0x0213A690, 4 bytes, empty, upstream_symbol */
void st_ov056_0213A690(void) {}
/* #188: 0x0213AC3C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov056_0213AC3C(void) { return 43008u; }
/* #189: 0x0213B254, 4 bytes, empty, upstream_symbol */
void st_ov056_0213B254(void) {}
/* #190: 0x0213B258, 4 bytes, empty, upstream_symbol */
void st_ov056_0213B258(void) {}
/* #191: 0x0213B25C, 4 bytes, empty, upstream_symbol */
void st_ov056_0213B25C(void) {}
/* #192: 0x0213B260, 4 bytes, empty, upstream_symbol */
void st_ov056_0213B260(void) {}
/* #193: 0x0213B264, 4 bytes, empty, upstream_symbol */
void st_ov056_0213B264(void) {}
/* #194: 0x0213B354, 4 bytes, empty, upstream_symbol */
void st_ov056_0213B354(void) {}
/* #195: 0x0213C9F0, 4 bytes, empty, upstream_symbol */
void st_ov056_0213C9F0(void) {}
/* #196: 0x0213CA24, 4 bytes, empty, upstream_symbol */
void st_ov056_0213CA24(void) {}
/* #197: 0x0213CC34, 4 bytes, empty, upstream_symbol */
void st_ov056_0213CC34(void) {}
/* #198: 0x0213CF7C, 4 bytes, empty, upstream_symbol */
void st_ov056_0213CF7C(void) {}
/* #199: 0x0213D35C, 12 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov056_0213D35C(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  *( uint32_t* )(uintptr_t)(r0 + 2312u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 2316u) = (uint32_t)r2;
  return r0;
}
/* ==== Original ARM9 overlay 058 ==== */
/* #200: 0x0213F33C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_0213F33C(void) { return 0u; }
/* #201: 0x02141B94, 16 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov058_02141B94(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r0 = *( uint32_t* )(uintptr_t)(r0 + 56u);
  r1 = 1u;
  *(uint16_t*)(uintptr_t)(r0+8u) = r1;
  return r0;
}
/* #202: 0x02141BA4, 16 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov058_02141BA4(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r0 = *( uint32_t* )(uintptr_t)(r0 + 56u);
  r1 = 2u;
  *(uint16_t*)(uintptr_t)(r0+8u) = r1;
  return r0;
}
/* #203: 0x02142560, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_02142560(void) { return 1u; }
/* #204: 0x02142A48, 4 bytes, empty, upstream_symbol */
void st_ov058_02142A48(void) {}
/* #205: 0x02142A4C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_02142A4C(void) { return 0u; }
/* #206: 0x02142C08, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_02142C08(void) { return 6u; }
/* #207: 0x02142EBC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_02142EBC(void) { return 0u; }
/* #208: 0x02142EFC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_02142EFC(void) { return 0u; }
/* #209: 0x02142F3C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_02142F3C(void) { return 0u; }
/* #210: 0x02142F7C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_02142F7C(void) { return 0u; }
/* #211: 0x02142FBC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_02142FBC(void) { return 0u; }
/* #212: 0x02142FFC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_02142FFC(void) { return 0u; }
/* #213: 0x0214303C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_0214303C(void) { return 0u; }
/* #214: 0x0214307C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_0214307C(void) { return 0u; }
/* #215: 0x021430BC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_021430BC(void) { return 0u; }
/* #216: 0x021430FC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_021430FC(void) { return 0u; }
/* #217: 0x02146608, 4 bytes, empty, upstream_symbol */
void st_ov058_02146608(void) {}
/* #218: 0x0214660C, 4 bytes, empty, upstream_symbol */
void st_ov058_0214660C(void) {}
/* #219: 0x02146610, 4 bytes, empty, upstream_symbol */
void st_ov058_02146610(void) {}
/* #220: 0x02146A98, 4 bytes, empty, upstream_symbol */
void st_ov058_02146A98(void) {}
/* #221: 0x02146A9C, 4 bytes, empty, upstream_symbol */
void st_ov058_02146A9C(void) {}
/* #222: 0x02146AA0, 4 bytes, empty, upstream_symbol */
void st_ov058_02146AA0(void) {}
/* #223: 0x02147E7C, 4 bytes, empty, upstream_symbol */
void st_ov058_02147E7C(void) {}
/* #224: 0x02148904, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_02148904(void) { return 1u; }
/* #225: 0x0214B73C, 4 bytes, empty, upstream_symbol */
void st_ov058_0214B73C(void) {}
/* #226: 0x0214D620, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_0214D620(void) { return 1u; }
/* #227: 0x0214D8B4, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_0214D8B4(void) { return 1u; }
/* #228: 0x0214E450, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_0214E450(void) { return 1u; }
/* #229: 0x0214F120, 8 bytes, read_byte, upstream_symbol */
unsigned int st_ov058_0214F120(const void* p) { return *((const unsigned char*)p+96); }
/* #230: 0x0214F860, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_0214F860(void) { return 0u; }
/* #231: 0x0214F868, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_0214F868(void) { return 0u; }
/* #232: 0x0214F870, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_0214F870(void) { return 6144u; }
/* #233: 0x0214F9A8, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov058_0214F9A8(void) { return 6144u; }
/* #234: 0x02151D78, 4 bytes, empty, upstream_symbol */
void st_ov058_02151D78(void) {}
/* ==== Original ARM9 overlay 059 ==== */
/* #235: 0x02158230, 4 bytes, empty, upstream_symbol */
void st_ov059_02158230(void) {}
/* #236: 0x021582B8, 4 bytes, empty, upstream_symbol */
void st_ov059_021582B8(void) {}
/* #237: 0x02158328, 4 bytes, empty, upstream_symbol */
void st_ov059_02158328(void) {}
/* #238: 0x02158370, 4 bytes, empty, upstream_symbol */
void st_ov059_02158370(void) {}
/* #239: 0x0215E8A4, 4 bytes, empty, upstream_symbol */
void st_ov059_0215E8A4(void) {}
/* #240: 0x0215E8A8, 4 bytes, empty, upstream_symbol */
void st_ov059_0215E8A8(void) {}
/* #241: 0x0215E8BC, 4 bytes, empty, upstream_symbol */
void st_ov059_0215E8BC(void) {}
/* #242: 0x02160A6C, 4 bytes, empty, upstream_symbol */
void st_ov059_02160A6C(void) {}
/* #243: 0x02160DCC, 4 bytes, empty, upstream_symbol */
void st_ov059_02160DCC(void) {}
/* #244: 0x0216117C, 4 bytes, empty, upstream_symbol */
void st_ov059_0216117C(void) {}
/* #245: 0x02161204, 4 bytes, empty, upstream_symbol */
void st_ov059_02161204(void) {}
/* #246: 0x02161208, 4 bytes, empty, upstream_symbol */
void st_ov059_02161208(void) {}
/* #247: 0x02161970, 4 bytes, empty, upstream_symbol */
void st_ov059_02161970(void) {}
/* #248: 0x02161C7C, 4 bytes, empty, upstream_symbol */
void st_ov059_02161C7C(void) {}
/* #249: 0x02161C80, 4 bytes, empty, upstream_symbol */
void st_ov059_02161C80(void) {}
/* #250: 0x02161F34, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov059_02161F34(void) { return 0u; }
/* #251: 0x02162244, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov059_02162244(void) { return 1u; }
/* #252: 0x021624FC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov059_021624FC(void) { return 2u; }
/* #253: 0x021627B4, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov059_021627B4(void) { return 3u; }
/* #254: 0x02162A6C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov059_02162A6C(void) { return 4u; }
/* ==== Original ARM9 overlay 060 ==== */
/* #255: 0x0215B1BC, 4 bytes, empty, upstream_symbol */
void st_ov060_0215B1BC(void) {}
/* #256: 0x0215CE14, 8 bytes, write_byte, upstream_symbol */
void st_ov060_0215CE14(void* p, unsigned int value) { ((unsigned char*)p)[740] = (unsigned char)value; }
/* #257: 0x0215CEC8, 8 bytes, write_word, upstream_symbol */
void st_ov060_0215CEC8(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+736) = value; }
/* #258: 0x0215D4C8, 4 bytes, empty, upstream_symbol */
void st_ov060_0215D4C8(void) {}
/* #259: 0x0215D4DC, 4 bytes, empty, upstream_symbol */
void st_ov060_0215D4DC(void) {}
/* #260: 0x0215E224, 4 bytes, empty, upstream_symbol */
void st_ov060_0215E224(void) {}
/* #261: 0x0215E7A0, 4 bytes, empty, upstream_symbol */
void st_ov060_0215E7A0(void) {}
/* #262: 0x0215E91C, 4 bytes, empty, upstream_symbol */
void st_ov060_0215E91C(void) {}
/* #263: 0x0215EDC4, 4 bytes, empty, upstream_symbol */
void st_ov060_0215EDC4(void) {}
/* #264: 0x0215F92C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov060_0215F92C(void) { return 492u; }
/* #265: 0x021601E0, 12 bytes, set_word, upstream_symbol */
void st_ov060_021601E0(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #266: 0x02160460, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov060_02160460(void) { return 82u; }
/* #267: 0x02160468, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov060_02160468(void) { return 167u; }
/* #268: 0x021605CC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov060_021605CC(void) { return 1u; }
/* #269: 0x021605D4, 4 bytes, empty, upstream_symbol */
void st_ov060_021605D4(void) {}
/* ==== Original ARM9 overlay 061 ==== */
/* #270: 0x021586CC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov061_021586CC(void) { return 0u; }
/* #271: 0x02159198, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov061_02159198(void) { return 1u; }
/* #272: 0x02159408, 4 bytes, empty, upstream_symbol */
void st_ov061_02159408(void) {}
/* #273: 0x02159640, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov061_02159640(void) { return 43008u; }
/* #274: 0x02159D98, 4 bytes, empty, upstream_symbol */
void st_ov061_02159D98(void) {}
/* ==== Original ARM9 overlay 062 ==== */
/* #275: 0x02158B1C, 4 bytes, empty, upstream_symbol */
void st_ov062_02158B1C(void) {}
/* #276: 0x0215A6A8, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov062_0215A6A8(void) { return 1u; }
/* #277: 0x0215B16C, 4 bytes, empty, upstream_symbol */
void st_ov062_0215B16C(void) {}
/* #278: 0x0215B170, 4 bytes, empty, upstream_symbol */
void st_ov062_0215B170(void) {}
/* #279: 0x0215B5C8, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov062_0215B5C8(void) { return 43008u; }
/* #280: 0x0215BA58, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov062_0215BA58(void) { return 0u; }
/* #281: 0x0215BA60, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov062_0215BA60(void) { return 6144u; }
/* #282: 0x0215BBAC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov062_0215BBAC(void) { return 0u; }
/* #283: 0x0215BBB4, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov062_0215BBB4(void) { return 6144u; }
/* #284: 0x0215BD00, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov062_0215BD00(void) { return 0u; }
/* #285: 0x0215BD08, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov062_0215BD08(void) { return 6144u; }
/* #286: 0x0215BE54, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov062_0215BE54(void) { return 0u; }
/* #287: 0x0215BE5C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov062_0215BE5C(void) { return 6144u; }
/* #288: 0x0215E058, 4 bytes, empty, upstream_symbol */
void st_ov062_0215E058(void) {}
/* ==== Original ARM9 overlay 063 ==== */
/* #289: 0x02159F3C, 4 bytes, empty, upstream_symbol */
void st_ov063_02159F3C(void) {}
/* #290: 0x0215B074, 4 bytes, empty, upstream_symbol */
void st_ov063_0215B074(void) {}
/* #291: 0x0215B078, 4 bytes, empty, upstream_symbol */
void st_ov063_0215B078(void) {}
/* #292: 0x0215B07C, 4 bytes, empty, upstream_symbol */
void st_ov063_0215B07C(void) {}
/* #293: 0x0215B3E4, 4 bytes, empty, upstream_symbol */
void st_ov063_0215B3E4(void) {}
/* #294: 0x0215BCA8, 4 bytes, empty, upstream_symbol */
void st_ov063_0215BCA8(void) {}
/* #295: 0x0215BCAC, 4 bytes, empty, upstream_symbol */
void st_ov063_0215BCAC(void) {}
/* #296: 0x0215D9E8, 4 bytes, empty, upstream_symbol */
void st_ov063_0215D9E8(void) {}
/* #297: 0x0215D9EC, 4 bytes, empty, upstream_symbol */
void st_ov063_0215D9EC(void) {}
/* #298: 0x0215F3A8, 20 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov063_0215F3A8(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = *( uint8_t* )(uintptr_t)(r0 + 64u);
  if (r1 != 0u) { r1 = 1u; }
  if (r1 != 0u) { *( uint8_t* )(uintptr_t)(r0 + 25u) = (uint8_t)r1; }
  return r0;
}
/* #299: 0x0216179C, 4 bytes, empty, upstream_symbol */
void st_ov063_0216179C(void) {}
/* #300: 0x02162638, 8 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov063_02162638(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r0 = (r1 | (r2 << 16));
  return r0;
}
/* ==== Original ARM9 overlay 065 ==== */
/* #301: 0x02158640, 4 bytes, empty, upstream_symbol */
void st_ov065_02158640(void) {}
/* #302: 0x021598DC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov065_021598DC(void) { return 1u; }
/* #303: 0x02159928, 8 bytes, write_word, upstream_symbol */
void st_ov065_02159928(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+148) = value; }
/* #304: 0x02159BD0, 4 bytes, empty, upstream_symbol */
void st_ov065_02159BD0(void) {}
/* #305: 0x02159BD4, 4 bytes, empty, upstream_symbol */
void st_ov065_02159BD4(void) {}
/* #306: 0x02159E80, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov065_02159E80(void) { return 0u; }
/* #307: 0x02159E88, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov065_02159E88(void) { return 6144u; }
/* #308: 0x0215A074, 4 bytes, empty, upstream_symbol */
void st_ov065_0215A074(void) {}
/* ==== Original ARM9 overlay 066 ==== */
/* #309: 0x0215BB84, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov066_0215BB84(void) { return 0u; }
/* #310: 0x0215BFF8, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov066_0215BFF8(void) { return 1u; }
/* #311: 0x0215CBCC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov066_0215CBCC(void) { return 43008u; }
/* #312: 0x0215CE14, 4 bytes, empty, upstream_symbol */
void st_ov066_0215CE14(void) {}
/* #313: 0x0215CE70, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov066_0215CE70(void) { return 20480u; }
/* #314: 0x0215D024, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov066_0215D024(void) { return 6144u; }
/* #315: 0x0215D178, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov066_0215D178(void) { return 6144u; }
/* ==== Original ARM9 overlay 067 ==== */
/* #316: 0x021590F4, 4 bytes, empty, upstream_symbol */
void st_ov067_021590F4(void) {}
/* #317: 0x021590F8, 4 bytes, empty, upstream_symbol */
void st_ov067_021590F8(void) {}
/* #318: 0x021590FC, 4 bytes, empty, upstream_symbol */
void st_ov067_021590FC(void) {}
/* #319: 0x0215A0E0, 4 bytes, empty, upstream_symbol */
void st_ov067_0215A0E0(void) {}
/* #320: 0x0215A0E4, 4 bytes, empty, upstream_symbol */
void st_ov067_0215A0E4(void) {}
/* #321: 0x0215A444, 4 bytes, empty, upstream_symbol */
void st_ov067_0215A444(void) {}
/* #322: 0x0215AF80, 4 bytes, empty, upstream_symbol */
void st_ov067_0215AF80(void) {}
/* #323: 0x0215AFE8, 4 bytes, empty, upstream_symbol */
void st_ov067_0215AFE8(void) {}
/* #324: 0x0215B050, 4 bytes, empty, upstream_symbol */
void st_ov067_0215B050(void) {}
/* #325: 0x0215B67C, 12 bytes, set_word, upstream_symbol */
void st_ov067_0215B67C(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #326: 0x0215BE00, 4 bytes, empty, upstream_symbol */
void st_ov067_0215BE00(void) {}
/* #327: 0x0215BFE0, 4 bytes, empty, upstream_symbol */
void st_ov067_0215BFE0(void) {}
/* #328: 0x0215C1E0, 4 bytes, empty, upstream_symbol */
void st_ov067_0215C1E0(void) {}
/* ==== Original ARM9 overlay 068 ==== */
/* #329: 0x02158074, 4 bytes, empty, upstream_symbol */
void st_ov068_02158074(void) {}
/* #330: 0x02158078, 4 bytes, empty, upstream_symbol */
void st_ov068_02158078(void) {}
/* #331: 0x0215827C, 12 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov068_0215827C(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = 0u;
  *(uint16_t*)(uintptr_t)(r0+174u) = r1;
  return r0;
}
/* #332: 0x02158308, 4 bytes, empty, upstream_symbol */
void st_ov068_02158308(void) {}
/* #333: 0x02158524, 4 bytes, empty, upstream_symbol */
void st_ov068_02158524(void) {}
/* #334: 0x0215864C, 4 bytes, empty, upstream_symbol */
void st_ov068_0215864C(void) {}
/* #335: 0x02158720, 4 bytes, empty, upstream_symbol */
void st_ov068_02158720(void) {}
/* #336: 0x02158EA8, 4 bytes, empty, upstream_symbol */
void st_ov068_02158EA8(void) {}
/* #337: 0x0215A474, 4 bytes, empty, upstream_symbol */
void st_ov068_0215A474(void) {}
/* #338: 0x0215A4F8, 4 bytes, empty, upstream_symbol */
void st_ov068_0215A4F8(void) {}
/* #339: 0x0215B2A0, 4 bytes, empty, upstream_symbol */
void st_ov068_0215B2A0(void) {}
/* #340: 0x0215C4D8, 12 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov068_0215C4D8(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = 0u;
  *(uint16_t*)(uintptr_t)(r0+204u) = r1;
  return r0;
}
/* #341: 0x0215C7C8, 4 bytes, empty, upstream_symbol */
void st_ov068_0215C7C8(void) {}
/* #342: 0x0215D6B4, 4 bytes, empty, upstream_symbol */
void st_ov068_0215D6B4(void) {}
/* #343: 0x0215DC94, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov068_0215DC94(void) { return 4u; }
/* #344: 0x0215E23C, 4 bytes, empty, upstream_symbol */
void st_ov068_0215E23C(void) {}
/* #345: 0x0215E24C, 4 bytes, empty, upstream_symbol */
void st_ov068_0215E24C(void) {}
/* #346: 0x0215E2A0, 4 bytes, empty, upstream_symbol */
void st_ov068_0215E2A0(void) {}
/* #347: 0x0215E514, 4 bytes, empty, upstream_symbol */
void st_ov068_0215E514(void) {}
/* #348: 0x0215E518, 4 bytes, empty, upstream_symbol */
void st_ov068_0215E518(void) {}
/* #349: 0x0215EF94, 4 bytes, empty, upstream_symbol */
void st_ov068_0215EF94(void) {}
/* #350: 0x0216071C, 4 bytes, empty, upstream_symbol */
void st_ov068_0216071C(void) {}
/* #351: 0x0216086C, 4 bytes, empty, upstream_symbol */
void st_ov068_0216086C(void) {}
/* #352: 0x021609BC, 4 bytes, empty, upstream_symbol */
void st_ov068_021609BC(void) {}
/* #353: 0x02160B0C, 4 bytes, empty, upstream_symbol */
void st_ov068_02160B0C(void) {}
/* #354: 0x02161928, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov068_02161928(void) { return 1u; }
/* #355: 0x02161930, 8 bytes, write_word, upstream_symbol */
void st_ov068_02161930(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+160) = value; }
/* #356: 0x02161938, 4 bytes, empty, upstream_symbol */
void st_ov068_02161938(void) {}
/* #357: 0x02161BDC, 4 bytes, empty, upstream_symbol */
void st_ov068_02161BDC(void) {}
/* #358: 0x02161BE0, 4 bytes, empty, upstream_symbol */
void st_ov068_02161BE0(void) {}
/* #359: 0x02161DF8, 4 bytes, empty, upstream_symbol */
void st_ov068_02161DF8(void) {}
/* #360: 0x02161DFC, 4 bytes, empty, upstream_symbol */
void st_ov068_02161DFC(void) {}
/* ==== Original ARM9 overlay 070 ==== */
/* #361: 0x0213FB50, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov070_0213FB50(void) { return 0u; }
/* #362: 0x0214012C, 4 bytes, empty, upstream_symbol */
void st_ov070_0214012C(void) {}
/* #363: 0x02142308, 4 bytes, empty, upstream_symbol */
void st_ov070_02142308(void) {}
/* #364: 0x021430B4, 4 bytes, empty, upstream_symbol */
void st_ov070_021430B4(void) {}
/* #365: 0x02143194, 4 bytes, empty, upstream_symbol */
void st_ov070_02143194(void) {}
/* #366: 0x0214404C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov070_0214404C(void) { return 1u; }
/* #367: 0x0214409C, 4 bytes, empty, upstream_symbol */
void st_ov070_0214409C(void) {}
/* #368: 0x02147F50, 24 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov070_02147F50(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = 0u;
  *( uint32_t* )(uintptr_t)(r0 + 8u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 12u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 16u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 20u) = (uint32_t)r1;
  return r0;
}
/* #369: 0x0214B570, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov070_0214B570(void) { return 1u; }
/* ==== Original ARM9 overlay 071 ==== */
/* #370: 0x02152268, 4 bytes, empty, upstream_symbol */
void st_ov071_02152268(void) {}
/* #371: 0x02153118, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov071_02153118(void) { return 0u; }
/* #372: 0x02155B78, 4 bytes, empty, upstream_symbol */
void st_ov071_02155B78(void) {}
/* #373: 0x0215B82C, 12 bytes, set_word, upstream_symbol */
void st_ov071_0215B82C(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #374: 0x0215DDF0, 8 bytes, read_byte, upstream_symbol */
unsigned int st_ov071_0215DDF0(const void* p) { return *((const unsigned char*)p+1670); }
/* #375: 0x0215E928, 4 bytes, empty, upstream_symbol */
void st_ov071_0215E928(void) {}
/* #376: 0x02160138, 4 bytes, empty, upstream_symbol */
void st_ov071_02160138(void) {}
/* #377: 0x02160804, 4 bytes, empty, upstream_symbol */
void st_ov071_02160804(void) {}
/* ==== Original ARM9 overlay 074 ==== */
/* #378: 0x02153B48, 4 bytes, empty, upstream_symbol */
void st_ov074_02153B48(void) {}
/* #379: 0x02153B4C, 4 bytes, empty, upstream_symbol */
void st_ov074_02153B4C(void) {}
/* #380: 0x02155820, 12 bytes, set_word, upstream_symbol */
void st_ov074_02155820(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #381: 0x02155FFC, 4 bytes, empty, upstream_symbol */
void st_ov074_02155FFC(void) {}
/* #382: 0x021562B8, 4 bytes, empty, upstream_symbol */
void st_ov074_021562B8(void) {}
/* #383: 0x021582AC, 4 bytes, empty, upstream_symbol */
void st_ov074_021582AC(void) {}
/* #384: 0x0215CFDC, 4 bytes, empty, upstream_symbol */
void st_ov074_0215CFDC(void) {}
/* #385: 0x0215D068, 4 bytes, empty, upstream_symbol */
void st_ov074_0215D068(void) {}
/* #386: 0x0215D100, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov074_0215D100(void) { return 8192u; }
/* #387: 0x0215F338, 4 bytes, empty, upstream_symbol */
void st_ov074_0215F338(void) {}
/* ==== Original ARM9 overlay 075 ==== */
/* #388: 0x0215AF10, 16 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov075_0215AF10(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = 0u;
  *( uint32_t* )(uintptr_t)(r0 + 2460u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 2464u) = (uint32_t)r1;
  return r0;
}
/* ==== Original ARM9 overlay 083 ==== */
/* #389: 0x0215A428, 16 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov083_0215A428(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = 0u;
  *( uint32_t* )(uintptr_t)(r0 + 384u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 388u) = (uint32_t)r1;
  return r0;
}
/* ==== Original ARM9 overlay 084 ==== */
/* #390: 0x02151E98, 12 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov084_02151E98(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r0 = *( uint32_t* )(uintptr_t)(r0 + 16u);
  r0 = ((uint32_t)((int32_t)r0 >> 12));
  return r0;
}
/* #391: 0x0215ACE8, 8 bytes, write_word, upstream_symbol */
void st_ov084_0215ACE8(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+160) = value; }
/* #392: 0x0215D434, 4 bytes, empty, upstream_symbol */
void st_ov084_0215D434(void) {}
/* #393: 0x0215F09C, 4 bytes, empty, upstream_symbol */
void st_ov084_0215F09C(void) {}
/* #394: 0x0216072C, 4 bytes, empty, upstream_symbol */
void st_ov084_0216072C(void) {}
/* #395: 0x02160E6C, 4 bytes, empty, upstream_symbol */
void st_ov084_02160E6C(void) {}
/* #396: 0x0216159C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov084_0216159C(void) { return 1u; }
/* #397: 0x021615A4, 4 bytes, empty, upstream_symbol */
void st_ov084_021615A4(void) {}
/* ==== Original ARM9 overlay 086 ==== */
/* #398: 0x0215A0F0, 4 bytes, empty, upstream_symbol */
void st_ov086_0215A0F0(void) {}
/* #399: 0x0215DD30, 4 bytes, empty, upstream_symbol */
void st_ov086_0215DD30(void) {}
/* ==== Original ARM9 overlay 088 ==== */
/* #400: 0x02165D5C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov088_02165D5C(void) { return 1u; }
/* #401: 0x02165E00, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov088_02165E00(void) { return 1u; }
/* #402: 0x02167080, 4 bytes, empty, upstream_symbol */
void st_ov088_02167080(void) {}
/* #403: 0x02167098, 4 bytes, empty, upstream_symbol */
void st_ov088_02167098(void) {}
/* #404: 0x02167890, 4 bytes, empty, upstream_symbol */
void st_ov088_02167890(void) {}
/* #405: 0x0216830C, 4 bytes, empty, upstream_symbol */
void st_ov088_0216830C(void) {}
/* #406: 0x0216867C, 4 bytes, empty, upstream_symbol */
void st_ov088_0216867C(void) {}
/* #407: 0x02171C58, 4 bytes, empty, upstream_symbol */
void st_ov088_02171C58(void) {}
/* #408: 0x02172720, 4 bytes, empty, upstream_symbol */
void st_ov088_02172720(void) {}
/* ==== Original ARM9 overlay 089 ==== */
/* #409: 0x021664D0, 16 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov089_021664D0(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = 0u;
  *( uint32_t* )(uintptr_t)(r0 + 616u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 620u) = (uint32_t)r1;
  return r0;
}
/* #410: 0x02169868, 12 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov089_02169868(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  *( uint32_t* )(uintptr_t)(r1 + 4u) = (uint32_t)r0;
  *( uint32_t* )(uintptr_t)(r1 + 8u) = (uint32_t)r0;
  return r0;
}
/* #411: 0x0216A268, 4 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov089_0216A268(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  return r0;
}
/* #412: 0x0216AABC, 4 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov089_0216AABC(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  return r0;
}
/* ==== Original ARM9 overlay 090 ==== */
/* #413: 0x02167090, 12 bytes, set_byte, upstream_symbol */
void st_ov090_02167090(void *p) { ((unsigned char*)p)[1070] = 4u; }
/* #414: 0x02167A1C, 12 bytes, set_byte, upstream_symbol */
void st_ov090_02167A1C(void *p) { ((unsigned char*)p)[1074] = 0u; }
/* #415: 0x0216B9C0, 4 bytes, empty, upstream_symbol */
void st_ov090_0216B9C0(void) {}
/* #416: 0x0216D710, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov090_0216D710(void) { return 1u; }
/* #417: 0x0216ED00, 4 bytes, empty, upstream_symbol */
void st_ov090_0216ED00(void) {}
/* #418: 0x02171C2C, 4 bytes, empty, upstream_symbol */
void st_ov090_02171C2C(void) {}
/* #419: 0x021721A8, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov090_021721A8(void) { return 0u; }
/* #420: 0x021722C8, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov090_021722C8(void) { return 41u; }
/* #421: 0x02172DAC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov090_02172DAC(void) { return 0u; }
/* #422: 0x02172DB4, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov090_02172DB4(void) { return 1u; }
/* #423: 0x02172DBC, 4 bytes, empty, upstream_symbol */
void st_ov090_02172DBC(void) {}
/* #424: 0x02172DC0, 4 bytes, empty, upstream_symbol */
void st_ov090_02172DC0(void) {}
/* #425: 0x02172E84, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov090_02172E84(void) { return 0u; }
/* #426: 0x021730B8, 4 bytes, empty, upstream_symbol */
void st_ov090_021730B8(void) {}
/* #427: 0x02173B10, 4 bytes, empty, upstream_symbol */
void st_ov090_02173B10(void) {}
/* ==== Original ARM9 overlay 091 ==== */
/* #428: 0x02165A8C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov091_02165A8C(void) { return 8u; }
/* #429: 0x02166264, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov091_02166264(void) { return 9u; }
/* #430: 0x02167228, 4 bytes, empty, upstream_symbol */
void st_ov091_02167228(void) {}
/* #431: 0x02167D7C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov091_02167D7C(void) { return 1u; }
/* #432: 0x021685A8, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov091_021685A8(void) { return 0u; }
/* #433: 0x021685B0, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov091_021685B0(void) { return 1u; }
/* #434: 0x021685B8, 4 bytes, empty, upstream_symbol */
void st_ov091_021685B8(void) {}
/* #435: 0x021685BC, 4 bytes, empty, upstream_symbol */
void st_ov091_021685BC(void) {}
/* #436: 0x021688AC, 4 bytes, empty, upstream_symbol */
void st_ov091_021688AC(void) {}
/* #437: 0x02168904, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov091_02168904(void) { return 0u; }
/* #438: 0x02169C10, 4 bytes, empty, upstream_symbol */
void st_ov091_02169C10(void) {}
/* #439: 0x02169C48, 4 bytes, empty, upstream_symbol */
void st_ov091_02169C48(void) {}
/* #440: 0x02169D10, 4 bytes, empty, upstream_symbol */
void st_ov091_02169D10(void) {}
/* #441: 0x0216B92C, 4 bytes, empty, upstream_symbol */
void st_ov091_0216B92C(void) {}
/* #442: 0x0216BB64, 4 bytes, empty, upstream_symbol */
void st_ov091_0216BB64(void) {}
/* #443: 0x0216DB30, 4 bytes, empty, upstream_symbol */
void st_ov091_0216DB30(void) {}
/* #444: 0x0216DD70, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov091_0216DD70(void) { return 45u; }
/* #445: 0x0216E8AC, 4 bytes, empty, upstream_symbol */
void st_ov091_0216E8AC(void) {}
/* #446: 0x021714A0, 4 bytes, empty, upstream_symbol */
void st_ov091_021714A0(void) {}
/* #447: 0x02176AE0, 4 bytes, empty, upstream_symbol */
void st_ov091_02176AE0(void) {}
/* ==== Original ARM9 overlay 092 ==== */
/* #448: 0x02165B2C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02165B2C(void) { return 10u; }
/* #449: 0x02165B34, 4 bytes, empty, upstream_symbol */
void st_ov092_02165B34(void) {}
/* #450: 0x02166264, 4 bytes, empty, upstream_symbol */
void st_ov092_02166264(void) {}
/* #451: 0x02166F04, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02166F04(void) { return 245760u; }
/* #452: 0x02166F0C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02166F0C(void) { return 0u; }
/* #453: 0x02166F14, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02166F14(void) { return 0u; }
/* #454: 0x02166F28, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02166F28(void) { return 46u; }
/* #455: 0x0216717C, 4 bytes, empty, upstream_symbol */
void st_ov092_0216717C(void) {}
/* #456: 0x02167180, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02167180(void) { return 0u; }
/* #457: 0x021671B8, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_021671B8(void) { return 0u; }
/* #458: 0x02167658, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02167658(void) { return 245760u; }
/* #459: 0x02167660, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02167660(void) { return 0u; }
/* #460: 0x02167668, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02167668(void) { return 0u; }
/* #461: 0x0216767C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_0216767C(void) { return 45u; }
/* #462: 0x02167B60, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02167B60(void) { return 245760u; }
/* #463: 0x02167B68, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02167B68(void) { return 0u; }
/* #464: 0x02167B70, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02167B70(void) { return 0u; }
/* #465: 0x02167B84, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02167B84(void) { return 46u; }
/* #466: 0x02167B8C, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02167B8C(void) { return 1u; }
/* #467: 0x0216833C, 4 bytes, empty, upstream_symbol */
void st_ov092_0216833C(void) {}
/* #468: 0x02168340, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02168340(void) { return 0u; }
/* #469: 0x02168378, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02168378(void) { return 0u; }
/* #470: 0x02168D9C, 12 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov092_02168D9C(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  *( uint32_t* )(uintptr_t)(r0 + 96u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 100u) = (uint32_t)r2;
  return r0;
}
/* #471: 0x0216B264, 12 bytes, set_word, upstream_symbol */
void st_ov092_0216B264(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #472: 0x02178F34, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02178F34(void) { return 25u; }
/* #473: 0x02178FD4, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02178FD4(void) { return 1u; }
/* #474: 0x02179F14, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov092_02179F14(void) { return 0u; }
/* #475: 0x0217A794, 32 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov092_0217A794(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r2 = 0u;
  r1 = 589824u;
  *( uint32_t* )(uintptr_t)(r0 + 0u) = (uint32_t)r2;
  *( uint32_t* )(uintptr_t)(r0 + 4u) = (uint32_t)r2;
  *( uint32_t* )(uintptr_t)(r0 + 8u) = (uint32_t)r2;
  *( uint32_t* )(uintptr_t)(r0 + 12u) = (uint32_t)r2;
  *( uint32_t* )(uintptr_t)(r0 + 16u) = (uint32_t)r1;
  return r0;
}
/* ==== Original ARM9 overlay 093 ==== */
/* #476: 0x0216642C, 12 bytes, read_nested_byte, upstream_symbol */
unsigned int st_ov093_0216642C(const void *p) { const unsigned char *q = *(const unsigned char * const*)((const unsigned char*)p+4); return q[122]; }
/* #477: 0x0216C82C, 24 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov093_0216C82C(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = 0u;
  *( uint32_t* )(uintptr_t)(r0 + 0u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 4u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 8u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 12u) = (uint32_t)r1;
  return r0;
}
/* #478: 0x02170784, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov093_02170784(void) { return 0u; }
/* #479: 0x02170858, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov093_02170858(void) { return 0u; }
/* #480: 0x02171DB0, 20 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov093_02171DB0(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r2 = *( uint32_t* )(uintptr_t)(r0 + 32u);
  if (r2 == 69u) { r0 = *( uint32_t* )(uintptr_t)(r0 + 48u); }
  if (r2 == 69u) { *( uint32_t* )(uintptr_t)(r0 + 132u) = (uint32_t)r1; }
  return r0;
}
/* #481: 0x021755A0, 12 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov093_021755A0(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  if ((int32_t)(r0) >= (int32_t)(r1)) { r0 = r1; }
  return r0;
}
/* #482: 0x021775F4, 8 bytes, write_word, upstream_symbol */
void st_ov093_021775F4(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+148) = value; }
/* ==== Original ARM9 overlay 094 ==== */
/* #483: 0x02165D50, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov094_02165D50(void) { return 3u; }
/* #484: 0x021662BC, 8 bytes, write_word, upstream_symbol */
void st_ov094_021662BC(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+56) = value; }
/* #485: 0x021679BC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov094_021679BC(void) { return 0u; }
/* #486: 0x021679C4, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov094_021679C4(void) { return 0u; }
/* #487: 0x02169614, 12 bytes, set_word, upstream_symbol */
void st_ov094_02169614(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #488: 0x0216A8E0, 8 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov094_0216A8E0(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  *(uint16_t*)(uintptr_t)(r0+76u) = r1;
  return r0;
}
/* #489: 0x0216E424, 8 bytes, write_word, upstream_symbol */
void st_ov094_0216E424(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+368) = value; }
/* #490: 0x0216E5BC, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov094_0216E5BC(void) { return 1u; }
/* #491: 0x0216FD54, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov094_0216FD54(void) { return 15u; }
/* #492: 0x0216FDF4, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov094_0216FDF4(void) { return 1u; }
/* #493: 0x02172868, 12 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov094_02172868(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = *( uint32_t* )(uintptr_t)(r0 + 280u);
  *( uint32_t* )(uintptr_t)(r0 + 8u) = (uint32_t)r1;
  return r0;
}
/* #494: 0x021736DC, 12 bytes, set_byte, upstream_symbol */
void st_ov094_021736DC(void *p) { ((unsigned char*)p)[269] = 1u; }
/* #495: 0x021737E0, 8 bytes, return_constant, upstream_symbol */
unsigned int st_ov094_021737E0(void) { return 10240u; }
/* ==== Original ARM9 overlay 095 ==== */
/* #496: 0x0217A57C, 16 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov095_0217A57C(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r0 = *( uint32_t* )(uintptr_t)(r0 + 156u);
  r1 = 0u;
  *( uint8_t* )(uintptr_t)(r0 + 81u) = (uint8_t)r1;
  return r0;
}
/* ==== Original ARM9 overlay 105 ==== */
/* #497: 0x02187A6C, 16 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov105_02187A6C(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = 0u;
  *( uint32_t* )(uintptr_t)(r0 + 0u) = (uint32_t)r1;
  *( uint32_t* )(uintptr_t)(r0 + 4u) = (uint32_t)r1;
  return r0;
}
/* ==== Original ARM9 overlay 107 ==== */
/* #498: 0x0218624C, 12 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov107_0218624C(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  r1 = 0u;
  *(uint16_t*)(uintptr_t)(r0+4u) = r1;
  return r0;
}
/* ==== Original ARM9 overlay 108 ==== */
/* #499: 0x02185EF8, 4 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov108_02185EF8(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  return r0;
}
/* #500: 0x02185EFC, 4 bytes, derived_linear_leaf, bl_target */
uint32_t st_ov108_02185EFC(uint32_t p0,uint32_t p1,uint32_t p2,uint32_t p3) {
  uint32_t r0=p0, r1=p1, r2=p2, r3=p3;
  return r0;
}
