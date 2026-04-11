//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkRDSD.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkRDSD sMapObjectProfileUnkRDSD;

ARM MapObjectProfileUnkRDSD *MapObjectProfileUnkRDSD::GetProfile() {
    return &sMapObjectProfileUnkRDSD;
}

ARM MapObject *MapObjectProfileUnkRDSD::Create() {
    return new(HeapIndex_2) MapObjectUnkRDSD();
}

ARM MapObjectProfileUnkRDSD::MapObjectProfileUnkRDSD() :
    MapObjectProfile(MapObjectId_RDSD) {}

ARM MapObjectUnkRDSD::MapObjectUnkRDSD() {}

ARM void MapObjectUnkRDSD::func_ov045_02129124(void) {}
ARM void MapObjectUnkRDSD::func_ov045_0212918c(void) {}
ARM void MapObjectUnkRDSD::func_ov045_021291d0(void) {}
ARM void MapObjectUnkRDSD::func_ov045_021291e4(void) {}
ARM void MapObjectUnkRDSD::func_ov045_0212922c(void) {}
ARM void MapObjectUnkRDSD::func_ov045_0212925c(void) {}
ARM void MapObjectUnkRDSD::func_ov045_0212927c(void) {}
ARM void MapObjectUnkRDSD::func_ov045_021292d0(void) {}

ARM MapObjectUnkRDSD::~MapObjectUnkRDSD() {}
ARM MapObjectProfileUnkRDSD::~MapObjectProfileUnkRDSD() {}
