//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkGTSN.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkGTSN sMapObjectProfileUnkGTSN;

ARM MapObjectProfileUnkGTSN *MapObjectProfileUnkGTSN::GetProfile() {
    return &sMapObjectProfileUnkGTSN;
}

ARM MapObject *MapObjectProfileUnkGTSN::Create() {
    return new(HeapIndex_2) MapObjectUnkGTSN();
}

ARM MapObjectProfileUnkGTSN::MapObjectProfileUnkGTSN() :
    MapObjectProfile(MapObjectId_GTSN) {}

ARM MapObjectUnkGTSN::MapObjectUnkGTSN() {}

ARM void MapObjectUnkGTSN::func_ov079_02156e14(void) {}
ARM void MapObjectUnkGTSN::func_ov079_02156f24(void) {}
ARM void MapObjectUnkGTSN::func_ov079_02156f28(void) {}

ARM MapObjectUnkGTSN::~MapObjectUnkGTSN() {}
ARM MapObjectProfileUnkGTSN::~MapObjectProfileUnkGTSN() {}
