//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkWLMP.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkWLMP sMapObjectProfileUnkWLMP;

ARM MapObjectProfileUnkWLMP *MapObjectProfileUnkWLMP::GetProfile() {
    return &sMapObjectProfileUnkWLMP;
}

ARM MapObject *MapObjectProfileUnkWLMP::Create() {
    return new(HeapIndex_2) MapObjectUnkWLMP();
}

ARM MapObjectProfileUnkWLMP::MapObjectProfileUnkWLMP() :
    MapObjectProfile(MapObjectId_WLMP) {}

ARM MapObjectUnkWLMP::MapObjectUnkWLMP() {}

ARM void MapObjectUnkWLMP::func_ov094_02171150(void) {}
ARM void MapObjectUnkWLMP::func_ov094_021711d0(void) {}
ARM void MapObjectUnkWLMP::func_ov094_02171318(void) {}
ARM void MapObjectUnkWLMP::func_ov094_021714a8(void) {}
ARM void MapObjectUnkWLMP::func_ov094_0217156c(void) {}
ARM void MapObjectUnkWLMP::func_ov094_02171598(void) {}
ARM void MapObjectUnkWLMP::func_ov094_02171604(void) {}
ARM void MapObjectUnkWLMP::func_ov094_02171674(void) {}
ARM void MapObjectUnkWLMP::func_ov094_02171694(void) {}

ARM MapObjectUnkWLMP::~MapObjectUnkWLMP() {}
ARM MapObjectProfileUnkWLMP::~MapObjectProfileUnkWLMP() {}
