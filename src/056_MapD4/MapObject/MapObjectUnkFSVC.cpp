//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFSVC.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkFSVC);

MapObject *MapObjectProfileUnkFSVC::Create() {
    return new(HeapIndex_2) MapObjectUnkFSVC();
}

MapObjectProfileUnkFSVC::MapObjectProfileUnkFSVC() :
    MapObjectProfile(MapObjectId_FSVC) {}

MapObjectUnkFSVC::MapObjectUnkFSVC() {}

void MapObjectUnkFSVC::func_ov056_0213aacc(void) {}
void MapObjectUnkFSVC::func_ov056_0213ab1c(void) {}

MapObjectUnkFSVC::~MapObjectUnkFSVC() {}
MapObjectProfileUnkFSVC::~MapObjectProfileUnkFSVC() {}
