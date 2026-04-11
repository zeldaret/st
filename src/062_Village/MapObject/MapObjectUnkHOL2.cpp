//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkHOL2.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkHOL2 sMapObjectProfileUnkHOL2;

ARM MapObjectProfileUnkHOL2 *MapObjectProfileUnkHOL2::GetProfile() {
    return &sMapObjectProfileUnkHOL2;
}

ARM MapObject *MapObjectProfileUnkHOL2::Create() {
    return new(HeapIndex_2) MapObjectUnkHOL2();
}

ARM MapObjectProfileUnkHOL2::MapObjectProfileUnkHOL2() :
    MapObjectProfile(MapObjectId_HOL2) {}

ARM MapObjectUnkHOL2::MapObjectUnkHOL2() {}

ARM void MapObjectUnkHOL2::func_ov062_0215b660(void) {}
ARM void MapObjectUnkHOL2::func_ov062_0215b6e4(void) {}
ARM void MapObjectUnkHOL2::func_ov062_0215b784(void) {}
ARM void MapObjectUnkHOL2::func_ov062_0215b798(void) {}

ARM MapObjectUnkHOL2::~MapObjectUnkHOL2() {}
ARM MapObjectProfileUnkHOL2::~MapObjectProfileUnkHOL2() {}
