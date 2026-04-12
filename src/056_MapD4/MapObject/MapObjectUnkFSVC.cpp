//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFSVC.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkFSVC);

ARM MapObject *MapObjectProfileUnkFSVC::Create() {
    return new(HeapIndex_2) MapObjectUnkFSVC();
}

ARM MapObjectProfileUnkFSVC::MapObjectProfileUnkFSVC() :
    MapObjectProfile(MapObjectId_FSVC) {}

ARM MapObjectUnkFSVC::MapObjectUnkFSVC() {}

ARM void MapObjectUnkFSVC::func_ov056_0213aacc(void) {}
ARM void MapObjectUnkFSVC::func_ov056_0213ab1c(void) {}

ARM MapObjectUnkFSVC::~MapObjectUnkFSVC() {}
ARM MapObjectProfileUnkFSVC::~MapObjectProfileUnkFSVC() {}
