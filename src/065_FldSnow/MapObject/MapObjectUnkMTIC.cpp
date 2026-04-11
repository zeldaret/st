//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkMTIC.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkMTIC sMapObjectProfileUnkMTIC;

ARM MapObjectProfileUnkMTIC *MapObjectProfileUnkMTIC::GetProfile() {
    return &sMapObjectProfileUnkMTIC;
}

ARM MapObject *MapObjectProfileUnkMTIC::Create() {
    return new(HeapIndex_2) MapObjectUnkMTIC();
}

ARM MapObjectProfileUnkMTIC::MapObjectProfileUnkMTIC() :
    MapObjectProfile(MapObjectId_MTIC) {}

ARM MapObjectUnkMTIC::MapObjectUnkMTIC() {}

ARM void MapObjectUnkMTIC::func_ov065_02159f08(void) {}
ARM void MapObjectUnkMTIC::func_ov065_02159f54(void) {}
ARM void MapObjectUnkMTIC::func_ov065_02159f58(void) {}

ARM MapObjectUnkMTIC::~MapObjectUnkMTIC() {}
ARM MapObjectProfileUnkMTIC::~MapObjectProfileUnkMTIC() {}
