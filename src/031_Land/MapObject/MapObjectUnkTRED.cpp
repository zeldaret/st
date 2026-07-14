//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRED.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkTRED);

MapObject *MapObjectProfileUnkTRED::Create() {
    return new(HeapIndex_2) MapObjectUnkTRED();
}

MapObjectProfileUnkTRED::MapObjectProfileUnkTRED() :
    MapObjectProfile(MapObjectId_TRED) {}

MapObjectUnkTRED::MapObjectUnkTRED() {}

void MapObjectUnkTRED::func_ov031_02104114(void) {}
void MapObjectUnkTRED::func_ov031_02104168(void) {}

MapObjectUnkTRED::~MapObjectUnkTRED() {}
MapObjectProfileUnkTRED::~MapObjectProfileUnkTRED() {}
