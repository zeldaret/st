//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFSFR.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkFSFR sMapObjectProfileUnkFSFR;

ARM MapObjectProfileUnkFSFR *MapObjectProfileUnkFSFR::GetProfile() {
    return &sMapObjectProfileUnkFSFR;
}

ARM MapObject *MapObjectProfileUnkFSFR::Create() {
    return new(HeapIndex_2) MapObjectUnkFSFR();
}

ARM MapObjectProfileUnkFSFR::MapObjectProfileUnkFSFR() :
    MapObjectProfile(MapObjectId_FSFR) {}

ARM MapObjectUnkFSFR::MapObjectUnkFSFR() {}

ARM void MapObjectUnkFSFR::func_ov064_021591c4(void) {}
ARM void MapObjectUnkFSFR::func_ov064_02159214(void) {}

ARM MapObjectUnkFSFR::~MapObjectUnkFSFR() {}
ARM MapObjectProfileUnkFSFR::~MapObjectProfileUnkFSFR() {}
