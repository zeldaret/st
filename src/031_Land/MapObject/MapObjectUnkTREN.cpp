//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTREN.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTREN sMapObjectProfileUnkTREN;

ARM MapObjectProfileUnkTREN *MapObjectProfileUnkTREN::GetProfile() {
    return &sMapObjectProfileUnkTREN;
}

ARM MapObject *MapObjectProfileUnkTREN::Create() {
    return new(HeapIndex_2) MapObjectUnkTREN();
}

ARM MapObjectProfileUnkTREN::MapObjectProfileUnkTREN() :
    MapObjectProfile(MapObjectId_TREN) {}

ARM MapObjectUnkTREN::MapObjectUnkTREN() {}

ARM void MapObjectUnkTREN::func_ov031_02104470(void) {}

ARM MapObjectUnkTREN::~MapObjectUnkTREN() {}
ARM MapObjectProfileUnkTREN::~MapObjectProfileUnkTREN() {}
