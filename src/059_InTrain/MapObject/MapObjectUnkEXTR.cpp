//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkEXTR.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkEXTR sMapObjectProfileUnkEXTR;

ARM MapObjectProfileUnkEXTR *MapObjectProfileUnkEXTR::GetProfile() {
    return &sMapObjectProfileUnkEXTR;
}

ARM MapObject *MapObjectProfileUnkEXTR::Create() {
    return new(HeapIndex_2) MapObjectUnkEXTR();
}

ARM MapObjectProfileUnkEXTR::MapObjectProfileUnkEXTR() :
    MapObjectProfile(MapObjectId_EXTR) {}

ARM MapObjectUnkEXTR::MapObjectUnkEXTR() {}

ARM void MapObjectUnkEXTR::func_ov059_02162d44(void) {}

ARM MapObjectUnkEXTR::~MapObjectUnkEXTR() {}
ARM MapObjectProfileUnkEXTR::~MapObjectProfileUnkEXTR() {}
