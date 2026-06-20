//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkHOST.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkHOST);

MapObject *MapObjectProfileUnkHOST::Create() {
    return new(HeapIndex_2) MapObjectUnkHOST();
}

MapObjectProfileUnkHOST::MapObjectProfileUnkHOST() :
    MapObjectProfile(MapObjectId_HOST) {}

MapObjectUnkHOST::MapObjectUnkHOST() {}

void MapObjectUnkHOST::func_ov058_0214f838(void) {}
void MapObjectUnkHOST::func_ov058_0214f888(void) {}

MapObjectUnkHOST::~MapObjectUnkHOST() {}
MapObjectProfileUnkHOST::~MapObjectProfileUnkHOST() {}
