//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFSCT.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkFSCT sMapObjectProfileUnkFSCT;

ARM MapObjectProfileUnkFSCT *MapObjectProfileUnkFSCT::GetProfile() {
    return &sMapObjectProfileUnkFSCT;
}

ARM MapObject *MapObjectProfileUnkFSCT::Create() {
    return new(HeapIndex_2) MapObjectUnkFSCT();
}

ARM MapObjectProfileUnkFSCT::MapObjectProfileUnkFSCT() :
    MapObjectProfile(MapObjectId_FSCT) {}

ARM MapObjectUnkFSCT::MapObjectUnkFSCT() {}

ARM void MapObjectUnkFSCT::func_ov061_021594d0(void) {}
ARM void MapObjectUnkFSCT::func_ov061_02159520(void) {}

ARM MapObjectUnkFSCT::~MapObjectUnkFSCT() {}
ARM MapObjectProfileUnkFSCT::~MapObjectProfileUnkFSCT() {}
