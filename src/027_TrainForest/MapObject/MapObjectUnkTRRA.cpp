//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRRA.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRRA sMapObjectProfileUnkTRRA;

ARM MapObjectProfileUnkTRRA *MapObjectProfileUnkTRRA::GetProfile() {
    return &sMapObjectProfileUnkTRRA;
}

ARM MapObject *MapObjectProfileUnkTRRA::Create() {
    return new(HeapIndex_2) MapObjectUnkTRRA();
}

ARM MapObjectProfileUnkTRRA::MapObjectProfileUnkTRRA() :
    MapObjectProfile(MapObjectId_TRRA) {}

ARM MapObjectUnkTRRA::MapObjectUnkTRRA() {}

ARM void MapObjectUnkTRRA::func_ov027_02143940(void) {}
ARM void MapObjectUnkTRRA::func_ov027_02143a2c(void) {}
ARM void MapObjectUnkTRRA::func_ov027_02143aa0(void) {}
ARM void MapObjectUnkTRRA::func_ov027_02143ab8(void) {}
ARM void MapObjectUnkTRRA::func_ov027_02143af8(void) {}
ARM void MapObjectUnkTRRA::func_ov027_02143b18(void) {}
ARM void MapObjectUnkTRRA::func_ov027_02143b38(void) {}

ARM MapObjectUnkTRRA::~MapObjectUnkTRRA() {}
ARM MapObjectProfileUnkTRRA::~MapObjectProfileUnkTRRA() {}
