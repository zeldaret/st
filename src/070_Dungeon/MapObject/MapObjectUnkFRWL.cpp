//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkFRWL.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkFRWL sMapObjectProfileUnkFRWL;

ARM MapObjectProfileUnkFRWL *MapObjectProfileUnkFRWL::GetProfile() {
    return &sMapObjectProfileUnkFRWL;
}

ARM MapObject *MapObjectProfileUnkFRWL::Create() {
    return new(HeapIndex_2) MapObjectUnkFRWL();
}

ARM MapObjectProfileUnkFRWL::MapObjectProfileUnkFRWL() :
    MapObjectProfile(MapObjectId_FRWL) {}

ARM MapObjectUnkFRWL::MapObjectUnkFRWL() {}

ARM void MapObjectUnkFRWL::func_ov070_02149248(void) {}
ARM void MapObjectUnkFRWL::func_ov070_021494a8(void) {}
ARM void MapObjectUnkFRWL::func_ov070_021494dc(void) {}
ARM void MapObjectUnkFRWL::func_ov070_021494f4(void) {}
ARM void MapObjectUnkFRWL::func_ov070_02149a14(void) {}
ARM void MapObjectUnkFRWL::func_ov070_02149a78(void) {}
ARM void MapObjectUnkFRWL::func_ov070_02149ec4(void) {}
ARM void MapObjectUnkFRWL::func_ov070_02149f00(void) {}
ARM void MapObjectUnkFRWL::func_ov070_02149f30(void) {}
ARM void MapObjectUnkFRWL::func_ov070_02149f68(void) {}
ARM void MapObjectUnkFRWL::func_ov070_02149fa0(void) {}

ARM MapObjectUnkFRWL::~MapObjectUnkFRWL() {}
ARM MapObjectProfileUnkFRWL::~MapObjectProfileUnkFRWL() {}
