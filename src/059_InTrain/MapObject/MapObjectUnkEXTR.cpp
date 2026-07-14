//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkEXTR.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkEXTR);

MapObject *MapObjectProfileUnkEXTR::Create() {
    return new(HeapIndex_2) MapObjectUnkEXTR();
}

MapObjectProfileUnkEXTR::MapObjectProfileUnkEXTR() :
    MapObjectProfile(MapObjectId_EXTR) {}

MapObjectUnkEXTR::MapObjectUnkEXTR() {}

void MapObjectUnkEXTR::func_ov059_02162d44(void) {}

MapObjectUnkEXTR::~MapObjectUnkEXTR() {}
MapObjectProfileUnkEXTR::~MapObjectProfileUnkEXTR() {}
