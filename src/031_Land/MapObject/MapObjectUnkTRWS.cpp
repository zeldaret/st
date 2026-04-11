//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRWS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRWS sMapObjectProfileUnkTRWS;

ARM MapObjectProfileUnkTRWS *MapObjectProfileUnkTRWS::GetProfile() {
    return &sMapObjectProfileUnkTRWS;
}

ARM MapObject *MapObjectProfileUnkTRWS::Create() {
    return new(HeapIndex_2) MapObjectUnkTRWS();
}

ARM MapObjectProfileUnkTRWS::MapObjectProfileUnkTRWS() :
    MapObjectProfile(MapObjectId_TRWS) {}

ARM MapObjectUnkTRWS::MapObjectUnkTRWS() {}

ARM void MapObjectUnkTRWS::func_ov031_02104584(void) {}
ARM void MapObjectUnkTRWS::func_ov031_021045f8(void) {}
ARM void MapObjectUnkTRWS::func_ov031_02104664(void) {}
ARM void MapObjectUnkTRWS::func_ov031_0210466c(void) {}
ARM void MapObjectUnkTRWS::func_ov031_02104674(void) {}
ARM void MapObjectUnkTRWS::func_ov031_021046b0(void) {}
ARM void MapObjectUnkTRWS::func_ov031_02104700(void) {}
ARM void MapObjectUnkTRWS::func_ov031_021047f8(void) {}
ARM void MapObjectUnkTRWS::func_ov031_0210481c(void) {}
ARM void MapObjectUnkTRWS::func_ov031_021048bc(void) {}
ARM void MapObjectUnkTRWS::func_ov031_02104a24(void) {}
ARM void MapObjectUnkTRWS::func_ov031_02104a30(void) {}
ARM void MapObjectUnkTRWS::func_ov031_02104ae0(void) {}
ARM void MapObjectUnkTRWS::func_ov031_02104b1c(void) {}
ARM void MapObjectUnkTRWS::func_ov031_02104bc8(void) {}
ARM void MapObjectUnkTRWS::func_ov031_02104be8(void) {}
ARM void MapObjectUnkTRWS::func_ov031_02104c14(void) {}

ARM MapObjectUnkTRWS::~MapObjectUnkTRWS() {}
ARM MapObjectProfileUnkTRWS::~MapObjectProfileUnkTRWS() {}
