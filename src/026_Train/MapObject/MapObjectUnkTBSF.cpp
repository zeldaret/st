//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTBSF.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTBSF sMapObjectProfileUnkTBSF;

ARM MapObjectProfileUnkTBSF *MapObjectProfileUnkTBSF::GetProfile() {
    return &sMapObjectProfileUnkTBSF;
}

ARM MapObject *MapObjectProfileUnkTBSF::Create() {
    return new(HeapIndex_2) MapObjectUnkTBSF();
}

ARM MapObjectProfileUnkTBSF::MapObjectProfileUnkTBSF() :
    MapObjectProfile(MapObjectId_TBSF) {}

ARM MapObjectUnkTBSF::MapObjectUnkTBSF() {}

ARM void MapObjectUnkTBSF::func_ov026_0210a4a4(void) {}
ARM void MapObjectUnkTBSF::func_ov026_0210a4f4(void) {}
ARM void MapObjectUnkTBSF::func_ov026_0210a500(void) {}
ARM void MapObjectUnkTBSF::func_ov026_0210a550(void) {}
ARM void MapObjectUnkTBSF::func_ov026_0210a55c(void) {}

ARM MapObjectUnkTBSF::~MapObjectUnkTBSF() {}
ARM MapObjectProfileUnkTBSF::~MapObjectProfileUnkTBSF() {}
