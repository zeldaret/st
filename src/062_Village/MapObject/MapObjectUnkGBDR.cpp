//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkGBDR.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkGBDR sMapObjectProfileUnkGBDR;

ARM MapObjectProfileUnkGBDR *MapObjectProfileUnkGBDR::GetProfile() {
    return &sMapObjectProfileUnkGBDR;
}

ARM MapObject *MapObjectProfileUnkGBDR::Create() {
    return new(HeapIndex_2) MapObjectUnkGBDR();
}

ARM MapObjectProfileUnkGBDR::MapObjectProfileUnkGBDR() :
    MapObjectProfile(MapObjectId_GBDR) {}

ARM MapObjectUnkGBDR::MapObjectUnkGBDR() {}

ARM void MapObjectUnkGBDR::func_ov062_0215be70(void) {}
ARM void MapObjectUnkGBDR::func_ov062_0215bfc8(void) {}

ARM MapObjectUnkGBDR::~MapObjectUnkGBDR() {}
ARM MapObjectProfileUnkGBDR::~MapObjectProfileUnkGBDR() {}
