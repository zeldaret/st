//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkRBRC.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkRBRC);

ARM MapObject *MapObjectProfileUnkRBRC::Create() {
    return new(HeapIndex_2) MapObjectUnkRBRC();
}

ARM MapObjectProfileUnkRBRC::MapObjectProfileUnkRBRC() :
    MapObjectProfile(MapObjectId_RBRC) {}

ARM MapObjectUnkRBRC::MapObjectUnkRBRC() {}

ARM void MapObjectUnkRBRC::func_ov090_021747a4(void) {}
ARM void MapObjectUnkRBRC::func_ov090_021747b8(void) {}

ARM MapObjectUnkRBRC::~MapObjectUnkRBRC() {}
ARM MapObjectProfileUnkRBRC::~MapObjectProfileUnkRBRC() {}
