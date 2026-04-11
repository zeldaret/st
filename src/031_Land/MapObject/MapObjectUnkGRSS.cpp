//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkGRSS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkGRSS sMapObjectProfileUnkGRSS;

ARM MapObjectProfileUnkGRSS *MapObjectProfileUnkGRSS::GetProfile() {
    return &sMapObjectProfileUnkGRSS;
}

ARM MapObject *MapObjectProfileUnkGRSS::Create() {
    return new(HeapIndex_2) MapObjectUnkGRSS();
}

ARM MapObjectProfileUnkGRSS::MapObjectProfileUnkGRSS() :
    MapObjectProfile(MapObjectId_GRSS) {}

ARM MapObjectUnkGRSS::MapObjectUnkGRSS() {}

ARM void MapObjectUnkGRSS::func_ov031_021010e0(void) {}
ARM void MapObjectUnkGRSS::func_ov031_02101170(void) {}
ARM void MapObjectUnkGRSS::func_ov031_0210148c(void) {}
ARM void MapObjectUnkGRSS::func_ov031_02101504(void) {}
ARM void MapObjectUnkGRSS::func_ov031_02101578(void) {}
ARM void MapObjectUnkGRSS::func_ov031_021016b4(void) {}
ARM void MapObjectUnkGRSS::func_ov031_0210173c(void) {}
ARM void MapObjectUnkGRSS::func_ov031_02101778(void) {}
ARM void MapObjectUnkGRSS::func_ov031_021017ec(void) {}
ARM void MapObjectUnkGRSS::func_ov031_021018a4(void) {}
ARM void MapObjectUnkGRSS::func_ov031_02101950(void) {}
ARM void MapObjectUnkGRSS::func_ov031_02101968(void) {}
ARM void MapObjectUnkGRSS::func_ov031_02101978(void) {}

ARM MapObjectUnkGRSS::~MapObjectUnkGRSS() {}
ARM MapObjectProfileUnkGRSS::~MapObjectProfileUnkGRSS() {}
