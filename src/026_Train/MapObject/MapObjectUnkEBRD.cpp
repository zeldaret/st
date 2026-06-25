//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkEBRD.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkEBRD);

MapObject *MapObjectProfileUnkEBRD::Create() {
    return new(HeapIndex_2) MapObjectUnkEBRD();
}

MapObjectProfileUnkEBRD::MapObjectProfileUnkEBRD() :
    MapObjectProfile(MapObjectId_EBRD) {}

MapObjectUnkEBRD::MapObjectUnkEBRD() {}

void MapObjectUnkEBRD::func_ov026_0210aa20(void) {}
void MapObjectUnkEBRD::func_ov026_0210ab3c(void) {}

MapObjectUnkEBRD::~MapObjectUnkEBRD() {}
MapObjectProfileUnkEBRD::~MapObjectProfileUnkEBRD() {}
