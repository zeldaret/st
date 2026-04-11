//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFNCE.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkFNCE sMapObjectProfileUnkFNCE;

ARM MapObjectProfileUnkFNCE *MapObjectProfileUnkFNCE::GetProfile() {
    return &sMapObjectProfileUnkFNCE;
}

ARM MapObject *MapObjectProfileUnkFNCE::Create() {
    return new(HeapIndex_2) MapObjectUnkFNCE();
}

ARM MapObjectProfileUnkFNCE::MapObjectProfileUnkFNCE() :
    MapObjectProfile(MapObjectId_FNCE) {}

ARM MapObjectUnkFNCE::MapObjectUnkFNCE() {}

ARM void MapObjectUnkFNCE::func_ov094_02170b14(void) {}
ARM void MapObjectUnkFNCE::func_ov094_02170b58(void) {}
ARM void MapObjectUnkFNCE::func_ov094_02170d54(void) {}
ARM void MapObjectUnkFNCE::func_ov094_02170db4(void) {}

ARM MapObjectUnkFNCE::~MapObjectUnkFNCE() {}
ARM MapObjectProfileUnkFNCE::~MapObjectProfileUnkFNCE() {}
