//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRDT.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkTRDT);

MapObject *MapObjectProfileUnkTRDT::Create() {
    return new(HeapIndex_2) MapObjectUnkTRDT();
}

MapObjectProfileUnkTRDT::MapObjectProfileUnkTRDT() :
    MapObjectProfile(MapObjectId_TRDT) {}

MapObjectUnkTRDT::MapObjectUnkTRDT() {}

void MapObjectUnkTRDT::func_ov090_02174e60(void) {}
void MapObjectUnkTRDT::func_ov090_02174eac(void) {}
void MapObjectUnkTRDT::func_ov090_02174f40(void) {}

MapObjectUnkTRDT::~MapObjectUnkTRDT() {}
MapObjectProfileUnkTRDT::~MapObjectProfileUnkTRDT() {}
