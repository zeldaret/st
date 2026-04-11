//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkEFRS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkEFRS sMapObjectProfileUnkEFRS;

ARM MapObjectProfileUnkEFRS *MapObjectProfileUnkEFRS::GetProfile() {
    return &sMapObjectProfileUnkEFRS;
}

ARM MapObject *MapObjectProfileUnkEFRS::Create() {
    return new(HeapIndex_2) MapObjectUnkEFRS();
}

ARM MapObjectProfileUnkEFRS::MapObjectProfileUnkEFRS() :
    MapObjectProfile(MapObjectId_EFRS) {}

ARM MapObjectUnkEFRS::MapObjectUnkEFRS() {}

ARM void MapObjectUnkEFRS::func_ov026_0210e944(void) {}
ARM void MapObjectUnkEFRS::func_ov026_0210e9bc(void) {}
ARM void MapObjectUnkEFRS::func_ov026_0210ea0c(void) {}
ARM void MapObjectUnkEFRS::func_ov026_0210ec24(void) {}
ARM void MapObjectUnkEFRS::func_ov026_0210ec30(void) {}
ARM void MapObjectUnkEFRS::func_ov026_0210ec4c(void) {}
ARM void MapObjectUnkEFRS::func_ov026_0210ec54(void) {}
ARM void MapObjectUnkEFRS::func_ov026_0210ecb8(void) {}

ARM MapObjectUnkEFRS::~MapObjectUnkEFRS() {}
ARM MapObjectProfileUnkEFRS::~MapObjectProfileUnkEFRS() {}
