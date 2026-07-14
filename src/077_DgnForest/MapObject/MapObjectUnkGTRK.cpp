//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkGTRK.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkGTRK);

MapObject *MapObjectProfileUnkGTRK::Create() {
    return new(HeapIndex_2) MapObjectUnkGTRK();
}

MapObjectProfileUnkGTRK::MapObjectProfileUnkGTRK() :
    MapObjectProfile(MapObjectId_GTRK) {}

MapObjectUnkGTRK::MapObjectUnkGTRK() {}

void MapObjectUnkGTRK::func_ov077_0215af58(void) {}
void MapObjectUnkGTRK::func_ov077_0215b018(void) {}

MapObjectUnkGTRK::~MapObjectUnkGTRK() {}
MapObjectProfileUnkGTRK::~MapObjectProfileUnkGTRK() {}
