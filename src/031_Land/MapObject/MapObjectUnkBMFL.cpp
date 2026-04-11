//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkBMFL.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkBMFL sMapObjectProfileUnkBMFL;

ARM MapObjectProfileUnkBMFL *MapObjectProfileUnkBMFL::GetProfile() {
    return &sMapObjectProfileUnkBMFL;
}

ARM MapObject *MapObjectProfileUnkBMFL::Create() {
    return new(HeapIndex_2) MapObjectUnkBMFL();
}

ARM MapObjectProfileUnkBMFL::MapObjectProfileUnkBMFL() :
    MapObjectProfile(MapObjectId_BMFL) {}

ARM MapObjectUnkBMFL::MapObjectUnkBMFL() {}

ARM void MapObjectUnkBMFL::func_ov031_021025c4(void) {}
ARM void MapObjectUnkBMFL::func_ov031_02102708(void) {}
ARM void MapObjectUnkBMFL::func_ov031_02102718(void) {}
ARM void MapObjectUnkBMFL::func_ov031_02102728(void) {}
ARM void MapObjectUnkBMFL::func_ov031_021027a4(void) {}
ARM void MapObjectUnkBMFL::func_ov031_02102894(void) {}
ARM void MapObjectUnkBMFL::func_ov031_021029f0(void) {}
ARM void MapObjectUnkBMFL::func_ov031_02102a40(void) {}
ARM void MapObjectUnkBMFL::func_ov031_02102ad8(void) {}
ARM void MapObjectUnkBMFL::func_ov031_02102af4(void) {}

ARM MapObjectUnkBMFL::~MapObjectUnkBMFL() {}
ARM MapObjectProfileUnkBMFL::~MapObjectProfileUnkBMFL() {}
