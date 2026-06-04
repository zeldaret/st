#include "MapObject/MapObjectTreasureSpawned.hpp"
#include "System/SysNew.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"

static const Vec2pCpp data_ov031_021157b0(0x96B, 0x99A);

ARM DECL_PROFILE(MapObjectProfileTreasureSpawned);

ARM MapObject *MapObjectProfileTreasureSpawned::Create() {
    return new(HeapIndex_ITCM) MapObjectTreasureSpawned();
}

ARM MapObjectProfileTreasureSpawned::MapObjectProfileTreasureSpawned() :
    MapObjectProfile_Derived2(MapObjectId_TreasureSpawned, MapObjectId_TreasureSpawned) {
    this->mUnk_0E = 1;
    this->mUnk_06 = 1;
    this->mUnk_0C = 0x1333;
}

ARM MapObjectTreasureSpawned::MapObjectTreasureSpawned() :
    MapObjectChestBase(1) {
    this->mUnk_074.vfunc_08(GetModelFromProfile<MapObjectProfileTreasureSpawned>());
}

ARM unk32 MapObjectTreasureSpawned::vfunc_3C() {
    if (data_027e0cd8->func_ov000_02081f3c(this->mUnk_20.mUnk_14, 1)) {
        return 8;
    }

    return 3;
}

ARM bool MapObjectTreasureSpawned::vfunc_40() {
    return true;
}

ARM Vec2p *MapObjectTreasureSpawned::vfunc_54() {
    return (Vec2p *) &data_ov031_021157b0;
}

ARM MapObjectTreasureSpawned::~MapObjectTreasureSpawned() {}
ARM MapObjectProfileTreasureSpawned::~MapObjectProfileTreasureSpawned() {}
