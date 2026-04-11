//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkPLFA.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkPLFA sMapObjectProfileUnkPLFA;

ARM MapObjectProfileUnkPLFA *MapObjectProfileUnkPLFA::GetProfile() {
    return &sMapObjectProfileUnkPLFA;
}

ARM MapObject *MapObjectProfileUnkPLFA::Create() {
    return new(HeapIndex_2) MapObjectUnkPLFA();
}

ARM MapObjectProfileUnkPLFA::MapObjectProfileUnkPLFA() :
    MapObjectProfile(MapObjectId_PLFA) {}

ARM MapObjectUnkPLFA::MapObjectUnkPLFA() {}

ARM void MapObjectUnkPLFA::func_ov026_02108ee8(void) {}
ARM void MapObjectUnkPLFA::func_ov026_02109160(void) {}
ARM void MapObjectUnkPLFA::func_ov026_021091d8(void) {}
ARM void MapObjectUnkPLFA::func_ov026_021091ec(void) {}
ARM void MapObjectUnkPLFA::func_ov026_02109228(void) {}
ARM void MapObjectUnkPLFA::func_ov026_0210922c(void) {}
ARM void MapObjectUnkPLFA::func_ov026_02109230(void) {}

ARM MapObjectUnkPLFA::~MapObjectUnkPLFA() {}
ARM MapObjectProfileUnkPLFA::~MapObjectProfileUnkPLFA() {}
