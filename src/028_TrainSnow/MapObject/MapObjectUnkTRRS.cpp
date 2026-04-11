//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRRS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRRS sMapObjectProfileUnkTRRS;

ARM MapObjectProfileUnkTRRS *MapObjectProfileUnkTRRS::GetProfile() {
    return &sMapObjectProfileUnkTRRS;
}

ARM MapObject *MapObjectProfileUnkTRRS::Create() {
    return new(HeapIndex_2) MapObjectUnkTRRS();
}

ARM MapObjectProfileUnkTRRS::MapObjectProfileUnkTRRS() :
    MapObjectProfile(MapObjectId_TRRS) {}

ARM MapObjectUnkTRRS::MapObjectUnkTRRS() {}

ARM void MapObjectUnkTRRS::func_ov028_02144970(void) {}
ARM void MapObjectUnkTRRS::func_ov028_02144a5c(void) {}
ARM void MapObjectUnkTRRS::func_ov028_02144a7c(void) {}
ARM void MapObjectUnkTRRS::func_ov028_02144a9c(void) {}
ARM void MapObjectUnkTRRS::func_ov028_02144abc(void) {}

ARM MapObjectUnkTRRS::~MapObjectUnkTRRS() {}
ARM MapObjectProfileUnkTRRS::~MapObjectProfileUnkTRRS() {}
