//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSWHT.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSWHT sMapObjectProfileUnkSWHT;

ARM MapObjectProfileUnkSWHT *MapObjectProfileUnkSWHT::GetProfile() {
    return &sMapObjectProfileUnkSWHT;
}

ARM MapObject *MapObjectProfileUnkSWHT::Create() {
    return new(HeapIndex_2) MapObjectUnkSWHT();
}

ARM MapObjectProfileUnkSWHT::MapObjectProfileUnkSWHT() :
    MapObjectProfile(MapObjectId_SWHT) {}

ARM MapObjectUnkSWHT::MapObjectUnkSWHT() {}

ARM void MapObjectUnkSWHT::func_ov031_02101be8(void) {}
ARM void MapObjectUnkSWHT::func_ov031_02101ce8(void) {}
ARM void MapObjectUnkSWHT::func_ov031_02101dd8(void) {}
ARM void MapObjectUnkSWHT::func_ov031_02101e1c(void) {}
ARM void MapObjectUnkSWHT::func_ov031_02101f88(void) {}
ARM void MapObjectUnkSWHT::func_ov031_02101f94(void) {}
ARM void MapObjectUnkSWHT::func_ov031_02101fb4(void) {}
ARM void MapObjectUnkSWHT::func_ov031_021020ec(void) {}
ARM void MapObjectUnkSWHT::func_ov031_021021c0(void) {}
ARM void MapObjectUnkSWHT::func_ov031_021023b0(void) {}

ARM MapObjectUnkSWHT::~MapObjectUnkSWHT() {}
ARM MapObjectProfileUnkSWHT::~MapObjectProfileUnkSWHT() {}
