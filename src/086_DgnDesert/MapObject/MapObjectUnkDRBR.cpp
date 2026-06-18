//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkDRBR.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkDRBR);

MapObject *MapObjectProfileUnkDRBR::Create() {
    return new(HeapIndex_2) MapObjectUnkDRBR();
}

MapObjectProfileUnkDRBR::MapObjectProfileUnkDRBR() :
    MapObjectProfile(MapObjectId_DRBR) {}

MapObjectUnkDRBR::MapObjectUnkDRBR() {}

void MapObjectUnkDRBR::func_ov086_0215e1bc(void) {}

MapObjectUnkDRBR::~MapObjectUnkDRBR() {}
MapObjectProfileUnkDRBR::~MapObjectProfileUnkDRBR() {}
