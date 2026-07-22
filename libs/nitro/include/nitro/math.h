#ifndef _NDS_MATH_H
#define _NDS_MATH_H

#include "global.h"
#include "types.h"

#include <nitro/fx.h>

#if __MWERKS__
    #define Vec2_Set(a, dst)             \
        {                                \
            (dst)->coords = (a)->coords; \
        }                                \
        ((void) 0)
#else
    #define Vec2_Set(a, dst)   \
        {                      \
            (dst)->x = (a)->x; \
            (dst)->y = (a)->y; \
        }                      \
        ((void) 0)
#endif

#define Vec2_CopyAdd(type, a, b, dst) \
    {                                 \
        type temp;                    \
        temp.x = (a)->x + (b)->x;     \
        temp.y = (a)->y + (b)->y;     \
        Vec2_Set(&temp, dst);         \
    }                                 \
    ((void) 0)

#define Vec2_CopySub(type, a, b, dst) \
    {                                 \
        type temp;                    \
        temp.x = (a)->x - (b)->x;     \
        temp.y = (a)->y - (b)->y;     \
        Vec2_Set(&temp, dst);         \
    }                                 \
    ((void) 0)

#ifdef __cplusplus
extern "C" {
#endif

#define ABS(x) ((x) < 0 ? -(x) : (x))
#define CLAMP(x, min, max) ((x) > (max) ? (max) : (x) < (min) ? (min) : (x))
#define CLAMP2(x, min, max) ((x) > (max) ? (max) : (x) >= (min) ? (x) : (min))

#define INT_TO_FX32(n) ((s32) ((n) << FX32_SHIFT))
#define FLOAT_TO_FX32(n) ((s32) (((n) * 8192 + 1) / 2))
#define ROUND_FX32(n) (((s32) (n) + 0x800) >> FX32_SHIFT)
#define MUL_FX32(a, b) (fx32)((((s64) (a)) * ((s64) (b)) + 0x800) >> FX32_SHIFT)
#define DIV_FX32(a, b) (((a) << FX32_SHIFT) / (b))

// some kind of angle conversion? only used for angle values so far
#define MUL_FX32_FX64(a, b) (fx32)(((((a) * (b)) + 0x80000000000LL) >> 32))
#define UNK_FX_OPERATION_1(a) (MUL_FX32_FX64((u64) (a), 0xB60B60B60BLL) >> FX32_SHIFT)

#define MUL_FX32_U(a, b) (fx32)((((u64) (a)) * ((u64) (b)) + 0x800) >> FX32_SHIFT)
#define UNK_FX_OPERATION_2(a) MUL_FX32_U((u64) (a), FLOAT_TO_FX32(1.2f))

#define DEG_TO_ANG(n) ((n) * 0x10000 / 360)
#define DEG_TO_ANG_ALT(n) DEG_TO_ANG((u64) (n))
#define SIN(n) (gSinCosTable[2 * ((n) >> 4)])
#define COS(n) (gSinCosTable[2 * ((n) >> 4) + 1])

#define SIN2(table, n) ((table)[2 * ((n) >> 4)])
#define COS2(table, n) ((table)[2 * ((n) >> 4) + 1])

typedef union Vec2p {
    struct {
        /* 0 */ fx32 x;
        /* 4 */ fx32 y;
        /* 8 */
    };
    fx32 coords[2];
} Vec2p;

#define Vec2p_Add(a, b, dst) Vec2_Add(Vec2p, a, b, dst)
#define Vec2p_Sub(a, b, dst) Vec2_Sub(Vec2p, a, b, dst)
#define Vec2p_Set(a, dst) Vec2_Set(Vec2p, a, dst)
#define Vec2p_Clear(dst) Vec2_Clear(fx32, dst)
static inline void Vec2p_Copy(const Vec2p *src, Vec2p *dst) {
#if __MWERKS__
    dst->coords = src->coords;
#else
    dst->x = src->x;
    dst->y = src->y;
#endif
}

typedef union Vec2b {
    struct {
        /* 0 */ u8 x;
        /* 4 */ u8 y;
        /* 8 */
    };
    u8 coords[2];
} Vec2b;

typedef struct Mat2p {
    /* 00 */ Vec2p xColumn;
    /* 08 */ Vec2p yColumn;
    /* 10 */
} Mat2p;

typedef struct Mat3p {
    /* 00 */ VecFx32 xColumn;
    /* 0C */ VecFx32 yColumn;
    /* 18 */ VecFx32 zColumn;
    /* 24 */
} Mat3p;

typedef struct Mat4x3p {
    /* 00 */ VecFx32 xColumn;
    /* 0C */ VecFx32 yColumn;
    /* 18 */ VecFx32 zColumn;
    /* 24 */ VecFx32 wColumn;
    /* 30 */
} Mat4x3p;

typedef struct Mat4p {
    /* 00 */ MtxFx22 xColumn;
    /* 10 */ MtxFx22 yColumn;
    /* 20 */ MtxFx22 zColumn;
    /* 30 */ MtxFx22 wColumn;
    /* 40 */
} Mat4p;

u32 func_01ff9f3c(s32 a, s32 b);
s32 Atan2(s32 x, s32 y);

u32 CoDivide64By32(u32 a, u32 b);
u32 func_01ff98f0(u32 a, u32 b);
u32 CoReciprocal(u32 x);
u64 func_01ff992c(u32 x);
u32 CoSqrt(u32 x);
u32 CoInvSqrt(u32 x);
u32 AwaitDivisionResult();
u32 GetDivisionResult();
void StartReciprocal(u32 x);
void StartSqrt(u32 x);
void func_01ff9ac4(u32 x);
u32 AwaitSqrtResult();
void StartDivision64By32(u32 a, u32 b);
u32 CoDivide32(u32 a, u32 b);
u32 CoRemainder(u32 a, u32 b);

bool Approach(s32 *src, s32 dest, s32 step);
bool Approach_thunk(s32 *src, s32 dest, s32 step);
extern const fx16 gSinCosTable[];

extern const VecFx32 gVecFx32_ZERO;

void VecFx32_Add(VecFx32 *a, const VecFx32 *b, VecFx32 *out);
void VecFx32_Sub(VecFx32 *a, VecFx32 *b, VecFx32 *out);
fx32 VecFx32_Dot(VecFx32 *a, VecFx32 *b);
void VecFx32_Cross(VecFx32 *a, VecFx32 *b, VecFx32 *out);
fx32 VecFx32_Length(VecFx32 *a);
void VecFx32_Normalize(VecFx32 *vec, VecFx32 *out);
void VecFx32_Axpy(fx32 a, VecFx32 *x, VecFx32 *y, VecFx32 *out);
fx32 VecFx32_Distance(VecFx32 *a, VecFx32 *b);
bool VecFx32_TryNormalize(VecFx32 *vec);
fx32 VecFx32_DistanceSquared(VecFx32 *a, VecFx32 *b);
void VecFx32_Scale(VecFx32 *vec, fx32 scale);
bool VecFx32_CalculateNormal(VecFx32 *vec, VecFx32 *a, VecFx32 *b, VecFx32 *c);

static inline void VecFx32_Rotate(VecFx32 *vec, fx32 sin, fx32 cos, VecFx32 *out) {
    out->x += MUL_FX32(vec->z, sin);
    out->z += MUL_FX32(vec->z, cos);
    out->x += MUL_FX32(vec->x, cos);
    out->z += MUL_FX32(vec->x, -sin);
}

static inline void VecFx32_CopyXZ(VecFx32 *vec, VecFx32 *out) {
    fx32 z = vec->z;
    fx32 x = vec->x;

    out->x = x;
    out->y = 0;
    out->z = z;
}

static inline void VecFx16_Copy2VecFx32(const VecFx16 *vec, VecFx32 *out) {
    out->x = vec->x;
    out->y = vec->y;
    out->z = vec->z;
}

static inline void VecFx32_Copy(const VecFx32 *vec, VecFx32 *out) {
    out->x = vec->x;
    out->y = vec->y;
    out->z = vec->z;
}

static inline void VecFx32_Init(fx32 x, fx32 y, fx32 z, VecFx32 *dst) {
    dst->x = x;
    dst->y = y;
    dst->z = z;
}

static inline BOOL VecFx32_IsEqual(const VecFx32 *a, const VecFx32 *b) {
    return a->x == b->x && a->y == b->y && a->z == b->z;
}

void Mat2p_InitIdentity(Mat2p *m);
void Mat2p_InitRotation(Mat2p *m, fx32 sin, fx32 cos);
void Mat2p_Multiply(Mat2p *a, Mat2p *b, Mat2p *out);

void Mat3p_InitIdentity(Mat3p *m);
void Mat3p_CopyToMat4x3p(Mat3p *m, Mat4x3p *out);
void Mat3p_InitScale(Mat3p *m, fx32 x, fx32 y, fx32 z);
void Mat3p_ScaleColumns(Mat3p *m, Mat3p *out, fx32 x, fx32 y, fx32 z);
void Mat3p_InitXRotation(Mat3p *m, fx32 sin, fx32 cos);
void Mat3p_InitYRotation(Mat3p *m, fx32 sin, fx32 cos);
void Mat3p_InitZRotation(Mat3p *m, fx32 sin, fx32 cos);
void Mat3p_func_01ff8248(Mat3p *m, VecFx32 *v, fx32 scale, fx32 offset);
void Mat3p_func_01ff83a0(Mat3p *a, Mat3p *b);
void Mat3p_Multiply(Mat3p *a, Mat3p *b, Mat3p *out);
void Mat3p_MultiplyVec(VecFx32 *v, Mat3p *m, VecFx32 *out);

void Mat4x3p_InitIdentity(Mat4x3p *m);
void Mat4x3p_CopyToMat4p(Mat4x3p *m, Mat4p *out);
void Mat4x3p_func_01ff8988(Mat4x3p *m, Mat4x3p *out, fx32 x, fx32 y, fx32 z);
void Mat4x3p_InitScale(Mat4x3p *m, fx32 x, fx32 y, fx32 z);
void Mat4x3p_ScaleColumns(Mat4x3p *m, Mat4x3p *out, fx32 x, fx32 y, fx32 z);
void Mat4x3p_InitXRotation(Mat4x3p *m, fx32 sin, fx32 cos);
void Mat4x3p_InitYRotation(Mat4x3p *m, fx32 sin, fx32 cos);
void Mat4x3p_InitZRotation(Mat4x3p *m, fx32 sin, fx32 cos);
void Mat4x3p_func_01ff8ad8(Mat4x3p *m, VecFx32 *v, fx32 scale, fx32 offset);
void Mat4x3p_func_01ff8af8(Mat4x3p *a, Mat4x3p *b);
void Mat4x3p_Multiply(Mat4x3p *a, Mat4x3p *b, Mat4x3p *out);
void Mat4x3p_MultiplyVec(VecFx32 *v, Mat4x3p *m, VecFx32 *out);

void Mat4p_InitIdentity(Mat4p *m);
void Mat4p_CopyToMat4x3p(Mat4p *m, Mat4x3p *out);
void Mat4p_InitZRotation(Mat4p *m, fx32 sin, fx32 cos);
void Mat4p_Multiply(Mat4p *a, Mat4p *b, Mat4p *out);

#ifdef __cplusplus
}
#endif

#endif
