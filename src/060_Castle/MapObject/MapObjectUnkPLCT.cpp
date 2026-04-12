//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkPLCT.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkPLCT);

ARM MapObject *MapObjectProfileUnkPLCT::Create() {
    return new(HeapIndex_2) MapObjectUnkPLCT();
}

ARM MapObjectProfileUnkPLCT::MapObjectProfileUnkPLCT() :
    MapObjectProfile(MapObjectId_PLCT) {}

ARM MapObjectUnkPLCT::MapObjectUnkPLCT() {}

ARM void MapObjectUnkPLCT::func_ov060_021604ac(void) {}
ARM void MapObjectUnkPLCT::func_ov060_021604b4(void) {}
ARM void MapObjectUnkPLCT::func_ov060_021604b8(void) {}

ARM MapObjectUnkPLCT::~MapObjectUnkPLCT() {}
ARM MapObjectProfileUnkPLCT::~MapObjectProfileUnkPLCT() {}
