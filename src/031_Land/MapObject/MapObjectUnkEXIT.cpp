//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkEXIT.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkEXIT);

ARM MapObject *MapObjectProfileUnkEXIT::Create() {
    return new(HeapIndex_2) MapObjectUnkEXIT();
}

ARM MapObjectProfileUnkEXIT::MapObjectProfileUnkEXIT() :
    MapObjectProfile(MapObjectId_EXIT) {}

ARM MapObjectUnkEXIT::MapObjectUnkEXIT() {}

ARM void MapObjectUnkEXIT::func_ov031_021005fc(void) {}
ARM void MapObjectUnkEXIT::func_ov031_021006d4(void) {}
ARM void MapObjectUnkEXIT::func_ov031_02100714(void) {}

ARM MapObjectUnkEXIT::~MapObjectUnkEXIT() {}
ARM MapObjectProfileUnkEXIT::~MapObjectProfileUnkEXIT() {}
