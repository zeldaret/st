//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTREE.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTREE sMapObjectProfileUnkTREE;

ARM MapObjectProfileUnkTREE *MapObjectProfileUnkTREE::GetProfile() {
    return &sMapObjectProfileUnkTREE;
}

ARM MapObject *MapObjectProfileUnkTREE::Create() {
    return new(HeapIndex_2) MapObjectUnkTREE();
}

ARM MapObjectProfileUnkTREE::MapObjectProfileUnkTREE() :
    MapObjectProfile(MapObjectId_TREE) {}

ARM MapObjectUnkTREE::MapObjectUnkTREE() {}

ARM void MapObjectUnkTREE::func_ov058_0214e09c(void) {}
ARM void MapObjectUnkTREE::func_ov058_0214e23c(void) {}
ARM void MapObjectUnkTREE::func_ov058_0214e2e8(void) {}
ARM void MapObjectUnkTREE::func_ov058_0214e330(void) {}
ARM void MapObjectUnkTREE::func_ov058_0214e338(void) {}
ARM void MapObjectUnkTREE::func_ov058_0214e3e8(void) {}

ARM MapObjectUnkTREE::~MapObjectUnkTREE() {}
ARM MapObjectProfileUnkTREE::~MapObjectProfileUnkTREE() {}
