//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkEXHS.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkEXHS);

ARM MapObject *MapObjectProfileUnkEXHS::Create() {
    return new(HeapIndex_2) MapObjectUnkEXHS();
}

ARM MapObjectProfileUnkEXHS::MapObjectProfileUnkEXHS() :
    MapObjectProfile(MapObjectId_EXHS) {}

ARM MapObjectUnkEXHS::MapObjectUnkEXHS() {}

ARM void MapObjectUnkEXHS::func_ov058_0214fdc0(void) {}

ARM MapObjectUnkEXHS::~MapObjectUnkEXHS() {}
ARM MapObjectProfileUnkEXHS::~MapObjectProfileUnkEXHS() {}
