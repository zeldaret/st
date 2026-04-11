//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkBLCM.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkBLCM sMapObjectProfileUnkBLCM;

ARM MapObjectProfileUnkBLCM *MapObjectProfileUnkBLCM::GetProfile() {
    return &sMapObjectProfileUnkBLCM;
}

ARM MapObject *MapObjectProfileUnkBLCM::Create() {
    return new(HeapIndex_2) MapObjectUnkBLCM();
}

ARM MapObjectProfileUnkBLCM::MapObjectProfileUnkBLCM() :
    MapObjectProfile(MapObjectId_BLCM) {}

ARM MapObjectUnkBLCM::MapObjectUnkBLCM() {}

ARM void MapObjectUnkBLCM::func_ov000_0209e4b0(void) {}
ARM void MapObjectUnkBLCM::func_ov000_0209e6ac(void) {}

ARM MapObjectUnkBLCM::~MapObjectUnkBLCM() {}
ARM MapObjectProfileUnkBLCM::~MapObjectProfileUnkBLCM() {}
