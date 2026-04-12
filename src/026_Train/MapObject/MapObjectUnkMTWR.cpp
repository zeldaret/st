//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkMTWR.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkMTWR);

ARM MapObject *MapObjectProfileUnkMTWR::Create() {
    return new(HeapIndex_2) MapObjectUnkMTWR();
}

ARM MapObjectProfileUnkMTWR::MapObjectProfileUnkMTWR() :
    MapObjectProfile(MapObjectId_MTWR) {}

ARM MapObjectUnkMTWR::MapObjectUnkMTWR() {}

ARM void MapObjectUnkMTWR::func_ov026_0210a744(void) {}
ARM void MapObjectUnkMTWR::func_ov026_0210a85c(void) {}
ARM void MapObjectUnkMTWR::func_ov026_0210a878(void) {}

ARM MapObjectUnkMTWR::~MapObjectUnkMTWR() {}
ARM MapObjectProfileUnkMTWR::~MapObjectProfileUnkMTWR() {}
