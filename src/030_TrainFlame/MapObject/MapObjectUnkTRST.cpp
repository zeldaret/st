//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRST.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRST sMapObjectProfileUnkTRST;

ARM MapObjectProfileUnkTRST *MapObjectProfileUnkTRST::GetProfile() {
    return &sMapObjectProfileUnkTRST;
}

ARM MapObject *MapObjectProfileUnkTRST::Create() {
    return new(HeapIndex_2) MapObjectUnkTRST();
}

ARM MapObjectProfileUnkTRST::MapObjectProfileUnkTRST() :
    MapObjectProfile(MapObjectId_TRST) {}

ARM MapObjectUnkTRST::MapObjectUnkTRST() {}

ARM void MapObjectUnkTRST::func_ov030_02143860(void) {}
ARM void MapObjectUnkTRST::func_ov030_0214394c(void) {}
ARM void MapObjectUnkTRST::func_ov030_021439c0(void) {}
ARM void MapObjectUnkTRST::func_ov030_021439d8(void) {}
ARM void MapObjectUnkTRST::func_ov030_02143a18(void) {}
ARM void MapObjectUnkTRST::func_ov030_02143a38(void) {}
ARM void MapObjectUnkTRST::func_ov030_02143a58(void) {}

ARM MapObjectUnkTRST::~MapObjectUnkTRST() {}
ARM MapObjectProfileUnkTRST::~MapObjectProfileUnkTRST() {}
