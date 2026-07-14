//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFSPS.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkFSPS);

MapObject *MapObjectProfileUnkFSPS::Create() {
    return new(HeapIndex_2) MapObjectUnkFSPS();
}

MapObjectProfileUnkFSPS::MapObjectProfileUnkFSPS() :
    MapObjectProfile(MapObjectId_FSPS) {}

MapObjectUnkFSPS::MapObjectUnkFSPS() {}

void MapObjectUnkFSPS::func_ov070_02145200(void) {}
void MapObjectUnkFSPS::func_ov070_0214520c(void) {}
void MapObjectUnkFSPS::func_ov070_0214525c(void) {}

MapObjectUnkFSPS::~MapObjectUnkFSPS() {}
MapObjectProfileUnkFSPS::~MapObjectProfileUnkFSPS() {}
