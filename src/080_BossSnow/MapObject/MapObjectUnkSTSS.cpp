//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSTSS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSTSS sMapObjectProfileUnkSTSS;

ARM MapObjectProfileUnkSTSS *MapObjectProfileUnkSTSS::GetProfile() {
    return &sMapObjectProfileUnkSTSS;
}

ARM MapObject *MapObjectProfileUnkSTSS::Create() {
    return new(HeapIndex_2) MapObjectUnkSTSS();
}

ARM MapObjectProfileUnkSTSS::MapObjectProfileUnkSTSS() :
    MapObjectProfile(MapObjectId_STSS) {}

ARM MapObjectUnkSTSS::MapObjectUnkSTSS() {}

ARM void MapObjectUnkSTSS::func_ov080_0215e818(void) {}
ARM void MapObjectUnkSTSS::func_ov080_0215e8c0(void) {}
ARM void MapObjectUnkSTSS::func_ov080_0215e914(void) {}

ARM MapObjectUnkSTSS::~MapObjectUnkSTSS() {}
ARM MapObjectProfileUnkSTSS::~MapObjectProfileUnkSTSS() {}
