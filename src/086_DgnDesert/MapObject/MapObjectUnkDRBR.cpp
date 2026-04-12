//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkDRBR.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkDRBR);

ARM MapObject *MapObjectProfileUnkDRBR::Create() {
    return new(HeapIndex_2) MapObjectUnkDRBR();
}

ARM MapObjectProfileUnkDRBR::MapObjectProfileUnkDRBR() :
    MapObjectProfile(MapObjectId_DRBR) {}

ARM MapObjectUnkDRBR::MapObjectUnkDRBR() {}

ARM void MapObjectUnkDRBR::func_ov086_0215e1bc(void) {}

ARM MapObjectUnkDRBR::~MapObjectUnkDRBR() {}
ARM MapObjectProfileUnkDRBR::~MapObjectProfileUnkDRBR() {}
