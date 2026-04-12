//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkRBBL.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkRBBL);

ARM MapObject *MapObjectProfileUnkRBBL::Create() {
    return new(HeapIndex_2) MapObjectUnkRBBL();
}

ARM MapObjectProfileUnkRBBL::MapObjectProfileUnkRBBL() :
    MapObjectProfile(MapObjectId_RBBL) {}

ARM MapObjectUnkRBBL::MapObjectUnkRBBL() {}

ARM void MapObjectUnkRBBL::func_ov029_021469ec(void) {}
ARM void MapObjectUnkRBBL::func_ov029_02146a00(void) {}

ARM MapObjectUnkRBBL::~MapObjectUnkRBBL() {}
ARM MapObjectProfileUnkRBBL::~MapObjectProfileUnkRBBL() {}
