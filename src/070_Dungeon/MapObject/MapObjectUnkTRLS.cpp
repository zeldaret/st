//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRLS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRLS sMapObjectProfileUnkTRLS;

ARM MapObjectProfileUnkTRLS *MapObjectProfileUnkTRLS::GetProfile() {
    return &sMapObjectProfileUnkTRLS;
}

ARM MapObject *MapObjectProfileUnkTRLS::Create() {
    return new(HeapIndex_2) MapObjectUnkTRLS();
}

ARM MapObjectProfileUnkTRLS::MapObjectProfileUnkTRLS() :
    MapObjectProfile(MapObjectId_TRLS) {}

ARM MapObjectUnkTRLS::MapObjectUnkTRLS() {}

ARM void MapObjectUnkTRLS::func_ov070_0214b424(void) {}
ARM void MapObjectUnkTRLS::func_ov070_0214b450(void) {}
ARM void MapObjectUnkTRLS::func_ov070_0214b458(void) {}
ARM void MapObjectUnkTRLS::func_ov070_0214b484(void) {}
ARM void MapObjectUnkTRLS::func_ov070_0214b4ac(void) {}

ARM MapObjectUnkTRLS::~MapObjectUnkTRLS() {}
ARM MapObjectProfileUnkTRLS::~MapObjectProfileUnkTRLS() {}
