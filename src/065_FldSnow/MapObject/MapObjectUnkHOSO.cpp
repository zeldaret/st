//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkHOSO.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkHOSO sMapObjectProfileUnkHOSO;

ARM MapObjectProfileUnkHOSO *MapObjectProfileUnkHOSO::GetProfile() {
    return &sMapObjectProfileUnkHOSO;
}

ARM MapObject *MapObjectProfileUnkHOSO::Create() {
    return new(HeapIndex_2) MapObjectUnkHOSO();
}

ARM MapObjectProfileUnkHOSO::MapObjectProfileUnkHOSO() :
    MapObjectProfile(MapObjectId_HOSO) {}

ARM MapObjectUnkHOSO::MapObjectUnkHOSO() {}

ARM void MapObjectUnkHOSO::func_ov065_02159d10(void) {}
ARM void MapObjectUnkHOSO::func_ov065_02159d60(void) {}
ARM void MapObjectUnkHOSO::func_ov065_02159d68(void) {}

ARM MapObjectUnkHOSO::~MapObjectUnkHOSO() {}
ARM MapObjectProfileUnkHOSO::~MapObjectProfileUnkHOSO() {}
