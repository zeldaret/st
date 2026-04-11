//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRSR.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkTRSR);

ARM MapObject *MapObjectProfileUnkTRSR::Create() {
    return new(HeapIndex_2) MapObjectUnkTRSR();
}

ARM MapObjectProfileUnkTRSR::MapObjectProfileUnkTRSR() :
    MapObjectProfile(MapObjectId_TRSR) {}

ARM MapObjectUnkTRSR::MapObjectUnkTRSR() {}

ARM void MapObjectUnkTRSR::func_ov028_0214643c(void) {}
ARM void MapObjectUnkTRSR::func_ov028_0214647c(void) {}
ARM void MapObjectUnkTRSR::func_ov028_021464cc(void) {}

ARM MapObjectUnkTRSR::~MapObjectUnkTRSR() {}
ARM MapObjectProfileUnkTRSR::~MapObjectProfileUnkTRSR() {}
