//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSTDS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSTDS sMapObjectProfileUnkSTDS;

ARM MapObjectProfileUnkSTDS *MapObjectProfileUnkSTDS::GetProfile() {
    return &sMapObjectProfileUnkSTDS;
}

ARM MapObject *MapObjectProfileUnkSTDS::Create() {
    return new(HeapIndex_2) MapObjectUnkSTDS();
}

ARM MapObjectProfileUnkSTDS::MapObjectProfileUnkSTDS() :
    MapObjectProfile(MapObjectId_STDS) {}

ARM MapObjectUnkSTDS::MapObjectUnkSTDS() {}

ARM void MapObjectUnkSTDS::func_ov086_0215dfdc(void) {}
ARM void MapObjectUnkSTDS::func_ov086_0215e094(void) {}

ARM MapObjectUnkSTDS::~MapObjectUnkSTDS() {}
ARM MapObjectProfileUnkSTDS::~MapObjectProfileUnkSTDS() {}
