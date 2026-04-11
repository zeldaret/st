//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkBLCT.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkBLCT sMapObjectProfileUnkBLCT;

ARM MapObjectProfileUnkBLCT *MapObjectProfileUnkBLCT::GetProfile() {
    return &sMapObjectProfileUnkBLCT;
}

ARM MapObject *MapObjectProfileUnkBLCT::Create() {
    return new(HeapIndex_2) MapObjectUnkBLCT();
}

ARM MapObjectProfileUnkBLCT::MapObjectProfileUnkBLCT() :
    MapObjectProfile(MapObjectId_BLCT) {}

ARM MapObjectUnkBLCT::MapObjectUnkBLCT() {}

ARM void MapObjectUnkBLCT::func_ov071_021630e8(void) {}
ARM void MapObjectUnkBLCT::func_ov071_0216322c(void) {}
ARM void MapObjectUnkBLCT::func_ov071_021632b8(void) {}
ARM void MapObjectUnkBLCT::func_ov071_021632d0(void) {}
ARM void MapObjectUnkBLCT::func_ov071_02163348(void) {}
ARM void MapObjectUnkBLCT::func_ov071_021634ac(void) {}

ARM MapObjectUnkBLCT::~MapObjectUnkBLCT() {}
ARM MapObjectProfileUnkBLCT::~MapObjectProfileUnkBLCT() {}
