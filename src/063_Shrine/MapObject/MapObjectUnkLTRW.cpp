#include "MapObject/MapObjectUnkLTRW.hpp"
#include "Actor/Actor_Derived1.hpp"
#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "flags.h"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nns/g3d/g3d.h"
#include "profile.hpp"

// Overlay 31
extern "C" void func_ov031_020e0f30(ActorRef);

struct UnkStruct_data_ov063_021639c4 {
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ VecFx32 vec;

    UnkStruct_data_ov063_021639c4(unk32 a, unk32 b, unk32 c) :
        mUnk_04(b),
        mUnk_08(c),
        mUnk_00(a) {
        VecFx32_Init(0, 0, 0, &vec);
    }
};

extern MapObject_10 data_ov063_021647dc;

const unk32 param_data_ov063_021639c4 = 0x10002;
const UnkStruct_data_ov063_021639c4 data_ov063_021639c4(param_data_ov063_021639c4 + 7, param_data_ov063_021639c4 + 4,
                                                        param_data_ov063_021639c4);

DECL_PROFILE(MapObjectProfileUnkLTRW);

MapObject *MapObjectProfileUnkLTRW::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkLTRW();
}

MapObjectProfileUnkLTRW::MapObjectProfileUnkLTRW() :
    MapObjectProfileUnkLTRW_Base(MapObjectId_LTRW, MapObjectId_LTRW) {
    mUnk_D4.mUnk_08 = 0x04007007;
    VecFx32_Init(data_ov063_021639c4.vec.x - 0x99A, data_ov063_021639c4.vec.y, data_ov063_021639c4.vec.z - 0x666,
                 &mUnk_D4.mUnk_0C);
    VecFx32_Init(data_ov063_021639c4.vec.x + 0x99A, data_ov063_021639c4.vec.y + 0x1333, data_ov063_021639c4.vec.z + 0x666,
                 &mUnk_D4.mUnk_18);
    mUnk_06 = 1;
    mUnk_0C = 0x1333;
}

MapObjectUnkLTRW::MapObjectUnkLTRW() :
    mUnk_40(G3d_GetModelPtr(GET_PROFILE(MapObjectProfileUnkLTRW)->mUnk_20.mUnk_50)),
    mUnk_A0(1),
    mUnk_A4(0),
    mUnk_A6(0),
    mUnk_A8() {}

bool MapObjectUnkLTRW::vfunc_00() {
    mPos.x -= FLOAT_TO_FX32(.5f);
    mPos.z -= FLOAT_TO_FX32(.5f);
    mUnk_10 = &data_ov063_021647dc;
    SET_FLAG(mFlags, MapObjFlag_9);
    mUnk_18[0]       = 0x10;
    mUnk_A8.mUnk_04h = mUnk_20.mUnk_08[0];
    mUnk_A8.mUnk_06  = mUnk_20.mUnk_0A[0];
    this->func_ov063_02160d18(0);
    return true;
}

void MapObjectUnkLTRW::vfunc_08() {
    if (mUnk_A4 < mUnk_A6) {
        mUnk_A4++;
    }
}

void MapObjectUnkLTRW::vfunc_14() {
    mUnk_40.vfunc_18(&mPos);
}

bool MapObjectUnkLTRW::vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3) {
    if (param2 == 0xD) {
        func_ov031_020e0f30(param1);
        return false;
    }
    return true;
}

unk32 MapObjectUnkLTRW::vfunc_28(unk32 param1) {
    unk16 *plocal_60;
    unk16 local_60;
    plocal_60 = (unk16 *) &local_60;

    MapObject::func_ov000_0209d22c(plocal_60, this, param1);

    unk16 val = plocal_60[0];

    ActorUnk_vfunc_B0 varActor = ActorUnk_vfunc_B0();

    if ((val <= 0x4000) && (val >= -0x4000)) {
        varActor.mUnk_0C = mUnk_20.mUnk_10;
        varActor.mUnk_14 = 2;
        varActor.mUnk_28 = (int) (long) this;
        varActor.mUnk_32 = 3;
        VecFx32_Copy(&mPos, &varActor.mUnk_34);
        varActor.mUnk_04 = &mUnk_A8;
    } else {
        varActor.mUnk_0C = data_ov063_021639c4.mUnk_08;
        varActor.mUnk_14 = 0;
    }

    data_027e09b8->func_ov000_02073470(&varActor, 0);
    return 0;
}

void MapObjectUnkLTRW::func_ov063_02160d18(unk32 param1) {
    mUnk_A0 = param1;
    mUnk_A6 = -1;
    mUnk_A4 = 0;
}

void UnkStruct_ov063_021639e4::vfunc2_04() {
    data_027e0cd8->func_ov000_02081d7c(mUnk_06, mUnk_04h, 1);
}
