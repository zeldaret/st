//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkHOSO.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkHOSO);

MapObject *MapObjectProfileUnkHOSO::Create() {
    return new(HeapIndex_2) MapObjectUnkHOSO();
}

MapObjectProfileUnkHOSO::MapObjectProfileUnkHOSO() :
    MapObjectProfile(MapObjectId_HOSO) {}

MapObjectUnkHOSO::MapObjectUnkHOSO() {}

void MapObjectUnkHOSO::func_ov065_02159d10(void) {}
void MapObjectUnkHOSO::func_ov065_02159d60(void) {}
void MapObjectUnkHOSO::func_ov065_02159d68(void) {}

MapObjectUnkHOSO::~MapObjectUnkHOSO() {}
MapObjectProfileUnkHOSO::~MapObjectProfileUnkHOSO() {}
