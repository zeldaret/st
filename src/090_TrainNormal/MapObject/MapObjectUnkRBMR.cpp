//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkRBMR.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkRBMR sMapObjectProfileUnkRBMR;

ARM MapObjectProfileUnkRBMR *MapObjectProfileUnkRBMR::GetProfile() {
    return &sMapObjectProfileUnkRBMR;
}

ARM MapObject *MapObjectProfileUnkRBMR::Create() {
    return new(HeapIndex_2) MapObjectUnkRBMR();
}

ARM MapObjectProfileUnkRBMR::MapObjectProfileUnkRBMR() :
    MapObjectProfile(MapObjectId_RBMR) {}

ARM MapObjectUnkRBMR::MapObjectUnkRBMR() {}

ARM void MapObjectUnkRBMR::func_ov090_02174bf8(void) {}
ARM void MapObjectUnkRBMR::func_ov090_02174c0c(void) {}

ARM MapObjectUnkRBMR::~MapObjectUnkRBMR() {}
ARM MapObjectProfileUnkRBMR::~MapObjectProfileUnkRBMR() {}
