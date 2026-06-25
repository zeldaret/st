//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkRBSR.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkRBSR);

MapObject *MapObjectProfileUnkRBSR::Create() {
    return new(HeapIndex_2) MapObjectUnkRBSR();
}

MapObjectProfileUnkRBSR::MapObjectProfileUnkRBSR() :
    MapObjectProfile(MapObjectId_RBSR) {}

MapObjectUnkRBSR::MapObjectUnkRBSR() {}

void MapObjectUnkRBSR::func_ov028_02146610(void) {}
void MapObjectUnkRBSR::func_ov028_02146624(void) {}

MapObjectUnkRBSR::~MapObjectUnkRBSR() {}
MapObjectProfileUnkRBSR::~MapObjectProfileUnkRBSR() {}
