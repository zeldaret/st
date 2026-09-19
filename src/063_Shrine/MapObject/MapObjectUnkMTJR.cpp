#include "MapObject/MapObjectUnkMTJR.hpp"
#include "System/Random.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "flags.h"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "profile.hpp"

// Overlay 31
extern "C" void func_ov031_020e0f30(ActorRef);

DECL_PROFILE(MapObjectProfileUnkMTJR);

MapObject *MapObjectProfileUnkMTJR::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkMTJR();
}

MapObjectProfileUnkMTJR::MapObjectProfileUnkMTJR() :
    MapObjectProfileUnkSTAT_Base(MapObjectId_MTJR, MapObjectId_MTJR) {
    mUnk_D4.mUnk_08 = 0x7009;

    VecFx32_Init(0, 0, 0, &mUnk_D4.mUnk_0C);
    mUnk_D4.mUnk_18.x = FLOAT_TO_FX32(0.7f);
    mUnk_D4.mUnk_18.y = FLOAT_TO_FX32(2.4f);

    mUnk_06 = -1;
    UNSET_FLAG2(mUnk_1E, 0x0);
}

MapObjectUnkMTJR::MapObjectUnkMTJR() :
    mUnk_40(G3d_GetModelPtr(GET_PROFILE_20_50(MapObjectProfileUnkMTJR))),
    mUnk_A0(2),
    mUnk_A4(0),
    mUnk_A6(0),
    mUnk_A8(NULL),
    mUnk_AC(-1),
    mUnk_B0(0) {}

bool MapObjectUnkMTJR::vfunc_00() {
    if (this->func_ov000_0209d29c(0)) {
        mPos.x += FLOAT_TO_FX32(.5f);
        mPos.z += FLOAT_TO_FX32(.5f);
        mUnk_10 = GET_PROFILE_D4(MapObjectProfileUnkMTJR);
        mUnk_AC = 0x86F;
        mUnk_B0 = 4;
        mUnk_A8.func_ov000_020a0334();
        this->func_ov063_02161254(0);
        return true;
    }
    return false;
}

void MapObjectUnkMTJR::vfunc_08() {
    if (mUnk_A0 == 0) {
        fx32 tmp_x        = mPos.x - FLOAT_TO_FX32(1.f) + (fx32) gRandom.Next32(0);
        fx32 tmp_y        = mPos.y + (fx32) gRandom.Next32(0x1801);
        fx32 tmp_z        = mPos.z - FLOAT_TO_FX32(1.f) + (fx32) gRandom.Next32(0);
        VecFx32 stack_vec = {tmp_x, tmp_y, tmp_z};
        data_027e0cec->func_ov000_020a0220(&mUnk_A8, &stack_vec);
    }
    if (mUnk_A4 < mUnk_A6) {
        mUnk_A4++;
    }
}

void MapObjectUnkMTJR::vfunc_0C() {
    this->vfunc_08();
}

bool MapObjectUnkMTJR::vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3) {
    // cases (0, 1, 7, 8) and (10, 11) have the same code, but the duplication is needed to match the asm
    switch (param2) {
        case 13:
            this->func_ov063_02161254(1);
            func_ov031_020e0f30(param1);
            break;
        case 0:
        case 1:
        case 7:
        case 8:
            this->func_ov063_02161254(1);
            break;
        case 3:
        case 12:
            this->func_ov063_02161254(1);
            return false;
            break;
        case 10:
        case 11:
            this->func_ov063_02161254(1);
            break;
        case 2:
        case 4:
        case 5:
        case 6:
        case 9:
        default:
            break;
    }
    return true;
}

void MapObjectUnkMTJR::func_ov063_02161254(unk32 param1) {
    mUnk_A0 = param1;
    mUnk_A6 = -1;
    mUnk_A4 = 0;
    if (param1 != 0 && param1 == 1) {
        this->func_ov063_02161288();
    }
}

void MapObjectUnkMTJR::func_ov063_02161288(void) {
    data_027e09a8->func_ov000_02071b30(0xFC, &mPos, 0);
    data_027e09a8->func_ov000_02071eac(&mPos);
    VecFx32 vec = mPos;
    data_027e0cec->func_ov000_0209feac(0xCC17, &vec, 4, 0, 0);
    data_027e0cec->func_ov000_0209feac(0xCC18, &vec, 4, 0, 0);
    data_027e0cec->func_ov000_0209feac(0xCC19, &vec, 4, 0, 0);
    data_027e0cec->func_ov000_0209feac(0xCC1A, &vec, 4, 0, 0);
    this->func_ov000_0209d2c4(1, true);
    UNSET_FLAG(mFlags, 0);
}

void MapObjectUnkMTJR::vfunc_14() {
    this->func_ov000_0209d518(&mPos, 0xD9A, 0xD9A, 0x1F);
    mUnk_40.vfunc_18(&mPos);
}
