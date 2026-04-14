//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectMiniBlocks.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileMiniBlocks);

ARM MapObject *MapObjectProfileMiniBlocks::Create() {
    return new(HeapIndex_2) MapObjectMiniBlocks();
}

ARM MapObjectProfileMiniBlocks::MapObjectProfileMiniBlocks() :
    MapObjectProfile(MapObjectId_MiniBlocks) {}

ARM MapObjectMiniBlocks::MapObjectMiniBlocks() {}

ARM void MapObjectMiniBlocks::func_ov000_0209e4b0(void) {}
ARM void MapObjectMiniBlocks::func_ov000_0209e6ac(void) {}

ARM MapObjectMiniBlocks::~MapObjectMiniBlocks() {}
ARM MapObjectProfileMiniBlocks::~MapObjectProfileMiniBlocks() {}
