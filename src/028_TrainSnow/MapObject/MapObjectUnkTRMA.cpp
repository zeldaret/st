//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRMA.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRMA sMapObjectProfileUnkTRMA;

ARM MapObjectProfileUnkTRMA *MapObjectProfileUnkTRMA::GetProfile() {
    return &sMapObjectProfileUnkTRMA;
}

ARM MapObject *MapObjectProfileUnkTRMA::Create() {
    return new(HeapIndex_2) MapObjectUnkTRMA();
}

ARM MapObjectProfileUnkTRMA::MapObjectProfileUnkTRMA() :
    MapObjectProfile(MapObjectId_TRMA) {}

ARM MapObjectUnkTRMA::MapObjectUnkTRMA() {}

ARM void MapObjectUnkTRMA::func_ov028_02144bc4(void) {}
ARM void MapObjectUnkTRMA::func_ov028_02144cb0(void) {}
ARM void MapObjectUnkTRMA::func_ov028_02144d24(void) {}
ARM void MapObjectUnkTRMA::func_ov028_02144d3c(void) {}
ARM void MapObjectUnkTRMA::func_ov028_02144d7c(void) {}
ARM void MapObjectUnkTRMA::func_ov028_02144d9c(void) {}
ARM void MapObjectUnkTRMA::func_ov028_02144dbc(void) {}

ARM MapObjectUnkTRMA::~MapObjectUnkTRMA() {}
ARM MapObjectProfileUnkTRMA::~MapObjectProfileUnkTRMA() {}
