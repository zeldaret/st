//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkGTRK.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkGTRK sMapObjectProfileUnkGTRK;

ARM MapObjectProfileUnkGTRK *MapObjectProfileUnkGTRK::GetProfile() {
    return &sMapObjectProfileUnkGTRK;
}

ARM MapObject *MapObjectProfileUnkGTRK::Create() {
    return new(HeapIndex_2) MapObjectUnkGTRK();
}

ARM MapObjectProfileUnkGTRK::MapObjectProfileUnkGTRK() :
    MapObjectProfile(MapObjectId_GTRK) {}

ARM MapObjectUnkGTRK::MapObjectUnkGTRK() {}

ARM void MapObjectUnkGTRK::func_ov077_0215af58(void) {}
ARM void MapObjectUnkGTRK::func_ov077_0215b018(void) {}

ARM MapObjectUnkGTRK::~MapObjectUnkGTRK() {}
ARM MapObjectProfileUnkGTRK::~MapObjectProfileUnkGTRK() {}
