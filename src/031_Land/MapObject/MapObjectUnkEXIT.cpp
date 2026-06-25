//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkEXIT.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkEXIT);

MapObject *MapObjectProfileUnkEXIT::Create() {
    return new(HeapIndex_2) MapObjectUnkEXIT();
}

MapObjectProfileUnkEXIT::MapObjectProfileUnkEXIT() :
    MapObjectProfile(MapObjectId_EXIT) {}

MapObjectUnkEXIT::MapObjectUnkEXIT() {}

void MapObjectUnkEXIT::func_ov031_021005fc(void) {}
void MapObjectUnkEXIT::func_ov031_021006d4(void) {}
void MapObjectUnkEXIT::func_ov031_02100714(void) {}

MapObjectUnkEXIT::~MapObjectUnkEXIT() {}
MapObjectProfileUnkEXIT::~MapObjectProfileUnkEXIT() {}
