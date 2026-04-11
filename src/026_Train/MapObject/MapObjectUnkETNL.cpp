//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkETNL.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkETNL sMapObjectProfileUnkETNL;

ARM MapObjectProfileUnkETNL *MapObjectProfileUnkETNL::GetProfile() {
    return &sMapObjectProfileUnkETNL;
}

ARM MapObject *MapObjectProfileUnkETNL::Create() {
    return new(HeapIndex_2) MapObjectUnkETNL();
}

ARM MapObjectProfileUnkETNL::MapObjectProfileUnkETNL() :
    MapObjectProfile(MapObjectId_ETNL) {}

ARM MapObjectUnkETNL::MapObjectUnkETNL() {}

ARM void MapObjectUnkETNL::func_ov026_0210ac24(void) {}
ARM void MapObjectUnkETNL::func_ov026_0210ac7c(void) {}
ARM void MapObjectUnkETNL::func_ov026_0210ad44(void) {}
ARM void MapObjectUnkETNL::func_ov026_0210ad4c(void) {}
ARM void MapObjectUnkETNL::func_ov026_0210ad54(void) {}
ARM void MapObjectUnkETNL::func_ov026_0210ad5c(void) {}
ARM void MapObjectUnkETNL::func_ov026_0210adac(void) {}
ARM void MapObjectUnkETNL::func_ov026_0210ae10(void) {}
ARM void MapObjectUnkETNL::func_ov026_0210ae18(void) {}

ARM MapObjectUnkETNL::~MapObjectUnkETNL() {}
ARM MapObjectProfileUnkETNL::~MapObjectProfileUnkETNL() {}
