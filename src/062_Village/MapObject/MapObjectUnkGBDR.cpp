//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkGBDR.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkGBDR);

MapObject *MapObjectProfileUnkGBDR::Create() {
    return new(HeapIndex_2) MapObjectUnkGBDR();
}

MapObjectProfileUnkGBDR::MapObjectProfileUnkGBDR() :
    MapObjectProfile(MapObjectId_GBDR) {}

MapObjectUnkGBDR::MapObjectUnkGBDR() {}

void MapObjectUnkGBDR::func_ov062_0215be70(void) {}
void MapObjectUnkGBDR::func_ov062_0215bfc8(void) {}

MapObjectUnkGBDR::~MapObjectUnkGBDR() {}
MapObjectProfileUnkGBDR::~MapObjectProfileUnkGBDR() {}
