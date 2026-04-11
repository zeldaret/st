//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkDRBK.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkDRBK sMapObjectProfileUnkDRBK;

ARM MapObjectProfileUnkDRBK *MapObjectProfileUnkDRBK::GetProfile() {
    return &sMapObjectProfileUnkDRBK;
}

ARM MapObject *MapObjectProfileUnkDRBK::Create() {
    return new(HeapIndex_2) MapObjectUnkDRBK();
}

ARM MapObjectProfileUnkDRBK::MapObjectProfileUnkDRBK() :
    MapObjectProfile(MapObjectId_DRBK) {}

ARM MapObjectUnkDRBK::MapObjectUnkDRBK() {}

ARM void MapObjectUnkDRBK::func_ov041_0212ba90(void) {}
ARM void MapObjectUnkDRBK::func_ov041_0212bac8(void) {}
ARM void MapObjectUnkDRBK::func_ov041_0212bb18(void) {}
ARM void MapObjectUnkDRBK::func_ov041_0212bba4(void) {}
ARM void MapObjectUnkDRBK::func_ov041_0212bc1c(void) {}
ARM void MapObjectUnkDRBK::func_ov041_0212bdd0(void) {}
ARM void MapObjectUnkDRBK::func_ov041_0212be5c(void) {}
ARM void MapObjectUnkDRBK::func_ov041_0212bfa4(void) {}
ARM void MapObjectUnkDRBK::func_ov041_0212c084(void) {}
ARM void MapObjectUnkDRBK::func_ov041_0212c10c(void) {}
ARM void MapObjectUnkDRBK::func_ov041_0212c144(void) {}
ARM void MapObjectUnkDRBK::func_ov041_0212c544(void) {}
ARM void MapObjectUnkDRBK::func_ov041_0212c644(void) {}
ARM void MapObjectUnkDRBK::func_ov041_0212c6cc(void) {}
ARM void MapObjectUnkDRBK::func_ov041_0212c794(void) {}
ARM void MapObjectUnkDRBK::func_ov041_0212c7b0(void) {}

ARM MapObjectUnkDRBK::~MapObjectUnkDRBK() {}
ARM MapObjectProfileUnkDRBK::~MapObjectProfileUnkDRBK() {}
