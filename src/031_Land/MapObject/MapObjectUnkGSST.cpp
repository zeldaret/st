//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkGSST.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkGSST sMapObjectProfileUnkGSST;

ARM MapObjectProfileUnkGSST *MapObjectProfileUnkGSST::GetProfile() {
    return &sMapObjectProfileUnkGSST;
}

ARM MapObject *MapObjectProfileUnkGSST::Create() {
    return new(HeapIndex_2) MapObjectUnkGSST();
}

ARM MapObjectProfileUnkGSST::MapObjectProfileUnkGSST() :
    MapObjectProfile(MapObjectId_GSST) {}

ARM MapObjectUnkGSST::MapObjectUnkGSST() {}

ARM void MapObjectUnkGSST::func_ov031_0210bc94(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210bdf8(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210be50(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210c024(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210c038(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210c03c(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210c040(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210c15c(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210c16c(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210c180(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210c4e4(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210c6b8(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210c74c(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210c844(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210cac4(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210caf0(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210cb7c(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210cc28(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210cc2c(void) {}
ARM void MapObjectUnkGSST::func_ov031_0210cca0(void) {}

ARM MapObjectUnkGSST::~MapObjectUnkGSST() {}
ARM MapObjectProfileUnkGSST::~MapObjectProfileUnkGSST() {}
