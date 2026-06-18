//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkGATE.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkGATE);

MapObject *MapObjectProfileUnkGATE::Create() {
    return new(HeapIndex_2) MapObjectUnkGATE();
}

MapObjectProfileUnkGATE::MapObjectProfileUnkGATE() :
    MapObjectProfile(MapObjectId_GATE) {}

MapObjectUnkGATE::MapObjectUnkGATE() {}

void MapObjectUnkGATE::func_ov031_02100890(void) {}
void MapObjectUnkGATE::func_ov031_02100a28(void) {}
void MapObjectUnkGATE::func_ov031_02100a2c(void) {}

MapObjectUnkGATE::~MapObjectUnkGATE() {}
MapObjectProfileUnkGATE::~MapObjectProfileUnkGATE() {}
