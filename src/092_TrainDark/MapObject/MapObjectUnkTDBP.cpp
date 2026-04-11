//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTDBP.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTDBP sMapObjectProfileUnkTDBP;

ARM MapObjectProfileUnkTDBP *MapObjectProfileUnkTDBP::GetProfile() {
    return &sMapObjectProfileUnkTDBP;
}

ARM MapObject *MapObjectProfileUnkTDBP::Create() {
    return new(HeapIndex_2) MapObjectUnkTDBP();
}

ARM MapObjectProfileUnkTDBP::MapObjectProfileUnkTDBP() :
    MapObjectProfile(MapObjectId_TDBP) {}

ARM MapObjectUnkTDBP::MapObjectUnkTDBP() {}

ARM void MapObjectUnkTDBP::func_ov092_0216651c(void) {}
ARM void MapObjectUnkTDBP::func_ov092_02166534(void) {}

ARM MapObjectUnkTDBP::~MapObjectUnkTDBP() {}
ARM MapObjectProfileUnkTDBP::~MapObjectProfileUnkTDBP() {}
