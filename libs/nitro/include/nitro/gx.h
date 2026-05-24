#ifndef _NITRO_GX_H
#define _NITRO_GX_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/reg.h"
#include "nitro/types.h"

#define GX_POWER_ALL 0x20e

#define GX_DISP_SELECT_MAIN_SUB 0x8000
#define GX_DISP_SELECT_SUB_MAIN 0
#define GX_DISPMODE_GRAPHICS 1
#define GX_DISPMODE_VRAM_C 0xa
#define GX_DISPMODE_VRAM_D 0xe

#define GX_VRAM_LCDC_ALL 0x1ff
#define GX_VRAM_LCDC_C 0x4
#define GX_VRAM_LCDC_D 0x8

#define GX_VRAM_BG_NONE ((GXVRamBG) 0)
#define GX_VRAM_BG_128_A ((GXVRamBG) 0x1)
#define GX_VRAM_BG_128_B ((GXVRamBG) 0x2)
#define GX_VRAM_BG_128_C ((GXVRamBG) 0x4)
#define GX_VRAM_BG_128_D ((GXVRamBG) 0x8)
#define GX_VRAM_BG_256_AB ((GXVRamBG) 0x3)
#define GX_VRAM_BG_384_ABC ((GXVRamBG) 0x7)
#define GX_VRAM_BG_384_ABD ((GXVRamBG) 0xb)
#define GX_VRAM_BG_512_ABCD ((GXVRamBG) 0xf)

#define GX_VRAM_SUB_BG_NONE ((GXVRamBG) 0)
#define GX_VRAM_SUB_BG_32_H ((GXVRamBG) 0x80)
#define GX_VRAM_SUB_BG_48_HI ((GXVRamBG) 0x180)
#define GX_VRAM_SUB_BG_128_C ((GXVRamBG) 0x4)

#define GX_VRAM_OBJ_NONE ((GXVRamOBJ) 0)
#define GX_VRAM_OBJ_128_A ((GXVRamOBJ) 0x1)
#define GX_VRAM_OBJ_128_B ((GXVRamOBJ) 0x2)
#define GX_VRAM_OBJ_128_C ((GXVRamOBJ) 0x4)
#define GX_VRAM_OBJ_128_D ((GXVRamOBJ) 0x8)
#define GX_VRAM_OBJ_64_E ((GXVRamOBJ) 0x10)
#define GX_VRAM_OBJ_16_F ((GXVRamOBJ) 0x20)
#define GX_VRAM_OBJ_16_G ((GXVRamOBJ) 0x40)

#define GX_VRAM_SUB_OBJ_NONE ((GXVRamOBJ) 0)
#define GX_VRAM_SUB_OBJ_16_I ((GXVRamOBJ) 0x100)
#define GX_VRAM_SUB_OBJ_128_D ((GXVRamOBJ) 0x8)

#define GX_VRAM_BGEXTPLTT_01_F 0x20
#define GX_VRAM_BGEXTPLTT_0123_FG 0x60
#define GX_VRAM_SUB_BGEXTPLTT_0123_H 0x80
#define GX_VRAM_SUB_OBJEXTPLTT_0_I 0x100
#define GX_VRAM_OBJEXTPLTT_0_F 0x20
#define GX_VRAM_OBJEXTPLTT_0_G 0x40

#define GX_VRAM_TEX_01_AB 0x3

#define GX_VRAM_TEXPLTT_0123_E 0x10

#define GX_PLANEMASK_NONE 0
#define GX_PLANEMASK_BG0 0x1
#define GX_PLANEMASK_BG1 0x2
#define GX_PLANEMASK_BG2 0x4
#define GX_PLANEMASK_BG3 0x8
#define GX_PLANEMASK_OBJ 0x10

#define GX_BGCHAROFFSET_0x00000 0
#define GX_BGSCROFFSET_0x00000 0
#define GX_BGMODE_0 0
#define GX_BGMODE_3 3
#define GX_BGMODE_5 5
#define GX_BG0_AS_2D 0
#define GX_BG_SCRSIZE_TEXT_256x256 0
#define GX_BG_SCRSIZE_256BMP_128x128 ((GXBGScrSize256Bmp) 0)
#define GX_BG_SCRSIZE_256BMP_256x256 ((GXBGScrSize256Bmp) 1)
#define GX_BG_SCRSIZE_256BMP_512x256 ((GXBGScrSize256Bmp) 2)
#define GX_BG_SCRSIZE_256BMP_512x512 ((GXBGScrSize256Bmp) 3)
#define GX_BG_SCRSIZE_DCBMP_128x128 ((GXBGScrSizeDcBmp) 0)
#define GX_BG_SCRSIZE_DCBMP_256x256 ((GXBGScrSizeDcBmp) 1)
#define GX_BG_SCRSIZE_DCBMP_512x256 ((GXBGScrSizeDcBmp) 2)
#define GX_BG_SCRSIZE_DCBMP_512x512 ((GXBGScrSizeDcBmp) 3)
#define GX_BG_AREAOVER_XLU ((GXBGAreaOver) 0)
#define GX_BG_AREAOVER_REPEAT ((GXBGAreaOver) 1)
#define GX_BG_BMPSCRBASE_0x00000 ((GXBGBmpScrBase) 0)
#define GX_BG_BMPSCRBASE_0x04000 ((GXBGBmpScrBase) 1)
#define GX_BG_BMPSCRBASE_0x08000 ((GXBGBmpScrBase) 2)
#define GX_BG_BMPSCRBASE_0x0c000 ((GXBGBmpScrBase) 3)
#define GX_BG_BMPSCRBASE_0x10000 ((GXBGBmpScrBase) 4)
#define GX_BG_BMPSCRBASE_0x14000 ((GXBGBmpScrBase) 5)
#define GX_BG_BMPSCRBASE_0x18000 ((GXBGBmpScrBase) 6)
#define GX_BG_BMPSCRBASE_0x1c000 ((GXBGBmpScrBase) 7)
#define GX_BG_BMPSCRBASE_0x20000 ((GXBGBmpScrBase) 8)
#define GX_BG_BMPSCRBASE_0x24000 ((GXBGBmpScrBase) 9)
#define GX_BG_BMPSCRBASE_0x28000 ((GXBGBmpScrBase) 10)
#define GX_BG_BMPSCRBASE_0x2c000 ((GXBGBmpScrBase) 11)
#define GX_BG_BMPSCRBASE_0x30000 ((GXBGBmpScrBase) 12)
#define GX_BG_BMPSCRBASE_0x34000 ((GXBGBmpScrBase) 13)
#define GX_BG_BMPSCRBASE_0x38000 ((GXBGBmpScrBase) 14)
#define GX_BG_BMPSCRBASE_0x3c000 ((GXBGBmpScrBase) 15)
#define GX_BG_BMPSCRBASE_0x40000 ((GXBGBmpScrBase) 16)
#define GX_BG_BMPSCRBASE_0x44000 ((GXBGBmpScrBase) 17)
#define GX_BG_BMPSCRBASE_0x48000 ((GXBGBmpScrBase) 18)
#define GX_BG_BMPSCRBASE_0x4c000 ((GXBGBmpScrBase) 19)
#define GX_BG_BMPSCRBASE_0x50000 ((GXBGBmpScrBase) 20)
#define GX_BG_BMPSCRBASE_0x54000 ((GXBGBmpScrBase) 21)
#define GX_BG_BMPSCRBASE_0x58000 ((GXBGBmpScrBase) 22)
#define GX_BG_BMPSCRBASE_0x5c000 ((GXBGBmpScrBase) 23)
#define GX_BG_BMPSCRBASE_0x60000 ((GXBGBmpScrBase) 24)
#define GX_BG_BMPSCRBASE_0x64000 ((GXBGBmpScrBase) 25)
#define GX_BG_BMPSCRBASE_0x68000 ((GXBGBmpScrBase) 26)
#define GX_BG_BMPSCRBASE_0x6c000 ((GXBGBmpScrBase) 27)
#define GX_BG_BMPSCRBASE_0x70000 ((GXBGBmpScrBase) 28)
#define GX_BG_BMPSCRBASE_0x74000 ((GXBGBmpScrBase) 29)
#define GX_BG_BMPSCRBASE_0x78000 ((GXBGBmpScrBase) 30)
#define GX_BG_BMPSCRBASE_0x7c000 ((GXBGBmpScrBase) 31)
#define GX_BG_COLORMODE_16 0
#define GX_BG_CHARBASE_0x00000 0
#define GX_BG_SCRBASE_0x0000 0
#define GX_BG_EXTPLTT_01 1

#define GX_OBJVRAMMODE_CHAR_1D_32K 0x10
#define GX_OBJVRAMMODE_CHAR_1D_64K 0x100010
#define GX_OBJVRAMMODE_CHAR_1D_128K 0x200010
#define GX_OBJVRAMMODE_CHAR_1D_256K 0x300010

#define GX_BLEND_PLANEMASK_NONE 0
#define GX_BLEND_PLANEMASK_BG0 0x1
#define GX_BLEND_PLANEMASK_BG1 0x2
#define GX_BLEND_PLANEMASK_BG2 0x4
#define GX_BLEND_PLANEMASK_BG3 0x8
#define GX_BLEND_PLANEMASK_OBJ 0x10
#define GX_BLEND_PLANEMASK_BD 0x20

#define GX_OAM_MODE_XLU 1
#define GX_OAM_MODE_BITMAPOBJ 3

#define GX_OAM_EFFECT_NONE 0

#define GX_OAM_SHAPE_64x64 0x3

#define GX_OAM_COLOR_16 0xf

#define GX_TEXSIZE_S8 0
#define GX_TEXSIZE_S16 0x1
#define GX_TEXSIZE_S32 0x2
#define GX_TEXSIZE_S64 0x3
#define GX_TEXSIZE_S128 0x4
#define GX_TEXSIZE_S256 0x5
#define GX_TEXSIZE_S512 0x6
#define GX_TEXSIZE_S1024 0x7
#define GX_TEXSIZE_T8 0
#define GX_TEXSIZE_T16 0x1
#define GX_TEXSIZE_T32 0x2
#define GX_TEXSIZE_T64 0x3
#define GX_TEXSIZE_T128 0x4
#define GX_TEXSIZE_T256 0x5
#define GX_TEXSIZE_T512 0x6
#define GX_TEXSIZE_T1024 0x7

#define GX_TEXFMT_NONE 0
#define GX_TEXFMT_PLTT4 0x2
#define GX_TEXFMT_PLTT16 0x3
#define GX_TEXFMT_PLTT256 0x4
#define GX_TEXFMT_DIRECT 0x7

#define GX_TEXPLTTCOLOR0_USE 0
#define GX_TEXPLTTCOLOR0_TRNS 0x1

#define GX_TEXGEN_NONE 0
#define GX_TEXGEN_TEXCOORD 0x1

#define GX_TEXREPEAT_NONE 0

#define GX_TEXFLIP_NONE 0

#define GX_LIGHTMASK_NONE 0

#define GX_POLYGONMODE_MODULATE 0x3

#define GX_CULL_NONE 0

#define GX_BEGIN_QUADS 0x1

#define GX_RGB(r, g, b) ((r) | ((g) << 0x5) | ((b) << 0xa))

#define GX_CAPTURE_SIZE_256x192 -1 // unknown value
#define GX_CAPTURE_MODE_A -1       // unknown value
#define GX_CAPTURE_SRCA_2D3D -1    // unknown value
#define GX_CAPTURE_DEST_VRAM_C_0x00000 0x2
#define GX_CAPTURE_DEST_VRAM_D_0x00000 0x3

#define GX_SORTMODE_MANUAL -1 // unknown value

#define GX_BUFFERMODE_Z -1 // unknown value

#define GX_MTXMODE_POSITION_VECTOR 0x2
#define GX_MTXMODE_TEXTURE 0x3

typedef u32 GXVRamBG;
typedef u32 GXVRamOBJ;

typedef struct {
    u32 attr01;
    union {
        u16 attr2;
        u32 attr23;
    };
} GXOamAttr;

typedef u32 GXOamMode;

typedef u32 GXBGScrSize256Bmp;
typedef u32 GXBGScrSizeDcBmp;
typedef u32 GXBGAreaOver;
typedef u32 GXBGBmpScrBase;
typedef u32 GXBGScrSizeText;
typedef u32 GXBGColorMode;
typedef u32 GXBGScrBase;
typedef u32 GXBGCharBase;

typedef u32 GXOBJVRamModeChar;

typedef u32 GXTexFmt;
typedef s32 GXTexSizeS;
typedef s32 GXTexSizeT;
typedef u32 GXSt;

inline GXSt GX_ST(GXTexSizeS sizeS, GXTexSizeT sizeT) {
    u16 t = sizeT << 8 >> 16;
    u16 s = sizeS << 8 >> 16;
    return s | (t << 16);
}

typedef u32 GXTexPlttColor0;

typedef u32 GXCaptureSrcB;

typedef struct GX_UnkStruct2 {
    /* 00 */ u16 unk_00;
    /* 02 */ u16 unk_02;
    /* 04 */ u16 unk_04;
    /* 06 */ u16 unk_06;
    /* 08 */ u16 unk_08;
    /* 0a */ u16 unk_0a;
    /* 0c */ u16 unk_0c;
    /* 0e */ u16 unk_0e;
    /* 10 */ u16 unk_10;
    /* 12 */ u16 unk_12;
    /* 14 */ u16 unk_14;
    /* 16 */ u16 unk_16;
    /* 18 */ u16 unk_18;
    /* 1a */
} GX_UnkStruct2;

void GX_Init(void);
void GX_DispOff(void);
void GX_DispOn(void);

u16 GX_VBlankIntr(BOOL);
u16 GX_HBlankIntr(BOOL);

void GX_SetBankForLCDC(s32);
void GX_DisableBankForLCDC(void);
void GX_SetBankForBG(s32);
void GX_SetBankForOBJ(s32);
void GX_SetBankForSubBG(s32);
void GX_SetBankForSubOBJ(s32);
void GX_SetBankForTex(u32);
void GX_SetBankForTexPltt(u32);
void GX_SetGraphicsMode(u32, u32, u32);
void GXS_SetGraphicsMode(u32);

void GX_LoadOAM(GXOamAttr *oam, u32 offset, u32 size);
void GXS_LoadOAM(GXOamAttr *oam, u32 offset, u32 size);

void GX_LoadBG0Char(void *ptr, u32 offset, u32 size);
void GX_LoadBG0Scr(void *ptr, u32 offset, u32 size);
void GX_LoadBG1Char(void *ptr, u32 offset, u32 size);
void GX_LoadBG1Scr(void *ptr, u32 offset, u32 size);
void GX_LoadBG2Bmp(void *ptr, u32 offset, u32 size);
void GX_LoadBG2Char(void *ptr, u32 offset, u32 size);
void GX_LoadBG2Scr(void *ptr, u32 offset, u32 size);
void GX_LoadBG3Bmp(void *ptr, u32 offset, u32 size);
void GX_LoadBG3Char(void *ptr, u32 offset, u32 size);
void GX_LoadBG3Scr(void *ptr, u32 offset, u32 size);

void GXS_LoadBG0Char(void *ptr, u32 offset, u32 size);
void GXS_LoadBG0Scr(void *ptr, u32 offset, u32 size);
void GXS_LoadBG1Char(void *ptr, u32 offset, u32 size);
void GXS_LoadBG1Scr(void *ptr, u32 offset, u32 size);
void GXS_LoadBG2Bmp(void *ptr, u32 offset, u32 size);
void GXS_LoadBG2Char(void *ptr, u32 offset, u32 size);
void GXS_LoadBG2Scr(void *ptr, u32 offset, u32 size);
void GXS_LoadBG3Bmp(void *ptr, u32 offset, u32 size);
void GXS_LoadBG3Char(void *ptr, u32 offset, u32 size);
void GXS_LoadBG3Scr(void *ptr, u32 offset, u32 size);

void GX_LoadBGPltt(void *ptr, u32 offset, u32 size);
void GX_LoadOBJPltt(void *ptr, u32 offset, u32 size);
void GXS_LoadBGPltt(void *ptr, u32 offset, u32 size);
void GXS_LoadOBJPltt(void *ptr, u32 offset, u32 size);

void GX_LoadOBJ(void *ptr, u32 offset, u32 size);
void GXS_LoadOBJ(void *ptr, u32 offset, u32 size);

BOOL GX_TrySetBankForBGExtPltt(s32);
BOOL GX_TrySetBankForSubBGExtPltt(s32);
BOOL GX_TrySetBankForOBJExtPltt(s32);
BOOL GX_TrySetBankForSubOBJExtPltt(s32);
u16 GX_ResetBankForBGExtPltt(void);
u16 GX_ResetBankForSubBGExtPltt(void);
u16 GX_ResetBankForOBJExtPltt(void);
u16 GX_ResetBankForSubOBJExtPltt(void);

void GX_BeginLoadBGExtPltt(void);
void GX_LoadBGExtPltt(void *ptr, u32 offset, u32 size);
void GX_EndLoadBGExtPltt(void);

void GXS_BeginLoadBGExtPltt(void);
void GXS_LoadBGExtPltt(void *ptr, u32 offset, u32 size);
void GXS_EndLoadBGExtPltt(void);

void GX_BeginLoadOBJExtPltt(void);
void GX_LoadOBJExtPltt(void *ptr, u32 offset, u32 size);
void GX_EndLoadOBJExtPltt(void);

void GXS_BeginLoadOBJExtPltt(void);
void GXS_LoadOBJExtPltt(void *ptr, u32 offset, u32 size);
void GXS_EndLoadOBJExtPltt(void);

void GX_BeginLoadTexPltt(void);
void GX_LoadTexPltt(void *ptr, u32 offset, u32 size);
void GX_EndLoadTexPltt(void);

void GX_BeginLoadTex(void);
void GX_LoadTex(void *ptr, u32 offset, u32 size);
void GX_EndLoadTex(void);

extern u16 data_020a7088;
extern u32 data_020a708c;

extern u16 data_0216a0dc;
extern u16 data_0216a0de;
extern GX_UnkStruct2 data_0216a0e0;

inline void GXS_DispOff(void) {
    REG_DISPCNT_SUB &= ~0x10000;
}

inline void GXS_DispOn(void) {
    REG_DISPCNT_SUB |= 0x10000;
}

inline void GX_SetPower(u32 value) {
    REG_POWER_CNT = (REG_POWER_CNT & 0xFFFFFDF1) | (value);
}

inline void GX_SetDispSelect(u32 value) {
    REG_POWER_CNT = (REG_POWER_CNT & ~0x8000) | value;
}

inline void GX_SetOBJVRamModeChar(u32 value) {
    REG_DISPCNT = (REG_DISPCNT & 0xFFCFFFEF) | (value);
}

inline void GXS_SetOBJVRamModeChar(u32 value) {
    REG_DISPCNT_SUB = (REG_DISPCNT_SUB & 0xFFCFFFEF) | (value);
}

inline u16 GX_GetVCount(void) {
    return REG_VCOUNT;
}

inline void GX_SetVisiblePlane(s32 plane) {
    REG_DISPCNT = (REG_DISPCNT & ~0x1f00) | (plane << 8);
}

inline void GXS_SetVisiblePlane(s32 plane) {
    REG_DISPCNT_SUB = (REG_DISPCNT_SUB & ~0x1f00) | (plane << 8);
}

inline void GX_SetBGCharOffset(u32 offset) {
    REG_DISPCNT = (REG_DISPCNT & ~0x7000000) | offset;
}

inline void GX_SetBGScrOffset(u32 offset) {
    REG_DISPCNT = (REG_DISPCNT & ~0x38000000) | offset;
}

inline void GX_SetCapture(u32 size, u32 mode, u32 srcA, GXCaptureSrcB srcB, u32 dest, u32 param6, u32 param7) {
    // Unclear how to combine the arguments
    //   size = GX_CAPTURE_SIZE_256x192,
    //   mode = GX_CAPTURE_MODE_A,
    //   srcA = GX_CAPTURE_SRCA_2D3D,
    //   srcB = 0,
    //   dest = GX_CAPTURE_DEST_VRAM_C_0x00000,
    //   param6 = 16,
    //   param7 = 0,
    //     => 0x80320010
    REG_DISPCAPCNT = 0x80300010 | (dest << 0x10);
}

inline void GXS_SetOBJVRamModeBmp(u32 mode) {
    REG_DISPCNT_SUB = REG_DISPCNT_SUB & ~0x60 | ((mode & 0x3) << 5);
}

#ifdef __cplusplus
} // extern "C"
#endif

#endif
