//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFSFS.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkFSFS);

MapObject *MapObjectProfileUnkFSFS::Create() {
    return new(HeapIndex_2) MapObjectUnkFSFS();
}

MapObjectProfileUnkFSFS::MapObjectProfileUnkFSFS() :
    MapObjectProfile(MapObjectId_FSFS) {}

MapObjectUnkFSFS::MapObjectUnkFSFS() {}

void MapObjectUnkFSFS::func_ov062_0215b458(void) {}
void MapObjectUnkFSFS::func_ov062_0215b4a8(void) {}

MapObjectUnkFSFS::~MapObjectUnkFSFS() {}
MapObjectProfileUnkFSFS::~MapObjectProfileUnkFSFS() {}
