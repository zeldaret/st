//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSWEY.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSWEY sMapObjectProfileUnkSWEY;

ARM MapObjectProfileUnkSWEY *MapObjectProfileUnkSWEY::GetProfile() {
    return &sMapObjectProfileUnkSWEY;
}

ARM MapObject *MapObjectProfileUnkSWEY::Create() {
    return new(HeapIndex_2) MapObjectUnkSWEY();
}

ARM MapObjectProfileUnkSWEY::MapObjectProfileUnkSWEY() :
    MapObjectProfile(MapObjectId_SWEY) {}

ARM MapObjectUnkSWEY::MapObjectUnkSWEY() {}

ARM void MapObjectUnkSWEY::func_ov070_02147690(void) {}
ARM void MapObjectUnkSWEY::func_ov070_0214784c(void) {}
ARM void MapObjectUnkSWEY::func_ov070_0214796c(void) {}
ARM void MapObjectUnkSWEY::func_ov070_02147b48(void) {}
ARM void MapObjectUnkSWEY::func_ov070_02147c10(void) {}
ARM void MapObjectUnkSWEY::func_ov070_02147ca8(void) {}

ARM MapObjectUnkSWEY::~MapObjectUnkSWEY() {}
ARM MapObjectProfileUnkSWEY::~MapObjectProfileUnkSWEY() {}
