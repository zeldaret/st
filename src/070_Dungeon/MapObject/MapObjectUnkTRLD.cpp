//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRLD.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRLD sMapObjectProfileUnkTRLD;

ARM MapObjectProfileUnkTRLD *MapObjectProfileUnkTRLD::GetProfile() {
    return &sMapObjectProfileUnkTRLD;
}

ARM MapObject *MapObjectProfileUnkTRLD::Create() {
    return new(HeapIndex_2) MapObjectUnkTRLD();
}

ARM MapObjectProfileUnkTRLD::MapObjectProfileUnkTRLD() :
    MapObjectProfile(MapObjectId_TRLD) {}

ARM MapObjectUnkTRLD::MapObjectUnkTRLD() {}

ARM void MapObjectUnkTRLD::func_ov070_0214b5f4(void) {}
ARM void MapObjectUnkTRLD::func_ov070_0214b648(void) {}
ARM void MapObjectUnkTRLD::func_ov070_0214b670(void) {}
ARM void MapObjectUnkTRLD::func_ov070_0214b698(void) {}

ARM MapObjectUnkTRLD::~MapObjectUnkTRLD() {}
ARM MapObjectProfileUnkTRLD::~MapObjectProfileUnkTRLD() {}
