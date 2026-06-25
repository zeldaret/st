//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTREN.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkTREN);

MapObject *MapObjectProfileUnkTREN::Create() {
    return new(HeapIndex_2) MapObjectUnkTREN();
}

MapObjectProfileUnkTREN::MapObjectProfileUnkTREN() :
    MapObjectProfile(MapObjectId_TREN) {}

MapObjectUnkTREN::MapObjectUnkTREN() {}

void MapObjectUnkTREN::func_ov031_02104470(void) {}

MapObjectUnkTREN::~MapObjectUnkTREN() {}
MapObjectProfileUnkTREN::~MapObjectProfileUnkTREN() {}
