//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkHOF0.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkHOF0 sMapObjectProfileUnkHOF0;

ARM MapObjectProfileUnkHOF0 *MapObjectProfileUnkHOF0::GetProfile() {
    return &sMapObjectProfileUnkHOF0;
}

ARM MapObject *MapObjectProfileUnkHOF0::Create() {
    return new(HeapIndex_2) MapObjectUnkHOF0();
}

ARM MapObjectProfileUnkHOF0::MapObjectProfileUnkHOF0() :
    MapObjectProfile(MapObjectId_HOF0) {}

ARM MapObjectUnkHOF0::MapObjectUnkHOF0() {}

ARM void MapObjectUnkHOF0::func_ov064_0215a0b8(void) {}
ARM void MapObjectUnkHOF0::func_ov064_0215a0c4(void) {}

ARM MapObjectUnkHOF0::~MapObjectUnkHOF0() {}
ARM MapObjectProfileUnkHOF0::~MapObjectProfileUnkHOF0() {}
