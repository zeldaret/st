//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkRKAG.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkRKAG sMapObjectProfileUnkRKAG;

ARM MapObjectProfileUnkRKAG *MapObjectProfileUnkRKAG::GetProfile() {
    return &sMapObjectProfileUnkRKAG;
}

ARM MapObject *MapObjectProfileUnkRKAG::Create() {
    return new(HeapIndex_2) MapObjectUnkRKAG();
}

ARM MapObjectProfileUnkRKAG::MapObjectProfileUnkRKAG() :
    MapObjectProfile(MapObjectId_RKAG) {}

ARM MapObjectUnkRKAG::MapObjectUnkRKAG() {}

ARM void MapObjectUnkRKAG::func_ov068_02161674(void) {}
ARM void MapObjectUnkRKAG::func_ov068_02161684(void) {}
ARM void MapObjectUnkRKAG::func_ov068_0216168c(void) {}
ARM void MapObjectUnkRKAG::func_ov068_02161694(void) {}
ARM void MapObjectUnkRKAG::func_ov068_02161698(void) {}

ARM MapObjectUnkRKAG::~MapObjectUnkRKAG() {}
ARM MapObjectProfileUnkRKAG::~MapObjectProfileUnkRKAG() {}
