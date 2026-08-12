//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSTAT.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "System/SysNew.hpp"
#include "flags.h"
#include "nitro/math.h"

extern MapObject_10 data_ov063_021644e4;

extern "C" fx32 func_01ffb428(unk32, unk32);

DECL_PROFILE(MapObjectProfileUnkSTAT);

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
    mUnk_10 = &data_ov063_021644e4;
}

bool MapObjectUnkSTAT::vfunc_00(void) {
    this->func_ov063_0215fc40((bool) mUnk_20.mParams[0]);

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
                this->func_ov063_0215fc40(true);
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
    mUnk_40.func_01ffc6d4(mUnk_14_AngleStruct, &vec);
}

void MapObjectUnkSTAT::func_ov063_0215f7ac(void) {}
void MapObjectUnkSTAT::func_ov063_0215fc40(bool param1) {}
unk32 MapObjectUnkSTAT::func_ov063_0215fce0(void) {}

MapObjectUnkSTAT::~MapObjectUnkSTAT() {}
MapObjectProfileUnkSTAT::~MapObjectProfileUnkSTAT() {}
