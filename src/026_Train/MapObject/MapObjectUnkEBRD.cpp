//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkEBRD.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkEBRD sMapObjectProfileUnkEBRD;

ARM MapObjectProfileUnkEBRD *MapObjectProfileUnkEBRD::GetProfile() {
    return &sMapObjectProfileUnkEBRD;
}

ARM MapObject *MapObjectProfileUnkEBRD::Create() {
    return new(HeapIndex_2) MapObjectUnkEBRD();
}

ARM MapObjectProfileUnkEBRD::MapObjectProfileUnkEBRD() :
    MapObjectProfile(MapObjectId_EBRD) {}

ARM MapObjectUnkEBRD::MapObjectUnkEBRD() {}

ARM void MapObjectUnkEBRD::func_ov026_0210aa20(void) {}
ARM void MapObjectUnkEBRD::func_ov026_0210ab3c(void) {}

ARM MapObjectUnkEBRD::~MapObjectUnkEBRD() {}
ARM MapObjectProfileUnkEBRD::~MapObjectProfileUnkEBRD() {}
