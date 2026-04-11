//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTMLV.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTMLV sMapObjectProfileUnkTMLV;

ARM MapObjectProfileUnkTMLV *MapObjectProfileUnkTMLV::GetProfile() {
    return &sMapObjectProfileUnkTMLV;
}

ARM MapObject *MapObjectProfileUnkTMLV::Create() {
    return new(HeapIndex_2) MapObjectUnkTMLV();
}

ARM MapObjectProfileUnkTMLV::MapObjectProfileUnkTMLV() :
    MapObjectProfile(MapObjectId_TMLV) {}

ARM MapObjectUnkTMLV::MapObjectUnkTMLV() {}

ARM void MapObjectUnkTMLV::func_ov084_021604f0(void) {}
ARM void MapObjectUnkTMLV::func_ov084_02160504(void) {}
ARM void MapObjectUnkTMLV::func_ov084_0216054c(void) {}
ARM void MapObjectUnkTMLV::func_ov084_02160560(void) {}
ARM void MapObjectUnkTMLV::func_ov084_021605ac(void) {}

ARM MapObjectUnkTMLV::~MapObjectUnkTMLV() {}
ARM MapObjectProfileUnkTMLV::~MapObjectProfileUnkTMLV() {}
