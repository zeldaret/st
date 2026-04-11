//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkMZFX.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkMZFX sMapObjectProfileUnkMZFX;

ARM MapObjectProfileUnkMZFX *MapObjectProfileUnkMZFX::GetProfile() {
    return &sMapObjectProfileUnkMZFX;
}

ARM MapObject *MapObjectProfileUnkMZFX::Create() {
    return new(HeapIndex_2) MapObjectUnkMZFX();
}

ARM MapObjectProfileUnkMZFX::MapObjectProfileUnkMZFX() :
    MapObjectProfile(MapObjectId_MZFX) {}

ARM MapObjectUnkMZFX::MapObjectUnkMZFX() {}

ARM void MapObjectUnkMZFX::func_ov091_02167bfc(void) {}
ARM void MapObjectUnkMZFX::func_ov091_02167c04(void) {}

ARM MapObjectUnkMZFX::~MapObjectUnkMZFX() {}
ARM MapObjectProfileUnkMZFX::~MapObjectProfileUnkMZFX() {}
