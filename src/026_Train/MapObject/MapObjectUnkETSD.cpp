//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkETSD.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkETSD sMapObjectProfileUnkETSD;

ARM MapObjectProfileUnkETSD *MapObjectProfileUnkETSD::GetProfile() {
    return &sMapObjectProfileUnkETSD;
}

ARM MapObject *MapObjectProfileUnkETSD::Create() {
    return new(HeapIndex_2) MapObjectUnkETSD();
}

ARM MapObjectProfileUnkETSD::MapObjectProfileUnkETSD() :
    MapObjectProfile(MapObjectId_ETSD) {}

ARM MapObjectUnkETSD::MapObjectUnkETSD() {}

ARM void MapObjectUnkETSD::func_ov026_0210edcc(void) {}
ARM void MapObjectUnkETSD::func_ov026_0210f02c(void) {}
ARM void MapObjectUnkETSD::func_ov026_0210f034(void) {}
ARM void MapObjectUnkETSD::func_ov026_0210f098(void) {}
ARM void MapObjectUnkETSD::func_ov026_0210f0ac(void) {}

ARM MapObjectUnkETSD::~MapObjectUnkETSD() {}
ARM MapObjectProfileUnkETSD::~MapObjectProfileUnkETSD() {}
