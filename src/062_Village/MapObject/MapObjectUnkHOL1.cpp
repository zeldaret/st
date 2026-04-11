//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkHOL1.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkHOL1 sMapObjectProfileUnkHOL1;

ARM MapObjectProfileUnkHOL1 *MapObjectProfileUnkHOL1::GetProfile() {
    return &sMapObjectProfileUnkHOL1;
}

ARM MapObject *MapObjectProfileUnkHOL1::Create() {
    return new(HeapIndex_2) MapObjectUnkHOL1();
}

ARM MapObjectProfileUnkHOL1::MapObjectProfileUnkHOL1() :
    MapObjectProfile(MapObjectId_HOL1) {}

ARM MapObjectUnkHOL1::MapObjectUnkHOL1() {}

ARM void MapObjectUnkHOL1::func_ov062_0215ba3c(void) {}
ARM void MapObjectUnkHOL1::func_ov062_0215ba8c(void) {}
ARM void MapObjectUnkHOL1::func_ov062_0215ba94(void) {}

ARM MapObjectUnkHOL1::~MapObjectUnkHOL1() {}
ARM MapObjectProfileUnkHOL1::~MapObjectProfileUnkHOL1() {}
