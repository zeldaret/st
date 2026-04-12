//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFRAI.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkFRAI);

ARM MapObject *MapObjectProfileUnkFRAI::Create() {
    return new(HeapIndex_2) MapObjectUnkFRAI();
}

ARM MapObjectProfileUnkFRAI::MapObjectProfileUnkFRAI() :
    MapObjectProfile(MapObjectId_FRAI) {}

ARM MapObjectUnkFRAI::MapObjectUnkFRAI() {}

ARM void MapObjectUnkFRAI::func_ov040_0212d81c(void) {}
ARM void MapObjectUnkFRAI::func_ov040_0212d9a4(void) {}

ARM MapObjectUnkFRAI::~MapObjectUnkFRAI() {}
ARM MapObjectProfileUnkFRAI::~MapObjectProfileUnkFRAI() {}
