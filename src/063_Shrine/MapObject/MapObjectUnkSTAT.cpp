#include "MapObject/MapObjectUnkSTAT.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "System/Random.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "flags.h"
#include "math.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "profile.hpp"

extern "C" unk32 func_02039d60(f32, unk32);
extern "C" f32 func_0203ab58(unk32, f32);
extern "C" f32 func_0203ad88(f32, unk32);
extern "C" f32 func_02039f04(unk32);
extern "C" fx32 func_01ffb428(unk32, unk32);
extern "C" unk32 func_02016b8c(VecFx32 *, VecFx32 *, unk32, UnkAngleStruct, u16, unk32);

// Overlay 0
struct UnkStruct_ov000_02077590 {
    /* 00 */ s16 mUnk_00;
    /* 02 */ s16 mUnk_02;
    /* 04 */ s16 mUnk_04;
    /* 06 */ s16 mUnk_06;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ VecFx32 mUnk_0C;
    /* 18 */ u16 mUnk_18;
    /* 1A */ u16 mUnk_1A;
    /* 1C */ u16 mUnk_1C;
    /* 1E */ u16 mUnk_1E;
};

extern "C" UnkStruct_ov000_02077590 *func_ov000_02077590(unk32);

DECL_PROFILE(MapObjectProfileUnkSTAT);
unk32 data_ov063_02164508[3]; // Is probably part of the profile?

MapObject *MapObjectProfileUnkSTAT::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkSTAT();
}

MapObjectProfileUnkSTAT::MapObjectProfileUnkSTAT() :
    MapObjectProfileUnkSTAT_Base(MapObjectId_STAT, MapObjectId_STAT) {
    mUnk_D4.mUnk_08 = 0x7007;
    VecFx32_Init(0, 0, 0, &mUnk_D4.mUnk_0C);
    mUnk_D4.mUnk_18.x = 0x800;
    mUnk_D4.mUnk_18.y = 0x1000;

    mUnk_06 = -1;
    UNSET_FLAG2(mUnk_1E, 0);
}

MapObjectUnkSTAT::MapObjectUnkSTAT() :
    mUnk_40(G3d_GetModelPtr(GET_PROFILE(MapObjectProfileUnkSTAT)->mUnk_20.mUnk_50)),
    mUnk_48(1),
    mUnk_4C(4),
    mUnk_50(-1),
    mUnk_54(0x8000),
    mUnk_58(500),
    mUnk_5A(0),
    mUnk_5C(0),
    mUnk_60(0),
    mUnk_64(0),
    mUnk_68(0) {
    mUnk_10 = GET_PROFILE_D4(MapObjectProfileUnkSTAT);
}

bool MapObjectUnkSTAT::vfunc_00(void) {
    unk32 val;
    switch (mUnk_20.mParams[0]) {
        case 0:
            val = 0;
            break;
        default:
            val = 1;
            break;
    }
    this->func_ov063_0215fc40(val);

    if (mUnk_20.mParams[2] == 1) {
        mPos.x += FLOAT_TO_FX32(.5f);
    }

    return true;
}

void MapObjectUnkSTAT::vfunc_08(void) {
    if (mUnk_20.mParams[1]) {
        mUnk_54 = func_01ffb428(mUnk_20.mParams[1] << 0xC, 0xA000);
    }

    switch (mUnk_4C) {
        case 1:
            this->func_ov063_0215f7ac();
            break;
        case 3:
            if (!this->func_ov063_0215fce0()) {
                this->func_ov063_0215fc40(1);
            }
            break;
        case 0:
        case 2:
        default:
            break;
    }

    if (mUnk_5A < mUnk_5C) {
        mUnk_5A++;
    }
}

void MapObjectUnkSTAT::vfunc_0C(void) {
    this->vfunc_08();
}

void MapObjectUnkSTAT::vfunc_14(void) {
    VecFx32 vec;
    VecFx32_Init(mPos.x + mUnk_60, mPos.y + mUnk_64, mPos.z + mUnk_68, &vec);
    mUnk_40.func_01ffc6d4(mAngleStruct, &vec);
}

void MapObjectUnkSTAT::func_ov063_0215f7ac(void) {
    if (!this->func_ov000_0209d29c(0) || this->func_ov000_0209d29c(1)) {
        return;
    }

    if (mUnk_50 != -1) {
        if (data_027e09b8->func_ov000_020732ec(mUnk_50) == 0) {
            this->func_ov000_0209d2c4(0, 0);
            this->func_ov063_0215fc40(3);
        }

        if (mUnk_5A == 35) {
            VecFx32 vec = mPos;

            data_027e0cec->func_ov000_0209feac(0x87D, &vec, 4, 0, 0);
            data_027e0cec->func_ov000_0209feac(0x821, &vec, 4, 0, 0);
            data_027e09a8->func_ov000_02071b30(0x127, &vec, 0);
        }

        u16 counter = mUnk_5A;
        if (30 < counter && counter < 50) {
            u32 randomVal  = gRandom.Next32(0x15);
            s32 gRandomVal = ((u32 *) gRandom.mRandomValue)[0];
            func_02039d60(func_02039f04(randomVal - 10) * 0.004f, 0);

            fx32 z;
            // if (((s32) gRandom.mRandomValue[0]) >= 0) {
            // bls on gRandomVal (u32)
            if (gRandomVal >= 0) {
                z = func_0203ab58(0x3F000000, func_02039f04(gRandom.Next32(0x15) - 10) * 0.004f * 4096.f);
            } else {
                z = func_0203ad88(func_02039f04(gRandom.Next32(0x15) - 10) * 0.004f * 4096.f, 0x3F000000);
            }

            func_02039d60(func_02039f04(gRandom.Next32(0x15) - 10) * 0.004f, 0);
            gRandomVal = ((u32 *) gRandom.mRandomValue)[0];

            fx32 x;
            if (gRandomVal >= 0) {
                x = func_0203ab58(0x3F000000, func_02039f04(gRandom.Next32(0x15) - 10) * 0.004f * 4096.f);
            } else {
                x = func_0203ad88(func_02039f04(gRandom.Next32(0x15) - 10) * 0.004f * 4096.f, 0x3F000000);
            }

            VecFx32_Init(x, 0, z, (VecFx32 *) &mUnk_60);
        }
    } else {
        if (this->func_ov063_0215fce0()) {
            UnkStackStruct1 stackStruct;
            func_ov000_02072fd0(&stackStruct);
            stackStruct.mUnk_08 = 0x3C;
            stackStruct.mUnk_00 = 0x80;
            stackStruct.mUnk_3A = 7;
            stackStruct.mUnk_3B = 7;

            UnkStruct_ov000_02077590 *res1 = func_ov000_02077590(1);

            stackStruct.mUnk_18 = res1->mUnk_00;
            stackStruct.mUnk_1A = res1->mUnk_02;
            stackStruct.mUnk_1C = res1->mUnk_04;
            stackStruct.mUnk_1E = res1->mUnk_06;
            stackStruct.mUnk_20 = res1->mUnk_08;
            stackStruct.mUnk_24 = res1->mUnk_0C;
            stackStruct.mUnk_30 = res1->mUnk_18;
            stackStruct.mUnk_32 = res1->mUnk_1A;
            stackStruct.mUnk_34 = res1->mUnk_1C;
            stackStruct.mUnk_36 = res1->mUnk_1E;
            stackStruct.mUnk_38 |= 0x80;
            VecFx32_Copy(&mPos, &stackStruct.mUnk_0C);

            mUnk_50 = data_027e09b8->func_ov000_02073388(&stackStruct, 0);
            mUnk_5C = -1;
            mUnk_5A = 0;
            data_027e09a8->func_ov000_02071bd4(0x126, &mPos, 0);
            return;
        }
    }
}

void MapObjectUnkSTAT::func_ov063_0215fc40(unk32 param1) {
    mUnk_4C = param1;
    mUnk_5C = -1;
    mUnk_5A = 0;
    mUnk_60 = 0;
    mUnk_64 = 0;
    mUnk_68 = 0;

    switch (param1) {
        case 0:
            this->mUnk_50 = -1;
            break;
        case 1:
            this->mUnk_50 = -1;
            break;
    }
}

unk32 MapObjectUnkSTAT::func_ov063_0215fce0(void) {
    return func_02016b8c(&mPos, data_027e0ce0->func_01fff148(0), mUnk_54, mAngleStruct, mUnk_58, 1);
}

MapObjectUnkSTAT::~MapObjectUnkSTAT() {}
MapObjectProfileUnkSTAT::~MapObjectProfileUnkSTAT() {}
