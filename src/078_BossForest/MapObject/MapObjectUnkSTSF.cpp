//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSTSF.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkSTSF);

MapObject *MapObjectProfileUnkSTSF::Create() {
    return new(HeapIndex_2) MapObjectUnkSTSF();
}

MapObjectProfileUnkSTSF::MapObjectProfileUnkSTSF() :
    MapObjectProfile(MapObjectId_STSF) {}

MapObjectUnkSTSF::MapObjectUnkSTSF() {}

void MapObjectUnkSTSF::func_ov078_0215d0a0(void) {}
void MapObjectUnkSTSF::func_ov078_0215d0f4(void) {}

MapObjectUnkSTSF::~MapObjectUnkSTSF() {}
MapObjectProfileUnkSTSF::~MapObjectProfileUnkSTSF() {}
