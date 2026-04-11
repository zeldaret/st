//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkDRGN.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkDRGN);

ARM MapObject *MapObjectProfileUnkDRGN::Create() {
    return new(HeapIndex_2) MapObjectUnkDRGN();
}

ARM MapObjectProfileUnkDRGN::MapObjectProfileUnkDRGN() :
    MapObjectProfile(MapObjectId_DRGN) {}

ARM MapObjectUnkDRGN::MapObjectUnkDRGN() {}

ARM void MapObjectUnkDRGN::func_ov067_0215bb08(void) {}
ARM void MapObjectUnkDRGN::func_ov067_0215bce0(void) {}

ARM MapObjectUnkDRGN::~MapObjectUnkDRGN() {}
ARM MapObjectProfileUnkDRGN::~MapObjectProfileUnkDRGN() {}
