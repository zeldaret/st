//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFSSV.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkFSSV sMapObjectProfileUnkFSSV;

ARM MapObjectProfileUnkFSSV *MapObjectProfileUnkFSSV::GetProfile() {
    return &sMapObjectProfileUnkFSSV;
}

ARM MapObject *MapObjectProfileUnkFSSV::Create() {
    return new(HeapIndex_2) MapObjectUnkFSSV();
}

ARM MapObjectProfileUnkFSSV::MapObjectProfileUnkFSSV() :
    MapObjectProfile(MapObjectId_FSSV) {}

ARM MapObjectUnkFSSV::MapObjectUnkFSSV() {}

ARM void MapObjectUnkFSSV::func_ov079_0215704c(void) {}
ARM void MapObjectUnkFSSV::func_ov079_021570cc(void) {}
ARM void MapObjectUnkFSSV::func_ov079_02157130(void) {}
ARM void MapObjectUnkFSSV::func_ov079_02157180(void) {}

ARM MapObjectUnkFSSV::~MapObjectUnkFSSV() {}
ARM MapObjectProfileUnkFSSV::~MapObjectProfileUnkFSSV() {}
