//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkETNS.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkETNS);

ARM MapObject *MapObjectProfileUnkETNS::Create() {
    return new(HeapIndex_2) MapObjectUnkETNS();
}

ARM MapObjectProfileUnkETNS::MapObjectProfileUnkETNS() :
    MapObjectProfile(MapObjectId_ETNS) {}

ARM MapObjectUnkETNS::MapObjectUnkETNS() {}

ARM void MapObjectUnkETNS::func_ov028_0214568c(void) {}

ARM MapObjectUnkETNS::~MapObjectUnkETNS() {}
ARM MapObjectProfileUnkETNS::~MapObjectProfileUnkETNS() {}
