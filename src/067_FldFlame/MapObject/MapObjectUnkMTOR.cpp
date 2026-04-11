//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkMTOR.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkMTOR sMapObjectProfileUnkMTOR;

ARM MapObjectProfileUnkMTOR *MapObjectProfileUnkMTOR::GetProfile() {
    return &sMapObjectProfileUnkMTOR;
}

ARM MapObject *MapObjectProfileUnkMTOR::Create() {
    return new(HeapIndex_2) MapObjectUnkMTOR();
}

ARM MapObjectProfileUnkMTOR::MapObjectProfileUnkMTOR() :
    MapObjectProfile(MapObjectId_MTOR) {}

ARM MapObjectUnkMTOR::MapObjectUnkMTOR() {}

ARM void MapObjectUnkMTOR::func_ov067_0215c074(void) {}
ARM void MapObjectUnkMTOR::func_ov067_0215c0c0(void) {}
ARM void MapObjectUnkMTOR::func_ov067_0215c0c4(void) {}

ARM MapObjectUnkMTOR::~MapObjectUnkMTOR() {}
ARM MapObjectProfileUnkMTOR::~MapObjectProfileUnkMTOR() {}
