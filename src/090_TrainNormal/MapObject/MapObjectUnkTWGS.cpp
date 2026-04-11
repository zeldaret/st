//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTWGS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTWGS sMapObjectProfileUnkTWGS;

ARM MapObjectProfileUnkTWGS *MapObjectProfileUnkTWGS::GetProfile() {
    return &sMapObjectProfileUnkTWGS;
}

ARM MapObject *MapObjectProfileUnkTWGS::Create() {
    return new(HeapIndex_2) MapObjectUnkTWGS();
}

ARM MapObjectProfileUnkTWGS::MapObjectProfileUnkTWGS() :
    MapObjectProfile(MapObjectId_TWGS) {}

ARM MapObjectUnkTWGS::MapObjectUnkTWGS() {}

ARM void MapObjectUnkTWGS::func_ov090_02172314(void) {}
ARM void MapObjectUnkTWGS::func_ov090_02172328(void) {}
ARM void MapObjectUnkTWGS::func_ov090_02172370(void) {}
ARM void MapObjectUnkTWGS::func_ov090_0217244c(void) {}
ARM void MapObjectUnkTWGS::func_ov090_02172460(void) {}
ARM void MapObjectUnkTWGS::func_ov090_02172734(void) {}
ARM void MapObjectUnkTWGS::func_ov090_02172784(void) {}
ARM void MapObjectUnkTWGS::func_ov090_021727bc(void) {}
ARM void MapObjectUnkTWGS::func_ov090_021727f4(void) {}
ARM void MapObjectUnkTWGS::func_ov090_02172808(void) {}
ARM void MapObjectUnkTWGS::func_ov090_02172840(void) {}
ARM void MapObjectUnkTWGS::func_ov090_021728d4(void) {}

ARM MapObjectUnkTWGS::~MapObjectUnkTWGS() {}
ARM MapObjectProfileUnkTWGS::~MapObjectProfileUnkTWGS() {}
