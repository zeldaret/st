//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRCC.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRCC sMapObjectProfileUnkTRCC;

ARM MapObjectProfileUnkTRCC *MapObjectProfileUnkTRCC::GetProfile() {
    return &sMapObjectProfileUnkTRCC;
}

ARM MapObject *MapObjectProfileUnkTRCC::Create() {
    return new(HeapIndex_2) MapObjectUnkTRCC();
}

ARM MapObjectProfileUnkTRCC::MapObjectProfileUnkTRCC() :
    MapObjectProfile(MapObjectId_TRCC) {}

ARM MapObjectUnkTRCC::MapObjectUnkTRCC() {}

ARM void MapObjectUnkTRCC::func_ov090_021750fc(void) {}
ARM void MapObjectUnkTRCC::func_ov090_02175148(void) {}
ARM void MapObjectUnkTRCC::func_ov090_021751dc(void) {}

ARM MapObjectUnkTRCC::~MapObjectUnkTRCC() {}
ARM MapObjectProfileUnkTRCC::~MapObjectProfileUnkTRCC() {}
