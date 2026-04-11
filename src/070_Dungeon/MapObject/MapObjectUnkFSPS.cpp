//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFSPS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkFSPS sMapObjectProfileUnkFSPS;

ARM MapObjectProfileUnkFSPS *MapObjectProfileUnkFSPS::GetProfile() {
    return &sMapObjectProfileUnkFSPS;
}

ARM MapObject *MapObjectProfileUnkFSPS::Create() {
    return new(HeapIndex_2) MapObjectUnkFSPS();
}

ARM MapObjectProfileUnkFSPS::MapObjectProfileUnkFSPS() :
    MapObjectProfile(MapObjectId_FSPS) {}

ARM MapObjectUnkFSPS::MapObjectUnkFSPS() {}

ARM void MapObjectUnkFSPS::func_ov070_02145200(void) {}
ARM void MapObjectUnkFSPS::func_ov070_0214520c(void) {}
ARM void MapObjectUnkFSPS::func_ov070_0214525c(void) {}

ARM MapObjectUnkFSPS::~MapObjectUnkFSPS() {}
ARM MapObjectProfileUnkFSPS::~MapObjectProfileUnkFSPS() {}
