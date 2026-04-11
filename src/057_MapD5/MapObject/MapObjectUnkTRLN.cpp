//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRLN.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRLN sMapObjectProfileUnkTRLN;

ARM MapObjectProfileUnkTRLN *MapObjectProfileUnkTRLN::GetProfile() {
    return &sMapObjectProfileUnkTRLN;
}

ARM MapObject *MapObjectProfileUnkTRLN::Create() {
    return new(HeapIndex_2) MapObjectUnkTRLN();
}

ARM MapObjectProfileUnkTRLN::MapObjectProfileUnkTRLN() :
    MapObjectProfile(MapObjectId_TRLN) {}

ARM MapObjectUnkTRLN::MapObjectUnkTRLN() {}

ARM void MapObjectUnkTRLN::func_ov057_0213b860(void) {}
ARM void MapObjectUnkTRLN::func_ov057_0213b864(void) {}
ARM void MapObjectUnkTRLN::func_ov057_0213b88c(void) {}

ARM MapObjectUnkTRLN::~MapObjectUnkTRLN() {}
ARM MapObjectProfileUnkTRLN::~MapObjectProfileUnkTRLN() {}
