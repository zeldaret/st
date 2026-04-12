//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSTIR.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkSTIR);

ARM MapObject *MapObjectProfileUnkSTIR::Create() {
    return new(HeapIndex_2) MapObjectUnkSTIR();
}

ARM MapObjectProfileUnkSTIR::MapObjectProfileUnkSTIR() :
    MapObjectProfile(MapObjectId_STIR) {}

ARM MapObjectUnkSTIR::MapObjectUnkSTIR() {}

ARM void MapObjectUnkSTIR::func_ov031_02100bbc(void) {}
ARM void MapObjectUnkSTIR::func_ov031_02100d70(void) {}
ARM void MapObjectUnkSTIR::func_ov031_02100d74(void) {}
ARM void MapObjectUnkSTIR::func_ov031_02100da4(void) {}

ARM MapObjectUnkSTIR::~MapObjectUnkSTIR() {}
ARM MapObjectProfileUnkSTIR::~MapObjectProfileUnkSTIR() {}
