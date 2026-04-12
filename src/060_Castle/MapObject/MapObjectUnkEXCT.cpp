//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkEXCT.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkEXCT);

ARM MapObject *MapObjectProfileUnkEXCT::Create() {
    return new(HeapIndex_2) MapObjectUnkEXCT();
}

ARM MapObjectProfileUnkEXCT::MapObjectProfileUnkEXCT() :
    MapObjectProfile(MapObjectId_EXCT) {}

ARM MapObjectUnkEXCT::MapObjectUnkEXCT() {}

ARM void MapObjectUnkEXCT::func_ov060_02160a84(void) {}

ARM MapObjectUnkEXCT::~MapObjectUnkEXCT() {}
ARM MapObjectProfileUnkEXCT::~MapObjectProfileUnkEXCT() {}
