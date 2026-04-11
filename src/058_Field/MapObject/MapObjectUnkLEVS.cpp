//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkLEVS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkLEVS sMapObjectProfileUnkLEVS;

ARM MapObjectProfileUnkLEVS *MapObjectProfileUnkLEVS::GetProfile() {
    return &sMapObjectProfileUnkLEVS;
}

ARM MapObject *MapObjectProfileUnkLEVS::Create() {
    return new(HeapIndex_2) MapObjectUnkLEVS();
}

ARM MapObjectProfileUnkLEVS::MapObjectProfileUnkLEVS() :
    MapObjectProfile(MapObjectId_LEVS) {}

ARM MapObjectUnkLEVS::MapObjectUnkLEVS() {}

ARM void MapObjectUnkLEVS::func_ov058_0214e5dc(void) {}
ARM void MapObjectUnkLEVS::func_ov058_0214e70c(void) {}
ARM void MapObjectUnkLEVS::func_ov058_0214e724(void) {}
ARM void MapObjectUnkLEVS::func_ov058_0214e760(void) {}
ARM void MapObjectUnkLEVS::func_ov058_0214e7a4(void) {}
ARM void MapObjectUnkLEVS::func_ov058_0214e858(void) {}
ARM void MapObjectUnkLEVS::func_ov058_0214e890(void) {}

ARM MapObjectUnkLEVS::~MapObjectUnkLEVS() {}
ARM MapObjectProfileUnkLEVS::~MapObjectProfileUnkLEVS() {}
