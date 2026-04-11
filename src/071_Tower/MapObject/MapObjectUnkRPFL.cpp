//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkRPFL.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkRPFL sMapObjectProfileUnkRPFL;

ARM MapObjectProfileUnkRPFL *MapObjectProfileUnkRPFL::GetProfile() {
    return &sMapObjectProfileUnkRPFL;
}

ARM MapObject *MapObjectProfileUnkRPFL::Create() {
    return new(HeapIndex_2) MapObjectUnkRPFL();
}

ARM MapObjectProfileUnkRPFL::MapObjectProfileUnkRPFL() :
    MapObjectProfile(MapObjectId_RPFL) {}

ARM MapObjectUnkRPFL::MapObjectUnkRPFL() {}

ARM void MapObjectUnkRPFL::func_ov071_02160c88(void) {}
ARM void MapObjectUnkRPFL::func_ov071_02160cbc(void) {}
ARM void MapObjectUnkRPFL::func_ov071_02160cd8(void) {}
ARM void MapObjectUnkRPFL::func_ov071_02160d14(void) {}
ARM void MapObjectUnkRPFL::func_ov071_02160e00(void) {}
ARM void MapObjectUnkRPFL::func_ov071_02160e14(void) {}
ARM void MapObjectUnkRPFL::func_ov071_02160fe4(void) {}
ARM void MapObjectUnkRPFL::func_ov071_02161054(void) {}
ARM void MapObjectUnkRPFL::func_ov071_0216120c(void) {}
ARM void MapObjectUnkRPFL::func_ov071_0216146c(void) {}
ARM void MapObjectUnkRPFL::func_ov071_021614f4(void) {}
ARM void MapObjectUnkRPFL::func_ov071_02161514(void) {}
ARM void MapObjectUnkRPFL::func_ov071_02161604(void) {}
ARM void MapObjectUnkRPFL::func_ov071_021616d8(void) {}
ARM void MapObjectUnkRPFL::func_ov071_0216170c(void) {}
ARM void MapObjectUnkRPFL::func_ov071_02161730(void) {}
ARM void MapObjectUnkRPFL::func_ov071_02161788(void) {}
ARM void MapObjectUnkRPFL::func_ov071_02161918(void) {}

ARM MapObjectUnkRPFL::~MapObjectUnkRPFL() {}
ARM MapObjectProfileUnkRPFL::~MapObjectProfileUnkRPFL() {}
