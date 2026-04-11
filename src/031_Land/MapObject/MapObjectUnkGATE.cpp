//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkGATE.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkGATE sMapObjectProfileUnkGATE;

ARM MapObjectProfileUnkGATE *MapObjectProfileUnkGATE::GetProfile() {
    return &sMapObjectProfileUnkGATE;
}

ARM MapObject *MapObjectProfileUnkGATE::Create() {
    return new(HeapIndex_2) MapObjectUnkGATE();
}

ARM MapObjectProfileUnkGATE::MapObjectProfileUnkGATE() :
    MapObjectProfile(MapObjectId_GATE) {}

ARM MapObjectUnkGATE::MapObjectUnkGATE() {}

ARM void MapObjectUnkGATE::func_ov031_02100890(void) {}
ARM void MapObjectUnkGATE::func_ov031_02100a28(void) {}
ARM void MapObjectUnkGATE::func_ov031_02100a2c(void) {}

ARM MapObjectUnkGATE::~MapObjectUnkGATE() {}
ARM MapObjectProfileUnkGATE::~MapObjectProfileUnkGATE() {}
