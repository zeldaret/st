//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkPLV2.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkPLV2);

ARM MapObject *MapObjectProfileUnkPLV2::Create() {
    return new(HeapIndex_2) MapObjectUnkPLV2();
}

ARM MapObjectProfileUnkPLV2::MapObjectProfileUnkPLV2() :
    MapObjectProfile(MapObjectId_PLV2) {}

ARM MapObjectUnkPLV2::MapObjectUnkPLV2() {}

ARM void MapObjectUnkPLV2::func_ov084_0216141c(void) {}
ARM void MapObjectUnkPLV2::func_ov084_02161424(void) {}
ARM void MapObjectUnkPLV2::func_ov084_02161428(void) {}

ARM MapObjectUnkPLV2::~MapObjectUnkPLV2() {}
ARM MapObjectProfileUnkPLV2::~MapObjectProfileUnkPLV2() {}
