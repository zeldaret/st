//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkHOL0.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkHOL0 sMapObjectProfileUnkHOL0;

ARM MapObjectProfileUnkHOL0 *MapObjectProfileUnkHOL0::GetProfile() {
    return &sMapObjectProfileUnkHOL0;
}

ARM MapObject *MapObjectProfileUnkHOL0::Create() {
    return new(HeapIndex_2) MapObjectUnkHOL0();
}

ARM MapObjectProfileUnkHOL0::MapObjectProfileUnkHOL0() :
    MapObjectProfile(MapObjectId_HOL0) {}

ARM MapObjectUnkHOL0::MapObjectUnkHOL0() {}

ARM void MapObjectUnkHOL0::func_ov062_0215b8e8(void) {}
ARM void MapObjectUnkHOL0::func_ov062_0215b938(void) {}
ARM void MapObjectUnkHOL0::func_ov062_0215b940(void) {}

ARM MapObjectUnkHOL0::~MapObjectUnkHOL0() {}
ARM MapObjectProfileUnkHOL0::~MapObjectProfileUnkHOL0() {}
