//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkBAPL.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkBAPL sMapObjectProfileUnkBAPL;

ARM MapObjectProfileUnkBAPL *MapObjectProfileUnkBAPL::GetProfile() {
    return &sMapObjectProfileUnkBAPL;
}

ARM MapObject *MapObjectProfileUnkBAPL::Create() {
    return new(HeapIndex_2) MapObjectUnkBAPL();
}

ARM MapObjectProfileUnkBAPL::MapObjectProfileUnkBAPL() :
    MapObjectProfile(MapObjectId_BAPL) {}

ARM MapObjectUnkBAPL::MapObjectUnkBAPL() {}

ARM void MapObjectUnkBAPL::func_ov021_020f49f4(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f4b4c(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f4ba0(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f4c18(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f4c58(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f4c5c(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f4c60(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f4c64(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f4c90(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f4c9c(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f4d0c(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f4d3c(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f4d78(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f4dc0(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f4e00(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f4e3c(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f4e68(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f505c(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f5268(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f5490(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f56b4(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f5868(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f58a4(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f58f0(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f5900(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f591c(void) {}
ARM void MapObjectUnkBAPL::func_ov021_020f59d0(void) {}

ARM MapObjectUnkBAPL::~MapObjectUnkBAPL() {}
ARM MapObjectProfileUnkBAPL::~MapObjectProfileUnkBAPL() {}
