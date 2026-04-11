//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkHOLB.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkHOLB);

ARM MapObject *MapObjectProfileUnkHOLB::Create() {
    return new(HeapIndex_2) MapObjectUnkHOLB();
}

ARM MapObjectProfileUnkHOLB::MapObjectProfileUnkHOLB() :
    MapObjectProfile(MapObjectId_HOLB) {}

ARM MapObjectUnkHOLB::MapObjectUnkHOLB() {}

ARM void MapObjectUnkHOLB::func_ov062_0215bb90(void) {}
ARM void MapObjectUnkHOLB::func_ov062_0215bbe0(void) {}
ARM void MapObjectUnkHOLB::func_ov062_0215bbe8(void) {}

ARM MapObjectUnkHOLB::~MapObjectUnkHOLB() {}
ARM MapObjectProfileUnkHOLB::~MapObjectProfileUnkHOLB() {}
