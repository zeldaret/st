//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSWCB.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSWCB sMapObjectProfileUnkSWCB;

ARM MapObjectProfileUnkSWCB *MapObjectProfileUnkSWCB::GetProfile() {
    return &sMapObjectProfileUnkSWCB;
}

ARM MapObject *MapObjectProfileUnkSWCB::Create() {
    return new(HeapIndex_2) MapObjectUnkSWCB();
}

ARM MapObjectProfileUnkSWCB::MapObjectProfileUnkSWCB() :
    MapObjectProfile(MapObjectId_SWCB) {}

ARM MapObjectUnkSWCB::MapObjectUnkSWCB() {}

ARM void MapObjectUnkSWCB::func_ov058_02151a68(void) {}
ARM void MapObjectUnkSWCB::func_ov058_02151a7c(void) {}
ARM void MapObjectUnkSWCB::func_ov058_02151a8c(void) {}
ARM void MapObjectUnkSWCB::func_ov058_02151a9c(void) {}
ARM void MapObjectUnkSWCB::func_ov058_02151aac(void) {}
ARM void MapObjectUnkSWCB::func_ov058_02151b88(void) {}
ARM void MapObjectUnkSWCB::func_ov058_02151c58(void) {}
ARM void MapObjectUnkSWCB::func_ov058_02151d24(void) {}
ARM void MapObjectUnkSWCB::func_ov058_02151e88(void) {}
ARM void MapObjectUnkSWCB::func_ov058_02151ed8(void) {}
ARM void MapObjectUnkSWCB::func_ov058_02152078(void) {}
ARM void MapObjectUnkSWCB::func_ov058_0215208c(void) {}
ARM void MapObjectUnkSWCB::func_ov058_02152090(void) {}
ARM void MapObjectUnkSWCB::func_ov058_021521ac(void) {}
ARM void MapObjectUnkSWCB::func_ov058_0215250c(void) {}
ARM void MapObjectUnkSWCB::func_ov058_02152564(void) {}
ARM void MapObjectUnkSWCB::func_ov058_02152574(void) {}
ARM void MapObjectUnkSWCB::func_ov058_0215266c(void) {}

ARM MapObjectUnkSWCB::~MapObjectUnkSWCB() {}
ARM MapObjectProfileUnkSWCB::~MapObjectProfileUnkSWCB() {}
