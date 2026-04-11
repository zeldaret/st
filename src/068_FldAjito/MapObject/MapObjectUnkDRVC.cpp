//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkDRVC.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkDRVC sMapObjectProfileUnkDRVC;

ARM MapObjectProfileUnkDRVC *MapObjectProfileUnkDRVC::GetProfile() {
    return &sMapObjectProfileUnkDRVC;
}

ARM MapObject *MapObjectProfileUnkDRVC::Create() {
    return new(HeapIndex_2) MapObjectUnkDRVC();
}

ARM MapObjectProfileUnkDRVC::MapObjectProfileUnkDRVC() :
    MapObjectProfile(MapObjectId_DRVC) {}

ARM MapObjectUnkDRVC::MapObjectUnkDRVC() {}

ARM void MapObjectUnkDRVC::func_ov068_02160be8(void) {}
ARM void MapObjectUnkDRVC::func_ov068_02160c64(void) {}
ARM void MapObjectUnkDRVC::func_ov068_02160c70(void) {}
ARM void MapObjectUnkDRVC::func_ov068_02160de8(void) {}
ARM void MapObjectUnkDRVC::func_ov068_02160ed4(void) {}
ARM void MapObjectUnkDRVC::func_ov068_02160f20(void) {}
ARM void MapObjectUnkDRVC::func_ov068_021611bc(void) {}
ARM void MapObjectUnkDRVC::func_ov068_021613c8(void) {}
ARM void MapObjectUnkDRVC::func_ov068_021613dc(void) {}
ARM void MapObjectUnkDRVC::func_ov068_021613f0(void) {}
ARM void MapObjectUnkDRVC::func_ov068_0216140c(void) {}
ARM void MapObjectUnkDRVC::func_ov068_02161494(void) {}
ARM void MapObjectUnkDRVC::func_ov068_021614cc(void) {}

ARM MapObjectUnkDRVC::~MapObjectUnkDRVC() {}
ARM MapObjectProfileUnkDRVC::~MapObjectProfileUnkDRVC() {}
