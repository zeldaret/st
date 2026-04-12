//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRTS.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkTRTS);

ARM MapObject *MapObjectProfileUnkTRTS::Create() {
    return new(HeapIndex_2) MapObjectUnkTRTS();
}

ARM MapObjectProfileUnkTRTS::MapObjectProfileUnkTRTS() :
    MapObjectProfile(MapObjectId_TRTS) {}

ARM MapObjectUnkTRTS::MapObjectUnkTRTS() {}

ARM void MapObjectUnkTRTS::func_ov028_021461d4(void) {}
ARM void MapObjectUnkTRTS::func_ov028_0214625c(void) {}
ARM void MapObjectUnkTRTS::func_ov028_021462f0(void) {}

ARM MapObjectUnkTRTS::~MapObjectUnkTRTS() {}
ARM MapObjectProfileUnkTRTS::~MapObjectProfileUnkTRTS() {}
