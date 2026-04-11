//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkEFRF.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkEFRF sMapObjectProfileUnkEFRF;

ARM MapObjectProfileUnkEFRF *MapObjectProfileUnkEFRF::GetProfile() {
    return &sMapObjectProfileUnkEFRF;
}

ARM MapObject *MapObjectProfileUnkEFRF::Create() {
    return new(HeapIndex_2) MapObjectUnkEFRF();
}

ARM MapObjectProfileUnkEFRF::MapObjectProfileUnkEFRF() :
    MapObjectProfile(MapObjectId_EFRF) {}

ARM MapObjectUnkEFRF::MapObjectUnkEFRF() {}

ARM void MapObjectUnkEFRF::func_ov028_02145b2c(void) {}
ARM void MapObjectUnkEFRF::func_ov028_02145b7c(void) {}

ARM MapObjectUnkEFRF::~MapObjectUnkEFRF() {}
ARM MapObjectProfileUnkEFRF::~MapObjectProfileUnkEFRF() {}
