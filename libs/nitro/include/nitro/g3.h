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

inline void G3_TexImageParam(GXTexFmt fmt, u32 gen, GXTexSizeS sizeS, GXTexSizeT sizeT, u32 repeat, u32 flip,
                             GXTexPlttColor0 color0, u32 addr) {
    // Unclear where repeat and flip should go
    // GGCFFFTT_TSSSxAAA_AAAAAAAA_AAAAAxxx
    // G: gen
    // C: color0
    // F: fmt
    // T: sizeT
    // S: sizeS
    // A: addr
    REG_GFX_FIFO_TEXTURE_PARAM =
        (fmt << 0x1A) | (addr << 0x3) | (gen << 0x1E) | (sizeS << 0x14) | (sizeT << 0x17) | (color0 << 0x1D);
}
inline void G3_TexPlttBase(u32 addr, GXTexFmt fmt) {
    REG_GFX_FIFO_TEXTURE_PALETTE = addr >> (4 - (fmt == 2));
}

inline void G3_PolygonAttr(u32 lightMask, u32 polygonMode, u32 cull, u32 id, u32 alpha, u32 param6) {
    // Unclear where lightMask, cull and param6 should go
    // xxIIIIII_xxxAAAAA_xxxxxxxx_PPxxxxxx
    // I: id
    // A: alpha
    // P: polygonMode
    REG_GFX_FIFO_POLYGON_ATTR = (id << 0x18) | (polygonMode << 0x6) | (alpha << 0x10);
}

inline void G3_PushMtx(void) {
    REG_GFX_FIFO_MATRIX_PUSH = 0;
}
inline void G3_Translate(fx32 x, fx32 y, fx32 z) {
    REG_GFX_FIFO_MATRIX_TRANSLATE = x;
    REG_GFX_FIFO_MATRIX_TRANSLATE = y;
    REG_GFX_FIFO_MATRIX_TRANSLATE = z;
}
inline void G3_ViewPort(u32 left, u32 top, u32 right, u32 bottom) {
    // Unclear how to combine the arguments
    // left = 0, top = 0, right = 255, bottom = 191 => 0x8000
    REG_GFX_FIFO_VIEWPORT = 0xBFFF0000;
}
void _G3_Ortho(fx32 top, fx32 bottom, fx32 left, fx32 right, fx32 near, fx32 far, fx32 param7, BOOL param8, void *param9);
inline void G3_Ortho(fx32 top, fx32 bottom, fx32 left, fx32 right, fx32 near, fx32 far, void *param7) {
    _G3_Ortho(top, bottom, left, right, near, far, FX32_ONE, true, param7);
}
inline void G3_StoreMtx(u32 param1) {
    REG_GFX_FIFO_MATRIX_STORE = param1;
}
void _G3_LookAt(VecFx32 *camera, VecFx32 *up, VecFx32 *lookAt, BOOL param4, void *param5);
inline void G3_LookAt(VecFx32 *camera, VecFx32 *up, VecFx32 *lookAt, void *param4) {
    _G3_LookAt(camera, up, lookAt, true, param4);
}
inline void G3_MtxMode(u32 mode) {
    REG_GFX_FIFO_MATRIX_MODE = mode;
}
inline void G3_Identity(void) {
    REG_GFX_FIFO_MATRIX_IDENTITY = 0;
}
inline void G3_PopMtx(u32 param1) {
    REG_GFX_FIFO_MATRIX_POP = param1;
}

inline void G3_Begin(u32 shape) {
    REG_GFX_FIFO_POLYGONS_BEGIN = shape;
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
inline void G3_Vtx(u16 x, u16 y, u16 z) {
    REG_GFX_FIFO_VERTEX_16 = x | (y << 0x10);
    REG_GFX_FIFO_VERTEX_16 = z;
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
    REG_DISP3DCNT = REG_DISP3DCNT & ~0x3000 | (param1 << 4);
}

inline void G3X_AlphaBlend(BOOL param1) {
    REG_DISP3DCNT = REG_DISP3DCNT & ~0x3000 | (param1 << 3);
}

inline void G3X_Unk1(unk32 param1) {
    REG_DISP3DCNT = REG_DISP3DCNT & ~(0x3000 | (param1 << 1));
}

inline void G3X_Unk2(unk32 param1) {
    REG_DISP3DCNT &= ~(0x3000 | (param1 << 5));
}

#ifdef __cplusplus
} // extern "C"
#endif

#endif
