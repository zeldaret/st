//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSTTR.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSTTR sMapObjectProfileUnkSTTR;

ARM MapObjectProfileUnkSTTR *MapObjectProfileUnkSTTR::GetProfile() {
    return &sMapObjectProfileUnkSTTR;
}

ARM MapObject *MapObjectProfileUnkSTTR::Create() {
    return new(HeapIndex_2) MapObjectUnkSTTR();
}

ARM MapObjectProfileUnkSTTR::MapObjectProfileUnkSTTR() :
    MapObjectProfile(MapObjectId_STTR) {}

ARM MapObjectUnkSTTR::MapObjectUnkSTTR() {}

ARM void MapObjectUnkSTTR::func_ov090_02172e08(void) {}
ARM void MapObjectUnkSTTR::func_ov090_02172ee8(void) {}
ARM void MapObjectUnkSTTR::func_ov090_02172f38(void) {}
ARM void MapObjectUnkSTTR::func_ov090_02172f3c(void) {}
ARM void MapObjectUnkSTTR::func_ov090_02172f58(void) {}
ARM void MapObjectUnkSTTR::func_ov090_02172fa4(void) {}
ARM void MapObjectUnkSTTR::func_ov090_02172fe4(void) {}
ARM void MapObjectUnkSTTR::func_ov090_02172ff4(void) {}
ARM void MapObjectUnkSTTR::func_ov090_02173018(void) {}

ARM MapObjectUnkSTTR::~MapObjectUnkSTTR() {}
ARM MapObjectProfileUnkSTTR::~MapObjectProfileUnkSTTR() {}
