//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSWRB.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSWRB sMapObjectProfileUnkSWRB;

ARM MapObjectProfileUnkSWRB *MapObjectProfileUnkSWRB::GetProfile() {
    return &sMapObjectProfileUnkSWRB;
}

ARM MapObject *MapObjectProfileUnkSWRB::Create() {
    return new(HeapIndex_2) MapObjectUnkSWRB();
}

ARM MapObjectProfileUnkSWRB::MapObjectProfileUnkSWRB() :
    MapObjectProfile(MapObjectId_SWRB) {}

ARM MapObjectUnkSWRB::MapObjectUnkSWRB() {}

ARM void MapObjectUnkSWRB::func_ov070_02145e98(void) {}
ARM void MapObjectUnkSWRB::func_ov070_02145f10(void) {}
ARM void MapObjectUnkSWRB::func_ov070_02145fd0(void) {}
ARM void MapObjectUnkSWRB::func_ov070_02145ff0(void) {}
ARM void MapObjectUnkSWRB::func_ov070_02146054(void) {}
ARM void MapObjectUnkSWRB::func_ov070_021460a0(void) {}

ARM MapObjectUnkSWRB::~MapObjectUnkSWRB() {}
ARM MapObjectProfileUnkSWRB::~MapObjectProfileUnkSWRB() {}
