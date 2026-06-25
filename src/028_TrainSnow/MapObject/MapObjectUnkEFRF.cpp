//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkEFRF.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkEFRF);

MapObject *MapObjectProfileUnkEFRF::Create() {
    return new(HeapIndex_2) MapObjectUnkEFRF();
}

MapObjectProfileUnkEFRF::MapObjectProfileUnkEFRF() :
    MapObjectProfile(MapObjectId_EFRF) {}

MapObjectUnkEFRF::MapObjectUnkEFRF() {}

void MapObjectUnkEFRF::func_ov028_02145b2c(void) {}
void MapObjectUnkEFRF::func_ov028_02145b7c(void) {}

MapObjectUnkEFRF::~MapObjectUnkEFRF() {}
MapObjectProfileUnkEFRF::~MapObjectProfileUnkEFRF() {}
