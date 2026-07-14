//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkDRGN.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkDRGN);

MapObject *MapObjectProfileUnkDRGN::Create() {
    return new(HeapIndex_2) MapObjectUnkDRGN();
}

MapObjectProfileUnkDRGN::MapObjectProfileUnkDRGN() :
    MapObjectProfile(MapObjectId_DRGN) {}

MapObjectUnkDRGN::MapObjectUnkDRGN() {}

void MapObjectUnkDRGN::func_ov067_0215bb08(void) {}
void MapObjectUnkDRGN::func_ov067_0215bce0(void) {}

MapObjectUnkDRGN::~MapObjectUnkDRGN() {}
MapObjectProfileUnkDRGN::~MapObjectProfileUnkDRGN() {}
