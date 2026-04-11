//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTBSD.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTBSD sMapObjectProfileUnkTBSD;

ARM MapObjectProfileUnkTBSD *MapObjectProfileUnkTBSD::GetProfile() {
    return &sMapObjectProfileUnkTBSD;
}

ARM MapObject *MapObjectProfileUnkTBSD::Create() {
    return new(HeapIndex_2) MapObjectUnkTBSD();
}

ARM MapObjectProfileUnkTBSD::MapObjectProfileUnkTBSD() :
    MapObjectProfile(MapObjectId_TBSD) {}

ARM MapObjectUnkTBSD::MapObjectUnkTBSD() {}

ARM void MapObjectUnkTBSD::func_ov092_02167c00(void) {}
ARM void MapObjectUnkTBSD::func_ov092_02167c58(void) {}
ARM void MapObjectUnkTBSD::func_ov092_02167c64(void) {}
ARM void MapObjectUnkTBSD::func_ov092_02167cb4(void) {}
ARM void MapObjectUnkTBSD::func_ov092_02167cc0(void) {}

ARM MapObjectUnkTBSD::~MapObjectUnkTBSD() {}
ARM MapObjectProfileUnkTBSD::~MapObjectProfileUnkTBSD() {}
