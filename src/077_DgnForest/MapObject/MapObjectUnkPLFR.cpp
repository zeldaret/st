//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkPLFR.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkPLFR);

ARM MapObject *MapObjectProfileUnkPLFR::Create() {
    return new(HeapIndex_2) MapObjectUnkPLFR();
}

ARM MapObjectProfileUnkPLFR::MapObjectProfileUnkPLFR() :
    MapObjectProfile(MapObjectId_PLFR) {}

ARM MapObjectUnkPLFR::MapObjectUnkPLFR() {}

ARM void MapObjectUnkPLFR::func_ov077_0215ad70(void) {}
ARM void MapObjectUnkPLFR::func_ov077_0215add0(void) {}
ARM void MapObjectUnkPLFR::func_ov077_0215add4(void) {}

ARM MapObjectUnkPLFR::~MapObjectUnkPLFR() {}
ARM MapObjectProfileUnkPLFR::~MapObjectProfileUnkPLFR() {}
