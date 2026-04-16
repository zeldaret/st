#include "MapObject/MapObjectProfile.hpp"
#include "MapObject/MapObject.hpp"

extern "C" {
void func_02015ea8(u32 resourceId, void *);
}

ARM void MapObject_20::func_ov000_0209c7c8() {}
ARM unk32 MapObjectProfile::func_ov000_0209c820() {}
ARM MapObjectProfile::MapObjectProfile(MapObjectId mapObjId) {}
ARM MapObjectProfile::~MapObjectProfile() {}
ARM void MapObjectProfile::vfunc_04() {}
ARM unk32 MapObjectProfile::func_ov000_0209c8e4(MapObject_20 *param1) {}
ARM void MapObjectProfile::func_ov000_0209c8ec() {}
ARM void MapObjectProfile::func_ov000_0209c95c() {}
ARM void MapObjectProfile::func_ov000_0209c970() {}
ARM void MapObjectProfile::vfunc_08() {}
ARM void MapObjectProfile::vfunc_0C() {}
ARM void MapObjectProfile::vfunc_10() {}

ARM MapObjectProfile_Derived2::MapObjectProfile_Derived2(MapObjectId mapObjId1, MapObjectId mapObjId2) :
    MapObjectProfile(mapObjId1),
    mUnk_20(mapObjId2) {}
ARM MapObjectProfile_Derived2::~MapObjectProfile_Derived2() {}
ARM void MapObjectProfile_Derived2::vfunc_04() {}
ARM void MapObjectProfile_Derived2::vfunc_08() {}
ARM void MapObjectProfile_Derived2::vfunc_0C() {}
ARM void MapObjectProfile_Derived2::vfunc_10() {}

ARM MapObjectProfile_Derived3::MapObjectProfile_Derived3(MapObjectId mapObjId1, MapObjectId mapObjId2) :
    MapObjectProfile(mapObjId1) {}
ARM void MapObjectProfile_Derived3::vfunc_04() {}
ARM void MapObjectProfile_Derived3::vfunc_08() {}

ARM MapObjectProfile_Derived4::MapObjectProfile_Derived4(MapObjectId mapObjId1, MapObjectId mapObjId2) :
    MapObjectProfile_Derived2(mapObjId1, mapObjId2) {}
ARM void MapObjectProfile_Derived4::func_ov000_0209cb0c() {}
ARM void MapObjectProfile_Derived4::vfunc_08() {}
ARM void MapObjectProfile_Derived4::vfunc_0C() {}

ARM MapObjectProfile_Derived1::MapObjectProfile_Derived1(MapObjectId mapObjId, unk32 param2, unk32 param3) :
    MapObjectProfile(mapObjId) {}
ARM void MapObjectProfile_Derived1::vfunc_04() {}
ARM MapObjectProfile_Derived2_20 *MapObjectProfile_Derived1::vfunc_1C(unk32 param1) {}
ARM MapObjectProfile_Derived1::~MapObjectProfile_Derived1() {}
ARM void MapObjectProfile_Derived1::func_ov000_0209ccd8(unk32 param1, u32 param2) {}
ARM void MapObjectProfile_Derived1::vfunc_08() {}
ARM void MapObjectProfile_Derived1::vfunc_0C() {}
ARM void MapObjectProfile_Derived1::vfunc_10() {}

ARM MapObjectProfile_Derived2_20::MapObjectProfile_Derived2_20(MapObjectId mapObjId2) :
    MapObjectProfile_Derived2_20_Base("MapObj", &mUnk_94, &mUnk_94, &mUnk_94, 0, 0),
    mUnk_94(0),
    mUnk_98(0),
    mUnk_B0(0),
    mUnk_B1(0) {
    func_02015ea8(mapObjId2, &this->mUnk_94);
}

ARM MapObjectProfile_Derived2_20::~MapObjectProfile_Derived2_20() {
    this->func_ov000_020589e4();
    this->func_ov000_0209cfac();
}

ARM void MapObjectProfile_Derived2_20::func_ov000_0209cef0() {}
ARM void MapObjectProfile_Derived2_20::func_ov000_0209cfac() {}
ARM void MapObjectProfile_Derived2_20::func_ov000_0209cfdc() {}
