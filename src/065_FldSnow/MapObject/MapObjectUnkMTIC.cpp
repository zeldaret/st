//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkMTIC.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkMTIC);

MapObject *MapObjectProfileUnkMTIC::Create() {
    return new(HeapIndex_2) MapObjectUnkMTIC();
}

MapObjectProfileUnkMTIC::MapObjectProfileUnkMTIC() :
    MapObjectProfile(MapObjectId_MTIC) {}

MapObjectUnkMTIC::MapObjectUnkMTIC() {}

void MapObjectUnkMTIC::func_ov065_02159f08(void) {}
void MapObjectUnkMTIC::func_ov065_02159f54(void) {}
void MapObjectUnkMTIC::func_ov065_02159f58(void) {}

MapObjectUnkMTIC::~MapObjectUnkMTIC() {}
MapObjectProfileUnkMTIC::~MapObjectProfileUnkMTIC() {}
