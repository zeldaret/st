#include "MapObject/MapObjectUnkDRCK.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkDRCK);

ARM MapObject *MapObjectProfileUnkDRCK::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkDRCK();
}

ARM MapObjectProfileUnkDRCK::MapObjectProfileUnkDRCK() :
    MapObjectProfile_Derived1(MapObjectId_DRCK, -1, 0) {
    this->mUnk_06 = 2;
    this->mUnk_1E |= 0x01;
    this->mUnk_0C = 0x399A;
}

ARM MapObjectUnkDRCK::MapObjectUnkDRCK() :
    mUnk_9C(1),
    mUnk_A0(0) {
    this->mUnk_8F = true;
    SET_FLAG(this->mFlags, MapObjFlag_9);
    this->mUnk_18[0] = 0x0E;
    this->func_ov000_0209d2c4(1, 1);
}

ARM void MapObjectUnkDRCK::vfunc2_1C(void) {}
ARM bool MapObjectUnkDRCK::vfunc_00(void) {}
ARM void MapObjectUnkDRCK::vfunc_08(void) {}
ARM void MapObjectUnkDRCK::vfunc_18(s8 *param1, s8 param2) {}
ARM void MapObjectUnkDRCK::vfunc_14(void) {}
ARM void MapObjectUnkDRCK::vfunc_5C(unk32 param1, unk32 param2) {}
ARM void MapObjectUnkDRCK::vfunc2_14(void) {}
ARM void MapObjectUnkDRCK::func_ov031_020ffde4(void) {}
ARM unk32 MapObjectUnkDRCK::vfunc_28(void) {}
ARM bool MapObjectUnkDRCK::vfunc_64(void) {}
ARM bool MapObjectUnkDRCK::vfunc_68(void) {}
ARM bool MapObjectUnkDRCK::vfunc_6C(void) {}
ARM void MapObjectUnkDRCK::vfunc_74(void) {}
ARM void MapObjectUnkDRCK::vfunc_7C(void) {}
ARM void MapObjectUnkDRCK::vfunc_78(void) {}
ARM void MapObjectUnkDRCK::vfunc2_10(void) {}
ARM void MapObjectUnkDRCK::vfunc_40(void) {}
ARM void MapObjectUnkDRCK::vfunc_44(void) {}
ARM void MapObjectUnkDRCK::vfunc_48(void) {}
ARM void MapObjectUnkDRCK::vfunc_4C(void) {}
ARM void MapObjectUnkDRCK::vfunc2_18(void) {}
