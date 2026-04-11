//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkBLCK.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkBLCK);

ARM MapObject *MapObjectProfileUnkBLCK::Create() {
    return new(HeapIndex_2) MapObjectUnkBLCK();
}

ARM MapObjectProfileUnkBLCK::MapObjectProfileUnkBLCK() :
    MapObjectProfile(MapObjectId_BLCK) {}

ARM MapObjectUnkBLCK::MapObjectUnkBLCK() {}

ARM void MapObjectUnkBLCK::func_ov070_021440ac(void) {}
ARM void MapObjectUnkBLCK::func_ov070_02144174(void) {}

ARM MapObjectUnkBLCK::~MapObjectUnkBLCK() {}
ARM MapObjectProfileUnkBLCK::~MapObjectProfileUnkBLCK() {}
