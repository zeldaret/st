//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkMLVC.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkMLVC sMapObjectProfileUnkMLVC;

ARM MapObjectProfileUnkMLVC *MapObjectProfileUnkMLVC::GetProfile() {
    return &sMapObjectProfileUnkMLVC;
}

ARM MapObject *MapObjectProfileUnkMLVC::Create() {
    return new(HeapIndex_2) MapObjectUnkMLVC();
}

ARM MapObjectProfileUnkMLVC::MapObjectProfileUnkMLVC() :
    MapObjectProfile(MapObjectId_MLVC) {}

ARM MapObjectUnkMLVC::MapObjectUnkMLVC() {}

ARM void MapObjectUnkMLVC::func_ov084_0215dc7c(void) {}
ARM void MapObjectUnkMLVC::func_ov084_0215de2c(void) {}
ARM void MapObjectUnkMLVC::func_ov084_0215de80(void) {}
ARM void MapObjectUnkMLVC::func_ov084_0215dec0(void) {}

ARM MapObjectUnkMLVC::~MapObjectUnkMLVC() {}
ARM MapObjectProfileUnkMLVC::~MapObjectProfileUnkMLVC() {}
