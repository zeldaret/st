//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkETNS.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkETNS);

MapObject *MapObjectProfileUnkETNS::Create() {
    return new(HeapIndex_2) MapObjectUnkETNS();
}

MapObjectProfileUnkETNS::MapObjectProfileUnkETNS() :
    MapObjectProfile(MapObjectId_ETNS) {}

MapObjectUnkETNS::MapObjectUnkETNS() {}

void MapObjectUnkETNS::func_ov028_0214568c(void) {}

MapObjectUnkETNS::~MapObjectUnkETNS() {}
MapObjectProfileUnkETNS::~MapObjectProfileUnkETNS() {}
