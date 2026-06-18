//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSTIR.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkSTIR);

MapObject *MapObjectProfileUnkSTIR::Create() {
    return new(HeapIndex_2) MapObjectUnkSTIR();
}

MapObjectProfileUnkSTIR::MapObjectProfileUnkSTIR() :
    MapObjectProfile(MapObjectId_STIR) {}

MapObjectUnkSTIR::MapObjectUnkSTIR() {}

void MapObjectUnkSTIR::func_ov031_02100bbc(void) {}
void MapObjectUnkSTIR::func_ov031_02100d70(void) {}
void MapObjectUnkSTIR::func_ov031_02100d74(void) {}
void MapObjectUnkSTIR::func_ov031_02100da4(void) {}

MapObjectUnkSTIR::~MapObjectUnkSTIR() {}
MapObjectProfileUnkSTIR::~MapObjectProfileUnkSTIR() {}
