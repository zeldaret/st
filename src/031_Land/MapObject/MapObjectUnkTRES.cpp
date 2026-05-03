#include "MapObject/MapObjectUnkTRES.hpp"
#include "System/SysNew.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"

static const Vec2p data_ov031_021157b0(0x96B, 0x99A);

ARM DECL_PROFILE(MapObjectProfileUnkTRES);

ARM MapObject *MapObjectProfileUnkTRES::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkTRES();
}

ARM MapObjectProfileUnkTRES::MapObjectProfileUnkTRES() :
    MapObjectProfile_Derived2(MapObjectId_TRES, MapObjectId_TRES) {
    this->mUnk_0E = 1;
    this->mUnk_06 = 1;
    this->mUnk_0C = 0x1333;
}

ARM MapObjectUnkTRES::MapObjectUnkTRES() :
    MapObjectChestBase(1) {
    this->mUnk_074.vfunc_08(GetUnkPointer1<MapObjectProfileUnkTRES>());
}

ARM unk32 MapObjectUnkTRES::vfunc_3C() {
    if (data_027e0cd8->func_ov000_02081f3c(this->mUnk_20.mUnk_14, 1)) {
        return 8;
    }

    return 3;
}

ARM bool MapObjectUnkTRES::vfunc_40() {
    return true;
}

ARM Vec2p *MapObjectUnkTRES::vfunc_54() {
    return (Vec2p *) &data_ov031_021157b0;
}

ARM MapObjectUnkTRES::~MapObjectUnkTRES() {}
ARM MapObjectProfileUnkTRES::~MapObjectProfileUnkTRES() {}
