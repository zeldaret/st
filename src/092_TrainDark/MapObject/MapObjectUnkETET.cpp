//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkETET.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkETET sMapObjectProfileUnkETET;

ARM MapObjectProfileUnkETET *MapObjectProfileUnkETET::GetProfile() {
    return &sMapObjectProfileUnkETET;
}

ARM MapObject *MapObjectProfileUnkETET::Create() {
    return new(HeapIndex_2) MapObjectUnkETET();
}

ARM MapObjectProfileUnkETET::MapObjectProfileUnkETET() :
    MapObjectProfile(MapObjectId_ETET) {}

ARM MapObjectUnkETET::MapObjectUnkETET() {}

ARM void MapObjectUnkETET::func_ov092_02166b7c(void) {}
ARM void MapObjectUnkETET::func_ov092_02166cd8(void) {}
ARM void MapObjectUnkETET::func_ov092_02166d84(void) {}
ARM void MapObjectUnkETET::func_ov092_02166d8c(void) {}
ARM void MapObjectUnkETET::func_ov092_02166d94(void) {}
ARM void MapObjectUnkETET::func_ov092_02166d9c(void) {}
ARM void MapObjectUnkETET::func_ov092_02166da8(void) {}
ARM void MapObjectUnkETET::func_ov092_02166db0(void) {}
ARM void MapObjectUnkETET::func_ov092_02166dd0(void) {}

ARM MapObjectUnkETET::~MapObjectUnkETET() {}
ARM MapObjectProfileUnkETET::~MapObjectProfileUnkETET() {}
