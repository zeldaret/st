//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRSH.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRSH sMapObjectProfileUnkTRSH;

ARM MapObjectProfileUnkTRSH *MapObjectProfileUnkTRSH::GetProfile() {
    return &sMapObjectProfileUnkTRSH;
}

ARM MapObject *MapObjectProfileUnkTRSH::Create() {
    return new(HeapIndex_2) MapObjectUnkTRSH();
}

ARM MapObjectProfileUnkTRSH::MapObjectProfileUnkTRSH() :
    MapObjectProfile(MapObjectId_TRSH) {}

ARM MapObjectUnkTRSH::MapObjectUnkTRSH() {}

ARM void MapObjectUnkTRSH::func_ov027_021427e0(void) {}
ARM void MapObjectUnkTRSH::func_ov027_021428cc(void) {}
ARM void MapObjectUnkTRSH::func_ov027_02142938(void) {}
ARM void MapObjectUnkTRSH::func_ov027_02142950(void) {}
ARM void MapObjectUnkTRSH::func_ov027_02142990(void) {}
ARM void MapObjectUnkTRSH::func_ov027_021429b0(void) {}
ARM void MapObjectUnkTRSH::func_ov027_021429d0(void) {}

ARM MapObjectUnkTRSH::~MapObjectUnkTRSH() {}
ARM MapObjectProfileUnkTRSH::~MapObjectProfileUnkTRSH() {}
