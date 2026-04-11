//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkLVVT.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkLVVT sMapObjectProfileUnkLVVT;

ARM MapObjectProfileUnkLVVT *MapObjectProfileUnkLVVT::GetProfile() {
    return &sMapObjectProfileUnkLVVT;
}

ARM MapObject *MapObjectProfileUnkLVVT::Create() {
    return new(HeapIndex_2) MapObjectUnkLVVT();
}

ARM MapObjectProfileUnkLVVT::MapObjectProfileUnkLVVT() :
    MapObjectProfile(MapObjectId_LVVT) {}

ARM MapObjectUnkLVVT::MapObjectUnkLVVT() {}

ARM void MapObjectUnkLVVT::func_ov067_0215b408(void) {}
ARM void MapObjectUnkLVVT::func_ov067_0215b460(void) {}
ARM void MapObjectUnkLVVT::func_ov067_0215b490(void) {}
ARM void MapObjectUnkLVVT::func_ov067_0215b55c(void) {}
ARM void MapObjectUnkLVVT::func_ov067_0215b568(void) {}
ARM void MapObjectUnkLVVT::func_ov067_0215b57c(void) {}
ARM void MapObjectUnkLVVT::func_ov067_0215b6d4(void) {}
ARM void MapObjectUnkLVVT::func_ov067_0215b774(void) {}
ARM void MapObjectUnkLVVT::func_ov067_0215b788(void) {}
ARM void MapObjectUnkLVVT::func_ov067_0215b79c(void) {}
ARM void MapObjectUnkLVVT::func_ov067_0215b8c4(void) {}
ARM void MapObjectUnkLVVT::func_ov067_0215b8e4(void) {}
ARM void MapObjectUnkLVVT::func_ov067_0215ba18(void) {}

ARM MapObjectUnkLVVT::~MapObjectUnkLVVT() {}
ARM MapObjectProfileUnkLVVT::~MapObjectProfileUnkLVVT() {}
