//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkPTFL.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkPTFL sMapObjectProfileUnkPTFL;

ARM MapObjectProfileUnkPTFL *MapObjectProfileUnkPTFL::GetProfile() {
    return &sMapObjectProfileUnkPTFL;
}

ARM MapObject *MapObjectProfileUnkPTFL::Create() {
    return new(HeapIndex_2) MapObjectUnkPTFL();
}

ARM MapObjectProfileUnkPTFL::MapObjectProfileUnkPTFL() :
    MapObjectProfile(MapObjectId_PTFL) {}

ARM MapObjectUnkPTFL::MapObjectUnkPTFL() {}

ARM void MapObjectUnkPTFL::func_ov070_0214ba34(void) {}
ARM void MapObjectUnkPTFL::func_ov070_0214bb78(void) {}
ARM void MapObjectUnkPTFL::func_ov070_0214bbd0(void) {}
ARM void MapObjectUnkPTFL::func_ov070_0214bd48(void) {}
ARM void MapObjectUnkPTFL::func_ov070_0214bd90(void) {}
ARM void MapObjectUnkPTFL::func_ov070_0214bf58(void) {}
ARM void MapObjectUnkPTFL::func_ov070_0214bf5c(void) {}
ARM void MapObjectUnkPTFL::func_ov070_0214bf6c(void) {}
ARM void MapObjectUnkPTFL::func_ov070_0214bfbc(void) {}

ARM MapObjectUnkPTFL::~MapObjectUnkPTFL() {}
ARM MapObjectProfileUnkPTFL::~MapObjectProfileUnkPTFL() {}
