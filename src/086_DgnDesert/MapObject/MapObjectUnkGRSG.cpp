//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkGRSG.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkGRSG sMapObjectProfileUnkGRSG;

ARM MapObjectProfileUnkGRSG *MapObjectProfileUnkGRSG::GetProfile() {
    return &sMapObjectProfileUnkGRSG;
}

ARM MapObject *MapObjectProfileUnkGRSG::Create() {
    return new(HeapIndex_2) MapObjectUnkGRSG();
}

ARM MapObjectProfileUnkGRSG::MapObjectProfileUnkGRSG() :
    MapObjectProfile(MapObjectId_GRSG) {}

ARM MapObjectUnkGRSG::MapObjectUnkGRSG() {}

ARM void MapObjectUnkGRSG::func_ov086_0215e398(void) {}
ARM void MapObjectUnkGRSG::func_ov086_0215e534(void) {}
ARM void MapObjectUnkGRSG::func_ov086_0215e584(void) {}
ARM void MapObjectUnkGRSG::func_ov086_0215e5e0(void) {}

ARM MapObjectUnkGRSG::~MapObjectUnkGRSG() {}
ARM MapObjectProfileUnkGRSG::~MapObjectProfileUnkGRSG() {}
