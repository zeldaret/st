#include "MapObject/MapObjectUnkDRDS.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkDRDS);

ARM MapObject *MapObjectProfileUnkDRDS::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkDRDS();
}

ARM MapObjectProfileUnkDRDS::MapObjectProfileUnkDRDS() :
    MapObjectProfile_Derived2(MapObjectId_DRDS, MapObjectId_DRDS) {
    this->mUnk_0E = 1;
    this->mUnk_06 = -1;
    this->mUnk_1E &= ~1;
}

ARM MapObjectUnkDRDS::MapObjectUnkDRDS() {
    // this->mUnk_98 = GetUnkPointer1<MapObjectProfileUnkDRDS>();
    this->mUnk_9C = 1;
    this->mUnk_A0 = 0;
    this->mUnk_A1 = 0;
    this->mUnk_A2 = 0;
    this->mUnk_A3 = 0;
    this->mUnk_A4 = -1;
    this->mUnk_A8 = 0;
    this->mUnk_AC = 0;
    this->mUnk_AE = 0;
    this->mUnk_89 = 1;
}

ARM bool MapObjectUnkDRDS::vfunc_00(void) {}
ARM bool MapObjectUnkDRDS::vfunc_04(void) {}
ARM void MapObjectUnkDRDS::vfunc_38(void) {}
ARM void MapObjectUnkDRDS::vfunc_3C(void) {}
ARM unk16 MapObjectUnkDRDS::vfunc_08(void) {}
ARM unk8 MapObjectUnkDRDS::vfunc_0C(void) {}
ARM void MapObjectUnkDRDS::vfunc_5C(void) {}
ARM void MapObjectUnkDRDS::vfunc_64(void) {}
ARM void MapObjectUnkDRDS::vfunc_68(void) {}
ARM void MapObjectUnkDRDS::vfunc_6C(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fdec8(void) {}
ARM void MapObjectUnkDRDS::vfunc_18(void) {}
ARM void MapObjectUnkDRDS::vfunc_14(void) {}
ARM void MapObjectUnkDRDS::vfunc2_10(void) {}
ARM void MapObjectUnkDRDS::vfunc_74(void) {}
ARM void MapObjectUnkDRDS::vfunc_7C(void) {}
ARM void MapObjectUnkDRDS::vfunc_40(void) {}
ARM void MapObjectUnkDRDS::vfunc_44(void) {}
ARM void MapObjectUnkDRDS::vfunc_48(void) {}
ARM void MapObjectUnkDRDS::vfunc_4C(void) {}
ARM void MapObjectUnkDRDS::vfunc_88(void) {}
ARM void MapObjectUnkDRDS::vfunc_8C(void) {}
ARM void MapObjectUnkDRDS::vfunc_84(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fe5fc(void) {}

ARM MapObjectUnkDRDS::~MapObjectUnkDRDS() {}
ARM MapObjectProfileUnkDRDS::~MapObjectProfileUnkDRDS() {}

ARM void MapObjectUnkDRDS::vfunc2_08() {}
ARM void MapObjectUnkDRDS::vfunc2_04() {}
