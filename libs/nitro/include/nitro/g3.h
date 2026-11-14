#ifndef _NITRO_G3_H
#define _NITRO_G3_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/fx.h"
#include "nitro/gx.h"
#include "nitro/types.h"

#define G3OP_TEXCOORD 0x1 // guess

void G3X_Init(void);
void G3X_InitTable(void);
void G3X_InitMtxStack(void);
void G3X_Reset(void);
void G3X_SetClearColor(u32 rgb, u32 a, u32 param3, u32 param4, BOOL param5);
void G3_RotY(fx16 sin, fx16 cos);

inline void G3_TexImageParam(GXTexFmt texFmt, GXTexGen texGen, GXTexSizeS texSizeS, GXTexSizeT texSizeT,
                             GXTexRepeat texRepeatST, GXTexFlip texFlip, GXTexPlttColor0 color0, u32 textureAddress) {
    // GGCFFFTT_TSSSffRR_AAAAAAAA_AAAAAAAA (based on gbatek)
    // G: texGen
    // C: color0
    // F: texFmt
    // T: texSizeT
    // S: texSizeS
    // A: textureAddress
    // R: texRepeatST (& 1 -> S direction, & 2 -> T direction)
    // f: texFlip (& 1 -> S direction, & 2 -> T direction)
    REG_GFX_FIFO_TEXTURE_PARAM =
        (texFmt << REG_G3_TEXIMAGE_PARAM_TEXFMT_SHIFT) | textureAddress | (texGen << REG_G3_TEXIMAGE_PARAM_TGEN_SHIFT) |
        (texSizeS << REG_G3_TEXIMAGE_PARAM_V_SIZE_SHIFT) | (texSizeT << REG_G3_TEXIMAGE_PARAM_T_SIZE_SHIFT) |
        (color0 << REG_G3_TEXIMAGE_PARAM_TR_SHIFT) | (texFlip << REG_G3_TEXIMAGE_PARAM_FS_SHIFT) |
        (texRepeatST << REG_G3_TEXIMAGE_PARAM_RS_SHIFT);
}

#define G3_TEXPLTTBASE_ADDR(addr) ((u32) (addr << 0x10) >> 0x0D) //! TODO: figure out the shifts
#define G3_TEXPLTTBASE_FMT(fmt)                                                           \
    (GXTexFmt)(((u32) fmt >> REG_G3_TEXIMAGE_PARAM_TEXFMT_SHIFT) &                        \
               (REG_G3_TEXIMAGE_PARAM_TEXFMT_MASK >> REG_G3_TEXIMAGE_PARAM_TEXFMT_SHIFT))

inline void G3_TexPlttBase(u32 paletteAddress, GXTexFmt fmt) {
    REG_GFX_FIFO_TEXTURE_PALETTE = paletteAddress >> (4 - (fmt == GX_TEXFMT_PLTT4));
}

inline void G3_PolygonAttr(GXLightMask lightMask, GXPolygonMode polygonMode, GXCull cull, u32 id, u32 alpha, u32 misc) {
    // uuIIIIII_uuuAAAAA_uuuFuuuu_CCPPLLLL (based on gbatek)
    // I: id
    // A: alpha
    // F: misc (enables fog)
    // C: cull
    // P: polygonMode
    // L: lightMask
    // u: unknown
    REG_GFX_FIFO_POLYGON_ATTR = (id << REG_G3_POLYGON_ATTR_ID_SHIFT) | (misc << REG_G3_POLYGON_ATTR_FE_SHIFT) |
                                (cull << REG_G3_POLYGON_ATTR_BK_SHIFT) | (polygonMode << REG_G3_POLYGON_ATTR_PM_SHIFT) |
                                (alpha << REG_G3_POLYGON_ATTR_ALPHA_SHIFT) | lightMask;
}

inline void G3_PushMtx(void) {
    REG_GFX_FIFO_MATRIX_PUSH = 0;
}
inline void G3_Translate(fx32 x, fx32 y, fx32 z) {
    REG_GFX_FIFO_MATRIX_TRANSLATE = x;
    REG_GFX_FIFO_MATRIX_TRANSLATE = y;
    REG_GFX_FIFO_MATRIX_TRANSLATE = z;
}

inline void G3_Scale(fx32 x, fx32 y, fx32 z) {
    REG_GFX_FIFO_MATRIX_SCALE = x;
    REG_GFX_FIFO_MATRIX_SCALE = y;
    REG_GFX_FIFO_MATRIX_SCALE = z;
}

inline void G3_ViewPort(u32 left, u32 top, u32 right, u32 bottom) {
    //! TODO: confirm combination
    // left = 0, top = 0, right = 255, bottom = 191 => 0x8000
    REG_GFX_FIFO_VIEWPORT = left | (top << REG_G3_VIEWPORT_INTEGER_Y1_SHIFT) | (right << REG_G3_VIEWPORT_INTEGER_X2_SHIFT) |
                            (bottom << REG_G3_VIEWPORT_INTEGER_Y2_SHIFT);
}

void _G3_Ortho(fx32 top, fx32 bottom, fx32 left, fx32 right, fx32 near, fx32 far, fx32 param7, BOOL param8, void *param9);
inline void G3_Ortho(fx32 top, fx32 bottom, fx32 left, fx32 right, fx32 near, fx32 far, void *param7) {
    _G3_Ortho(top, bottom, left, right, near, far, FX32_ONE, TRUE, param7);
}
inline void G3_StoreMtx(u32 param1) {
    REG_GFX_FIFO_MATRIX_STORE = param1;
}
void _G3_LookAt(VecFx32 *camera, VecFx32 *up, VecFx32 *lookAt, BOOL param4, void *param5);
inline void G3_LookAt(VecFx32 *camera, VecFx32 *up, VecFx32 *lookAt, void *param4) {
    _G3_LookAt(camera, up, lookAt, true, param4);
}
inline void G3_MtxMode(GXMtxMode mode) {
    REG_GFX_FIFO_MATRIX_MODE = mode;
}
inline void G3_Identity(void) {
    REG_GFX_FIFO_MATRIX_IDENTITY = 0;
}
inline void G3_PopMtx(s32 depth) {
    REG_GFX_FIFO_MATRIX_POP = depth;
}

inline void G3_Begin(GXBegin gxBegin) {
    REG_GFX_FIFO_POLYGONS_BEGIN = gxBegin;
}
inline void G3_Color(u16 color) {
    REG_GFX_FIFO_VERTEX_COLOR = color;
}
inline void G3_Direct1(u32 op, GXSt texCoord) {
    switch (op) {
        case G3OP_TEXCOORD:
            REG_GFX_FIFO_VERTEX_TEXCOORD = texCoord;
            break;
    }
}

inline void G3_Vtx(const fx16 x, const fx16 y, const fx16 z) {
    REG_GFX_FIFO_VERTEX_16 = (u16) x | ((u16) y << 16);
    REG_GFX_FIFO_VERTEX_16 = (u16) z;
}

inline void G3_Vtx10(const fx16 x, const fx16 y, const fx16 z) {
    REG_GFX_FIFO_VERTEX_10 =
        ((x >> 6) & 0x3FF) | (((y >> 6) & 0x3FF) << GX_VEC_FX10_Y_SHIFT) | (((z >> 6) & 0x3FF) << GX_VEC_FX10_Z_SHIFT);
}

inline void G3_VtxXZ(const fx16 x, const fx16 z) {
    REG_GFX_FIFO_VERTEX_XZ = (u16) x | ((u16) z << 16);
}

inline void G3_End(void) {
    REG_GFX_FIFO_POLYGONS_END = 0;
}

inline void G3_SwapBuffers(u32 sortMode, u32 bufferMode) {
    // Unclear what values these macros have and how they are meant to be combined
    // GX_SORTMODE_MANUAL | GX_BUFFERMODE_Z == 0x1
    REG_GFX_FIFO_SWAP_BUFFERS = 0x1;
}

inline BOOL G3X_IsGeometryBusy(void) {
    return REG_GFX_STATUS & 0x8000000;
}

inline void G3X_AntiAlias(BOOL param1) {
    REG_DISP3DCNT = (REG_DISP3DCNT & ~0x3000) | (param1 << 4);
}

inline void G3X_AlphaBlend(BOOL param1) {
    REG_DISP3DCNT = (REG_DISP3DCNT & ~0x3000) | (param1 << 3);
}

//! TODO: figure out params and if the body is correct
inline void G3X_AlphaTest() {
    REG_DISP3DCNT = (REG_DISP3DCNT & ~0x3004);
}

inline void G3X_Unk1(u32 param1) {
    REG_DISP3DCNT = REG_DISP3DCNT & ~(0x3000 | (param1 << 1));
}

inline void G3X_Unk2(u32 param1) {
    REG_DISP3DCNT &= ~(0x3000 | (param1 << 5));
}

//! TODO: figure out params and if the body is correct
inline void G3_MaterialColorSpecEmi(s32 param1, s32 param2) {
    // shift assumed based on `G3_MaterialColorDiffAmb`
    REG_GFX_FIFO_SPECULAR_REF_AND_EMISSION = param1 | (param2 << 0x10);
}

//! TODO: figure out params and if the body is correct
inline void G3_MaterialColorDiffAmb(s32 param1, s32 param2) {
    REG_GFX_FIFO_DIFFUSE_AMBIENT_REFLECT = param1 | (param2 << 0x10);
}

//! TODO: figure out params and if the body is correct
inline void G3_LightVector(s32 param1, s32 vecX, s32 vecY, s32 vecZ) {
    REG_GFX_FIFO_LIGHT_DIRECTION = (vecX | (vecY << 0x0A) | (vecZ << 0x14)) | (param1 << 0x1E);
}

//! TODO: figure out params and if the body is correct
inline void G3_LightColor(s32 param1, s32 param2) {
    REG_GFX_FIFO_LIGHT_COLOR = param1 | (param2 << 0x1E);
}

//! TODO: figure out
void G3_TexCoord(s32 u, s32 v);
void G3_MultMtx33(MtxFx33 *pMtx);
void G3_LoadMtx43(MtxFx43 *pMtx);
void G3_MultMtx43(MtxFx43 *pMtx);
void G3_EffectIndex(u16 effectIndex);
void G3_StartDraw();
void G3_TargetMask();

#ifdef __cplusplus
} // extern "C"
#endif

#endif
