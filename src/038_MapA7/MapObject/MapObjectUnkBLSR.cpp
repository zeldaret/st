//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkBLSR.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkBLSR sMapObjectProfileUnkBLSR;

ARM MapObjectProfileUnkBLSR *MapObjectProfileUnkBLSR::GetProfile() {
    return &sMapObjectProfileUnkBLSR;
}

ARM MapObject *MapObjectProfileUnkBLSR::Create() {
    return new(HeapIndex_2) MapObjectUnkBLSR();
}

ARM MapObjectProfileUnkBLSR::MapObjectProfileUnkBLSR() :
    MapObjectProfile(MapObjectId_BLSR) {}

ARM MapObjectUnkBLSR::MapObjectUnkBLSR() {}

ARM void MapObjectUnkBLSR::func_ov038_0211e548(void) {}
ARM void MapObjectUnkBLSR::func_ov038_0211e6a0(void) {}
ARM void MapObjectUnkBLSR::func_ov038_0211e6a4(void) {}
ARM void MapObjectUnkBLSR::func_ov038_0211e6ec(void) {}

ARM MapObjectUnkBLSR::~MapObjectUnkBLSR() {}
ARM MapObjectProfileUnkBLSR::~MapObjectProfileUnkBLSR() {}
