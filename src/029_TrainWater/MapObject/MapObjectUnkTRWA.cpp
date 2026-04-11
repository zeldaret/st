//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRWA.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRWA sMapObjectProfileUnkTRWA;

ARM MapObjectProfileUnkTRWA *MapObjectProfileUnkTRWA::GetProfile() {
    return &sMapObjectProfileUnkTRWA;
}

ARM MapObject *MapObjectProfileUnkTRWA::Create() {
    return new(HeapIndex_2) MapObjectUnkTRWA();
}

ARM MapObjectProfileUnkTRWA::MapObjectProfileUnkTRWA() :
    MapObjectProfile(MapObjectId_TRWA) {}

ARM MapObjectUnkTRWA::MapObjectUnkTRWA() {}

ARM void MapObjectUnkTRWA::func_ov029_02142390(void) {}
ARM void MapObjectUnkTRWA::func_ov029_0214247c(void) {}
ARM void MapObjectUnkTRWA::func_ov029_0214249c(void) {}
ARM void MapObjectUnkTRWA::func_ov029_021424bc(void) {}
ARM void MapObjectUnkTRWA::func_ov029_021424dc(void) {}

ARM MapObjectUnkTRWA::~MapObjectUnkTRWA() {}
ARM MapObjectProfileUnkTRWA::~MapObjectProfileUnkTRWA() {}
