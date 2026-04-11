//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkMTGT.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkMTGT sMapObjectProfileUnkMTGT;

ARM MapObjectProfileUnkMTGT *MapObjectProfileUnkMTGT::GetProfile() {
    return &sMapObjectProfileUnkMTGT;
}

ARM MapObject *MapObjectProfileUnkMTGT::Create() {
    return new(HeapIndex_2) MapObjectUnkMTGT();
}

ARM MapObjectProfileUnkMTGT::MapObjectProfileUnkMTGT() :
    MapObjectProfile(MapObjectId_MTGT) {}

ARM MapObjectUnkMTGT::MapObjectUnkMTGT() {}

ARM void MapObjectUnkMTGT::func_ov026_0210b4a4(void) {}
ARM void MapObjectUnkMTGT::func_ov026_0210b7bc(void) {}
ARM void MapObjectUnkMTGT::func_ov026_0210b8a4(void) {}
ARM void MapObjectUnkMTGT::func_ov026_0210b8ac(void) {}
ARM void MapObjectUnkMTGT::func_ov026_0210b8b4(void) {}
ARM void MapObjectUnkMTGT::func_ov026_0210b8b8(void) {}
ARM void MapObjectUnkMTGT::func_ov026_0210b8c4(void) {}
ARM void MapObjectUnkMTGT::func_ov026_0210b91c(void) {}
ARM void MapObjectUnkMTGT::func_ov026_0210b924(void) {}
ARM void MapObjectUnkMTGT::func_ov026_0210b944(void) {}
ARM void MapObjectUnkMTGT::func_ov026_0210b964(void) {}
ARM void MapObjectUnkMTGT::func_ov026_0210b984(void) {}
ARM void MapObjectUnkMTGT::func_ov026_0210ba14(void) {}

ARM MapObjectUnkMTGT::~MapObjectUnkMTGT() {}
ARM MapObjectProfileUnkMTGT::~MapObjectProfileUnkMTGT() {}
