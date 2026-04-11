//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkDRHS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkDRHS sMapObjectProfileUnkDRHS;

ARM MapObjectProfileUnkDRHS *MapObjectProfileUnkDRHS::GetProfile() {
    return &sMapObjectProfileUnkDRHS;
}

ARM MapObject *MapObjectProfileUnkDRHS::Create() {
    return new(HeapIndex_2) MapObjectUnkDRHS();
}

ARM MapObjectProfileUnkDRHS::MapObjectProfileUnkDRHS() :
    MapObjectProfile(MapObjectId_DRHS) {}

ARM MapObjectUnkDRHS::MapObjectUnkDRHS() {}

ARM void MapObjectUnkDRHS::func_ov058_0214f964(void) {}
ARM void MapObjectUnkDRHS::func_ov058_0214f9f4(void) {}
ARM void MapObjectUnkDRHS::func_ov058_0214fc24(void) {}
ARM void MapObjectUnkDRHS::func_ov058_0214fc7c(void) {}
ARM void MapObjectUnkDRHS::func_ov058_0214fc90(void) {}

ARM MapObjectUnkDRHS::~MapObjectUnkDRHS() {}
ARM MapObjectProfileUnkDRHS::~MapObjectProfileUnkDRHS() {}
