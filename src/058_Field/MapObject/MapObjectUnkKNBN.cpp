//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkKNBN.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkKNBN sMapObjectProfileUnkKNBN;

ARM MapObjectProfileUnkKNBN *MapObjectProfileUnkKNBN::GetProfile() {
    return &sMapObjectProfileUnkKNBN;
}

ARM MapObject *MapObjectProfileUnkKNBN::Create() {
    return new(HeapIndex_2) MapObjectUnkKNBN();
}

ARM MapObjectProfileUnkKNBN::MapObjectProfileUnkKNBN() :
    MapObjectProfile(MapObjectId_KNBN) {}

ARM MapObjectUnkKNBN::MapObjectUnkKNBN() {}

ARM void MapObjectUnkKNBN::func_ov058_02150a64(void) {}
ARM void MapObjectUnkKNBN::func_ov058_02150ac4(void) {}
ARM void MapObjectUnkKNBN::func_ov058_02150b38(void) {}
ARM void MapObjectUnkKNBN::func_ov058_02150bd0(void) {}
ARM void MapObjectUnkKNBN::func_ov058_02150cfc(void) {}
ARM void MapObjectUnkKNBN::func_ov058_02150d84(void) {}
ARM void MapObjectUnkKNBN::func_ov058_02150dac(void) {}
ARM void MapObjectUnkKNBN::func_ov058_02150dc4(void) {}
ARM void MapObjectUnkKNBN::func_ov058_02150ddc(void) {}
ARM void MapObjectUnkKNBN::func_ov058_02150e74(void) {}
ARM void MapObjectUnkKNBN::func_ov058_02150e88(void) {}
ARM void MapObjectUnkKNBN::func_ov058_02150eb4(void) {}
ARM void MapObjectUnkKNBN::func_ov058_02150eec(void) {}
ARM void MapObjectUnkKNBN::func_ov058_02150fbc(void) {}
ARM void MapObjectUnkKNBN::func_ov058_02151078(void) {}
ARM void MapObjectUnkKNBN::func_ov058_02151098(void) {}
ARM void MapObjectUnkKNBN::func_ov058_02151160(void) {}

ARM MapObjectUnkKNBN::~MapObjectUnkKNBN() {}
ARM MapObjectProfileUnkKNBN::~MapObjectProfileUnkKNBN() {}
