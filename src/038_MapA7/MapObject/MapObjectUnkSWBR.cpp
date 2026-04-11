//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSWBR.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSWBR sMapObjectProfileUnkSWBR;

ARM MapObjectProfileUnkSWBR *MapObjectProfileUnkSWBR::GetProfile() {
    return &sMapObjectProfileUnkSWBR;
}

ARM MapObject *MapObjectProfileUnkSWBR::Create() {
    return new(HeapIndex_2) MapObjectUnkSWBR();
}

ARM MapObjectProfileUnkSWBR::MapObjectProfileUnkSWBR() :
    MapObjectProfile(MapObjectId_SWBR) {}

ARM MapObjectUnkSWBR::MapObjectUnkSWBR() {}

ARM void MapObjectUnkSWBR::func_ov038_0211e82c(void) {}
ARM void MapObjectUnkSWBR::func_ov038_0211e8d8(void) {}
ARM void MapObjectUnkSWBR::func_ov038_0211e980(void) {}
ARM void MapObjectUnkSWBR::func_ov038_0211e99c(void) {}
ARM void MapObjectUnkSWBR::func_ov038_0211e9bc(void) {}

ARM MapObjectUnkSWBR::~MapObjectUnkSWBR() {}
ARM MapObjectProfileUnkSWBR::~MapObjectProfileUnkSWBR() {}
