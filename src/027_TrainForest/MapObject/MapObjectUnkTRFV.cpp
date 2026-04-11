//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRFV.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRFV sMapObjectProfileUnkTRFV;

ARM MapObjectProfileUnkTRFV *MapObjectProfileUnkTRFV::GetProfile() {
    return &sMapObjectProfileUnkTRFV;
}

ARM MapObject *MapObjectProfileUnkTRFV::Create() {
    return new(HeapIndex_2) MapObjectUnkTRFV();
}

ARM MapObjectProfileUnkTRFV::MapObjectProfileUnkTRFV() :
    MapObjectProfile(MapObjectId_TRFV) {}

ARM MapObjectUnkTRFV::MapObjectUnkTRFV() {}

ARM void MapObjectUnkTRFV::func_ov027_021420d4(void) {}
ARM void MapObjectUnkTRFV::func_ov027_021421c0(void) {}
ARM void MapObjectUnkTRFV::func_ov027_021422d0(void) {}
ARM void MapObjectUnkTRFV::func_ov027_02142308(void) {}
ARM void MapObjectUnkTRFV::func_ov027_02142320(void) {}
ARM void MapObjectUnkTRFV::func_ov027_02142360(void) {}
ARM void MapObjectUnkTRFV::func_ov027_02142380(void) {}
ARM void MapObjectUnkTRFV::func_ov027_021423a0(void) {}

ARM MapObjectUnkTRFV::~MapObjectUnkTRFV() {}
ARM MapObjectProfileUnkTRFV::~MapObjectProfileUnkTRFV() {}
