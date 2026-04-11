//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkBLCE.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkBLCE sMapObjectProfileUnkBLCE;

ARM MapObjectProfileUnkBLCE *MapObjectProfileUnkBLCE::GetProfile() {
    return &sMapObjectProfileUnkBLCE;
}

ARM MapObject *MapObjectProfileUnkBLCE::Create() {
    return new(HeapIndex_2) MapObjectUnkBLCE();
}

ARM MapObjectProfileUnkBLCE::MapObjectProfileUnkBLCE() :
    MapObjectProfile(MapObjectId_BLCE) {}

ARM MapObjectUnkBLCE::MapObjectUnkBLCE() {}

ARM void MapObjectUnkBLCE::func_ov071_02161a40(void) {}

ARM MapObjectUnkBLCE::~MapObjectUnkBLCE() {}
ARM MapObjectProfileUnkBLCE::~MapObjectProfileUnkBLCE() {}
