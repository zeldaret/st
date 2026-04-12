//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTDDR.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkTDDR);

ARM MapObject *MapObjectProfileUnkTDDR::Create() {
    return new(HeapIndex_2) MapObjectUnkTDDR();
}

ARM MapObjectProfileUnkTDDR::MapObjectProfileUnkTDDR() :
    MapObjectProfile(MapObjectId_TDDR) {}

ARM MapObjectUnkTDDR::MapObjectUnkTDDR() {}

ARM void MapObjectUnkTDDR::func_ov092_021668f8(void) {}
ARM void MapObjectUnkTDDR::func_ov092_02166990(void) {}
ARM void MapObjectUnkTDDR::func_ov092_0216699c(void) {}

ARM MapObjectUnkTDDR::~MapObjectUnkTDDR() {}
ARM MapObjectProfileUnkTDDR::~MapObjectProfileUnkTDDR() {}
