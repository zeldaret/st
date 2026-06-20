//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkHOUS.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkHOUS);

MapObject *MapObjectProfileUnkHOUS::Create() {
    return new(HeapIndex_2) MapObjectUnkHOUS();
}

MapObjectProfileUnkHOUS::MapObjectProfileUnkHOUS() :
    MapObjectProfile(MapObjectId_HOUS) {}

MapObjectUnkHOUS::MapObjectUnkHOUS() {}

void MapObjectUnkHOUS::func_ov058_0214f160(void) {}
void MapObjectUnkHOUS::func_ov058_0214f52c(void) {}

MapObjectUnkHOUS::~MapObjectUnkHOUS() {}
MapObjectProfileUnkHOUS::~MapObjectProfileUnkHOUS() {}
