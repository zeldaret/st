//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkDRSN.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkDRSN sMapObjectProfileUnkDRSN;

ARM MapObjectProfileUnkDRSN *MapObjectProfileUnkDRSN::GetProfile() {
    return &sMapObjectProfileUnkDRSN;
}

ARM MapObject *MapObjectProfileUnkDRSN::Create() {
    return new(HeapIndex_2) MapObjectUnkDRSN();
}

ARM MapObjectProfileUnkDRSN::MapObjectProfileUnkDRSN() :
    MapObjectProfile(MapObjectId_DRSN) {}

ARM MapObjectUnkDRSN::MapObjectUnkDRSN() {}

ARM void MapObjectUnkDRSN::func_ov079_021569b4(void) {}
ARM void MapObjectUnkDRSN::func_ov079_02156a90(void) {}
ARM void MapObjectUnkDRSN::func_ov079_02156b9c(void) {}
ARM void MapObjectUnkDRSN::func_ov079_02156c0c(void) {}
ARM void MapObjectUnkDRSN::func_ov079_02156c24(void) {}

ARM MapObjectUnkDRSN::~MapObjectUnkDRSN() {}
ARM MapObjectProfileUnkDRSN::~MapObjectProfileUnkDRSN() {}
