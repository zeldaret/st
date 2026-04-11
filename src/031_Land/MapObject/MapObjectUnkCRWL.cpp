//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkCRWL.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkCRWL sMapObjectProfileUnkCRWL;

ARM MapObjectProfileUnkCRWL *MapObjectProfileUnkCRWL::GetProfile() {
    return &sMapObjectProfileUnkCRWL;
}

ARM MapObject *MapObjectProfileUnkCRWL::Create() {
    return new(HeapIndex_2) MapObjectUnkCRWL();
}

ARM MapObjectProfileUnkCRWL::MapObjectProfileUnkCRWL() :
    MapObjectProfile(MapObjectId_CRWL) {}

ARM MapObjectUnkCRWL::MapObjectUnkCRWL() {}

ARM void MapObjectUnkCRWL::func_ov031_02106ff4(void) {}
ARM void MapObjectUnkCRWL::func_ov031_02107198(void) {}
ARM void MapObjectUnkCRWL::func_ov031_021071dc(void) {}
ARM void MapObjectUnkCRWL::func_ov031_02107208(void) {}
ARM void MapObjectUnkCRWL::func_ov031_02107250(void) {}

ARM MapObjectUnkCRWL::~MapObjectUnkCRWL() {}
ARM MapObjectProfileUnkCRWL::~MapObjectProfileUnkCRWL() {}
