//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkDRMC.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkDRMC sMapObjectProfileUnkDRMC;

ARM MapObjectProfileUnkDRMC *MapObjectProfileUnkDRMC::GetProfile() {
    return &sMapObjectProfileUnkDRMC;
}

ARM MapObject *MapObjectProfileUnkDRMC::Create() {
    return new(HeapIndex_2) MapObjectUnkDRMC();
}

ARM MapObjectProfileUnkDRMC::MapObjectProfileUnkDRMC() :
    MapObjectProfile(MapObjectId_DRMC) {}

ARM MapObjectUnkDRMC::MapObjectUnkDRMC() {}

ARM void MapObjectUnkDRMC::func_ov041_0212d050(void) {}
ARM void MapObjectUnkDRMC::func_ov041_0212d074(void) {}
ARM void MapObjectUnkDRMC::func_ov041_0212d08c(void) {}
ARM void MapObjectUnkDRMC::func_ov041_0212d184(void) {}
ARM void MapObjectUnkDRMC::func_ov041_0212d1ec(void) {}

ARM MapObjectUnkDRMC::~MapObjectUnkDRMC() {}
ARM MapObjectProfileUnkDRMC::~MapObjectProfileUnkDRMC() {}
