//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSKBN.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSKBN sMapObjectProfileUnkSKBN;

ARM MapObjectProfileUnkSKBN *MapObjectProfileUnkSKBN::GetProfile() {
    return &sMapObjectProfileUnkSKBN;
}

ARM MapObject *MapObjectProfileUnkSKBN::Create() {
    return new(HeapIndex_2) MapObjectUnkSKBN();
}

ARM MapObjectProfileUnkSKBN::MapObjectProfileUnkSKBN() :
    MapObjectProfile(MapObjectId_SKBN) {}

ARM MapObjectUnkSKBN::MapObjectUnkSKBN() {}

ARM void MapObjectUnkSKBN::func_ov031_0210556c(void) {}
ARM void MapObjectUnkSKBN::func_ov031_02105648(void) {}
ARM void MapObjectUnkSKBN::func_ov031_02105690(void) {}
ARM void MapObjectUnkSKBN::func_ov031_021056bc(void) {}
ARM void MapObjectUnkSKBN::func_ov031_021057b4(void) {}

ARM MapObjectUnkSKBN::~MapObjectUnkSKBN() {}
ARM MapObjectProfileUnkSKBN::~MapObjectProfileUnkSKBN() {}
