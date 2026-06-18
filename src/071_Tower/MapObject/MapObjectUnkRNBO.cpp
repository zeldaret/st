//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkRNBO.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkRNBO);

MapObject *MapObjectProfileUnkRNBO::Create() {
    return new(HeapIndex_2) MapObjectUnkRNBO();
}

MapObjectProfileUnkRNBO::MapObjectProfileUnkRNBO() :
    MapObjectProfile(MapObjectId_RNBO) {}

MapObjectUnkRNBO::MapObjectUnkRNBO() {}

void MapObjectUnkRNBO::func_ov071_02160b04(void) {}
void MapObjectUnkRNBO::func_ov071_02160b18(void) {}

MapObjectUnkRNBO::~MapObjectUnkRNBO() {}
MapObjectProfileUnkRNBO::~MapObjectProfileUnkRNBO() {}
