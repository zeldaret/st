//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkPLCT.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkPLCT);

MapObject *MapObjectProfileUnkPLCT::Create() {
    return new(HeapIndex_2) MapObjectUnkPLCT();
}

MapObjectProfileUnkPLCT::MapObjectProfileUnkPLCT() :
    MapObjectProfile(MapObjectId_PLCT) {}

MapObjectUnkPLCT::MapObjectUnkPLCT() {}

void MapObjectUnkPLCT::func_ov060_021604ac(void) {}
void MapObjectUnkPLCT::func_ov060_021604b4(void) {}
void MapObjectUnkPLCT::func_ov060_021604b8(void) {}

MapObjectUnkPLCT::~MapObjectUnkPLCT() {}
MapObjectProfileUnkPLCT::~MapObjectProfileUnkPLCT() {}
