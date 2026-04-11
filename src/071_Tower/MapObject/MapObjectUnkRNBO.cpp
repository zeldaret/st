//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkRNBO.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkRNBO sMapObjectProfileUnkRNBO;

ARM MapObjectProfileUnkRNBO *MapObjectProfileUnkRNBO::GetProfile() {
    return &sMapObjectProfileUnkRNBO;
}

ARM MapObject *MapObjectProfileUnkRNBO::Create() {
    return new(HeapIndex_2) MapObjectUnkRNBO();
}

ARM MapObjectProfileUnkRNBO::MapObjectProfileUnkRNBO() :
    MapObjectProfile(MapObjectId_RNBO) {}

ARM MapObjectUnkRNBO::MapObjectUnkRNBO() {}

ARM void MapObjectUnkRNBO::func_ov071_02160b04(void) {}
ARM void MapObjectUnkRNBO::func_ov071_02160b18(void) {}

ARM MapObjectUnkRNBO::~MapObjectUnkRNBO() {}
ARM MapObjectProfileUnkRNBO::~MapObjectProfileUnkRNBO() {}
