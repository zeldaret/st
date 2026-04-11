//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkGTAT.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkGTAT sMapObjectProfileUnkGTAT;

ARM MapObjectProfileUnkGTAT *MapObjectProfileUnkGTAT::GetProfile() {
    return &sMapObjectProfileUnkGTAT;
}

ARM MapObject *MapObjectProfileUnkGTAT::Create() {
    return new(HeapIndex_2) MapObjectUnkGTAT();
}

ARM MapObjectProfileUnkGTAT::MapObjectProfileUnkGTAT() :
    MapObjectProfile(MapObjectId_GTAT) {}

ARM MapObjectUnkGTAT::MapObjectUnkGTAT() {}

ARM void MapObjectUnkGTAT::func_ov039_0211c7ac(void) {}
ARM void MapObjectUnkGTAT::func_ov039_0211c960(void) {}
ARM void MapObjectUnkGTAT::func_ov039_0211c964(void) {}

ARM MapObjectUnkGTAT::~MapObjectUnkGTAT() {}
ARM MapObjectProfileUnkGTAT::~MapObjectProfileUnkGTAT() {}
