//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkWLMS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkWLMS sMapObjectProfileUnkWLMS;

ARM MapObjectProfileUnkWLMS *MapObjectProfileUnkWLMS::GetProfile() {
    return &sMapObjectProfileUnkWLMS;
}

ARM MapObject *MapObjectProfileUnkWLMS::Create() {
    return new(HeapIndex_2) MapObjectUnkWLMS();
}

ARM MapObjectProfileUnkWLMS::MapObjectProfileUnkWLMS() :
    MapObjectProfile(MapObjectId_WLMS) {}

ARM MapObjectUnkWLMS::MapObjectUnkWLMS() {}

ARM void MapObjectUnkWLMS::func_ov063_0215fe74(void) {}
ARM void MapObjectUnkWLMS::func_ov063_0215fe88(void) {}
ARM void MapObjectUnkWLMS::func_ov063_0215feb0(void) {}
ARM void MapObjectUnkWLMS::func_ov063_0215fff8(void) {}
ARM void MapObjectUnkWLMS::func_ov063_02160030(void) {}
ARM void MapObjectUnkWLMS::func_ov063_02160254(void) {}
ARM void MapObjectUnkWLMS::func_ov063_02160548(void) {}
ARM void MapObjectUnkWLMS::func_ov063_02160580(void) {}
ARM void MapObjectUnkWLMS::func_ov063_02160688(void) {}
ARM void MapObjectUnkWLMS::func_ov063_021606b4(void) {}
ARM void MapObjectUnkWLMS::func_ov063_02160780(void) {}
ARM void MapObjectUnkWLMS::func_ov063_02160880(void) {}
ARM void MapObjectUnkWLMS::func_ov063_021608a8(void) {}
ARM void MapObjectUnkWLMS::func_ov063_02160918(void) {}
ARM void MapObjectUnkWLMS::func_ov063_02160938(void) {}
ARM void MapObjectUnkWLMS::func_ov063_0216095c(void) {}

ARM MapObjectUnkWLMS::~MapObjectUnkWLMS() {}
ARM MapObjectProfileUnkWLMS::~MapObjectProfileUnkWLMS() {}
