//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFSFS.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkFSFS);

ARM MapObject *MapObjectProfileUnkFSFS::Create() {
    return new(HeapIndex_2) MapObjectUnkFSFS();
}

ARM MapObjectProfileUnkFSFS::MapObjectProfileUnkFSFS() :
    MapObjectProfile(MapObjectId_FSFS) {}

ARM MapObjectUnkFSFS::MapObjectUnkFSFS() {}

ARM void MapObjectUnkFSFS::func_ov062_0215b458(void) {}
ARM void MapObjectUnkFSFS::func_ov062_0215b4a8(void) {}

ARM MapObjectUnkFSFS::~MapObjectUnkFSFS() {}
ARM MapObjectProfileUnkFSFS::~MapObjectProfileUnkFSFS() {}
