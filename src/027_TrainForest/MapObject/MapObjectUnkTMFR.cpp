//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTMFR.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTMFR sMapObjectProfileUnkTMFR;

ARM MapObjectProfileUnkTMFR *MapObjectProfileUnkTMFR::GetProfile() {
    return &sMapObjectProfileUnkTMFR;
}

ARM MapObject *MapObjectProfileUnkTMFR::Create() {
    return new(HeapIndex_2) MapObjectUnkTMFR();
}

ARM MapObjectProfileUnkTMFR::MapObjectProfileUnkTMFR() :
    MapObjectProfile(MapObjectId_TMFR) {}

ARM MapObjectUnkTMFR::MapObjectUnkTMFR() {}

ARM void MapObjectUnkTMFR::func_ov027_02141ab0(void) {}
ARM void MapObjectUnkTMFR::func_ov027_02141ac4(void) {}
ARM void MapObjectUnkTMFR::func_ov027_02141bd0(void) {}
ARM void MapObjectUnkTMFR::func_ov027_02141cb8(void) {}
ARM void MapObjectUnkTMFR::func_ov027_02141cc0(void) {}
ARM void MapObjectUnkTMFR::func_ov027_02141cc8(void) {}
ARM void MapObjectUnkTMFR::func_ov027_02141ccc(void) {}
ARM void MapObjectUnkTMFR::func_ov027_02141e2c(void) {}
ARM void MapObjectUnkTMFR::func_ov027_02141e38(void) {}
ARM void MapObjectUnkTMFR::func_ov027_02141e44(void) {}
ARM void MapObjectUnkTMFR::func_ov027_02141ed0(void) {}
ARM void MapObjectUnkTMFR::func_ov027_02141f10(void) {}
ARM void MapObjectUnkTMFR::func_ov027_02141f30(void) {}
ARM void MapObjectUnkTMFR::func_ov027_02141f94(void) {}
ARM void MapObjectUnkTMFR::func_ov027_02141fc4(void) {}

ARM MapObjectUnkTMFR::~MapObjectUnkTMFR() {}
ARM MapObjectProfileUnkTMFR::~MapObjectProfileUnkTMFR() {}
