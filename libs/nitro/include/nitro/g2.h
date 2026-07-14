#ifndef _NITRO_G2_H
#define _NITRO_G2_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/fx.h"
#include "nitro/gx.h"
#include "nitro/reg.h"
#include "nitro/types.h"

void G2_SetBGAffine(u32 *reg, MtxFx22 *mtx, s32 x0, s32 y0, s32 x1, s32 y1);

void _G2_SetBlend(u32 *reg, u32 srcPlane, u32 dstPlane, u32 srcAlpha, u32 dstAlpha);

void *G2_GetBG2ScrPtr(void);
void *G2_GetBG3ScrPtr(void);
void *G2S_func_0001();

inline void G2_SetBG0Priority(u32 value) {
    REG_BG0CNT = (REG_BG0CNT & ~0x3) | (value);
}

inline void G2_SetBG1Priority(u32 value) {
    REG_BG1CNT = (REG_BG1CNT & ~0x3) | (value);
}

inline void G2_SetBG2Priority(u32 value) {
    REG_BG2CNT = (REG_BG2CNT & ~0x3) | (value);
}

inline void G2_SetBG3Priority(u32 value) {
    REG_BG3CNT = (REG_BG3CNT & ~0x3) | (value);
}

inline void G2S_SetBG0Priority(u32 value) {
    REG_BG0CNT_SUB = (REG_BG0CNT_SUB & ~0x3) | (value);
}

inline void G2S_SetBG1Priority(u32 value) {
    REG_BG1CNT_SUB = (REG_BG1CNT_SUB & ~0x3) | (value);
}

inline void G2S_SetBG2Priority(u32 value) {
    REG_BG2CNT_SUB = (REG_BG2CNT_SUB & ~0x3) | (value);
}

inline void G2S_SetBG3Priority(u32 value) {
    REG_BG3CNT_SUB = (REG_BG3CNT_SUB & ~0x3) | (value);
}

inline void G2_SetBG0Offset(u32 x, u32 y) {
    REG_BG0OFS = (x & 0x1FF) | ((y << 16) & 0x1FF0000);
}

inline void G2_SetBG1Offset(u32 x, u32 y) {
    REG_BG1OFS = (x & 0x1FF) | ((y << 16) & 0x1FF0000);
}

inline void G2_SetBG2Offset(u32 x, u32 y) {
    REG_BG2OFS = (x & 0x1FF) | ((y << 16) & 0x1FF0000);
}

inline void G2_SetBG3Offset(u32 x, u32 y) {
    REG_BG3OFS = (x & 0x1FF) | ((y << 16) & 0x1FF0000);
}

inline void G2S_SetBG0Offset(u32 x, u32 y) {
    REG_BG0OFS_SUB = (x & 0x1FF) | ((y << 16) & 0x1FF0000);
}

inline void G2S_SetBG1Offset(u32 x, u32 y) {
    REG_BG1OFS_SUB = (x & 0x1FF) | ((y << 16) & 0x1FF0000);
}

inline void G2S_SetBG2Offset(u32 x, u32 y) {
    REG_BG2OFS_SUB = (x & 0x1FF) | ((y << 16) & 0x1FF0000);
}

inline void G2S_SetBG3Offset(u32 x, u32 y) {
    REG_BG3OFS_SUB = (x & 0x1FF) | ((y << 16) & 0x1FF0000);
}

inline void G2_SetBG0Control(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase, u32) {
    REG_BG0CNT = (REG_BG0CNT & 0x43) | (scrSize << 0xE) | (colMode << 0x7) | (scrBase << 0x8) | (charBase << 0x2);
}

inline void G2_SetBG1Control(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase, u32) {
    REG_BG1CNT = (REG_BG1CNT & 0x43) | (scrSize << 0xE) | (colMode << 0x7) | (scrBase << 0x8) | (charBase << 0x2);
}

inline void G2_SetBG2Control(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase, u32) {
    REG_BG2CNT = (REG_BG2CNT & 0x43) | (scrSize << 0xE) | (colMode << 0x7) | (scrBase << 0x8) | (charBase << 0x2);
}

inline void G2_SetBG3Control(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase, u32) {
    REG_BG3CNT = (REG_BG3CNT & 0x43) | (scrSize << 0xE) | (colMode << 0x7) | (scrBase << 0x8) | (charBase << 0x2);
}

inline void G2S_SetBG0Control(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase,
                              u32) {
    REG_BG0CNT_SUB = (REG_BG0CNT_SUB & 0x43) | (scrSize << 0xE) | (colMode << 0x7) | (scrBase << 0x8) | (charBase << 0x2);
}

inline void G2S_SetBG1Control(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase,
                              u32) {
    REG_BG1CNT_SUB = (REG_BG1CNT_SUB & 0x43) | (scrSize << 0xE) | (colMode << 0x7) | (scrBase << 0x8) | (charBase << 0x2);
}

inline void G2S_SetBG2Control(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase,
                              u32) {
    REG_BG2CNT_SUB = (REG_BG2CNT_SUB & 0x43) | (scrSize << 0xE) | (colMode << 0x7) | (scrBase << 0x8) | (charBase << 0x2);
}

inline void G2S_SetBG3Control(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase,
                              u32) {
    REG_BG3CNT_SUB = (REG_BG3CNT_SUB & 0x43) | (scrSize << 0xE) | (colMode << 0x7) | (scrBase << 0x8) | (charBase << 0x2);
}

inline void G2_SetBG2Control256Bmp(GXBGScrSize256Bmp scrSize, GXBGAreaOver areaOver, GXBGBmpScrBase scrBase) {
    REG_BG2CNT = (REG_BG2CNT & 0x43) | (scrSize << 0xE) | 0x80 | (scrBase << 0x8) | (areaOver << 0xD);
}

inline void G2_SetBG3Control256Bmp(GXBGScrSize256Bmp scrSize, GXBGAreaOver areaOver, GXBGBmpScrBase scrBase) {
    REG_BG3CNT = (REG_BG3CNT & 0x43) | (scrSize << 0xE) | 0x80 | (scrBase << 0x8) | (areaOver << 0xD);
}

inline void G2S_SetBG2Control256Bmp(GXBGScrSize256Bmp scrSize, GXBGAreaOver areaOver, GXBGBmpScrBase scrBase) {
    REG_BG2CNT_SUB = (REG_BG2CNT_SUB & 0x43) | (scrSize << 0xE) | 0x80 | (scrBase << 0x8) | (areaOver << 0xD);
}

inline void G2S_SetBG3Control256Bmp(GXBGScrSize256Bmp scrSize, GXBGAreaOver areaOver, GXBGBmpScrBase scrBase) {
    REG_BG3CNT_SUB = (REG_BG3CNT_SUB & 0x43) | (scrSize << 0xE) | 0x80 | (scrBase << 0x8) | (areaOver << 0xD);
}

inline void G2_SetBG2ControlDCBmp(GXBGScrSizeDcBmp scrSize, GXBGAreaOver areaOver, GXBGBmpScrBase scrBase) {
    REG_BG2CNT = (REG_BG2CNT & 0x43) | (scrSize << 0xE) | 0x84 | (scrBase << 0x8) | (areaOver << 0xD);
}

inline void G2_SetBG3ControlDCBmp(GXBGScrSizeDcBmp scrSize, GXBGAreaOver areaOver, GXBGBmpScrBase scrBase) {
    REG_BG3CNT = (REG_BG3CNT & 0x43) | (scrSize << 0xE) | 0x84 | (scrBase << 0x8) | (areaOver << 0xD);
}

inline void G2S_SetBG2ControlDCBmp(GXBGScrSizeDcBmp scrSize, GXBGAreaOver areaOver, GXBGBmpScrBase scrBase) {
    REG_BG2CNT_SUB = (REG_BG2CNT_SUB & 0x43) | (scrSize << 0xE) | 0x84 | (scrBase << 0x8) | (areaOver << 0xD);
}

inline void G2S_SetBG3ControlDCBmp(GXBGScrSizeDcBmp scrSize, GXBGAreaOver areaOver, GXBGBmpScrBase scrBase) {
    REG_BG3CNT_SUB = (REG_BG3CNT_SUB & 0x43) | (scrSize << 0xE) | 0x84 | (scrBase << 0x8) | (areaOver << 0xD);
}

inline void G2_SetBG2ControlText(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase) {
    G2_SetBG2Control(scrSize, colMode, scrBase, charBase, 0);
}

inline void G2_SetBG3ControlText(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase) {
    G2_SetBG3Control(scrSize, colMode, scrBase, charBase, 0);
}

inline void G2S_SetBG2ControlText(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase) {
    G2S_SetBG2Control(scrSize, colMode, scrBase, charBase, 0);
}

inline void G2S_SetBG3ControlText(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase) {
    G2S_SetBG3Control(scrSize, colMode, scrBase, charBase, 0);
}

inline void G2_SetBG2Affine(MtxFx22 *mtx, u32 param2, u32 param3, u32 param4, u32 param5) {
    G2_SetBGAffine((u32 *) &REG_BG2PA, mtx, param2, param3, param4, param5);
}

inline void G2_SetBG3Affine(MtxFx22 *mtx, u32 param2, u32 param3, u32 param4, u32 param5) {
    G2_SetBGAffine((u32 *) &REG_BG3PA, mtx, param2, param3, param4, param5);
}

inline void G2S_SetBG2Affine(MtxFx22 *mtx, u32 param2, u32 param3, u32 param4, u32 param5) {
    G2_SetBGAffine((u32 *) &REG_BG2PA_SUB, mtx, param2, param3, param4, param5);
}

inline void G2S_SetBG3Affine(MtxFx22 *mtx, u32 param2, u32 param3, u32 param4, u32 param5) {
    G2_SetBGAffine((u32 *) &REG_BG3PA_SUB, mtx, param2, param3, param4, param5);
}

inline void G2_ChangeBlendAlpha(u32 param1, u32 param2) {
    REG_BLDALPHA = param1 | (param2 << 8);
}

inline void G2S_ChangeBlendAlpha(u32 param1, u32 param2) {
    REG_BLDALPHA_SUB = param1 | (param2 << 8);
}

inline void G2_BG0Mosaic(BOOL flag) {
    if (flag) {
        REG_BG0CNT |= 0x40;
    } else {
        REG_BG0CNT &= ~0x40;
    }
}

inline void G2_BG1Mosaic(BOOL flag) {
    if (flag) {
        REG_BG1CNT |= 0x40;
    } else {
        REG_BG1CNT &= ~0x40;
    }
}

inline void G2_BG2Mosaic(BOOL flag) {
    if (flag) {
        REG_BG2CNT |= 0x40;
    } else {
        REG_BG2CNT &= ~0x40;
    }
}

inline void G2_BG3Mosaic(BOOL flag) {
    if (flag) {
        REG_BG3CNT |= 0x40;
    } else {
        REG_BG3CNT &= ~0x40;
    }
}

inline void G2S_BG0Mosaic(BOOL flag) {
    if (flag) {
        REG_BG0CNT_SUB |= 0x40;
    } else {
        REG_BG0CNT_SUB &= ~0x40;
    }
}

inline void G2S_BG1Mosaic(BOOL flag) {
    if (flag) {
        REG_BG1CNT_SUB |= 0x40;
    } else {
        REG_BG1CNT_SUB &= ~0x40;
    }
}

inline void G2S_BG2Mosaic(BOOL flag) {
    if (flag) {
        REG_BG2CNT_SUB |= 0x40;
    } else {
        REG_BG2CNT_SUB &= ~0x40;
    }
}

inline void G2S_BG3Mosaic(BOOL flag) {
    if (flag) {
        REG_BG3CNT_SUB |= 0x40;
    } else {
        REG_BG3CNT_SUB &= ~0x40;
    }
}

inline void G2_SetBGMosaicSize(u32 width, u32 height) {
    REG_MOSAIC = width | (height << 4);
}

inline void G2S_SetBGMosaicSize(u32 width, u32 height) {
    REG_MOSAIC_SUB = width | (height << 4);
}

inline void G2_SetOBJMosaicSize(u32 width, u32 height) {
    REG_OBJMOSAIC = width | (height << 4);
}

inline void G2S_SetOBJMosaicSize(u32 width, u32 height) {
    REG_OBJMOSAIC_SUB = width | (height << 4);
}

inline void G2_BlendNone() {
    REG_BLDCNT = 0;
}

inline void G2S_BlendNone() {
    REG_BLDCNT_SUB = 0;
}

inline void G2_SetBlendAlpha(u32 srcPlane, u32 dstPlane, u32 srcAlpha, u32 dstAlpha) {
    _G2_SetBlend((u32 *) &REG_BLDCNT, srcPlane, dstPlane, srcAlpha, dstAlpha);
}

inline void G2S_SetBlendAlpha(u32 srcPlane, u32 dstPlane, u32 srcAlpha, u32 dstAlpha) {
    _G2_SetBlend((u32 *) &REG_BLDCNT_SUB, srcPlane, dstPlane, srcAlpha, dstAlpha);
}

inline void G2_GetOBJPosition(GXOamAttr *oam, u32 *x, u32 *y) {
    *x = (oam->attr01 & 0x1FF0000) >> 16;
    *y = oam->attr01 & 0xFF;
}

inline void G2_SetOBJPosition(GXOamAttr *oam, u32 x, u32 y) {
    oam->attr01 = (oam->attr01 & 0xFE00FF00) | (y & 0xFF) | (x << 0x17 >> 0x7);
}

inline u32 G2_GetOBJCharName(GXOamAttr *oam) {
    return oam->attr2 & 0x3FF;
}

inline void G2_SetOBJCharName(volatile GXOamAttr *oam, u32 name) {
    oam->attr2 = (oam->attr2 & -0x400) | (name);
}

inline u32 G2_GetOBJColorParam(GXOamAttr *oam) {
    return (oam->attr2 & 0xF000) >> 0xC;
}

// Defined as macro as sometimes `oam` is volatile and other times not
#define G2_GetOBJMode(oam) (GXOamMode)(((oam)->attr01 & 0xC00) >> 0xA)
// inline GXOamMode G2_GetOBJMode(volatile GXOamAttr *oam) {
//     return ((oam)->attr01 & 0xC00) >> 0xA;
// }

inline void G2_SetOBJMode(GXOamAttr *oam, GXOamMode mode, u32 color) {
    oam->attr01 = (oam->attr01 & ~0xC00) | (mode << 0xA);
    oam->attr2  = (oam->attr2 & ~0xF000) | (color << 0xC);
}

inline void G2_SetOBJPriority(GXOamAttr *oam, u32 prio) {
    // no implementation found
}

inline void G2_SetOBJAttr(GXOamAttr *oam, u32 x, u32 y, u32 param4, GXOamMode mode, BOOL param6, u32 effect, u32 shape,
                          u32 color, u32 param10, u32 param11, u32 param12) {
    // Unused: param4, param6, effect, param11, param12

    // c1ff0cff
    // 3 bits at 0x8
    // 4 bits at 0xC
    // 5 bits at 0x19
    oam->attr01 = (y & 0xFF) | (mode << 0xA) | (shape << 0x1E) | ((x << 0x17) >> 0x7);
    // f3ff
    // 2 bits at 0xA
    oam->attr2 = param10 | (color << 0xC);
}

#ifdef __cplusplus
} // extern "C"
#endif

#endif
