//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSTSP.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkSTSP);

ARM MapObject *MapObjectProfileUnkSTSP::Create() {
    return new(HeapIndex_2) MapObjectUnkSTSP();
}

ARM MapObjectProfileUnkSTSP::MapObjectProfileUnkSTSP() :
    MapObjectProfile(MapObjectId_STSP) {}

ARM MapObjectUnkSTSP::MapObjectUnkSTSP() {}

ARM void MapObjectUnkSTSP::func_ov031_02109714(void) {}
ARM void MapObjectUnkSTSP::func_ov031_0210996c(void) {}
ARM void MapObjectUnkSTSP::func_ov031_02109970(void) {}

ARM MapObjectUnkSTSP::~MapObjectUnkSTSP() {}
ARM MapObjectProfileUnkSTSP::~MapObjectProfileUnkSTSP() {}
