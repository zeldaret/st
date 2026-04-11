//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkEXHS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkEXHS sMapObjectProfileUnkEXHS;

ARM MapObjectProfileUnkEXHS *MapObjectProfileUnkEXHS::GetProfile() {
    return &sMapObjectProfileUnkEXHS;
}

ARM MapObject *MapObjectProfileUnkEXHS::Create() {
    return new(HeapIndex_2) MapObjectUnkEXHS();
}

ARM MapObjectProfileUnkEXHS::MapObjectProfileUnkEXHS() :
    MapObjectProfile(MapObjectId_EXHS) {}

ARM MapObjectUnkEXHS::MapObjectUnkEXHS() {}

ARM void MapObjectUnkEXHS::func_ov058_0214fdc0(void) {}

ARM MapObjectUnkEXHS::~MapObjectUnkEXHS() {}
ARM MapObjectProfileUnkEXHS::~MapObjectProfileUnkEXHS() {}
