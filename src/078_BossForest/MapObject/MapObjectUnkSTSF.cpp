//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSTSF.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkSTSF);

ARM MapObject *MapObjectProfileUnkSTSF::Create() {
    return new(HeapIndex_2) MapObjectUnkSTSF();
}

ARM MapObjectProfileUnkSTSF::MapObjectProfileUnkSTSF() :
    MapObjectProfile(MapObjectId_STSF) {}

ARM MapObjectUnkSTSF::MapObjectUnkSTSF() {}

ARM void MapObjectUnkSTSF::func_ov078_0215d0a0(void) {}
ARM void MapObjectUnkSTSF::func_ov078_0215d0f4(void) {}

ARM MapObjectUnkSTSF::~MapObjectUnkSTSF() {}
ARM MapObjectProfileUnkSTSF::~MapObjectProfileUnkSTSF() {}
