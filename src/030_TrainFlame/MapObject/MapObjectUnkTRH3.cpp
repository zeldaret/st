//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRH3.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRH3 sMapObjectProfileUnkTRH3;

ARM MapObjectProfileUnkTRH3 *MapObjectProfileUnkTRH3::GetProfile() {
    return &sMapObjectProfileUnkTRH3;
}

ARM MapObject *MapObjectProfileUnkTRH3::Create() {
    return new(HeapIndex_2) MapObjectUnkTRH3();
}

ARM MapObjectProfileUnkTRH3::MapObjectProfileUnkTRH3() :
    MapObjectProfile(MapObjectId_TRH3) {}

ARM MapObjectUnkTRH3::MapObjectUnkTRH3() {}

ARM void MapObjectUnkTRH3::func_ov030_02143544(void) {}
ARM void MapObjectUnkTRH3::func_ov030_02143630(void) {}
ARM void MapObjectUnkTRH3::func_ov030_021436a4(void) {}
ARM void MapObjectUnkTRH3::func_ov030_021436bc(void) {}
ARM void MapObjectUnkTRH3::func_ov030_021436fc(void) {}
ARM void MapObjectUnkTRH3::func_ov030_0214371c(void) {}
ARM void MapObjectUnkTRH3::func_ov030_0214373c(void) {}

ARM MapObjectUnkTRH3::~MapObjectUnkTRH3() {}
ARM MapObjectProfileUnkTRH3::~MapObjectProfileUnkTRH3() {}
