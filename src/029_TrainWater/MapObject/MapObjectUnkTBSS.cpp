//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTBSS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTBSS sMapObjectProfileUnkTBSS;

ARM MapObjectProfileUnkTBSS *MapObjectProfileUnkTBSS::GetProfile() {
    return &sMapObjectProfileUnkTBSS;
}

ARM MapObject *MapObjectProfileUnkTBSS::Create() {
    return new(HeapIndex_2) MapObjectUnkTBSS();
}

ARM MapObjectProfileUnkTBSS::MapObjectProfileUnkTBSS() :
    MapObjectProfile(MapObjectId_TBSS) {}

ARM MapObjectUnkTBSS::MapObjectUnkTBSS() {}

ARM void MapObjectUnkTBSS::func_ov029_02146070(void) {}
ARM void MapObjectUnkTBSS::func_ov029_021460c8(void) {}
ARM void MapObjectUnkTBSS::func_ov029_021460d4(void) {}
ARM void MapObjectUnkTBSS::func_ov029_02146124(void) {}
ARM void MapObjectUnkTBSS::func_ov029_02146130(void) {}

ARM MapObjectUnkTBSS::~MapObjectUnkTBSS() {}
ARM MapObjectProfileUnkTBSS::~MapObjectProfileUnkTBSS() {}
