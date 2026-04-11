//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkDRTW.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkDRTW sMapObjectProfileUnkDRTW;

ARM MapObjectProfileUnkDRTW *MapObjectProfileUnkDRTW::GetProfile() {
    return &sMapObjectProfileUnkDRTW;
}

ARM MapObject *MapObjectProfileUnkDRTW::Create() {
    return new(HeapIndex_2) MapObjectUnkDRTW();
}

ARM MapObjectProfileUnkDRTW::MapObjectProfileUnkDRTW() :
    MapObjectProfile(MapObjectId_DRTW) {}

ARM MapObjectUnkDRTW::MapObjectUnkDRTW() {}

ARM void MapObjectUnkDRTW::func_ov048_02133dc4(void) {}
ARM void MapObjectUnkDRTW::func_ov048_02133e94(void) {}
ARM void MapObjectUnkDRTW::func_ov048_02133f28(void) {}
ARM void MapObjectUnkDRTW::func_ov048_021342fc(void) {}
ARM void MapObjectUnkDRTW::func_ov048_0213433c(void) {}
ARM void MapObjectUnkDRTW::func_ov048_02134510(void) {}
ARM void MapObjectUnkDRTW::func_ov048_02134634(void) {}
ARM void MapObjectUnkDRTW::func_ov048_021346f4(void) {}
ARM void MapObjectUnkDRTW::func_ov048_02134750(void) {}
ARM void MapObjectUnkDRTW::func_ov048_02134784(void) {}
ARM void MapObjectUnkDRTW::func_ov048_021347a0(void) {}

ARM MapObjectUnkDRTW::~MapObjectUnkDRTW() {}
ARM MapObjectProfileUnkDRTW::~MapObjectProfileUnkDRTW() {}
