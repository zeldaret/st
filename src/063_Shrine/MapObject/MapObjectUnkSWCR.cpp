#include "MapObject/MapObjectUnkSWCR.hpp"
#include "CommonFuncs.hpp"
#include "MainGame/MiscAdvManager.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "flags.h"
#include "nitro/fx.h"
#include "nitro/math.h"

DECL_PROFILE(MapObjectProfileUnkSWCR);

MapObject *MapObjectProfileUnkSWCR::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkSWCR();
}

MapObjectProfileUnkSWCR::MapObjectProfileUnkSWCR() :
    MapObjectProfileUnkSTAT_Base(MapObjectId_SWCR, MapObjectId_SWCR) {
    mUnk_06 = 0;
    mUnk_06 -= 1;
    UNSET_FLAG2(mUnk_1E, 0);
    mUnk_D4.mUnk_08 = 0x7007;
    VecFx32_Init(0, 0, 0, &mUnk_D4.mUnk_0C);
    mUnk_D4.mUnk_18.x = FX_F32_TO_FX32(0.5f);
    mUnk_D4.mUnk_18.y = FX_F32_TO_FX32(1.2f);
}

// matching
MapObjectUnkSWCR_160::MapObjectUnkSWCR_160(MapObject *param1) :
    mUnk_04(param1) {}

// matching
void MapObjectUnkSWCR_160::vfunc_00(void) {
    ((MapObjectUnkSWCR *) mUnk_04)->func_ov063_0216153c();
}

// matching
void MapObjectUnkSWCR_160::vfunc_04(void) {
    ((MapObjectUnkSWCR *) mUnk_04)->func_ov063_021615c4();
}

// matching
void MapObjectUnkSWCR_160::vfunc_08(void) {
    ((MapObjectUnkSWCR *) mUnk_04)->func_ov063_02161638();
}

void MapObjectUnkSWCR::func_ov063_0216153c(void) {}

// return bool ?
// matching
unk32 MapObjectUnkSWCR::func_ov063_021615c4(void) {
    unk32 has_flag = GET_FLAG2(gpMiscAdvManager->mSongs, 3);
    if (has_flag == 0) {
        return 0;
    }

    if (mUnk_168 == 0) {
        if (this->func_ov000_0209d274(0) < FX_F32_TO_FX32(2.5f)) {
            return 1;
        }
    } else if (mUnk_168 == 5) {
        if (this->func_ov000_0209d274(0) < FX_F32_TO_FX32(2.5f)) {
            return 1;
        }
    }
    return 0;
}

// matching (empty)
void MapObjectUnkSWCR::func_ov063_02161638(void) {}

// matching
MapObjectUnkSWCR::MapObjectUnkSWCR() :
    mUnk_40(G3d_GetModelPtr(GET_PROFILE_20_50(MapObjectProfileUnkSWCR))),
    mUnk_A0(&mUnk_C0, NULL),
    mUnk_E0(&mUnk_100, NULL),
    mUnk_120(&mUnk_140, NULL),
    mUnk_160(this),
    mUnk_168(8),
    mUnk_16C(2),
    mUnk_170(0),
    mUnk_172(0),
    mUnk_174(-1),
    mUnk_178(0),
    mUnk_179(0) {}

bool MapObjectUnkSWCR::Init(void) {}

// matching
void MapObjectUnkSWCR::Setup(void) {
    unk32 ret = func_ov000_02082164(data_027e0cd8);
    if (ret) {
        func_ov031_020d9314(ret, 3, &mUnk_160);
    }
}

void MapObjectUnkSWCR::vfunc_08(void) {}

// matching
void MapObjectUnkSWCR::vfunc_0C(void) {
    this->vfunc_08();
}

void MapObjectUnkSWCR::func_ov063_02161b08(void) {}

// matching
void MapObjectUnkSWCR::vfunc_14(unk32 param1) {
#pragma unused(param1)
    if (mUnk_168 != 5) {
        mUnk_40.vfunc_18(&mPos);
    }
}
