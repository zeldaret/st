//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRSR.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkTRSR);

MapObject *MapObjectProfileUnkTRSR::Create() {
    return new(HeapIndex_2) MapObjectUnkTRSR();
}

MapObjectProfileUnkTRSR::MapObjectProfileUnkTRSR() :
    MapObjectProfile(MapObjectId_TRSR) {}

MapObjectUnkTRSR::MapObjectUnkTRSR() {}

void MapObjectUnkTRSR::func_ov028_0214643c(void) {}
void MapObjectUnkTRSR::func_ov028_0214647c(void) {}
void MapObjectUnkTRSR::func_ov028_021464cc(void) {}

MapObjectUnkTRSR::~MapObjectUnkTRSR() {}
MapObjectProfileUnkTRSR::~MapObjectProfileUnkTRSR() {}
