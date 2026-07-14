//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRFS.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkTRFS);

MapObject *MapObjectProfileUnkTRFS::Create() {
    return new(HeapIndex_2) MapObjectUnkTRFS();
}

MapObjectProfileUnkTRFS::MapObjectProfileUnkTRFS() :
    MapObjectProfile(MapObjectId_TRFS) {}

MapObjectUnkTRFS::MapObjectUnkTRFS() {}

void MapObjectUnkTRFS::func_ov028_0214686c(void) {}
void MapObjectUnkTRFS::func_ov028_021468b8(void) {}
void MapObjectUnkTRFS::func_ov028_0214694c(void) {}

MapObjectUnkTRFS::~MapObjectUnkTRFS() {}
MapObjectProfileUnkTRFS::~MapObjectProfileUnkTRFS() {}
