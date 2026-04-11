//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRBR.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRBR sMapObjectProfileUnkTRBR;

ARM MapObjectProfileUnkTRBR *MapObjectProfileUnkTRBR::GetProfile() {
    return &sMapObjectProfileUnkTRBR;
}

ARM MapObject *MapObjectProfileUnkTRBR::Create() {
    return new(HeapIndex_2) MapObjectUnkTRBR();
}

ARM MapObjectProfileUnkTRBR::MapObjectProfileUnkTRBR() :
    MapObjectProfile(MapObjectId_TRBR) {}

ARM MapObjectUnkTRBR::MapObjectUnkTRBR() {}

ARM void MapObjectUnkTRBR::func_ov027_02142ad8(void) {}
ARM void MapObjectUnkTRBR::func_ov027_02142bc4(void) {}
ARM void MapObjectUnkTRBR::func_ov027_02142c38(void) {}
ARM void MapObjectUnkTRBR::func_ov027_02142c50(void) {}
ARM void MapObjectUnkTRBR::func_ov027_02142c90(void) {}
ARM void MapObjectUnkTRBR::func_ov027_02142cb0(void) {}
ARM void MapObjectUnkTRBR::func_ov027_02142cd0(void) {}

ARM MapObjectUnkTRBR::~MapObjectUnkTRBR() {}
ARM MapObjectProfileUnkTRBR::~MapObjectProfileUnkTRBR() {}
