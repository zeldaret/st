//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRFS.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkTRFS);

ARM MapObject *MapObjectProfileUnkTRFS::Create() {
    return new(HeapIndex_2) MapObjectUnkTRFS();
}

ARM MapObjectProfileUnkTRFS::MapObjectProfileUnkTRFS() :
    MapObjectProfile(MapObjectId_TRFS) {}

ARM MapObjectUnkTRFS::MapObjectUnkTRFS() {}

ARM void MapObjectUnkTRFS::func_ov028_0214686c(void) {}
ARM void MapObjectUnkTRFS::func_ov028_021468b8(void) {}
ARM void MapObjectUnkTRFS::func_ov028_0214694c(void) {}

ARM MapObjectUnkTRFS::~MapObjectUnkTRFS() {}
ARM MapObjectProfileUnkTRFS::~MapObjectProfileUnkTRFS() {}
