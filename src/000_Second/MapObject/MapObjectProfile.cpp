#include "MapObject/MapObjectProfile.hpp"

#include "Actor/Actor.hpp"
#include "MapObject/MapObject.hpp"
#include "Unknown/UnkMemFuncs.h"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"

extern unk8 data_ov000_020af4d4[];

MapObjectProfile *data_ov000_020b5d3c[MapObjectIndex_Max];
UnkStruct_ov000_020b5d34 data_ov000_020b5d34;

ARM void MapObject_20::func_ov000_0209c790(MapObjectId mapObjId, MapObjectProfile *pProfile) {
    data_ov000_020b5d3c[UnkStruct_ov000_020b5d34::func_ov000_0209c718(mapObjId)] = pProfile;
}

ARM void MapObject_20::func_ov000_0209c7ac(MapObjectId mapObjId) {
    data_ov000_020b5d3c[UnkStruct_ov000_020b5d34::func_ov000_0209c718(mapObjId)] = NULL;
}

ARM void MapObject_20::func_ov000_0209c7c8() {
    this->mUnk_16 = 0;
    this->mUnk_10 = 0;
    MI_CpuFill32(0, this->mUnk_00, sizeof(this->mUnk_00));
    MI_CpuFill16(0, this->mUnk_08, sizeof(this->mUnk_08));
    MI_CpuFill16(0, this->mUnk_0A, sizeof(this->mUnk_0A));
    this->mUnk_14 = -1;
    this->mUnk_17 = 0;
}

ARM unk32 MapObjectProfile::func_ov000_0209c820() {
    return MapObjectIndex_Max;
}

ARM MapObjectProfile::MapObjectProfile(MapObjectId mapObjId) {
    this->mUnk_06   = 1;
    this->mUnk_08   = 0x800;
    this->mUnk_0C   = 0x1333;
    this->mUnk_0E   = -1;
    this->mUnk_0F   = 0;
    this->mMapObjId = mapObjId;
    this->mUnk_14   = 0;
    this->mUnk_18   = 0;
    this->mUnk_1C   = 0;
    this->mUnk_1D   = 0;
    this->mUnk_1E   = 1;

    for (int i = 0; i < ARRAY_LEN(this->mUnk_04); i++) {
        this->mUnk_04[i] = data_ov000_020af4d4[i];
    }

    MapObject_20::func_ov000_0209c790(this->mMapObjId, this);
}

ARM MapObjectProfile::~MapObjectProfile() {
    this->func_ov000_0209c970();
    MapObject_20::func_ov000_0209c7ac(this->mMapObjId);
}

ARM MapObjectProfile_Derived2_20 *MapObjectProfile::vfunc_04() {
    return NULL;
}

ARM unk32 MapObjectProfile::func_ov000_0209c8e4(MapObject_20 *param1) {
    return this->mUnk_0E;
}

ARM void MapObjectProfile::func_ov000_0209c8ec(MapObjectProfile *thisx) {
    if (thisx->mUnk_0F == 0) {
        if (thisx->mUnk_14 != 0) {
            thisx->func_ov000_0209c8ec(data_ov000_020b5d34.GetProfileFromId(thisx->mUnk_14));
        }

        if (thisx->mUnk_18 != 0) {
            data_ov000_020b539c_eur.func_ov000_020974dc(thisx->mUnk_18)->vfunc_08();
        }

        thisx->vfunc_08();
        thisx->mUnk_0F = 2;
    }
}

ARM void MapObjectProfile::func_ov000_0209c95c() {
    this->vfunc_0C();
}

ARM void MapObjectProfile::func_ov000_0209c970() {
    if (this->mUnk_0F == 2) {
        this->vfunc_10();
        this->mUnk_0F = 0;
    }
}

ARM void MapObjectProfile::vfunc_08() {}

ARM void MapObjectProfile::vfunc_0C() {}

ARM void MapObjectProfile::vfunc_10() {}

ARM MapObjectProfile_Derived2::MapObjectProfile_Derived2(MapObjectId mapObjId1, MapObjectId mapObjId2) :
    MapObjectProfile(mapObjId1),
    mUnk_20(mapObjId2) {}

ARM MapObjectProfile_Derived2::~MapObjectProfile_Derived2() {
    this->vfunc_10();
}

ARM MapObjectProfile_Derived2_20 *MapObjectProfile_Derived2::vfunc_04() {
    return &this->mUnk_20;
}

ARM void MapObjectProfile_Derived2::vfunc_08() {
    this->mUnk_20.func_ov000_0209cfdc(0, 0);
    this->mUnk_20.func_ov000_020586b4(0, 0, 0, 0);
    this->mUnk_20.func_ov000_02058ab0();
}

ARM void MapObjectProfile_Derived2::vfunc_0C() {
    if (this->mUnk_20.mUnk_20.mUnk_04 != 0) {
        this->mUnk_20.func_ov000_02058914(0);
    }
}

ARM void MapObjectProfile_Derived2::vfunc_10() {
    this->mUnk_20.func_ov000_020589e4();
}

ARM MapObjectProfile_Derived3::MapObjectProfile_Derived3(MapObjectId mapObjId1, MapObjectId mapObjId2) :
    MapObjectProfile(mapObjId1) {
    this->mUnk_20 = NULL;
    this->mUnk_14 = mapObjId2;
}

ARM MapObjectProfile_Derived2_20 *MapObjectProfile_Derived3::vfunc_04() {
    return this->mUnk_20;
}

ARM void MapObjectProfile_Derived3::vfunc_08() {
    this->mUnk_20 = data_ov000_020b5d34.GetProfileFromId(this->mUnk_14)->vfunc_04();
}

ARM MapObjectProfile_Derived4::MapObjectProfile_Derived4(MapObjectId mapObjId1, MapObjectId mapObjId2) :
    MapObjectProfile_Derived2(mapObjId1, mapObjId2) {}

ARM MapObjectProfile_Derived4::~MapObjectProfile_Derived4() {
    if (this->mUnk_20.mUnk_20.mUnk_04 != 0) {
        this->mUnk_20.func_ov000_020589e4();
    }
}

ARM void MapObjectProfile_Derived4::vfunc_08() {}

ARM void MapObjectProfile_Derived4::vfunc_0C() {}

ARM MapObjectProfile_Derived1::MapObjectProfile_Derived1(MapObjectId mapObjId, unk32 param2, unk32 param3) :
    MapObjectProfile(mapObjId),
    mUnk_60(param3),
    mUnk_64(param2) {
    for (MapObjectProfile_Derived2_20 **ptr = this->mUnk_20; ptr != &this->mUnk_20[ARRAY_LEN(this->mUnk_20)]; ptr++) {
        *ptr = NULL;
    }
}

ARM MapObjectProfile_Derived2_20 *MapObjectProfile_Derived1::vfunc_04() {
    if (this->mUnk_64 >= 0) {
        return this->mUnk_20[this->mUnk_64];
    }

    return NULL;
}

ARM MapObjectProfile_Derived2_20 *MapObjectProfile_Derived1::vfunc_1C(unk32 param1) {
    if (param1 >= 0) {
        return this->mUnk_20[param1];
    }

    return NULL;
}

ARM MapObjectProfile_Derived1::~MapObjectProfile_Derived1() {
    for (MapObjectProfile_Derived2_20 **ptr = this->mUnk_20; ptr != &this->mUnk_20[ARRAY_LEN(this->mUnk_20)]; ptr++) {
        delete *ptr;
    }
}

ARM void MapObjectProfile_Derived1::func_ov000_0209ccd8(unk32 param1, u32 param2) {
    if (this->mUnk_20[param1] == NULL) {
        MapObjectProfile_Derived2_20 *ptr       = new(HeapIndex_1) MapObjectProfile_Derived2_20(param2);
        MapObjectProfile_Derived2_20 **ppUnk_20 = this->mUnk_20;
        ppUnk_20[param1]                        = ptr;
        ppUnk_20[param1]->func_ov000_0209cfdc(0, 0);
        ppUnk_20[param1]->func_ov000_020586b4(0, 0, 0, 0);
        ppUnk_20[param1]->func_ov000_02058ab0();
    }
}

ARM void MapObjectProfile_Derived1::vfunc_08() {
    if (this->mUnk_64 >= 0) {
        this->func_ov000_0209ccd8(this->mUnk_64, this->mUnk_60);
    }
}

ARM void MapObjectProfile_Derived1::vfunc_0C() {
    for (MapObjectProfile_Derived2_20 **ptr = this->mUnk_20; ptr != &this->mUnk_20[ARRAY_LEN(this->mUnk_20)]; ptr++) {
        if (*ptr != NULL && (*ptr)->mUnk_20.mUnk_04 != NULL) {
            (*ptr)->func_ov000_02058914(0);
        }
    }
}

ARM void MapObjectProfile_Derived1::vfunc_10() {
    for (MapObjectProfile_Derived2_20 **ptr = this->mUnk_20; ptr != &this->mUnk_20[ARRAY_LEN(this->mUnk_20)]; ptr++) {
        if (*ptr != NULL) {
            delete *ptr;
            *ptr = NULL;
        }
    }
}
