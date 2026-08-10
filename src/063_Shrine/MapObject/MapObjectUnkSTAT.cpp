//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSTAT.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "System/SysNew.hpp"
#include "flags.h"
#include "nitro/math.h"

extern MapObject_10 data_ov063_021644e4;

DECL_PROFILE(MapObjectProfileUnkSTAT);

MapObject *MapObjectProfileUnkSTAT::Create() {
    return new(HeapIndex_2) MapObjectUnkSTAT();
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

bool MapObjectUnkSTAT::vfunc_00(void) {}
void MapObjectUnkSTAT::vfunc_08(void) {}
void MapObjectUnkSTAT::vfunc_0C(void) {}
void MapObjectUnkSTAT::vfunc_14(void) {}

void MapObjectUnkSTAT::func_ov063_0215f7ac(void) {}
void MapObjectUnkSTAT::func_ov063_0215fc40(void) {}
void MapObjectUnkSTAT::func_ov063_0215fce0(void) {}

MapObjectUnkSTAT::~MapObjectUnkSTAT() {}
MapObjectProfileUnkSTAT::~MapObjectProfileUnkSTAT() {}
