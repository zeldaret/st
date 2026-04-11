//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkHOF1.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkHOF1 sMapObjectProfileUnkHOF1;

ARM MapObjectProfileUnkHOF1 *MapObjectProfileUnkHOF1::GetProfile() {
    return &sMapObjectProfileUnkHOF1;
}

ARM MapObject *MapObjectProfileUnkHOF1::Create() {
    return new(HeapIndex_2) MapObjectUnkHOF1();
}

ARM MapObjectProfileUnkHOF1::MapObjectProfileUnkHOF1() :
    MapObjectProfile(MapObjectId_HOF1) {}

ARM MapObjectUnkHOF1::MapObjectUnkHOF1() {}

ARM void MapObjectUnkHOF1::func_ov064_02159f4c(void) {}

ARM MapObjectUnkHOF1::~MapObjectUnkHOF1() {}
ARM MapObjectProfileUnkHOF1::~MapObjectProfileUnkHOF1() {}
