//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkHOUS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkHOUS sMapObjectProfileUnkHOUS;

ARM MapObjectProfileUnkHOUS *MapObjectProfileUnkHOUS::GetProfile() {
    return &sMapObjectProfileUnkHOUS;
}

ARM MapObject *MapObjectProfileUnkHOUS::Create() {
    return new(HeapIndex_2) MapObjectUnkHOUS();
}

ARM MapObjectProfileUnkHOUS::MapObjectProfileUnkHOUS() :
    MapObjectProfile(MapObjectId_HOUS) {}

ARM MapObjectUnkHOUS::MapObjectUnkHOUS() {}

ARM void MapObjectUnkHOUS::func_ov058_0214f160(void) {}
ARM void MapObjectUnkHOUS::func_ov058_0214f52c(void) {}

ARM MapObjectUnkHOUS::~MapObjectUnkHOUS() {}
ARM MapObjectProfileUnkHOUS::~MapObjectProfileUnkHOUS() {}
