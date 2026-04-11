//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkMTWD.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkMTWD sMapObjectProfileUnkMTWD;

ARM MapObjectProfileUnkMTWD *MapObjectProfileUnkMTWD::GetProfile() {
    return &sMapObjectProfileUnkMTWD;
}

ARM MapObject *MapObjectProfileUnkMTWD::Create() {
    return new(HeapIndex_2) MapObjectUnkMTWD();
}

ARM MapObjectProfileUnkMTWD::MapObjectProfileUnkMTWD() :
    MapObjectProfile(MapObjectId_MTWD) {}

ARM MapObjectUnkMTWD::MapObjectUnkMTWD() {}

ARM void MapObjectUnkMTWD::func_ov094_02175c90(void) {}
ARM void MapObjectUnkMTWD::func_ov094_02175d1c(void) {}
ARM void MapObjectUnkMTWD::func_ov094_02175ea4(void) {}
ARM void MapObjectUnkMTWD::func_ov094_02175eb8(void) {}

ARM MapObjectUnkMTWD::~MapObjectUnkMTWD() {}
ARM MapObjectProfileUnkMTWD::~MapObjectProfileUnkMTWD() {}
