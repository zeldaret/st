//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkICGR.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkICGR sMapObjectProfileUnkICGR;

ARM MapObjectProfileUnkICGR *MapObjectProfileUnkICGR::GetProfile() {
    return &sMapObjectProfileUnkICGR;
}

ARM MapObject *MapObjectProfileUnkICGR::Create() {
    return new(HeapIndex_2) MapObjectUnkICGR();
}

ARM MapObjectProfileUnkICGR::MapObjectProfileUnkICGR() :
    MapObjectProfile(MapObjectId_ICGR) {}

ARM MapObjectUnkICGR::MapObjectUnkICGR() {}

ARM void MapObjectUnkICGR::func_ov079_02155bdc(void) {}
ARM void MapObjectUnkICGR::func_ov079_02155bf0(void) {}
ARM void MapObjectUnkICGR::func_ov079_02155ef4(void) {}
ARM void MapObjectUnkICGR::func_ov079_02156198(void) {}
ARM void MapObjectUnkICGR::func_ov079_021561b4(void) {}
ARM void MapObjectUnkICGR::func_ov079_0215628c(void) {}
ARM void MapObjectUnkICGR::func_ov079_02156304(void) {}
ARM void MapObjectUnkICGR::func_ov079_02156314(void) {}

ARM MapObjectUnkICGR::~MapObjectUnkICGR() {}
ARM MapObjectProfileUnkICGR::~MapObjectProfileUnkICGR() {}
