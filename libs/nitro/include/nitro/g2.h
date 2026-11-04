#ifndef _NITRO_G2_H
#define _NITRO_G2_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/fx.h"
#include "nitro/gx.h"
#include "nitro/reg.h"
#include "nitro/types.h"

void G2x_SetBGyAffine_(u32 *addr, MtxFx22 *mtx, fx32 centerX, fx32 centerY, fx32 x1, fx32 y1);

void _G2_SetBlend(u32 *reg, u32 srcPlane, u32 dstPlane, u32 srcAlpha, u32 dstAlpha);

void *G2_GetBG2ScrPtr(void);
void *G2_GetBG3ScrPtr(void);
void *G2S_GetBG0ScrPtr();

inline void G2_SetBG0Priority(u32 value) {
    REG_BG0CNT = (REG_BG0CNT & ~REG_G2_BG0CNT_PRIORITY_MASK) | (value);
}

inline void G2_SetBG1Priority(u32 value) {
    REG_BG1CNT = (REG_BG1CNT & ~REG_G2_BG1CNT_PRIORITY_MASK) | (value);
}

inline void G2_SetBG2Priority(u32 value) {
    REG_BG2CNT = (REG_BG2CNT & ~REG_G2_BG2CNT_PRIORITY_MASK) | (value);
}

inline void G2_SetBG3Priority(u32 value) {
    REG_BG3CNT = (REG_BG3CNT & ~REG_G2_BG3CNT_PRIORITY_MASK) | (value);
}

inline void G2S_SetBG0Priority(u32 value) {
    REG_BG0CNT_SUB = (REG_BG0CNT_SUB & ~REG_G2_BG0CNT_PRIORITY_MASK) | (value);
}

inline void G2S_SetBG1Priority(u32 value) {
    REG_BG1CNT_SUB = (REG_BG1CNT_SUB & ~REG_G2_BG1CNT_PRIORITY_MASK) | (value);
}

inline void G2S_SetBG2Priority(u32 value) {
    REG_BG2CNT_SUB = (REG_BG2CNT_SUB & ~REG_G2_BG2CNT_PRIORITY_MASK) | (value);
}

inline void G2S_SetBG3Priority(u32 value) {
    REG_BG3CNT_SUB = (REG_BG3CNT_SUB & ~REG_G2_BG3CNT_PRIORITY_MASK) | (value);
}

inline void G2_SetBG0Offset(u32 x, u32 y) {
    REG_BG0OFS = (x & REG_G2_BG0OFS_HOFFSET_MASK) | ((y << REG_G2_BG0OFS_VOFFSET_SHIFT) & REG_G2_BG0OFS_VOFFSET_MASK);
}

inline void G2_SetBG1Offset(u32 x, u32 y) {
    REG_BG1OFS = (x & REG_G2_BG1OFS_HOFFSET_MASK) | ((y << REG_G2_BG1OFS_VOFFSET_SHIFT) & REG_G2_BG1OFS_VOFFSET_MASK);
}

inline void G2_SetBG2Offset(u32 x, u32 y) {
    REG_BG2OFS = (x & REG_G2_BG2OFS_HOFFSET_MASK) | ((y << REG_G2_BG2OFS_VOFFSET_SHIFT) & REG_G2_BG2OFS_VOFFSET_MASK);
}

inline void G2_SetBG3Offset(u32 x, u32 y) {
    REG_BG3OFS = (x & REG_G2_BG3OFS_HOFFSET_MASK) | ((y << REG_G2_BG3OFS_VOFFSET_SHIFT) & REG_G2_BG3OFS_VOFFSET_MASK);
}

inline void G2S_SetBG0Offset(u32 x, u32 y) {
    REG_BG0OFS_SUB = (x & REG_G2_BG0OFS_HOFFSET_MASK) | ((y << REG_G2_BG0OFS_VOFFSET_SHIFT) & REG_G2_BG0OFS_VOFFSET_MASK);
}

inline void G2S_SetBG1Offset(u32 x, u32 y) {
    REG_BG1OFS_SUB = (x & REG_G2_BG1OFS_HOFFSET_MASK) | ((y << REG_G2_BG1OFS_VOFFSET_SHIFT) & REG_G2_BG1OFS_VOFFSET_MASK);
}

inline void G2S_SetBG2Offset(u32 x, u32 y) {
    REG_BG2OFS_SUB = (x & REG_G2_BG2OFS_HOFFSET_MASK) | ((y << REG_G2_BG2OFS_VOFFSET_SHIFT) & REG_G2_BG2OFS_VOFFSET_MASK);
}

inline void G2S_SetBG3Offset(u32 x, u32 y) {
    REG_BG3OFS_SUB = (x & REG_G2_BG3OFS_HOFFSET_MASK) | ((y << REG_G2_BG3OFS_VOFFSET_SHIFT) & REG_G2_BG3OFS_VOFFSET_MASK);
}

inline void G2_SetBG0Control(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase,
                             u32 slot) {
    REG_BG0CNT = (REG_BG0CNT & (REG_G2_BG0CNT_MOSAIC_MASK | REG_G2_BG0CNT_PRIORITY_MASK)) |
                 (scrSize << REG_G2_BG0CNT_SCREENSIZE_SHIFT) | (slot << REG_G2_BG0CNT_BGPLTTSLOT_SHIFT) |
                 (scrBase << REG_G2_BG0CNT_SCREENBASE_SHIFT) | (colMode << REG_G2_BG0CNT_COLORMODE_SHIFT) |
                 (charBase << REG_G2_BG0CNT_CHARBASE_SHIFT);
}

inline void G2_SetBG1Control(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase,
                             u32 slot) {
    REG_BG1CNT = (REG_BG1CNT & (REG_G2_BG1CNT_MOSAIC_MASK | REG_G2_BG1CNT_PRIORITY_MASK)) |
                 (scrSize << REG_G2_BG1CNT_SCREENSIZE_SHIFT) | (slot << REG_G2_BG1CNT_BGPLTTSLOT_SHIFT) |
                 (scrBase << REG_G2_BG1CNT_SCREENBASE_SHIFT) | (colMode << REG_G2_BG1CNT_COLORMODE_SHIFT) |
                 (charBase << REG_G2_BG1CNT_CHARBASE_SHIFT);
}

inline void G2_SetBG2Control(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase,
                             GXBGAreaOver areaOver) {
    REG_BG2CNT = (REG_BG2CNT & (REG_G2_BG2CNT_MOSAIC_MASK | REG_G2_BG2CNT_PRIORITY_MASK)) |
                 (scrSize << REG_G2_BG2CNT_SCREENSIZE_SHIFT) | (areaOver << REG_G2_BG2CNT_AREAOVER_SHIFT) |
                 (scrBase << REG_G2_BG2CNT_SCREENBASE_SHIFT) | (colMode << REG_G2_BG2CNT_COLORMODE_SHIFT) |
                 (charBase << REG_G2_BG2CNT_CHARBASE_SHIFT);
}

inline void G2_SetBG3Control(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase,
                             GXBGAreaOver areaOver) {
    REG_BG3CNT = (REG_BG3CNT & (REG_G2_BG3CNT_MOSAIC_MASK | REG_G2_BG3CNT_PRIORITY_MASK)) |
                 (scrSize << REG_G2_BG3CNT_SCREENSIZE_SHIFT) | (areaOver << REG_G2_BG3CNT_AREAOVER_SHIFT) |
                 (scrBase << REG_G2_BG3CNT_SCREENBASE_SHIFT) | (colMode << REG_G2_BG3CNT_COLORMODE_SHIFT) |
                 (charBase << REG_G2_BG3CNT_CHARBASE_SHIFT);
}

inline void G2S_SetBG0Control(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase,
                              u32 slot) {
    REG_BG0CNT_SUB = (REG_BG0CNT_SUB & (REG_G2_BG0CNT_MOSAIC_MASK | REG_G2_BG0CNT_PRIORITY_MASK)) |
                     (scrSize << REG_G2_BG0CNT_SCREENSIZE_SHIFT) | (slot << REG_G2_BG0CNT_BGPLTTSLOT_SHIFT) |
                     (scrBase << REG_G2_BG0CNT_SCREENBASE_SHIFT) | (colMode << REG_G2_BG0CNT_COLORMODE_SHIFT) |
                     (charBase << REG_G2_BG0CNT_CHARBASE_SHIFT);
}

inline void G2S_SetBG1Control(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase,
                              u32 slot) {
    REG_BG1CNT_SUB = (REG_BG1CNT_SUB & (REG_G2_BG1CNT_MOSAIC_MASK | REG_G2_BG1CNT_PRIORITY_MASK)) |
                     (scrSize << REG_G2_BG1CNT_SCREENSIZE_SHIFT) | (slot << REG_G2_BG1CNT_BGPLTTSLOT_SHIFT) |
                     (scrBase << REG_G2_BG1CNT_SCREENBASE_SHIFT) | (colMode << REG_G2_BG1CNT_COLORMODE_SHIFT) |
                     (charBase << REG_G2_BG1CNT_CHARBASE_SHIFT);
}

inline void G2S_SetBG2Control(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase,
                              GXBGAreaOver areaOver) {
    REG_BG2CNT_SUB = (REG_BG2CNT_SUB & (REG_G2_BG2CNT_MOSAIC_MASK | REG_G2_BG2CNT_PRIORITY_MASK)) |
                     (scrSize << REG_G2_BG2CNT_SCREENSIZE_SHIFT) | (areaOver << REG_G2_BG2CNT_AREAOVER_SHIFT) |
                     (scrBase << REG_G2_BG2CNT_SCREENBASE_SHIFT) | (colMode << REG_G2_BG2CNT_COLORMODE_SHIFT) |
                     (charBase << REG_G2_BG2CNT_CHARBASE_SHIFT);
}

inline void G2S_SetBG3Control(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase,
                              GXBGAreaOver areaOver) {
    REG_BG3CNT_SUB = (REG_BG3CNT_SUB & (REG_G2_BG3CNT_MOSAIC_MASK | REG_G2_BG3CNT_PRIORITY_MASK)) |
                     (scrSize << REG_G2_BG3CNT_SCREENSIZE_SHIFT) | (areaOver << REG_G2_BG3CNT_AREAOVER_SHIFT) |
                     (scrBase << REG_G2_BG3CNT_SCREENBASE_SHIFT) | (colMode << REG_G2_BG3CNT_COLORMODE_SHIFT) |
                     (charBase << REG_G2_BG3CNT_CHARBASE_SHIFT);
}

inline void G2_SetBG2Control256Bmp(GXBGScrSize256Bmp scrSize, GXBGAreaOver areaOver, GXBGBmpScrBase scrBase) {
    REG_BG2CNT = (REG_BG2CNT & (REG_G2_BG2CNT_MOSAIC_MASK | REG_G2_BG2CNT_PRIORITY_MASK)) |
                 (scrSize << REG_G2_BG2CNT_SCREENSIZE_SHIFT) | 0x80 | (scrBase << REG_G2_BG2CNT_SCREENBASE_SHIFT) |
                 (areaOver << REG_G2_BG2CNT_AREAOVER_SHIFT);
}

inline void G2_SetBG3Control256Bmp(GXBGScrSize256Bmp scrSize, GXBGAreaOver areaOver, GXBGBmpScrBase scrBase) {
    REG_BG3CNT = (REG_BG3CNT & (REG_G2_BG3CNT_MOSAIC_MASK | REG_G2_BG3CNT_PRIORITY_MASK)) |
                 (scrSize << REG_G2_BG3CNT_SCREENSIZE_SHIFT) | 0x80 | (scrBase << REG_G2_BG3CNT_SCREENBASE_SHIFT) |
                 (areaOver << REG_G2_BG3CNT_AREAOVER_SHIFT);
}

inline void G2S_SetBG2Control256Bmp(GXBGScrSize256Bmp scrSize, GXBGAreaOver areaOver, GXBGBmpScrBase scrBase) {
    REG_BG2CNT_SUB = (REG_BG2CNT_SUB & (REG_G2_BG2CNT_MOSAIC_MASK | REG_G2_BG2CNT_PRIORITY_MASK)) |
                     (scrSize << REG_G2_BG2CNT_SCREENSIZE_SHIFT) | 0x80 | (scrBase << REG_G2_BG2CNT_SCREENBASE_SHIFT) |
                     (areaOver << REG_G2_BG2CNT_AREAOVER_SHIFT);
}

inline void G2S_SetBG3Control256Bmp(GXBGScrSize256Bmp scrSize, GXBGAreaOver areaOver, GXBGBmpScrBase scrBase) {
    REG_BG3CNT_SUB = (REG_BG3CNT_SUB & (REG_G2_BG3CNT_MOSAIC_MASK | REG_G2_BG3CNT_PRIORITY_MASK)) |
                     (scrSize << REG_G2_BG3CNT_SCREENSIZE_SHIFT) | 0x80 | (scrBase << REG_G2_BG3CNT_SCREENBASE_SHIFT) |
                     (areaOver << REG_G2_BG3CNT_AREAOVER_SHIFT);
}

inline void G2_SetBG2ControlDCBmp(GXBGScrSizeDcBmp scrSize, GXBGAreaOver areaOver, GXBGBmpScrBase scrBase) {
    REG_BG2CNT = (REG_BG2CNT & (REG_G2_BG2CNT_MOSAIC_MASK | REG_G2_BG2CNT_PRIORITY_MASK)) |
                 (scrSize << REG_G2_BG2CNT_SCREENSIZE_SHIFT) | 0x84 | (scrBase << REG_G2_BG2CNT_SCREENBASE_SHIFT) |
                 (areaOver << REG_G2_BG2CNT_AREAOVER_SHIFT);
}

inline void G2_SetBG3ControlDCBmp(GXBGScrSizeDcBmp scrSize, GXBGAreaOver areaOver, GXBGBmpScrBase scrBase) {
    REG_BG3CNT = (REG_BG3CNT & (REG_G2_BG3CNT_MOSAIC_MASK | REG_G2_BG3CNT_PRIORITY_MASK)) |
                 (scrSize << REG_G2_BG3CNT_SCREENSIZE_SHIFT) | 0x84 | (scrBase << REG_G2_BG3CNT_SCREENBASE_SHIFT) |
                 (areaOver << REG_G2_BG3CNT_AREAOVER_SHIFT);
}

inline void G2S_SetBG2ControlDCBmp(GXBGScrSizeDcBmp scrSize, GXBGAreaOver areaOver, GXBGBmpScrBase scrBase) {
    REG_BG2CNT_SUB = (REG_BG2CNT_SUB & (REG_G2_BG2CNT_MOSAIC_MASK | REG_G2_BG2CNT_PRIORITY_MASK)) |
                     (scrSize << REG_G2_BG2CNT_SCREENSIZE_SHIFT) | 0x84 | (scrBase << REG_G2_BG2CNT_SCREENBASE_SHIFT) |
                     (areaOver << REG_G2_BG2CNT_AREAOVER_SHIFT);
}

inline void G2S_SetBG3ControlDCBmp(GXBGScrSizeDcBmp scrSize, GXBGAreaOver areaOver, GXBGBmpScrBase scrBase) {
    REG_BG3CNT_SUB = (REG_BG3CNT_SUB & (REG_G2_BG3CNT_MOSAIC_MASK | REG_G2_BG3CNT_PRIORITY_MASK)) |
                     (scrSize << REG_G2_BG3CNT_SCREENSIZE_SHIFT) | 0x84 | (scrBase << REG_G2_BG3CNT_SCREENBASE_SHIFT) |
                     (areaOver << REG_G2_BG3CNT_AREAOVER_SHIFT);
}

inline void G2_SetBG2ControlText(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase) {
    G2_SetBG2Control(scrSize, colMode, scrBase, charBase, GX_BG_AREAOVER_XLU);
}

inline void G2_SetBG3ControlText(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase) {
    G2_SetBG3Control(scrSize, colMode, scrBase, charBase, GX_BG_AREAOVER_XLU);
}

inline void G2S_SetBG2ControlText(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase) {
    G2S_SetBG2Control(scrSize, colMode, scrBase, charBase, GX_BG_AREAOVER_XLU);
}

inline void G2S_SetBG3ControlText(GXBGScrSizeText scrSize, GXBGColorMode colMode, GXBGScrBase scrBase, GXBGCharBase charBase) {
    G2S_SetBG3Control(scrSize, colMode, scrBase, charBase, GX_BG_AREAOVER_XLU);
}

inline void G2_SetBG2Affine(MtxFx22 *mtx, s32 x0, s32 y0, s32 x1, s32 y1) {
    G2x_SetBGyAffine_((u32 *) &REG_BG2PA, mtx, x0, y0, x1, y1);
}

inline void G2_SetBG3Affine(MtxFx22 *mtx, s32 x0, s32 y0, s32 x1, s32 y1) {
    G2x_SetBGyAffine_((u32 *) &REG_BG3PA, mtx, x0, y0, x1, y1);
}

inline void G2S_SetBG2Affine(MtxFx22 *mtx, s32 x0, s32 y0, s32 x1, s32 y1) {
    G2x_SetBGyAffine_((u32 *) &REG_BG2PA_SUB, mtx, x0, y0, x1, y1);
}

inline void G2S_SetBG3Affine(MtxFx22 *mtx, s32 x0, s32 y0, s32 x1, s32 y1) {
    G2x_SetBGyAffine_((u32 *) &REG_BG3PA_SUB, mtx, x0, y0, x1, y1);
}

inline void G2_ChangeBlendAlpha(u32 eva, u32 evb) {
    REG_BLDALPHA = eva | (evb << REG_G2_BLDALPHA_EVB_SHIFT);
}

inline void G2S_ChangeBlendAlpha(u32 eva, u32 evb) {
    REG_BLDALPHA_SUB = eva | (evb << REG_G2_BLDALPHA_EVB_SHIFT);
}

inline void G2_BG0Mosaic(BOOL flag) {
    if (flag) {
        REG_BG0CNT |= REG_G2_BG0CNT_MOSAIC_MASK;
    } else {
        REG_BG0CNT &= ~REG_G2_BG0CNT_MOSAIC_MASK;
    }
}

inline void G2_BG1Mosaic(BOOL flag) {
    if (flag) {
        REG_BG1CNT |= REG_G2_BG1CNT_MOSAIC_MASK;
    } else {
        REG_BG1CNT &= ~REG_G2_BG1CNT_MOSAIC_MASK;
    }
}

inline void G2_BG2Mosaic(BOOL flag) {
    if (flag) {
        REG_BG2CNT |= REG_G2_BG2CNT_MOSAIC_MASK;
    } else {
        REG_BG2CNT &= ~REG_G2_BG2CNT_MOSAIC_MASK;
    }
}

inline void G2_BG3Mosaic(BOOL flag) {
    if (flag) {
        REG_BG3CNT |= REG_G2_BG3CNT_MOSAIC_MASK;
    } else {
        REG_BG3CNT &= ~REG_G2_BG3CNT_MOSAIC_MASK;
    }
}

inline void G2S_BG0Mosaic(BOOL flag) {
    if (flag) {
        REG_BG0CNT_SUB |= REG_G2_BG0CNT_MOSAIC_MASK;
    } else {
        REG_BG0CNT_SUB &= ~REG_G2_BG0CNT_MOSAIC_MASK;
    }
}

inline void G2S_BG1Mosaic(BOOL flag) {
    if (flag) {
        REG_BG1CNT_SUB |= REG_G2_BG1CNT_MOSAIC_MASK;
    } else {
        REG_BG1CNT_SUB &= ~REG_G2_BG1CNT_MOSAIC_MASK;
    }
}

inline void G2S_BG2Mosaic(BOOL flag) {
    if (flag) {
        REG_BG2CNT_SUB |= REG_G2_BG2CNT_MOSAIC_MASK;
    } else {
        REG_BG2CNT_SUB &= ~REG_G2_BG2CNT_MOSAIC_MASK;
    }
}

inline void G2S_BG3Mosaic(BOOL flag) {
    if (flag) {
        REG_BG3CNT_SUB |= REG_G2_BG3CNT_MOSAIC_MASK;
    } else {
        REG_BG3CNT_SUB &= ~REG_G2_BG3CNT_MOSAIC_MASK;
    }
}

inline void G2_SetBGMosaicSize(u32 width, u32 height) {
    REG_MOSAIC = width | (height << REG_G2_MOSAIC_BGVSIZE_SHIFT);
}

inline void G2S_SetBGMosaicSize(u32 width, u32 height) {
    REG_MOSAIC_SUB = width | (height << REG_G2_MOSAIC_BGVSIZE_SHIFT);
}

inline void G2_SetOBJMosaicSize(u32 width, u32 height) {
    REG_OBJMOSAIC = width | (height << REG_G2_MOSAIC_BGVSIZE_SHIFT); // not REG_G2_MOSAIC_OBJVSIZE_SHIFT?
}

inline void G2S_SetOBJMosaicSize(u32 width, u32 height) {
    REG_OBJMOSAIC_SUB = width | (height << REG_G2_MOSAIC_BGVSIZE_SHIFT); // not REG_G2_MOSAIC_OBJVSIZE_SHIFT?
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

inline void G2_GetOBJPosition(const GXOamAttr *oam, u32 *x, u32 *y) {
    *x = (oam->attr01 & GX_OAM_ATTR01_X_MASK) >> GX_OAM_ATTR01_X_SHIFT;
    *y = oam->attr01 & GX_OAM_ATTR01_Y_MASK;
}

inline void G2_SetOBJPosition(GXOamAttr *oam, s32 x, s32 y) {
    oam->attr01 =
        (oam->attr01 & (GX_OAM_ATTR01_RSENABLE_MASK | GX_OAM_ATTR01_MODE_MASK | GX_OAM_ATTR01_MOSAIC_MASK |
                        GX_OAM_ATTR01_CM_MASK | GX_OAM_ATTR01_SHAPE_MASK | GX_OAM_ATTR01_RS_MASK | GX_OAM_ATTR01_FLIP_MASK |
                        GX_OAM_ATTR01_HF_MASK | GX_OAM_ATTR01_VF_MASK | GX_OAM_ATTR01_SIZE_MASK)) |
        (y & GX_OAM_ATTR01_Y_MASK) | ((x & (GX_OAM_ATTR01_X_MASK >> GX_OAM_ATTR01_X_SHIFT)) << GX_OAM_ATTR01_X_SHIFT);
}

inline s32 G2_GetOBJCharName(const GXOamAttr *oam) {
    return oam->attr2 & GX_OAM_ATTR2_NAME_MASK;
}

inline void G2_SetOBJCharName(volatile GXOamAttr *oam, s32 name) {
    oam->attr2 = (oam->attr2 & ~GX_OAM_ATTR2_NAME_MASK) | (name);
}

inline s32 G2_GetOBJColorParam(const GXOamAttr *oam) {
    return (oam->attr2 & GX_OAM_ATTR2_CPARAM_MASK) >> GX_OAM_ATTR2_CPARAM_SHIFT;
}

inline GXOamMode G2_GetOBJMode(const GXOamAttr *oam) {
    return (GXOamMode) ((oam->attr01 & GX_OAM_ATTR01_MODE_MASK) >> GX_OAM_ATTR01_MODE_SHIFT);
}

inline void G2_SetOBJMode(GXOamAttr *oam, GXOamMode mode, u32 cParam) {
    oam->attr01 = (oam->attr01 & ~GX_OAM_ATTR01_MODE_MASK) | (mode << GX_OAM_ATTR01_MODE_SHIFT);
    oam->attr2  = (oam->attr2 & ~GX_OAM_ATTR2_CPARAM_MASK) | (cParam << GX_OAM_ATTR2_CPARAM_SHIFT);
}

inline void G2_SetOBJPriority(GXOamAttr *oam, s32 priority) {
    //! TODO: implementation guessed based on the other ones
    oam->attr2 = (oam->attr2 & ~GX_OAM_ATTR2_PRIORITY_MASK) | (priority << GX_OAM_ATTR2_PRIORITY_SHIFT);
}

inline s32 G2_GetOBJPriority(const GXOamAttr *oam) {
    //! TODO: implementation guessed based on the other ones
    return (oam->attr2 & GX_OAM_ATTR2_PRIORITY_MASK) >> GX_OAM_ATTR2_PRIORITY_SHIFT;
}

inline void G2_SetOBJAttr(GXOamAttr *oam, fx32 x, fx32 y, s32 priority, GXOamMode mode, BOOL mosaic, GXOamEffect effect,
                          GXOamShape shape, GXOamColorMode color, s32 charName, s32 cParam, s32 rsParam) {
    //! TODO: figure out where `effect` is
    oam->attr01 =
        (y & GX_OAM_ATTR01_Y_MASK) | (0 << GX_OAM_ATTR01_RSENABLE_SHIFT) | (mode << GX_OAM_ATTR01_MODE_SHIFT) |
        (mosaic << GX_OAM_ATTR01_MOSAIC_SHIFT) | (color << GX_OAM_ATTR01_CM_SHIFT) | (shape << GX_OAM_ATTR01_SHAPE_SHIFT) |
        ((x & (GX_OAM_ATTR01_X_MASK >> GX_OAM_ATTR01_X_SHIFT)) << GX_OAM_ATTR01_X_SHIFT) | (rsParam << GX_OAM_ATTR01_RS_SHIFT);
    oam->attr2 = charName | (priority << GX_OAM_ATTR2_PRIORITY_SHIFT) | (cParam << GX_OAM_ATTR2_CPARAM_SHIFT);
}

//! TODO: figure out
void G2_SetOBJEffect(GXOamAttr *oam, GXOamEffect effect, s32 rsParam);
GXOamEffect G2_GetOBJEffect(const GXOamAttr *oam);
void G2_SetOBJShape(GXOamAttr *oam, GXOamShape shape);
GXOamShape G2_GetOBJShape(const GXOamAttr *oam);
void G2_SetOBJColorMode(GXOamAttr *oam, GXOamColorMode color);
GXOamColorMode G2_GetOBJColorMode(const GXOamAttr *oam);
void G2_OBJMosaic(GXOamAttr *oam, BOOL enable);
void G2_SetOBJAffine(GXOamAffine *oam, MtxFx22 mtx);
void G2_GetOBJAffine(GXOamAffine *oam, MtxFx22 mtx);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
