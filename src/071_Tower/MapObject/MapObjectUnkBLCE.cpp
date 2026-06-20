//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkBLCE.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkBLCE);

MapObject *MapObjectProfileUnkBLCE::Create() {
    return new(HeapIndex_2) MapObjectUnkBLCE();
}

MapObjectProfileUnkBLCE::MapObjectProfileUnkBLCE() :
    MapObjectProfile(MapObjectId_BLCE) {}

MapObjectUnkBLCE::MapObjectUnkBLCE() {}

void MapObjectUnkBLCE::func_ov071_02161a40(void) {}

MapObjectUnkBLCE::~MapObjectUnkBLCE() {}
MapObjectProfileUnkBLCE::~MapObjectProfileUnkBLCE() {}
