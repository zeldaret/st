//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkRBSR.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkRBSR);

ARM MapObject *MapObjectProfileUnkRBSR::Create() {
    return new(HeapIndex_2) MapObjectUnkRBSR();
}

ARM MapObjectProfileUnkRBSR::MapObjectProfileUnkRBSR() :
    MapObjectProfile(MapObjectId_RBSR) {}

ARM MapObjectUnkRBSR::MapObjectUnkRBSR() {}

ARM void MapObjectUnkRBSR::func_ov028_02146610(void) {}
ARM void MapObjectUnkRBSR::func_ov028_02146624(void) {}

ARM MapObjectUnkRBSR::~MapObjectUnkRBSR() {}
ARM MapObjectProfileUnkRBSR::~MapObjectProfileUnkRBSR() {}
