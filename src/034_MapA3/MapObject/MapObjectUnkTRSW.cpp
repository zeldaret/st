//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRSW.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRSW sMapObjectProfileUnkTRSW;

ARM MapObjectProfileUnkTRSW *MapObjectProfileUnkTRSW::GetProfile() {
    return &sMapObjectProfileUnkTRSW;
}

ARM MapObject *MapObjectProfileUnkTRSW::Create() {
    return new(HeapIndex_2) MapObjectUnkTRSW();
}

ARM MapObjectProfileUnkTRSW::MapObjectProfileUnkTRSW() :
    MapObjectProfile(MapObjectId_TRSW) {}

ARM MapObjectUnkTRSW::MapObjectUnkTRSW() {}

ARM void MapObjectUnkTRSW::func_ov034_02120f68(void) {}
ARM void MapObjectUnkTRSW::func_ov034_02121014(void) {}
ARM void MapObjectUnkTRSW::func_ov034_021210b4(void) {}
ARM void MapObjectUnkTRSW::func_ov034_0212121c(void) {}
ARM void MapObjectUnkTRSW::func_ov034_02121270(void) {}
ARM void MapObjectUnkTRSW::func_ov034_02121384(void) {}
ARM void MapObjectUnkTRSW::func_ov034_021213b8(void) {}
ARM void MapObjectUnkTRSW::func_ov034_0212149c(void) {}
ARM void MapObjectUnkTRSW::func_ov034_021214fc(void) {}
ARM void MapObjectUnkTRSW::func_ov034_021215a4(void) {}
ARM void MapObjectUnkTRSW::func_ov034_021215e8(void) {}
ARM void MapObjectUnkTRSW::func_ov034_0212162c(void) {}
ARM void MapObjectUnkTRSW::func_ov034_02121674(void) {}

ARM MapObjectUnkTRSW::~MapObjectUnkTRSW() {}
ARM MapObjectProfileUnkTRSW::~MapObjectProfileUnkTRSW() {}
