//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkRBMR.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkRBMR);

MapObject *MapObjectProfileUnkRBMR::Create() {
    return new(HeapIndex_2) MapObjectUnkRBMR();
}

MapObjectProfileUnkRBMR::MapObjectProfileUnkRBMR() :
    MapObjectProfile(MapObjectId_RBMR) {}

MapObjectUnkRBMR::MapObjectUnkRBMR() {}

void MapObjectUnkRBMR::func_ov090_02174bf8(void) {}
void MapObjectUnkRBMR::func_ov090_02174c0c(void) {}

MapObjectUnkRBMR::~MapObjectUnkRBMR() {}
MapObjectProfileUnkRBMR::~MapObjectProfileUnkRBMR() {}
