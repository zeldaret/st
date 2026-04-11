//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRFI.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRFI sMapObjectProfileUnkTRFI;

ARM MapObjectProfileUnkTRFI *MapObjectProfileUnkTRFI::GetProfile() {
    return &sMapObjectProfileUnkTRFI;
}

ARM MapObject *MapObjectProfileUnkTRFI::Create() {
    return new(HeapIndex_2) MapObjectUnkTRFI();
}

ARM MapObjectProfileUnkTRFI::MapObjectProfileUnkTRFI() :
    MapObjectProfile(MapObjectId_TRFI) {}

ARM MapObjectUnkTRFI::MapObjectUnkTRFI() {}

ARM void MapObjectUnkTRFI::func_ov030_02142a98(void) {}
ARM void MapObjectUnkTRFI::func_ov030_02142b84(void) {}
ARM void MapObjectUnkTRFI::func_ov030_02142c6c(void) {}
ARM void MapObjectUnkTRFI::func_ov030_02142c74(void) {}
ARM void MapObjectUnkTRFI::func_ov030_02142c7c(void) {}
ARM void MapObjectUnkTRFI::func_ov030_02142c80(void) {}
ARM void MapObjectUnkTRFI::func_ov030_02142cf4(void) {}
ARM void MapObjectUnkTRFI::func_ov030_02142d0c(void) {}
ARM void MapObjectUnkTRFI::func_ov030_02142d4c(void) {}
ARM void MapObjectUnkTRFI::func_ov030_02142d6c(void) {}
ARM void MapObjectUnkTRFI::func_ov030_02142d8c(void) {}
ARM void MapObjectUnkTRFI::func_ov030_02142ddc(void) {}

ARM MapObjectUnkTRFI::~MapObjectUnkTRFI() {}
ARM MapObjectProfileUnkTRFI::~MapObjectProfileUnkTRFI() {}
