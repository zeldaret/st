//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSTNE.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSTNE sMapObjectProfileUnkSTNE;

ARM MapObjectProfileUnkSTNE *MapObjectProfileUnkSTNE::GetProfile() {
    return &sMapObjectProfileUnkSTNE;
}

ARM MapObject *MapObjectProfileUnkSTNE::Create() {
    return new(HeapIndex_2) MapObjectUnkSTNE();
}

ARM MapObjectProfileUnkSTNE::MapObjectProfileUnkSTNE() :
    MapObjectProfile(MapObjectId_STNE) {}

ARM MapObjectUnkSTNE::MapObjectUnkSTNE() {}

ARM void MapObjectUnkSTNE::func_ov058_0214ebe0(void) {}
ARM void MapObjectUnkSTNE::func_ov058_0214ec90(void) {}
ARM void MapObjectUnkSTNE::func_ov058_0214ed54(void) {}
ARM void MapObjectUnkSTNE::func_ov058_0214eda4(void) {}
ARM void MapObjectUnkSTNE::func_ov058_0214ef64(void) {}
ARM void MapObjectUnkSTNE::func_ov058_0214efb8(void) {}
ARM void MapObjectUnkSTNE::func_ov058_0214efcc(void) {}
ARM void MapObjectUnkSTNE::func_ov058_0214f000(void) {}

ARM MapObjectUnkSTNE::~MapObjectUnkSTNE() {}
ARM MapObjectProfileUnkSTNE::~MapObjectProfileUnkSTNE() {}
