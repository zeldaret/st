//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRGW.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRGW sMapObjectProfileUnkTRGW;

ARM MapObjectProfileUnkTRGW *MapObjectProfileUnkTRGW::GetProfile() {
    return &sMapObjectProfileUnkTRGW;
}

ARM MapObject *MapObjectProfileUnkTRGW::Create() {
    return new(HeapIndex_2) MapObjectUnkTRGW();
}

ARM MapObjectProfileUnkTRGW::MapObjectProfileUnkTRGW() :
    MapObjectProfile(MapObjectId_TRGW) {}

ARM MapObjectUnkTRGW::MapObjectUnkTRGW() {}

ARM void MapObjectUnkTRGW::func_ov090_02173198(void) {}
ARM void MapObjectUnkTRGW::func_ov090_021731e8(void) {}
ARM void MapObjectUnkTRGW::func_ov090_021732c4(void) {}
ARM void MapObjectUnkTRGW::func_ov090_02173314(void) {}
ARM void MapObjectUnkTRGW::func_ov090_02173320(void) {}

ARM MapObjectUnkTRGW::~MapObjectUnkTRGW() {}
ARM MapObjectProfileUnkTRGW::~MapObjectProfileUnkTRGW() {}
