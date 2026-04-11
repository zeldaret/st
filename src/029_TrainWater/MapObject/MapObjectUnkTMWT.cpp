//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTMWT.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTMWT sMapObjectProfileUnkTMWT;

ARM MapObjectProfileUnkTMWT *MapObjectProfileUnkTMWT::GetProfile() {
    return &sMapObjectProfileUnkTMWT;
}

ARM MapObject *MapObjectProfileUnkTMWT::Create() {
    return new(HeapIndex_2) MapObjectUnkTMWT();
}

ARM MapObjectProfileUnkTMWT::MapObjectProfileUnkTMWT() :
    MapObjectProfile(MapObjectId_TMWT) {}

ARM MapObjectUnkTMWT::MapObjectUnkTMWT() {}

ARM void MapObjectUnkTMWT::func_ov029_021420c0(void) {}
ARM void MapObjectUnkTMWT::func_ov029_021421a8(void) {}
ARM void MapObjectUnkTMWT::func_ov029_021421c8(void) {}
ARM void MapObjectUnkTMWT::func_ov029_021421e8(void) {}

ARM MapObjectUnkTMWT::~MapObjectUnkTMWT() {}
ARM MapObjectProfileUnkTMWT::~MapObjectProfileUnkTMWT() {}
