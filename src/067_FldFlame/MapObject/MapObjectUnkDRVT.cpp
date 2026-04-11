//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkDRVT.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkDRVT sMapObjectProfileUnkDRVT;

ARM MapObjectProfileUnkDRVT *MapObjectProfileUnkDRVT::GetProfile() {
    return &sMapObjectProfileUnkDRVT;
}

ARM MapObject *MapObjectProfileUnkDRVT::Create() {
    return new(HeapIndex_2) MapObjectUnkDRVT();
}

ARM MapObjectProfileUnkDRVT::MapObjectProfileUnkDRVT() :
    MapObjectProfile(MapObjectId_DRVT) {}

ARM MapObjectUnkDRVT::MapObjectUnkDRVT() {}

ARM void MapObjectUnkDRVT::func_ov067_0215c27c(void) {}
ARM void MapObjectUnkDRVT::func_ov067_0215c318(void) {}
ARM void MapObjectUnkDRVT::func_ov067_0215c3d0(void) {}
ARM void MapObjectUnkDRVT::func_ov067_0215c3e4(void) {}
ARM void MapObjectUnkDRVT::func_ov067_0215c454(void) {}

ARM MapObjectUnkDRVT::~MapObjectUnkDRVT() {}
ARM MapObjectProfileUnkDRVT::~MapObjectProfileUnkDRVT() {}
