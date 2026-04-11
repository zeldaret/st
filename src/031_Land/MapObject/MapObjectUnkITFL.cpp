//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkITFL.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkITFL sMapObjectProfileUnkITFL;

ARM MapObjectProfileUnkITFL *MapObjectProfileUnkITFL::GetProfile() {
    return &sMapObjectProfileUnkITFL;
}

ARM MapObject *MapObjectProfileUnkITFL::Create() {
    return new(HeapIndex_2) MapObjectUnkITFL();
}

ARM MapObjectProfileUnkITFL::MapObjectProfileUnkITFL() :
    MapObjectProfile(MapObjectId_ITFL) {}

ARM MapObjectUnkITFL::MapObjectUnkITFL() {}

ARM void MapObjectUnkITFL::func_ov031_021059b8(void) {}
ARM void MapObjectUnkITFL::func_ov031_02105be4(void) {}
ARM void MapObjectUnkITFL::func_ov031_02105cbc(void) {}
ARM void MapObjectUnkITFL::func_ov031_02105dac(void) {}
ARM void MapObjectUnkITFL::func_ov031_02105f54(void) {}

ARM MapObjectUnkITFL::~MapObjectUnkITFL() {}
ARM MapObjectProfileUnkITFL::~MapObjectProfileUnkITFL() {}
