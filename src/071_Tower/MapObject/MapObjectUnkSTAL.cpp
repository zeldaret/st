//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSTAL.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSTAL sMapObjectProfileUnkSTAL;

ARM MapObjectProfileUnkSTAL *MapObjectProfileUnkSTAL::GetProfile() {
    return &sMapObjectProfileUnkSTAL;
}

ARM MapObject *MapObjectProfileUnkSTAL::Create() {
    return new(HeapIndex_2) MapObjectUnkSTAL();
}

ARM MapObjectProfileUnkSTAL::MapObjectProfileUnkSTAL() :
    MapObjectProfile(MapObjectId_STAL) {}

ARM MapObjectUnkSTAL::MapObjectUnkSTAL() {}

ARM void MapObjectUnkSTAL::func_ov071_02161bb8(void) {}
ARM void MapObjectUnkSTAL::func_ov071_02161d68(void) {}
ARM void MapObjectUnkSTAL::func_ov071_02161e94(void) {}
ARM void MapObjectUnkSTAL::func_ov071_02161ed4(void) {}
ARM void MapObjectUnkSTAL::func_ov071_02161f0c(void) {}

ARM MapObjectUnkSTAL::~MapObjectUnkSTAL() {}
ARM MapObjectProfileUnkSTAL::~MapObjectProfileUnkSTAL() {}
