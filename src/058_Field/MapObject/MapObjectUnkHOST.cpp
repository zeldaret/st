//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkHOST.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkHOST sMapObjectProfileUnkHOST;

ARM MapObjectProfileUnkHOST *MapObjectProfileUnkHOST::GetProfile() {
    return &sMapObjectProfileUnkHOST;
}

ARM MapObject *MapObjectProfileUnkHOST::Create() {
    return new(HeapIndex_2) MapObjectUnkHOST();
}

ARM MapObjectProfileUnkHOST::MapObjectProfileUnkHOST() :
    MapObjectProfile(MapObjectId_HOST) {}

ARM MapObjectUnkHOST::MapObjectUnkHOST() {}

ARM void MapObjectUnkHOST::func_ov058_0214f838(void) {}
ARM void MapObjectUnkHOST::func_ov058_0214f888(void) {}

ARM MapObjectUnkHOST::~MapObjectUnkHOST() {}
ARM MapObjectProfileUnkHOST::~MapObjectProfileUnkHOST() {}
