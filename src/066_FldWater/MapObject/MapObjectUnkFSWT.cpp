//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFSWT.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkFSWT);

ARM MapObject *MapObjectProfileUnkFSWT::Create() {
    return new(HeapIndex_2) MapObjectUnkFSWT();
}

ARM MapObjectProfileUnkFSWT::MapObjectProfileUnkFSWT() :
    MapObjectProfile(MapObjectId_FSWT) {}

ARM MapObjectUnkFSWT::MapObjectUnkFSWT() {}

ARM void MapObjectUnkFSWT::func_ov066_0215ca5c(void) {}
ARM void MapObjectUnkFSWT::func_ov066_0215caac(void) {}

ARM MapObjectUnkFSWT::~MapObjectUnkFSWT() {}
ARM MapObjectProfileUnkFSWT::~MapObjectProfileUnkFSWT() {}
