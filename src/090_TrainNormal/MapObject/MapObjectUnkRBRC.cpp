//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkRBRC.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkRBRC);

MapObject *MapObjectProfileUnkRBRC::Create() {
    return new(HeapIndex_2) MapObjectUnkRBRC();
}

MapObjectProfileUnkRBRC::MapObjectProfileUnkRBRC() :
    MapObjectProfile(MapObjectId_RBRC) {}

MapObjectUnkRBRC::MapObjectUnkRBRC() {}

void MapObjectUnkRBRC::func_ov090_021747a4(void) {}
void MapObjectUnkRBRC::func_ov090_021747b8(void) {}

MapObjectUnkRBRC::~MapObjectUnkRBRC() {}
MapObjectProfileUnkRBRC::~MapObjectProfileUnkRBRC() {}
