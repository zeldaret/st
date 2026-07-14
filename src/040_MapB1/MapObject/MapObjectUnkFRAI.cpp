//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFRAI.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkFRAI);

MapObject *MapObjectProfileUnkFRAI::Create() {
    return new(HeapIndex_2) MapObjectUnkFRAI();
}

MapObjectProfileUnkFRAI::MapObjectProfileUnkFRAI() :
    MapObjectProfile(MapObjectId_FRAI) {}

MapObjectUnkFRAI::MapObjectUnkFRAI() {}

void MapObjectUnkFRAI::func_ov040_0212d81c(void) {}
void MapObjectUnkFRAI::func_ov040_0212d9a4(void) {}

MapObjectUnkFRAI::~MapObjectUnkFRAI() {}
MapObjectProfileUnkFRAI::~MapObjectProfileUnkFRAI() {}
