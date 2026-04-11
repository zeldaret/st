//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkETUS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkETUS sMapObjectProfileUnkETUS;

ARM MapObjectProfileUnkETUS *MapObjectProfileUnkETUS::GetProfile() {
    return &sMapObjectProfileUnkETUS;
}

ARM MapObject *MapObjectProfileUnkETUS::Create() {
    return new(HeapIndex_2) MapObjectUnkETUS();
}

ARM MapObjectProfileUnkETUS::MapObjectProfileUnkETUS() :
    MapObjectProfile(MapObjectId_ETUS) {}

ARM MapObjectUnkETUS::MapObjectUnkETUS() {}

ARM void MapObjectUnkETUS::func_ov091_021686a4(void) {}
ARM void MapObjectUnkETUS::func_ov091_0216872c(void) {}
ARM void MapObjectUnkETUS::func_ov091_02168730(void) {}
ARM void MapObjectUnkETUS::func_ov091_02168744(void) {}
ARM void MapObjectUnkETUS::func_ov091_02168784(void) {}

ARM MapObjectUnkETUS::~MapObjectUnkETUS() {}
ARM MapObjectProfileUnkETUS::~MapObjectProfileUnkETUS() {}
