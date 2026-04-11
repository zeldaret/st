//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSWSW.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSWSW sMapObjectProfileUnkSWSW;

ARM MapObjectProfileUnkSWSW *MapObjectProfileUnkSWSW::GetProfile() {
    return &sMapObjectProfileUnkSWSW;
}

ARM MapObject *MapObjectProfileUnkSWSW::Create() {
    return new(HeapIndex_2) MapObjectUnkSWSW();
}

ARM MapObjectProfileUnkSWSW::MapObjectProfileUnkSWSW() :
    MapObjectProfile(MapObjectId_SWSW) {}

ARM MapObjectUnkSWSW::MapObjectUnkSWSW() {}

ARM void MapObjectUnkSWSW::func_ov032_02120f78(void) {}
ARM void MapObjectUnkSWSW::func_ov032_02120fe4(void) {}
ARM void MapObjectUnkSWSW::func_ov032_021210a0(void) {}
ARM void MapObjectUnkSWSW::func_ov032_021211c8(void) {}
ARM void MapObjectUnkSWSW::func_ov032_021211dc(void) {}
ARM void MapObjectUnkSWSW::func_ov032_0212141c(void) {}
ARM void MapObjectUnkSWSW::func_ov032_021218d0(void) {}
ARM void MapObjectUnkSWSW::func_ov032_02121b48(void) {}
ARM void MapObjectUnkSWSW::func_ov032_02121b90(void) {}
ARM void MapObjectUnkSWSW::func_ov032_02121c18(void) {}
ARM void MapObjectUnkSWSW::func_ov032_02121d70(void) {}
ARM void MapObjectUnkSWSW::func_ov032_02121dc8(void) {}
ARM void MapObjectUnkSWSW::func_ov032_02121e94(void) {}

ARM MapObjectUnkSWSW::~MapObjectUnkSWSW() {}
ARM MapObjectProfileUnkSWSW::~MapObjectProfileUnkSWSW() {}
