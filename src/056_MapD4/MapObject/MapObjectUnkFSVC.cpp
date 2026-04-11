//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFSVC.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkFSVC sMapObjectProfileUnkFSVC;

ARM MapObjectProfileUnkFSVC *MapObjectProfileUnkFSVC::GetProfile() {
    return &sMapObjectProfileUnkFSVC;
}

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
