#ifndef _NITRO_GX_H
#define _NITRO_GX_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/gx/enums.h"
#include "nitro/gx/macros.h"
#include "nitro/reg.h"
#include "nitro/types.h"

#define GX_VRAM_LCDC_ALL 0x1ff
#define GX_VRAM_LCDC_C 0x4
#define GX_VRAM_LCDC_D 0x8

#define GX_VRAM_BGEXTPLTT_01_F 0x20
#define GX_VRAM_BGEXTPLTT_0123_FG 0x60
#define GX_VRAM_SUB_BGEXTPLTT_0123_H 0x80
#define GX_VRAM_SUB_OBJEXTPLTT_0_I 0x100
#define GX_VRAM_OBJEXTPLTT_0_F 0x20
#define GX_VRAM_OBJEXTPLTT_0_G 0x40

#define GX_VRAM_TEX_01_AB 0x3

#define GX_VRAM_TEXPLTT_0123_E 0x10

#define GX_BLEND_PLANEMASK_NONE 0
#define GX_BLEND_PLANEMASK_BG0 0x1
#define GX_BLEND_PLANEMASK_BG1 0x2
#define GX_BLEND_PLANEMASK_BG2 0x4
#define GX_BLEND_PLANEMASK_BG3 0x8
#define GX_BLEND_PLANEMASK_OBJ 0x10
#define GX_BLEND_PLANEMASK_BD 0x20

#define GX_OAM_COLOR_16 0xf

#define GX_SORTMODE_MANUAL -1 // unknown value

#define GX_BUFFERMODE_Z -1 // unknown value

typedef struct GXOamAttr_ {
    u32 attr01;
    union {
        u16 attr2;
        u32 attr23;
    };
} GXOamAttr;

typedef struct GXOamAffine_ {
    /* 00 */ u16 _0;
    /* 02 */ u16 _1;
    /* 04 */ u16 _2;
    /* 06 */ s16 PA;

    /* 08 */ u16 _4;
    /* 0A */ u16 _5;
    /* 0C */ u16 _6;
    /* 0E */ s16 PB;

    /* 10 */ u16 _8;
    /* 12 */ u16 _9;
    /* 14 */ u16 _10;
    /* 16 */ s16 PC;

    /* 18 */ u16 _12;
    /* 1A */ u16 _13;
    /* 1C */ u16 _14;
    /* 1E */ s16 PD;
} GXOamAffine; // size = 0x20

typedef u32 GXSt;

inline GXSt GX_ST(GXTexSizeS sizeS, GXTexSizeT sizeT) {
    u16 t = sizeT << 8 >> 16;
    u16 s = sizeS << 8 >> 16;
    return s | (t << 16);
}

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

void GX_func_0008(void *, s32, s32);

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

inline void GX_SetDispSelect(GXDispSelect sel) {
    REG_POWER_CNT = (REG_POWER_CNT & ~0x8000) | (sel << 15);
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

inline void GX_SetCapture(GXCaptureSize sz, GXCaptureMode mode, GXCaptureSrcA srcA, GXCaptureSrcB srcB, GXCaptureDest dest,
                          s32 eva, s32 evb) {
    // Unclear how to combine the arguments
    //   sz = GX_CAPTURE_SIZE_256x192,
    //   mode = GX_CAPTURE_MODE_A,
    //   srcA = GX_CAPTURE_SRCA_2D3D,
    //   srcB = 0,
    //   dest = GX_CAPTURE_DEST_VRAM_C_0x00000,
    //   eva = 16,
    //   evb = 0,
    //     => 0x80320010
    REG_DISPCAPCNT = 0x80300010 | (dest << 0x10);
}

inline void GXS_SetOBJVRamModeBmp(u32 mode) {
    REG_DISPCNT_SUB = (REG_DISPCNT_SUB & ~0x60) | ((mode & 0x3) << 5);
}

inline void GX_SetVisibleWindows(s32 windows) {
    REG_DISPCNT = (REG_DISPCNT & ~0xE000) | (windows << 13);
}

inline void GXS_SetVisibleWindows(s32 windows) {
    REG_DISPCNT_SUB = (REG_DISPCNT_SUB & ~0xE000) | (windows << 13);
}

//! TODO: figure out
GXOBJVRamModeChar GX_GetOBJVRamModeChar();
GXOBJVRamModeChar GXS_GetOBJVRamModeChar();
void GX_SetMasterBrightness(s32 brightness);
void GXx_SetMasterBrightness_(u16 reg, s32 brightness);
void GX_ResetCapture();
void GX_DisableBankForOBJ();
void GX_DisableBankForBG();
void GX_DisableBankForTex();
void GX_DisableBankForTexPltt();
void GX_DisableBankForSubBG();
void GX_DisableBankForSubOBJ();
void GX_DisableBankForSubOBJExtPltt();
void GX_DisableBankForBGExtPltt();
void GX_DisableBankForOBJExtPltt();
void GX_LoadVramCommon(void *pData, u32 addr, u32 size, u32 vram);
void GX_Destory();

#ifdef __cplusplus
} // extern "C"
#endif

#endif
