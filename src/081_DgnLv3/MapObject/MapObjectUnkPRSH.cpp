//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkPRSH.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkPRSH sMapObjectProfileUnkPRSH;

ARM MapObjectProfileUnkPRSH *MapObjectProfileUnkPRSH::GetProfile() {
    return &sMapObjectProfileUnkPRSH;
}

ARM MapObject *MapObjectProfileUnkPRSH::Create() {
    return new(HeapIndex_2) MapObjectUnkPRSH();
}

ARM MapObjectProfileUnkPRSH::MapObjectProfileUnkPRSH() :
    MapObjectProfile(MapObjectId_PRSH) {}

ARM MapObjectUnkPRSH::MapObjectUnkPRSH() {}

ARM void MapObjectUnkPRSH::func_ov081_021520ec(void) {}
ARM void MapObjectUnkPRSH::func_ov081_021521cc(void) {}
ARM void MapObjectUnkPRSH::func_ov081_02152334(void) {}
ARM void MapObjectUnkPRSH::func_ov081_021523b4(void) {}
ARM void MapObjectUnkPRSH::func_ov081_0215243c(void) {}
ARM void MapObjectUnkPRSH::func_ov081_02152444(void) {}
ARM void MapObjectUnkPRSH::func_ov081_02152570(void) {}
ARM void MapObjectUnkPRSH::func_ov081_02152574(void) {}
ARM void MapObjectUnkPRSH::func_ov081_021525e0(void) {}
ARM void MapObjectUnkPRSH::func_ov081_02152600(void) {}
ARM void MapObjectUnkPRSH::func_ov081_02152610(void) {}
ARM void MapObjectUnkPRSH::func_ov081_02152698(void) {}

ARM MapObjectUnkPRSH::~MapObjectUnkPRSH() {}
ARM MapObjectProfileUnkPRSH::~MapObjectProfileUnkPRSH() {}
