#include "CommonFuncs.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e09ac.hpp"

#include <nitro/fx.h>
#include <nitro/g3.h>
#include <nitro/gx.h>
#include <nitro/math.h>
#include <nitro/reg.h>
#include <nitro/types.h>

void UnkStackStruct_ov017_020c1104::func_ov017_020c1104(const VecFx32 *param2, s32 param3, u16 param4) {
    s16 var_r1;

    this->mSubdivShift   = param4;
    this->mCenter.x      = param2->x;
    this->mCenter.y      = param2->y;
    this->mCenter.z      = param2->z;
    this->mHeight        = 0x1000;

    if (param3 <= 0x1000) {
        this->mOuterRadius = 0x1000;
        var_r1             = param3;
    } else {
        this->mOuterRadius = param3;
        var_r1             = 0x1000;
    }

    for (s16 *var_r4 = this->mSegmentRadii; var_r4 != &this->mSegmentRadii[(u16) (1 << this->mSubdivShift)]; var_r4++) {
        *var_r4 = var_r1;
    }
}

// https://decomp.me/scratch/5P44c
void UnkStackStruct_ov017_020c1104::func_ov017_020c117c(const VecFx32 *param2, unk16 param3) {
    VecFx32 sp0;
    func_01ffb714(param2, &this->mCenter, &sp0);

    s16 temp_r0   = func_01ffbbe0(sp0.x, sp0.z);
    s16 temp_r0_2 = 0x10000 >> *(volatile u16 *) &this->mSubdivShift;

    u16 value1  = temp_r0 - temp_r0_2 / 2;
    s32 temp_r3 = (value1 << this->mSubdivShift);

    s32 temp_r5    = temp_r3 + ((u32) (temp_r3 >> 15) >> 16);
    fx32 temp_r0_3 = func_01ff9258(sp0.x, sp0.z);

    for (s32 var_r7 = -(this->mSubdivShift - 3); var_r7 <= (this->mSubdivShift - 2); var_r7++) {
        u16 *new_var = &this->mSubdivShift;

        s16 temp_r0_4  = 0x10000 >> *new_var;
        s32 value2     = var_r7 + (temp_r5 >> 16);
        fx32 temp_r2_3 = FX_MUL(temp_r0_3, COS((u16) (s16) (temp_r0 - ((s16) (value2 * temp_r0_4 + temp_r0_4 / 2)))));

        s16 temp_r0_5 = func_01ffb428(param3 + temp_r2_3, this->mOuterRadius);
        u32 temp_r2_4 = ~(0xFF << *(volatile u16 *) &this->mSubdivShift) & ((u16) (1 << *new_var) + (temp_r5 >> 16) + var_r7);

        s16 *ptr = &this->mSegmentRadii[temp_r2_4];
        *ptr     = temp_r0_5 < *ptr ? temp_r0_5 : *ptr;
    }
}

void UnkStackStruct_ov017_020c1104::func_ov017_020c12fc(u8 param2, unk16 param3) {
    FlushGfxQueue();
    G3_TexImageParam(0, 0, 0, 0, 0, 0, 0, 0);
    G3_Color(data_027e09ac->mUnk_014.mUnk_08);
    G3_PushMtx();
    G3_Translate(this->mCenter.x, this->mCenter.y + 0x333, this->mCenter.z);
    G3_Scale(this->mOuterRadius, param3, this->mOuterRadius);
    G3_PolygonAttr(GX_LIGHTMASK_NONE, GX_POLYGONMODE_MODULATE, 1, 0, 1, FALSE);
    this->func_ov017_020c13b4();
    G3_PolygonAttr(GX_LIGHTMASK_NONE, GX_POLYGONMODE_MODULATE, 2, param2, data_027e09ac->mUnk_014.mUnk_06, TRUE);
    this->func_ov017_020c13b4();
    G3_PopMtx(1);
}

#define MUL_FXUNK(a, b) (fx32)((((s16) (a)) * ((s16) (b)) + 0x800) >> FX32_SHIFT)
#define GX_BEGIN_TRIANGLE_STRIP 3

// https://decomp.me/scratch/6fmQf
void UnkStackStruct_ov017_020c1104::func_ov017_020c13b4() {
    s32 loopIndex;
    s32 loopIndexBlock4;
    
    s32 angleBase;
    s32 angleWall;
    s32 angleBottom;

    s32 step = 0x10000;
    s16 halfStep;
    s32 biasedStep;

    s16 radiusBase;
    s16 radiusWall;
    s16 radiusCorona;
    s16 radiusBottom;

    s32 radiusIdxBase;
    s32 radiusIdxWall;
    s32 radiusIdxCorona;
    s32 radiusIdxBottom;
    
    u16 loopLimitBase;
    u16 loopLimitWall;
    u16 loopLimitCorona;
    u16 loopLimitBottom;

    {
        u16 subdivShift = this->mSubdivShift;
        G3_Begin(GX_BEGIN_TRIANGLE_STRIP);

        halfStep    = (s16)(step >> subdivShift);
        biasedStep  = (s32)halfStep + ((u32)halfStep >> 31);
        angleBase   = (biasedStep << 15) >> 16;

        s16 *pRadii1 = this->mSegmentRadii;

        for (loopIndex = 0; loopIndex <= (s32)(u16)(1 << this->mSubdivShift); loopIndex++) {
            u16 nTop = *(u16*)&this->mSubdivShift;
            loopLimitBase = (u16)(1 << nTop);
            radiusIdxBase = (loopIndex < (s32)loopLimitBase) ? loopIndex : (loopIndex - (s32)loopLimitBase);
            radiusBase = pRadii1[radiusIdxBase];

            s16 sinFx = MUL_FXUNK(SIN((u16)angleBase), radiusBase);
            s16 cosFx = MUL_FXUNK(COS((u16)angleBase), radiusBase);

            G3_Vtx10(0, 0, 0);
            G3_Vtx10(sinFx >> 6, 0, cosFx >> 6);

            u16 nBot = this->mSubdivShift;
            angleBase = (s32)(s16)(angleBase + (s16)(0x10000 >> nBot));
        }
        G3_End();
    }

    {
        s16 heightWall = this->mHeight;
        halfStep       = (s16)(step >> this->mSubdivShift);
        biasedStep     = (s32)halfStep + ((u32)halfStep >> 31);
        angleWall      = (biasedStep << 15) >> 16;

        if (heightWall >= 0x1000) {
            G3_Begin(GX_BEGIN_TRIANGLE_STRIP);
            s16 *pRadii2 = this->mSegmentRadii;

            for (loopIndex = 0; loopIndex <= (s32)(u16)(1 << this->mSubdivShift); loopIndex++) {
                u16 nTop      = *(u16*)&this->mSubdivShift;
                loopLimitWall = (u16)(1 << nTop);
                radiusIdxWall = (loopIndex < (s32)loopLimitWall) ? loopIndex : (loopIndex - (s32)loopLimitWall);
                radiusWall    = pRadii2[radiusIdxWall];

                s16 sinFx = MUL_FXUNK(SIN((u16)angleWall), radiusWall);
                s16 cosFx = MUL_FXUNK(COS((u16)angleWall), radiusWall);

                G3_Vtx10(sinFx >> 6, 0, cosFx >> 6);
                G3_Vtx10(0, 0x3C0, 0);

                u16 nBot  = this->mSubdivShift;
                angleWall = (s32)(s16)(angleWall + (s16)(0x10000 >> nBot));
            }
            G3_End();
            return;
        }
    }

    {
        G3_Begin(GX_BEGIN_TRIANGLE_STRIP);
        s16 *pRadii3 = this->mSegmentRadii;

        for (loopIndex = 0; loopIndex <= (s32)(u16)(1 << this->mSubdivShift); loopIndex++) {
            u16 nTop        = *(u16*)&this->mSubdivShift;
            loopLimitCorona = (u16)(1 << nTop);
            radiusIdxCorona = (loopIndex < (s32)loopLimitCorona) ? loopIndex : (loopIndex - (s32)loopLimitCorona);
            radiusCorona    = pRadii3[radiusIdxCorona];

            s16 sinFx = MUL_FXUNK(SIN((u16)angleWall), radiusCorona);
            s16 cosFx = MUL_FXUNK(COS((u16)angleWall), radiusCorona);

            G3_Vtx10(sinFx >> 6, 0, cosFx >> 6);

            s16 heightCorona = this->mHeight;
            s32 invHeight    = 0x1000 - heightCorona;
            s16 newSin       = (s16)(((s32)sinFx * invHeight + 0x800) >> 12);
            s16 newCos       = (s16)(((s32)cosFx * invHeight + 0x800) >> 12);

            s32 negHeight    = -heightCorona;
            G3_Vtx10(newSin >> 6, (s32)negHeight  << 16 >> 22, newCos >> 6);

            u16 nBot  = this->mSubdivShift;
            angleWall = (s32)(s16)(angleWall + (s16)(0x10000 >> nBot));
        }
        G3_End();
    }

    {
        G3_Begin(GX_BEGIN_TRIANGLE_STRIP);

        halfStep     = (s16)(step >> this->mSubdivShift);
        biasedStep   = (s32)halfStep + ((u32)halfStep >> 31);
        angleBottom  = (biasedStep << 15) >> 16;
        s16 *pRadii4 = this->mSegmentRadii;

        for (loopIndexBlock4 = 0; loopIndexBlock4 <= (s32)(u16)(1 << this->mSubdivShift); loopIndexBlock4++) {
            u16 nTop        = *(u16*)&this->mSubdivShift;
            loopLimitBottom = (u16)(1 << nTop);
            radiusIdxBottom = (loopIndexBlock4 < (s32)loopLimitBottom) ? loopIndexBlock4 : (loopIndexBlock4 - (s32)loopLimitBottom);
            radiusBottom    = pRadii4[radiusIdxBottom];

            s16 sinFx = MUL_FXUNK(SIN((u16)angleBottom), radiusBottom);
            s16 cosFx = MUL_FXUNK(COS((u16)angleBottom), radiusBottom);

            s16 height1   = this->mHeight;
            s32 invHeight = 0x1000 - height1;
            s16 sinScaled = (s16)(((s32)sinFx * invHeight + 0x800) >> 12);
            s16 cosScaled = (s16)(((s32)cosFx * invHeight + 0x800) >> 12);

            s32 negHeight1 = -height1;
            G3_Vtx10(sinScaled >> 6, (s32)negHeight1 << 16 >> 22, cosScaled >> 6);

            s16 height2    = this->mHeight;
            s32 negHeight2 = -height2;
            G3_Vtx10(0, (s32)negHeight2 << 16 >> 22, 0);

            u16 nBot    = this->mSubdivShift;
            angleBottom = (s32)(s16)(angleBottom + (s16)(0x10000 >> nBot));
        }
        G3_End();
    }
}
