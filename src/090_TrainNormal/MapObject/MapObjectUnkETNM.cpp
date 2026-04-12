//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkETNM.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkETNM);

ARM MapObject *MapObjectProfileUnkETNM::Create() {
    return new(HeapIndex_2) MapObjectUnkETNM();
}

ARM MapObjectProfileUnkETNM::MapObjectProfileUnkETNM() :
    MapObjectProfile(MapObjectId_ETNM) {}

ARM MapObjectUnkETNM::MapObjectUnkETNM() {}

ARM void MapObjectUnkETNM::func_ov090_021752cc(void) {}

ARM MapObjectUnkETNM::~MapObjectUnkETNM() {}
ARM MapObjectProfileUnkETNM::~MapObjectProfileUnkETNM() {}
