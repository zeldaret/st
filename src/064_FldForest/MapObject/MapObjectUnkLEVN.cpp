//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkLEVN.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkLEVN sMapObjectProfileUnkLEVN;

ARM MapObjectProfileUnkLEVN *MapObjectProfileUnkLEVN::GetProfile() {
    return &sMapObjectProfileUnkLEVN;
}

ARM MapObject *MapObjectProfileUnkLEVN::Create() {
    return new(HeapIndex_2) MapObjectUnkLEVN();
}

ARM MapObjectProfileUnkLEVN::MapObjectProfileUnkLEVN() :
    MapObjectProfile(MapObjectId_LEVN) {}

ARM MapObjectUnkLEVN::MapObjectUnkLEVN() {}

ARM void MapObjectUnkLEVN::func_ov064_0215a260(void) {}

ARM MapObjectUnkLEVN::~MapObjectUnkLEVN() {}
ARM MapObjectProfileUnkLEVN::~MapObjectProfileUnkLEVN() {}
