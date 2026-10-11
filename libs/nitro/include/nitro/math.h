#ifndef _NITRO_MATH_H
#define _NITRO_MATH_H

#include "nitro/fx.h"
#include "nitro/types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define INT_TO_FX32(n) ((s32) ((n) << FX32_SHIFT))
#define ROUND_FX32(n) (((s32) (n) + 0x800) >> FX32_SHIFT)
#define DIV_FX32(a, b) (((a) << FX32_SHIFT) / (b))

#define SIN(n) (gSinCosTable[2 * ((n) >> 4)])
#define COS(n) (gSinCosTable[2 * ((n) >> 4) + 1])

s32 Atan2(s32 x, s32 y);

u32 CoDivide64By32(u32 a, u32 b);
u32 CoReciprocal(u32 x);
u32 CoSqrt(u32 x);
u32 CoInvSqrt(u32 x);
u32 AwaitDivisionResult();
u32 GetDivisionResult();
void StartReciprocal(u32 x);
void StartSqrt(u32 x);
u32 AwaitSqrtResult();
void StartDivision64By32(u32 a, u32 b);
u32 CoDivide32(u32 a, u32 b);
u32 CoRemainder(u32 a, u32 b);

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
    out->x += FX_MUL(vec->z, sin);
    out->z += FX_MUL(vec->z, cos);
    out->x += FX_MUL(vec->x, cos);
    out->z += FX_MUL(vec->x, -sin);
}

static inline void VecFx32_CopyXZ(VecFx32 *vec, VecFx32 *out) {
    fx32 z = vec->z;
    fx32 x = vec->x;

    out->x = x;
    out->y = 0;
    out->z = z;
}

static inline void VecFx32_SubXZ(VecFx32 *vec1, VecFx32 *vec2, VecFx32 *out) {

    fx32 x = vec1->x - vec2->x;
    fx32 z = vec1->z - vec2->z;
    out->z = z;
    out->x = x;
    out->y = 0;
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

static inline void VecFx32_Copy2VecFx16(const VecFx32 *vec, VecFx16 *out) {
    out->x = vec->x;
    out->y = vec->y;
    out->z = vec->z;
}

static inline void VecFx32_Init(fx32 x, fx32 y, fx32 z, VecFx32 *dst) {
    dst->x = x;
    dst->y = y;
    dst->z = z;
}

static inline void VecFx16_Init(fx16 x, fx16 y, fx16 z, VecFx16 *dst) {
    dst->x = x;
    dst->y = y;
    dst->z = z;
}

static inline void VecFx32_Reset(VecFx32 *dst) {
    dst->x = 0;
    dst->y = 0;
    dst->z = 0;
}

static inline BOOL VecFx32_IsEqual(const VecFx32 *a, const VecFx32 *b) {
    return a->x == b->x && a->y == b->y && a->z == b->z;
}

static inline bool VecFx32_IsCleared(const VecFx32 *a) {
    return a->x == 0 && a->y == 0 && a->z == 0;
}

void MtxFx22_InitIdentity(MtxFx22 *m);
void MtxFx22_InitRotation(MtxFx22 *m, fx32 sin, fx32 cos);
void MtxFx22_Multiply(MtxFx22 *a, MtxFx22 *b, MtxFx22 *out);

void MtxFx33_InitIdentity(MtxFx33 *m);
void MtxFx33_CopyToMat4x3p(MtxFx33 *m, MtxFx33 *out);
void MtxFx33_InitScale(MtxFx33 *m, fx32 x, fx32 y, fx32 z);
void MtxFx33_ScaleColumns(MtxFx33 *m, MtxFx33 *out, fx32 x, fx32 y, fx32 z);
void MtxFx33_InitXRotation(MtxFx33 *m, fx32 sin, fx32 cos);
void MtxFx33_InitYRotation(MtxFx33 *m, fx32 sin, fx32 cos);
void MtxFx33_InitZRotation(MtxFx33 *m, fx32 sin, fx32 cos);
void MtxFx33_func_01ff8248(MtxFx33 *m, VecFx32 *v, fx32 scale, fx32 offset);
void MtxFx33_func_01ff83a0(MtxFx33 *a, MtxFx33 *b);
void MtxFx33_Multiply(MtxFx33 *a, MtxFx33 *b, MtxFx33 *out);
void MtxFx33_MultiplyVec(VecFx32 *v, MtxFx33 *m, VecFx32 *out);

void MtxFx43_InitIdentity(MtxFx43 *m);
void MtxFx43_CopyToMtxFx44(MtxFx43 *m, MtxFx44 *out);
void MtxFx43_func_01ff8988(MtxFx43 *m, MtxFx43 *out, fx32 x, fx32 y, fx32 z);
void MtxFx43_InitScale(MtxFx43 *m, fx32 x, fx32 y, fx32 z);
void MtxFx43_ScaleColumns(MtxFx43 *m, MtxFx43 *out, fx32 x, fx32 y, fx32 z);
void MtxFx43_InitXRotation(MtxFx43 *m, fx32 sin, fx32 cos);
void MtxFx43_InitYRotation(MtxFx43 *m, fx32 sin, fx32 cos);
void MtxFx43_InitZRotation(MtxFx43 *m, fx32 sin, fx32 cos);
void MtxFx43_func_01ff8ad8(MtxFx43 *m, VecFx32 *v, fx32 scale, fx32 offset);
void MtxFx43_func_01ff8af8(MtxFx43 *a, MtxFx43 *b);
void MtxFx43_Multiply(MtxFx43 *a, MtxFx43 *b, MtxFx43 *out);
void MtxFx43_MultiplyVec(VecFx32 *v, MtxFx43 *m, VecFx32 *out);

void MtxFx44_InitIdentity(MtxFx44 *m);
void MtxFx44_CopyToMtxFx43(MtxFx44 *m, MtxFx43 *out);
void MtxFx44_InitZRotation(MtxFx44 *m, fx32 sin, fx32 cos);
void MtxFx44_Multiply(MtxFx44 *a, MtxFx44 *b, MtxFx44 *out);

#ifdef __cplusplus
}
#endif

#endif
