#ifndef _NITRO_FX_H
#define _NITRO_FX_H

#include <math.h>

#include "fx/consts.h"
#include "nitro/types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef s64 fx64c;
typedef s64 fx64;
typedef s32 fx32;
typedef s16 fx16;

#define FX_F32_TO_FX32(x) ((fx32) (((x) * 8192 + 1) / 2))
#define FX_FX32_TO_F32(x) ((f32) (((x) * 2 - 1) / 8192))

typedef union VecFx16 {
    struct {
        /* 00 */ fx16 x;
        /* 02 */ fx16 y;
        /* 04 */ fx16 z;
        /* 06 */
    };
    fx16 values[3];
} VecFx16;

typedef union VecFx32 {
    struct {
        /* 00 */ fx32 x;
        /* 04 */ fx32 y;
        /* 08 */ fx32 z;
        /* 0c */
    };
    fx32 values[3];
} VecFx32;

typedef union MtxFx22 {
    struct {
        /* 00 */ fx32 _00;
        /* 04 */ fx32 _01;
        /* 08 */ fx32 _10;
        /* 0c */ fx32 _11;
        /* 10 */
    };
    fx32 values[4];
} MtxFx22;

typedef union MtxFx33 {
    struct {
        /* 00 */ fx32 _00;
        /* 04 */ fx32 _01;
        /* 08 */ fx32 _02;
        /* 0c */ fx32 _10;
        /* 10 */ fx32 _11;
        /* 14 */ fx32 _12;
        /* 18 */ fx32 _20;
        /* 1c */ fx32 _21;
        /* 20 */ fx32 _22;
        /* 24 */
    };
    fx32 values[9];
} MtxFx33;

typedef union MtxFx43 {
    struct {
        /* 00 */ fx32 _00;
        /* 04 */ fx32 _01;
        /* 08 */ fx32 _02;
        /* 0c */ fx32 _10;
        /* 10 */ fx32 _11;
        /* 14 */ fx32 _12;
        /* 18 */ fx32 _20;
        /* 1c */ fx32 _21;
        /* 20 */ fx32 _22;
        /* 24 */ fx32 _30;
        /* 28 */ fx32 _31;
        /* 2c */ fx32 _32;
        /* 30 */
    };
    fx32 values[12];
} MtxFx43;

typedef union MtxFx44 {
    struct {
        /* 00 */ fx32 _00;
        /* 04 */ fx32 _01;
        /* 08 */ fx32 _02;
        /* 0c */ fx32 _03;
        /* 10 */ fx32 _10;
        /* 14 */ fx32 _11;
        /* 18 */ fx32 _12;
        /* 1c */ fx32 _13;
        /* 20 */ fx32 _20;
        /* 24 */ fx32 _21;
        /* 28 */ fx32 _22;
        /* 2c */ fx32 _23;
        /* 30 */ fx32 _30;
        /* 34 */ fx32 _31;
        /* 38 */ fx32 _32;
        /* 3c */ fx32 _33;
        /* 40 */
    };
    fx32 values[16];
} MtxFx44;

#define VEC_Set(vec, x_, y_, z_) \
    do {                         \
        vec.x = x_;              \
        vec.y = y_;              \
        vec.z = z_;              \
    } while (0)

void FX_Init(void);

fx32 FX_Div(fx32 numer, fx32 denom);
void FX_DivAsync(fx32 numer, fx32 denom);
s32 FX_DivS32(s32 numer, s32 denom);
s32 FX_ModS32(s32 numer, s32 denom);
fx32 FX_GetDivResult(void);
fx64c FX_GetDivResultFx64c(void);
fx32 FX_Inv(fx32 denom);
void FX_InvAsync(fx32 denom);

s16 FX_Atan2(fx32 y, fx32 x);
u16 FX_AtanIdx(s32 tan);
u16 FX_Atan2Idx(fx32 y, fx32 x);

void MTX_Transpose33_(const MtxFx33 *src, MtxFx33 *dst);
void MTX_RotX33_(MtxFx33 *mtx, fx32 sin, fx32 cos);
void MTX_RotZ33_(MtxFx33 *mtx, fx32 sin, fx32 cos);
void MTX_Concat33(MtxFx33 *a, MtxFx33 *b, MtxFx33 *dst);
void MTX_Identity43_(MtxFx43 *mtx);
void MTX_PerspectiveW(fx32 arg0, fx32 arg1, fx32 arg2, fx32 arg3, fx32 arg4, fx32 arg5, MtxFx44 *mtx);
void MTX_OrthoW(fx32 top, fx32 bottom, fx32 left, fx32 right, fx32 near, fx32 far, fx32 arg6, MtxFx44 *mtx);

inline fx32 VEC_DotProduct(const VecFx32 *a, const VecFx32 *b) {
    return ((fx64) a->x * (fx64) b->x + (fx64) a->y * (fx64) b->y + (fx64) a->z * (fx64) b->z) >> FX32_SHIFT;
}

inline fx32 FX_MulInline(fx32 v1, fx32 v2) {
    return (fx32) ((((fx64) v1 * (fx64) v2) + FX32_HALF) >> FX32_SHIFT);
}

// a non-inline version exists and is named `FX_Mul` (according to Ghost Trick PC)
#define FX_MUL FX_MulInline

inline fx32 FX_Mul32x64cInline(fx32 v32, fx64c v64c) {
    return (fx32) (((s64) v32 * v64c + 0x80000000) >> FX64C_SHIFT);
}

#define FX_MUL32x64C(v1, v2) FX_Mul32x64cInline

extern const fx16 FX_SinCosTable_[];

// static fx16 FX_SinIdx(fx32 idx);
inline fx16 FX_SinIdx(fx32 n) {
    return FX_SinCosTable_[2 * ((n) >> 4)];
}

// static fx16 FX_CosIdx(fx32 idx);
inline fx16 FX_CosIdx(fx32 n) {
    return FX_SinCosTable_[2 * ((n) >> 4) + 1];
}

#define SIN(n) FX_SinIdx((u16) n)
#define COS(n) FX_CosIdx((u16) n)

//! TODO: figure this out
#define FX_FX64_TO_F32(x)
#define FX_F32_TO_FX64(x)
#define FX_FX64C_TO_F32(x)
#define FX_F32_TO_FX64C(x)
#define FX_FX16_TO_F32(x)
#define FX_F32_TO_FX16(x)

//! TODO: figure out what is inlined or not
fx32 FX_Whole(fx32 v);
fx32 FX_Floor(fx32 v);
fx32 FX_Sqrt(fx32 x);
u16 FX_AcosIdx(fx32 x);

//! TODO: find what this is
#define FX_UNK_ANGLE_CONV(a) ((fx32) ((((a) * FX64C_65536_360) + 0x80000000000) >> 32) >> 12)
#define FX_MUL_U(v1, v2) ((fx32) ((((u64) v1 * (u64) v2) + FX32_HALF) >> FX32_SHIFT))

#ifdef __cplusplus
} // extern "C"
#endif

#endif
