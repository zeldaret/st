//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkBRGS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkBRGS sMapObjectProfileUnkBRGS;

ARM MapObjectProfileUnkBRGS *MapObjectProfileUnkBRGS::GetProfile() {
    return &sMapObjectProfileUnkBRGS;
}

ARM MapObject *MapObjectProfileUnkBRGS::Create() {
    return new(HeapIndex_2) MapObjectUnkBRGS();
}

ARM MapObjectProfileUnkBRGS::MapObjectProfileUnkBRGS() :
    MapObjectProfile(MapObjectId_BRGS) {}

ARM MapObjectUnkBRGS::MapObjectUnkBRGS() {}

ARM void MapObjectUnkBRGS::func_ov071_021621a4(void) {}
ARM void MapObjectUnkBRGS::func_ov071_02162480(void) {}
ARM void MapObjectUnkBRGS::func_ov071_02162670(void) {}
ARM void MapObjectUnkBRGS::func_ov071_021626b0(void) {}
ARM void MapObjectUnkBRGS::func_ov071_02162898(void) {}
ARM void MapObjectUnkBRGS::func_ov071_02162a40(void) {}
ARM void MapObjectUnkBRGS::func_ov071_02162a84(void) {}
ARM void MapObjectUnkBRGS::func_ov071_02162b40(void) {}
ARM void MapObjectUnkBRGS::func_ov071_02162bf0(void) {}
ARM void MapObjectUnkBRGS::func_ov071_02162cf4(void) {}

ARM MapObjectUnkBRGS::~MapObjectUnkBRGS() {}
ARM MapObjectProfileUnkBRGS::~MapObjectProfileUnkBRGS() {}
