//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFSTA.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkFSTA);

MapObject *MapObjectProfileUnkFSTA::Create() {
    return new(HeapIndex_2) MapObjectUnkFSTA();
}

MapObjectProfileUnkFSTA::MapObjectProfileUnkFSTA() :
    MapObjectProfile(MapObjectId_FSTA) {}

MapObjectUnkFSTA::MapObjectUnkFSTA() {}

void MapObjectUnkFSTA::func_ov040_0212d450(void) {}
void MapObjectUnkFSTA::func_ov040_0212d64c(void) {}

MapObjectUnkFSTA::~MapObjectUnkFSTA() {}
MapObjectProfileUnkFSTA::~MapObjectProfileUnkFSTA() {}
