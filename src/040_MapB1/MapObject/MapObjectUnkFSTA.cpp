//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFSTA.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkFSTA);

ARM MapObject *MapObjectProfileUnkFSTA::Create() {
    return new(HeapIndex_2) MapObjectUnkFSTA();
}

ARM MapObjectProfileUnkFSTA::MapObjectProfileUnkFSTA() :
    MapObjectProfile(MapObjectId_FSTA) {}

ARM MapObjectUnkFSTA::MapObjectUnkFSTA() {}

ARM void MapObjectUnkFSTA::func_ov040_0212d450(void) {}
ARM void MapObjectUnkFSTA::func_ov040_0212d64c(void) {}

ARM MapObjectUnkFSTA::~MapObjectUnkFSTA() {}
ARM MapObjectProfileUnkFSTA::~MapObjectProfileUnkFSTA() {}
