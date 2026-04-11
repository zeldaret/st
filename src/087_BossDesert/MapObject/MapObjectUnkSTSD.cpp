//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSTSD.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSTSD sMapObjectProfileUnkSTSD;

ARM MapObjectProfileUnkSTSD *MapObjectProfileUnkSTSD::GetProfile() {
    return &sMapObjectProfileUnkSTSD;
}

ARM MapObject *MapObjectProfileUnkSTSD::Create() {
    return new(HeapIndex_2) MapObjectUnkSTSD();
}

ARM MapObjectProfileUnkSTSD::MapObjectProfileUnkSTSD() :
    MapObjectProfile(MapObjectId_STSD) {}

ARM MapObjectUnkSTSD::MapObjectUnkSTSD() {}

ARM void MapObjectUnkSTSD::func_ov087_02161b00(void) {}
ARM void MapObjectUnkSTSD::func_ov087_02161b84(void) {}
ARM void MapObjectUnkSTSD::func_ov087_02161bd8(void) {}
ARM void MapObjectUnkSTSD::func_ov087_02161c38(void) {}

ARM MapObjectUnkSTSD::~MapObjectUnkSTSD() {}
ARM MapObjectProfileUnkSTSD::~MapObjectProfileUnkSTSD() {}
