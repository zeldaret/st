//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkHOW1.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkHOW1 sMapObjectProfileUnkHOW1;

ARM MapObjectProfileUnkHOW1 *MapObjectProfileUnkHOW1::GetProfile() {
    return &sMapObjectProfileUnkHOW1;
}

ARM MapObject *MapObjectProfileUnkHOW1::Create() {
    return new(HeapIndex_2) MapObjectUnkHOW1();
}

ARM MapObjectProfileUnkHOW1::MapObjectProfileUnkHOW1() :
    MapObjectProfile(MapObjectId_HOW1) {}

ARM MapObjectUnkHOW1::MapObjectUnkHOW1() {}

ARM void MapObjectUnkHOW1::func_ov066_0215d008(void) {}
ARM void MapObjectUnkHOW1::func_ov066_0215d058(void) {}

ARM MapObjectUnkHOW1::~MapObjectUnkHOW1() {}
ARM MapObjectProfileUnkHOW1::~MapObjectProfileUnkHOW1() {}
