//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkDRTC.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkDRTC);

ARM MapObject *MapObjectProfileUnkDRTC::Create() {
    return new(HeapIndex_2) MapObjectUnkDRTC();
}

ARM MapObjectProfileUnkDRTC::MapObjectProfileUnkDRTC() :
    MapObjectProfile(MapObjectId_DRTC) {}

ARM MapObjectUnkDRTC::MapObjectUnkDRTC() {}

ARM void MapObjectUnkDRTC::func_ov031_021002fc(void) {}
ARM void MapObjectUnkDRTC::func_ov031_02100314(void) {}
ARM void MapObjectUnkDRTC::func_ov031_021003a0(void) {}
ARM void MapObjectUnkDRTC::func_ov031_021003c8(void) {}
ARM void MapObjectUnkDRTC::func_ov031_0210040c(void) {}
ARM void MapObjectUnkDRTC::func_ov031_02100410(void) {}
ARM void MapObjectUnkDRTC::func_ov031_02100414(void) {}

ARM MapObjectUnkDRTC::~MapObjectUnkDRTC() {}
ARM MapObjectProfileUnkDRTC::~MapObjectProfileUnkDRTC() {}
