//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkETTV.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkETTV sMapObjectProfileUnkETTV;

ARM MapObjectProfileUnkETTV *MapObjectProfileUnkETTV::GetProfile() {
    return &sMapObjectProfileUnkETTV;
}

ARM MapObject *MapObjectProfileUnkETTV::Create() {
    return new(HeapIndex_2) MapObjectUnkETTV();
}

ARM MapObjectProfileUnkETTV::MapObjectProfileUnkETTV() :
    MapObjectProfile(MapObjectId_ETTV) {}

ARM MapObjectUnkETTV::MapObjectUnkETTV() {}

ARM void MapObjectUnkETTV::func_ov030_02141f54(void) {}
ARM void MapObjectUnkETTV::func_ov030_02141f68(void) {}
ARM void MapObjectUnkETTV::func_ov030_02142100(void) {}
ARM void MapObjectUnkETTV::func_ov030_021421e8(void) {}
ARM void MapObjectUnkETTV::func_ov030_021421f0(void) {}
ARM void MapObjectUnkETTV::func_ov030_021421f8(void) {}
ARM void MapObjectUnkETTV::func_ov030_021421fc(void) {}
ARM void MapObjectUnkETTV::func_ov030_021422ec(void) {}
ARM void MapObjectUnkETTV::func_ov030_02142460(void) {}
ARM void MapObjectUnkETTV::func_ov030_021424ac(void) {}
ARM void MapObjectUnkETTV::func_ov030_02142550(void) {}
ARM void MapObjectUnkETTV::func_ov030_02142594(void) {}
ARM void MapObjectUnkETTV::func_ov030_0214259c(void) {}
ARM void MapObjectUnkETTV::func_ov030_02142788(void) {}
ARM void MapObjectUnkETTV::func_ov030_021427c0(void) {}
ARM void MapObjectUnkETTV::func_ov030_02142828(void) {}
ARM void MapObjectUnkETTV::func_ov030_02142868(void) {}
ARM void MapObjectUnkETTV::func_ov030_02142888(void) {}
ARM void MapObjectUnkETTV::func_ov030_021428a8(void) {}
ARM void MapObjectUnkETTV::func_ov030_02142918(void) {}
ARM void MapObjectUnkETTV::func_ov030_02142960(void) {}

ARM MapObjectUnkETTV::~MapObjectUnkETTV() {}
ARM MapObjectProfileUnkETTV::~MapObjectProfileUnkETTV() {}
