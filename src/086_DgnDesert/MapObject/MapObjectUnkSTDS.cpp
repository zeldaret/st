//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSTDS.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkSTDS);

MapObject *MapObjectProfileUnkSTDS::Create() {
    return new(HeapIndex_2) MapObjectUnkSTDS();
}

MapObjectProfileUnkSTDS::MapObjectProfileUnkSTDS() :
    MapObjectProfile(MapObjectId_STDS) {}

MapObjectUnkSTDS::MapObjectUnkSTDS() {}

void MapObjectUnkSTDS::func_ov086_0215dfdc(void) {}
void MapObjectUnkSTDS::func_ov086_0215e094(void) {}

MapObjectUnkSTDS::~MapObjectUnkSTDS() {}
MapObjectProfileUnkSTDS::~MapObjectProfileUnkSTDS() {}
