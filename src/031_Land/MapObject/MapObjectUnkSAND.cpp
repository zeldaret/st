//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSAND.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSAND sMapObjectProfileUnkSAND;

ARM MapObjectProfileUnkSAND *MapObjectProfileUnkSAND::GetProfile() {
    return &sMapObjectProfileUnkSAND;
}

ARM MapObject *MapObjectProfileUnkSAND::Create() {
    return new(HeapIndex_2) MapObjectUnkSAND();
}

ARM MapObjectProfileUnkSAND::MapObjectProfileUnkSAND() :
    MapObjectProfile(MapObjectId_SAND) {}

ARM MapObjectUnkSAND::MapObjectUnkSAND() {}

ARM void MapObjectUnkSAND::func_ov031_0210acd4(void) {}
ARM void MapObjectUnkSAND::func_ov031_0210ad64(void) {}
ARM void MapObjectUnkSAND::func_ov031_0210ae00(void) {}
ARM void MapObjectUnkSAND::func_ov031_0210ae90(void) {}
ARM void MapObjectUnkSAND::func_ov031_0210af50(void) {}
ARM void MapObjectUnkSAND::func_ov031_0210b018(void) {}
ARM void MapObjectUnkSAND::func_ov031_0210b028(void) {}
ARM void MapObjectUnkSAND::func_ov031_0210b0ac(void) {}
ARM void MapObjectUnkSAND::func_ov031_0210b0e4(void) {}
ARM void MapObjectUnkSAND::func_ov031_0210b144(void) {}
ARM void MapObjectUnkSAND::func_ov031_0210b17c(void) {}
ARM void MapObjectUnkSAND::func_ov031_0210b1ec(void) {}
ARM void MapObjectUnkSAND::func_ov031_0210b2cc(void) {}
ARM void MapObjectUnkSAND::func_ov031_0210b32c(void) {}
ARM void MapObjectUnkSAND::func_ov031_0210b34c(void) {}

ARM MapObjectUnkSAND::~MapObjectUnkSAND() {}
ARM MapObjectProfileUnkSAND::~MapObjectProfileUnkSAND() {}
