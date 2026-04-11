//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkMTFS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkMTFS sMapObjectProfileUnkMTFS;

ARM MapObjectProfileUnkMTFS *MapObjectProfileUnkMTFS::GetProfile() {
    return &sMapObjectProfileUnkMTFS;
}

ARM MapObject *MapObjectProfileUnkMTFS::Create() {
    return new(HeapIndex_2) MapObjectUnkMTFS();
}

ARM MapObjectProfileUnkMTFS::MapObjectProfileUnkMTFS() :
    MapObjectProfile(MapObjectId_MTFS) {}

ARM MapObjectUnkMTFS::MapObjectUnkMTFS() {}

ARM void MapObjectUnkMTFS::func_ov066_0215d25c(void) {}
ARM void MapObjectUnkMTFS::func_ov066_0215d270(void) {}
ARM void MapObjectUnkMTFS::func_ov066_0215d328(void) {}
ARM void MapObjectUnkMTFS::func_ov066_0215d474(void) {}
ARM void MapObjectUnkMTFS::func_ov066_0215d488(void) {}
ARM void MapObjectUnkMTFS::func_ov066_0215d4a8(void) {}
ARM void MapObjectUnkMTFS::func_ov066_0215d764(void) {}

ARM MapObjectUnkMTFS::~MapObjectUnkMTFS() {}
ARM MapObjectProfileUnkMTFS::~MapObjectProfileUnkMTFS() {}
