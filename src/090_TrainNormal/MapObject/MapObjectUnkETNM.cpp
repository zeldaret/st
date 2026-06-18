//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkETNM.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkETNM);

MapObject *MapObjectProfileUnkETNM::Create() {
    return new(HeapIndex_2) MapObjectUnkETNM();
}

MapObjectProfileUnkETNM::MapObjectProfileUnkETNM() :
    MapObjectProfile(MapObjectId_ETNM) {}

MapObjectUnkETNM::MapObjectUnkETNM() {}

void MapObjectUnkETNM::func_ov090_021752cc(void) {}

MapObjectUnkETNM::~MapObjectUnkETNM() {}
MapObjectProfileUnkETNM::~MapObjectProfileUnkETNM() {}
