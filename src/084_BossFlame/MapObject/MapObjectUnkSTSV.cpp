//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSTSV.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSTSV sMapObjectProfileUnkSTSV;

ARM MapObjectProfileUnkSTSV *MapObjectProfileUnkSTSV::GetProfile() {
    return &sMapObjectProfileUnkSTSV;
}

ARM MapObject *MapObjectProfileUnkSTSV::Create() {
    return new(HeapIndex_2) MapObjectUnkSTSV();
}

ARM MapObjectProfileUnkSTSV::MapObjectProfileUnkSTSV() :
    MapObjectProfile(MapObjectId_STSV) {}

ARM MapObjectUnkSTSV::MapObjectUnkSTSV() {}

ARM void MapObjectUnkSTSV::func_ov084_021606e4(void) {}
ARM void MapObjectUnkSTSV::func_ov084_02160738(void) {}

ARM MapObjectUnkSTSV::~MapObjectUnkSTSV() {}
ARM MapObjectProfileUnkSTSV::~MapObjectProfileUnkSTSV() {}
