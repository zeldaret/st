//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRRC.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRRC sMapObjectProfileUnkTRRC;

ARM MapObjectProfileUnkTRRC *MapObjectProfileUnkTRRC::GetProfile() {
    return &sMapObjectProfileUnkTRRC;
}

ARM MapObject *MapObjectProfileUnkTRRC::Create() {
    return new(HeapIndex_2) MapObjectUnkTRRC();
}

ARM MapObjectProfileUnkTRRC::MapObjectProfileUnkTRRC() :
    MapObjectProfile(MapObjectId_TRRC) {}

ARM MapObjectUnkTRRC::MapObjectUnkTRRC() {}

ARM void MapObjectUnkTRRC::func_ov026_02109a50(void) {}
ARM void MapObjectUnkTRRC::func_ov026_02109af0(void) {}
ARM void MapObjectUnkTRRC::func_ov026_02109b90(void) {}
ARM void MapObjectUnkTRRC::func_ov026_02109c34(void) {}
ARM void MapObjectUnkTRRC::func_ov026_02109c8c(void) {}
ARM void MapObjectUnkTRRC::func_ov026_02109d04(void) {}
ARM void MapObjectUnkTRRC::func_ov026_02109d34(void) {}
ARM void MapObjectUnkTRRC::func_ov026_02109dd8(void) {}
ARM void MapObjectUnkTRRC::func_ov026_02109e28(void) {}

ARM MapObjectUnkTRRC::~MapObjectUnkTRRC() {}
ARM MapObjectProfileUnkTRRC::~MapObjectProfileUnkTRRC() {}
