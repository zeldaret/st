//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkRCFL.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkRCFL sMapObjectProfileUnkRCFL;

ARM MapObjectProfileUnkRCFL *MapObjectProfileUnkRCFL::GetProfile() {
    return &sMapObjectProfileUnkRCFL;
}

ARM MapObject *MapObjectProfileUnkRCFL::Create() {
    return new(HeapIndex_2) MapObjectUnkRCFL();
}

ARM MapObjectProfileUnkRCFL::MapObjectProfileUnkRCFL() :
    MapObjectProfile(MapObjectId_RCFL) {}

ARM MapObjectUnkRCFL::MapObjectUnkRCFL() {}

ARM void MapObjectUnkRCFL::func_ov033_0211b908(void) {}
ARM void MapObjectUnkRCFL::func_ov033_0211b938(void) {}
ARM void MapObjectUnkRCFL::func_ov033_0211b9dc(void) {}
ARM void MapObjectUnkRCFL::func_ov033_0211bc34(void) {}
ARM void MapObjectUnkRCFL::func_ov033_0211bcac(void) {}
ARM void MapObjectUnkRCFL::func_ov033_0211bcc4(void) {}
ARM void MapObjectUnkRCFL::func_ov033_0211bcdc(void) {}
ARM void MapObjectUnkRCFL::func_ov033_0211bcf4(void) {}
ARM void MapObjectUnkRCFL::func_ov033_0211bcfc(void) {}
ARM void MapObjectUnkRCFL::func_ov033_0211bdac(void) {}

ARM MapObjectUnkRCFL::~MapObjectUnkRCFL() {}
ARM MapObjectProfileUnkRCFL::~MapObjectProfileUnkRCFL() {}
