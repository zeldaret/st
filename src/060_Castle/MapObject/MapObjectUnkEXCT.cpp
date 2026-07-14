//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkEXCT.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkEXCT);

MapObject *MapObjectProfileUnkEXCT::Create() {
    return new(HeapIndex_2) MapObjectUnkEXCT();
}

MapObjectProfileUnkEXCT::MapObjectProfileUnkEXCT() :
    MapObjectProfile(MapObjectId_EXCT) {}

MapObjectUnkEXCT::MapObjectUnkEXCT() {}

void MapObjectUnkEXCT::func_ov060_02160a84(void) {}

MapObjectUnkEXCT::~MapObjectUnkEXCT() {}
MapObjectProfileUnkEXCT::~MapObjectProfileUnkEXCT() {}
