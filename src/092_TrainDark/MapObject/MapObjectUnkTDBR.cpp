//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTDBR.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkTDBR);

ARM MapObject *MapObjectProfileUnkTDBR::Create() {
    return new(HeapIndex_2) MapObjectUnkTDBR();
}

ARM MapObjectProfileUnkTDBR::MapObjectProfileUnkTDBR() :
    MapObjectProfile(MapObjectId_TDBR) {}

ARM MapObjectUnkTDBR::MapObjectUnkTDBR() {}

ARM void MapObjectUnkTDBR::func_ov092_02166700(void) {}
ARM void MapObjectUnkTDBR::func_ov092_02166718(void) {}
ARM void MapObjectUnkTDBR::func_ov092_02166724(void) {}

ARM MapObjectUnkTDBR::~MapObjectUnkTDBR() {}
ARM MapObjectProfileUnkTDBR::~MapObjectProfileUnkTDBR() {}
