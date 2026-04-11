//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkETMW.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkETMW sMapObjectProfileUnkETMW;

ARM MapObjectProfileUnkETMW *MapObjectProfileUnkETMW::GetProfile() {
    return &sMapObjectProfileUnkETMW;
}

ARM MapObject *MapObjectProfileUnkETMW::Create() {
    return new(HeapIndex_2) MapObjectUnkETMW();
}

ARM MapObjectProfileUnkETMW::MapObjectProfileUnkETMW() :
    MapObjectProfile(MapObjectId_ETMW) {}

ARM MapObjectUnkETMW::MapObjectUnkETMW() {}

ARM void MapObjectUnkETMW::func_ov092_021673e4(void) {}
ARM void MapObjectUnkETMW::func_ov092_021674a8(void) {}
ARM void MapObjectUnkETMW::func_ov092_021674d8(void) {}
ARM void MapObjectUnkETMW::func_ov092_021674e0(void) {}
ARM void MapObjectUnkETMW::func_ov092_021674e8(void) {}
ARM void MapObjectUnkETMW::func_ov092_021674f0(void) {}
ARM void MapObjectUnkETMW::func_ov092_021674fc(void) {}
ARM void MapObjectUnkETMW::func_ov092_02167504(void) {}
ARM void MapObjectUnkETMW::func_ov092_02167518(void) {}

ARM MapObjectUnkETMW::~MapObjectUnkETMW() {}
ARM MapObjectProfileUnkETMW::~MapObjectProfileUnkETMW() {}
