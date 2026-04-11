//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkMTIR.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkMTIR sMapObjectProfileUnkMTIR;

ARM MapObjectProfileUnkMTIR *MapObjectProfileUnkMTIR::GetProfile() {
    return &sMapObjectProfileUnkMTIR;
}

ARM MapObject *MapObjectProfileUnkMTIR::Create() {
    return new(HeapIndex_2) MapObjectUnkMTIR();
}

ARM MapObjectProfileUnkMTIR::MapObjectProfileUnkMTIR() :
    MapObjectProfile(MapObjectId_MTIR) {}

ARM MapObjectUnkMTIR::MapObjectUnkMTIR() {}

ARM void MapObjectUnkMTIR::func_ov067_0215be74(void) {}
ARM void MapObjectUnkMTIR::func_ov067_0215bec0(void) {}
ARM void MapObjectUnkMTIR::func_ov067_0215bec4(void) {}

ARM MapObjectUnkMTIR::~MapObjectUnkMTIR() {}
ARM MapObjectProfileUnkMTIR::~MapObjectProfileUnkMTIR() {}
