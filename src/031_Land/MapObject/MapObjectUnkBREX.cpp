//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkBREX.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkBREX sMapObjectProfileUnkBREX;

ARM MapObjectProfileUnkBREX *MapObjectProfileUnkBREX::GetProfile() {
    return &sMapObjectProfileUnkBREX;
}

ARM MapObject *MapObjectProfileUnkBREX::Create() {
    return new(HeapIndex_2) MapObjectUnkBREX();
}

ARM MapObjectProfileUnkBREX::MapObjectProfileUnkBREX() :
    MapObjectProfile(MapObjectId_BREX) {}

ARM MapObjectUnkBREX::MapObjectUnkBREX() {}

ARM void MapObjectUnkBREX::func_ov031_021076b8(void) {}
ARM void MapObjectUnkBREX::func_ov031_02107b04(void) {}
ARM void MapObjectUnkBREX::func_ov031_02107b40(void) {}
ARM void MapObjectUnkBREX::func_ov031_02107f1c(void) {}
ARM void MapObjectUnkBREX::func_ov031_02107f34(void) {}
ARM void MapObjectUnkBREX::func_ov031_02107f98(void) {}
ARM void MapObjectUnkBREX::func_ov031_02108258(void) {}
ARM void MapObjectUnkBREX::func_ov031_02108314(void) {}
ARM void MapObjectUnkBREX::func_ov031_02108420(void) {}
ARM void MapObjectUnkBREX::func_ov031_02108648(void) {}
ARM void MapObjectUnkBREX::func_ov031_021086a4(void) {}
ARM void MapObjectUnkBREX::func_ov031_02108700(void) {}
ARM void MapObjectUnkBREX::func_ov031_021087f8(void) {}
ARM void MapObjectUnkBREX::func_ov031_02108834(void) {}

ARM MapObjectUnkBREX::~MapObjectUnkBREX() {}
ARM MapObjectProfileUnkBREX::~MapObjectProfileUnkBREX() {}
