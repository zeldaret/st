//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkMSCL.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkMSCL sMapObjectProfileUnkMSCL;

ARM MapObjectProfileUnkMSCL *MapObjectProfileUnkMSCL::GetProfile() {
    return &sMapObjectProfileUnkMSCL;
}

ARM MapObject *MapObjectProfileUnkMSCL::Create() {
    return new(HeapIndex_2) MapObjectUnkMSCL();
}

ARM MapObjectProfileUnkMSCL::MapObjectProfileUnkMSCL() :
    MapObjectProfile(MapObjectId_MSCL) {}

ARM MapObjectUnkMSCL::MapObjectUnkMSCL() {}

ARM void MapObjectUnkMSCL::func_ov058_021512c0(void) {}
ARM void MapObjectUnkMSCL::func_ov058_02151350(void) {}
ARM void MapObjectUnkMSCL::func_ov058_0215136c(void) {}
ARM void MapObjectUnkMSCL::func_ov058_02151420(void) {}

ARM MapObjectUnkMSCL::~MapObjectUnkMSCL() {}
ARM MapObjectProfileUnkMSCL::~MapObjectProfileUnkMSCL() {}
