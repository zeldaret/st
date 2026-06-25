//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFSFR.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkFSFR);

MapObject *MapObjectProfileUnkFSFR::Create() {
    return new(HeapIndex_2) MapObjectUnkFSFR();
}

MapObjectProfileUnkFSFR::MapObjectProfileUnkFSFR() :
    MapObjectProfile(MapObjectId_FSFR) {}

MapObjectUnkFSFR::MapObjectUnkFSFR() {}

void MapObjectUnkFSFR::func_ov064_021591c4(void) {}
void MapObjectUnkFSFR::func_ov064_02159214(void) {}

MapObjectUnkFSFR::~MapObjectUnkFSFR() {}
MapObjectProfileUnkFSFR::~MapObjectProfileUnkFSFR() {}
