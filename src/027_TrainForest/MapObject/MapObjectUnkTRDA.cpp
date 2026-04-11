//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRDA.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRDA sMapObjectProfileUnkTRDA;

ARM MapObjectProfileUnkTRDA *MapObjectProfileUnkTRDA::GetProfile() {
    return &sMapObjectProfileUnkTRDA;
}

ARM MapObject *MapObjectProfileUnkTRDA::Create() {
    return new(HeapIndex_2) MapObjectUnkTRDA();
}

ARM MapObjectProfileUnkTRDA::MapObjectProfileUnkTRDA() :
    MapObjectProfile(MapObjectId_TRDA) {}

ARM MapObjectUnkTRDA::MapObjectUnkTRDA() {}

ARM void MapObjectUnkTRDA::func_ov027_02142e3c(void) {}
ARM void MapObjectUnkTRDA::func_ov027_02142f28(void) {}
ARM void MapObjectUnkTRDA::func_ov027_02142f48(void) {}
ARM void MapObjectUnkTRDA::func_ov027_02142f68(void) {}
ARM void MapObjectUnkTRDA::func_ov027_02142f88(void) {}

ARM MapObjectUnkTRDA::~MapObjectUnkTRDA() {}
ARM MapObjectProfileUnkTRDA::~MapObjectProfileUnkTRDA() {}
