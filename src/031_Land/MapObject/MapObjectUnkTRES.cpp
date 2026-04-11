//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRES.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRES sMapObjectProfileUnkTRES;

ARM MapObjectProfileUnkTRES *MapObjectProfileUnkTRES::GetProfile() {
    return &sMapObjectProfileUnkTRES;
}

ARM MapObject *MapObjectProfileUnkTRES::Create() {
    return new(HeapIndex_2) MapObjectUnkTRES();
}

ARM MapObjectProfileUnkTRES::MapObjectProfileUnkTRES() :
    MapObjectProfile(MapObjectId_TRES) {}

ARM MapObjectUnkTRES::MapObjectUnkTRES() {}

ARM void MapObjectUnkTRES::func_ov031_02102f64(void) {}
ARM void MapObjectUnkTRES::func_ov031_02102f90(void) {}
ARM void MapObjectUnkTRES::func_ov031_02102f98(void) {}

ARM MapObjectUnkTRES::~MapObjectUnkTRES() {}
ARM MapObjectProfileUnkTRES::~MapObjectProfileUnkTRES() {}
