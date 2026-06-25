//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkRBBL.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkRBBL);

MapObject *MapObjectProfileUnkRBBL::Create() {
    return new(HeapIndex_2) MapObjectUnkRBBL();
}

MapObjectProfileUnkRBBL::MapObjectProfileUnkRBBL() :
    MapObjectProfile(MapObjectId_RBBL) {}

MapObjectUnkRBBL::MapObjectUnkRBBL() {}

void MapObjectUnkRBBL::func_ov029_021469ec(void) {}
void MapObjectUnkRBBL::func_ov029_02146a00(void) {}

MapObjectUnkRBBL::~MapObjectUnkRBBL() {}
MapObjectProfileUnkRBBL::~MapObjectProfileUnkRBBL() {}
