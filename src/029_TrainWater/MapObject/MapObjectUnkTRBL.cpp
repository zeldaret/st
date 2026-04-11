//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRBL.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRBL sMapObjectProfileUnkTRBL;

ARM MapObjectProfileUnkTRBL *MapObjectProfileUnkTRBL::GetProfile() {
    return &sMapObjectProfileUnkTRBL;
}

ARM MapObject *MapObjectProfileUnkTRBL::Create() {
    return new(HeapIndex_2) MapObjectUnkTRBL();
}

ARM MapObjectProfileUnkTRBL::MapObjectProfileUnkTRBL() :
    MapObjectProfile(MapObjectId_TRBL) {}

ARM MapObjectUnkTRBL::MapObjectUnkTRBL() {}

ARM void MapObjectUnkTRBL::func_ov029_021462dc(void) {}
ARM void MapObjectUnkTRBL::func_ov029_0214643c(void) {}
ARM void MapObjectUnkTRBL::func_ov029_02146544(void) {}
ARM void MapObjectUnkTRBL::func_ov029_021466b0(void) {}
ARM void MapObjectUnkTRBL::func_ov029_021466e8(void) {}
ARM void MapObjectUnkTRBL::func_ov029_02146758(void) {}
ARM void MapObjectUnkTRBL::func_ov029_02146818(void) {}

ARM MapObjectUnkTRBL::~MapObjectUnkTRBL() {}
ARM MapObjectProfileUnkTRBL::~MapObjectProfileUnkTRBL() {}
