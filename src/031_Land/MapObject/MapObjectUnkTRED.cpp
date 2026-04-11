//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRED.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRED sMapObjectProfileUnkTRED;

ARM MapObjectProfileUnkTRED *MapObjectProfileUnkTRED::GetProfile() {
    return &sMapObjectProfileUnkTRED;
}

ARM MapObject *MapObjectProfileUnkTRED::Create() {
    return new(HeapIndex_2) MapObjectUnkTRED();
}

ARM MapObjectProfileUnkTRED::MapObjectProfileUnkTRED() :
    MapObjectProfile(MapObjectId_TRED) {}

ARM MapObjectUnkTRED::MapObjectUnkTRED() {}

ARM void MapObjectUnkTRED::func_ov031_02104114(void) {}
ARM void MapObjectUnkTRED::func_ov031_02104168(void) {}

ARM MapObjectUnkTRED::~MapObjectUnkTRED() {}
ARM MapObjectProfileUnkTRED::~MapObjectProfileUnkTRED() {}
