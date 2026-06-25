//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkBLCK.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkBLCK);

MapObject *MapObjectProfileUnkBLCK::Create() {
    return new(HeapIndex_2) MapObjectUnkBLCK();
}

MapObjectProfileUnkBLCK::MapObjectProfileUnkBLCK() :
    MapObjectProfile(MapObjectId_BLCK) {}

MapObjectUnkBLCK::MapObjectUnkBLCK() {}

void MapObjectUnkBLCK::func_ov070_021440ac(void) {}
void MapObjectUnkBLCK::func_ov070_02144174(void) {}

MapObjectUnkBLCK::~MapObjectUnkBLCK() {}
MapObjectProfileUnkBLCK::~MapObjectProfileUnkBLCK() {}
