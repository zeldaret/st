//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkCLMN.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkCLMN sMapObjectProfileUnkCLMN;

ARM MapObjectProfileUnkCLMN *MapObjectProfileUnkCLMN::GetProfile() {
    return &sMapObjectProfileUnkCLMN;
}

ARM MapObject *MapObjectProfileUnkCLMN::Create() {
    return new(HeapIndex_2) MapObjectUnkCLMN();
}

ARM MapObjectProfileUnkCLMN::MapObjectProfileUnkCLMN() :
    MapObjectProfile(MapObjectId_CLMN) {}

ARM MapObjectUnkCLMN::MapObjectUnkCLMN() {}

ARM void MapObjectUnkCLMN::func_ov094_0217195c(void) {}

ARM MapObjectUnkCLMN::~MapObjectUnkCLMN() {}
ARM MapObjectProfileUnkCLMN::~MapObjectProfileUnkCLMN() {}
