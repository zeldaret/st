//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSTAT.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSTAT sMapObjectProfileUnkSTAT;

ARM MapObjectProfileUnkSTAT *MapObjectProfileUnkSTAT::GetProfile() {
    return &sMapObjectProfileUnkSTAT;
}

ARM MapObject *MapObjectProfileUnkSTAT::Create() {
    return new(HeapIndex_2) MapObjectUnkSTAT();
}

ARM MapObjectProfileUnkSTAT::MapObjectProfileUnkSTAT() :
    MapObjectProfile(MapObjectId_STAT) {}

ARM MapObjectUnkSTAT::MapObjectUnkSTAT() {}

ARM void MapObjectUnkSTAT::func_ov063_0215f6d0(void) {}
ARM void MapObjectUnkSTAT::func_ov063_0215f710(void) {}
ARM void MapObjectUnkSTAT::func_ov063_0215f798(void) {}
ARM void MapObjectUnkSTAT::func_ov063_0215f7ac(void) {}
ARM void MapObjectUnkSTAT::func_ov063_0215fc40(void) {}
ARM void MapObjectUnkSTAT::func_ov063_0215fc88(void) {}
ARM void MapObjectUnkSTAT::func_ov063_0215fce0(void) {}

ARM MapObjectUnkSTAT::~MapObjectUnkSTAT() {}
ARM MapObjectProfileUnkSTAT::~MapObjectProfileUnkSTAT() {}
