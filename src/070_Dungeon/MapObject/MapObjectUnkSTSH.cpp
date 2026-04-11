//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSTSH.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSTSH sMapObjectProfileUnkSTSH;

ARM MapObjectProfileUnkSTSH *MapObjectProfileUnkSTSH::GetProfile() {
    return &sMapObjectProfileUnkSTSH;
}

ARM MapObject *MapObjectProfileUnkSTSH::Create() {
    return new(HeapIndex_2) MapObjectUnkSTSH();
}

ARM MapObjectProfileUnkSTSH::MapObjectProfileUnkSTSH() :
    MapObjectProfile(MapObjectId_STSH) {}

ARM MapObjectUnkSTSH::MapObjectUnkSTSH() {}

ARM void MapObjectUnkSTSH::func_ov070_0214a0b8(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214a1a0(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214a1f0(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214a24c(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214a2f4(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214a33c(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214a3d8(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214a504(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214a568(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214a794(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214a91c(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214a928(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214a9bc(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214ac48(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214ad3c(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214ade0(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214ae5c(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214b0ec(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214b114(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214b138(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214b15c(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214b180(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214b1a4(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214b1c4(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214b1f0(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214b210(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214b228(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214b23c(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214b248(void) {}
ARM void MapObjectUnkSTSH::func_ov070_0214b29c(void) {}

ARM MapObjectUnkSTSH::~MapObjectUnkSTSH() {}
ARM MapObjectProfileUnkSTSH::~MapObjectProfileUnkSTSH() {}
