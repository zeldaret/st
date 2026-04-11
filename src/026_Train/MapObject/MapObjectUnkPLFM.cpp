//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkPLFM.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkPLFM sMapObjectProfileUnkPLFM;

ARM MapObjectProfileUnkPLFM *MapObjectProfileUnkPLFM::GetProfile() {
    return &sMapObjectProfileUnkPLFM;
}

ARM MapObject *MapObjectProfileUnkPLFM::Create() {
    return new(HeapIndex_2) MapObjectUnkPLFM();
}

ARM MapObjectProfileUnkPLFM::MapObjectProfileUnkPLFM() :
    MapObjectProfile(MapObjectId_PLFM) {}

ARM MapObjectUnkPLFM::MapObjectUnkPLFM() {}

ARM void MapObjectUnkPLFM::func_ov026_02108468(void) {}
ARM void MapObjectUnkPLFM::func_ov026_0210847c(void) {}
ARM void MapObjectUnkPLFM::func_ov026_02108490(void) {}
ARM void MapObjectUnkPLFM::func_ov026_021084a4(void) {}
ARM void MapObjectUnkPLFM::func_ov026_021088ec(void) {}
ARM void MapObjectUnkPLFM::func_ov026_02108a40(void) {}
ARM void MapObjectUnkPLFM::func_ov026_02108b7c(void) {}
ARM void MapObjectUnkPLFM::func_ov026_02108bfc(void) {}
ARM void MapObjectUnkPLFM::func_ov026_02108ca4(void) {}
ARM void MapObjectUnkPLFM::func_ov026_02108cac(void) {}
ARM void MapObjectUnkPLFM::func_ov026_02108cb4(void) {}
ARM void MapObjectUnkPLFM::func_ov026_02108d10(void) {}
ARM void MapObjectUnkPLFM::func_ov026_02108d34(void) {}
ARM void MapObjectUnkPLFM::func_ov026_02108d60(void) {}
ARM void MapObjectUnkPLFM::func_ov026_02108d8c(void) {}
ARM void MapObjectUnkPLFM::func_ov026_02108da8(void) {}
ARM void MapObjectUnkPLFM::func_ov026_02108df4(void) {}

ARM MapObjectUnkPLFM::~MapObjectUnkPLFM() {}
ARM MapObjectProfileUnkPLFM::~MapObjectProfileUnkPLFM() {}
