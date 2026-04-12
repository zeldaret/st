//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkGRSV.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkGRSV);

ARM MapObject *MapObjectProfileUnkGRSV::Create() {
    return new(HeapIndex_2) MapObjectUnkGRSV();
}

ARM MapObjectProfileUnkGRSV::MapObjectProfileUnkGRSV() :
    MapObjectProfile(MapObjectId_GRSV) {}

ARM MapObjectUnkGRSV::MapObjectUnkGRSV() {}

ARM void MapObjectUnkGRSV::func_ov058_02151558(void) {}
ARM void MapObjectUnkGRSV::func_ov058_02151874(void) {}
ARM void MapObjectUnkGRSV::func_ov058_021518e8(void) {}

ARM MapObjectUnkGRSV::~MapObjectUnkGRSV() {}
ARM MapObjectProfileUnkGRSV::~MapObjectProfileUnkGRSV() {}
