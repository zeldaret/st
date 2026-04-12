//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkHOSB.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkHOSB);

ARM MapObject *MapObjectProfileUnkHOSB::Create() {
    return new(HeapIndex_2) MapObjectUnkHOSB();
}

ARM MapObjectProfileUnkHOSB::MapObjectProfileUnkHOSB() :
    MapObjectProfile(MapObjectId_HOSB) {}

ARM MapObjectUnkHOSB::MapObjectUnkHOSB() {}

ARM void MapObjectUnkHOSB::func_ov062_0215bce4(void) {}
ARM void MapObjectUnkHOSB::func_ov062_0215bd34(void) {}
ARM void MapObjectUnkHOSB::func_ov062_0215bd3c(void) {}

ARM MapObjectUnkHOSB::~MapObjectUnkHOSB() {}
ARM MapObjectProfileUnkHOSB::~MapObjectProfileUnkHOSB() {}
