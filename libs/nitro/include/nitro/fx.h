#ifndef _NITRO_FX_H
#define _NITRO_FX_H

#include "nitro/types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define FX32_SHIFT 12
#define FX16_SHIFT 12

#define FX32_ONE (fx32)(1 << FX32_SHIFT)
#define FX16_ONE (fx16)(1 << FX16_SHIFT)

typedef s32 fx32;
typedef s16 fx16;

typedef union VecFx16 {
    struct {
        /* 00 */ fx16 x;
        /* 02 */ fx16 y;
        /* 04 */ fx16 z;
        /* 06 */
    };
    fx16 coords[3];
} VecFx16;

typedef union VecFx32 {
    struct {
        /* 00 */ fx32 x;
        /* 04 */ fx32 y;
        /* 08 */ fx32 z;
        /* 0c */
    };
    fx32 coords[3];

//! TODO: figure out a better way...
#ifdef VECFX32_CTORS
    VecFx32(fx32 _x, fx32 _y, fx32 _z) :
        x(_x),
        y(_y),
        z(_z) {}
    VecFx32() {}
#endif
} VecFx32;

typedef union MtxFx22 {
    struct {
        /* 00 */ fx32 x;
        /* 04 */ fx32 y;
        /* 08 */ fx32 z;
        /* 0c */ fx32 w;
        /* 10 */
    };
    fx32 coords[4];
} MtxFx22;

void FX_Init(void);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
