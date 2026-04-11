//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRDT.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRDT sMapObjectProfileUnkTRDT;

ARM MapObjectProfileUnkTRDT *MapObjectProfileUnkTRDT::GetProfile() {
    return &sMapObjectProfileUnkTRDT;
}

ARM MapObject *MapObjectProfileUnkTRDT::Create() {
    return new(HeapIndex_2) MapObjectUnkTRDT();
}

ARM MapObjectProfileUnkTRDT::MapObjectProfileUnkTRDT() :
    MapObjectProfile(MapObjectId_TRDT) {}

ARM MapObjectUnkTRDT::MapObjectUnkTRDT() {}

ARM void MapObjectUnkTRDT::func_ov090_02174e60(void) {}
ARM void MapObjectUnkTRDT::func_ov090_02174eac(void) {}
ARM void MapObjectUnkTRDT::func_ov090_02174f40(void) {}

ARM MapObjectUnkTRDT::~MapObjectUnkTRDT() {}
ARM MapObjectProfileUnkTRDT::~MapObjectProfileUnkTRDT() {}
