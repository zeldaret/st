//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkCTPT.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkCTPT sMapObjectProfileUnkCTPT;

ARM MapObjectProfileUnkCTPT *MapObjectProfileUnkCTPT::GetProfile() {
    return &sMapObjectProfileUnkCTPT;
}

ARM MapObject *MapObjectProfileUnkCTPT::Create() {
    return new(HeapIndex_2) MapObjectUnkCTPT();
}

ARM MapObjectProfileUnkCTPT::MapObjectProfileUnkCTPT() :
    MapObjectProfile(MapObjectId_CTPT) {}

ARM MapObjectUnkCTPT::MapObjectUnkCTPT() {}

ARM void MapObjectUnkCTPT::func_ov085_02153388(void) {}
ARM void MapObjectUnkCTPT::func_ov085_0215339c(void) {}
ARM void MapObjectUnkCTPT::func_ov085_021533b0(void) {}
ARM void MapObjectUnkCTPT::func_ov085_02153604(void) {}
ARM void MapObjectUnkCTPT::func_ov085_021538cc(void) {}
ARM void MapObjectUnkCTPT::func_ov085_02153a0c(void) {}
ARM void MapObjectUnkCTPT::func_ov085_02153b78(void) {}
ARM void MapObjectUnkCTPT::func_ov085_02153c08(void) {}
ARM void MapObjectUnkCTPT::func_ov085_02153c4c(void) {}
ARM void MapObjectUnkCTPT::func_ov085_02153c74(void) {}
ARM void MapObjectUnkCTPT::func_ov085_02153ce4(void) {}
ARM void MapObjectUnkCTPT::func_ov085_02153d70(void) {}
ARM void MapObjectUnkCTPT::func_ov085_02153dc4(void) {}

ARM MapObjectUnkCTPT::~MapObjectUnkCTPT() {}
ARM MapObjectProfileUnkCTPT::~MapObjectProfileUnkCTPT() {}
