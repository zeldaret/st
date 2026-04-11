//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkDRDS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkDRDS sMapObjectProfileUnkDRDS;

ARM MapObjectProfileUnkDRDS *MapObjectProfileUnkDRDS::GetProfile() {
    return &sMapObjectProfileUnkDRDS;
}

ARM MapObject *MapObjectProfileUnkDRDS::Create() {
    return new(HeapIndex_2) MapObjectUnkDRDS();
}

ARM MapObjectProfileUnkDRDS::MapObjectProfileUnkDRDS() :
    MapObjectProfile(MapObjectId_DRDS) {}

ARM MapObjectUnkDRDS::MapObjectUnkDRDS() {}

ARM void MapObjectUnkDRDS::func_ov031_020fd234(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fd284(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fd3f8(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fd404(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fd474(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fd7e8(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fd814(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fdc08(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fdcc4(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fdd70(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fdec8(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fdfc0(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fdfcc(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fe04c(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fe0d0(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fe22c(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fe250(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fe278(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fe2bc(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fe2e8(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fe32c(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fe350(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fe388(void) {}
ARM void MapObjectUnkDRDS::func_ov031_020fe5fc(void) {}

ARM MapObjectUnkDRDS::~MapObjectUnkDRDS() {}
ARM MapObjectProfileUnkDRDS::~MapObjectProfileUnkDRDS() {}
