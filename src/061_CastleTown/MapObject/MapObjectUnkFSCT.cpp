//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFSCT.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkFSCT);

MapObject *MapObjectProfileUnkFSCT::Create() {
    return new(HeapIndex_2) MapObjectUnkFSCT();
}

MapObjectProfileUnkFSCT::MapObjectProfileUnkFSCT() :
    MapObjectProfile(MapObjectId_FSCT) {}

MapObjectUnkFSCT::MapObjectUnkFSCT() {}

void MapObjectUnkFSCT::func_ov061_021594d0(void) {}
void MapObjectUnkFSCT::func_ov061_02159520(void) {}

MapObjectUnkFSCT::~MapObjectUnkFSCT() {}
MapObjectProfileUnkFSCT::~MapObjectProfileUnkFSCT() {}
