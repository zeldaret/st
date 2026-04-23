#include "MapObject/MapObjectDoorTouch.hpp"
#include "System/SysNew.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"

extern u32 data_ov031_02110c3c[];

ARM DECL_PROFILE(MapObjectProfileDoorTouch);

ARM MapObject *MapObjectProfileDoorTouch::Create() {
    return new(HeapIndex_ITCM) MapObjectDoorTouch();
}

ARM MapObjectProfileDoorTouch::MapObjectProfileDoorTouch() :
    MapObjectProfile_Derived1(MapObjectId_DoorTouch, -1, 0) {
    this->mUnk_06 = -1;
    this->mUnk_1E &= ~0x01;
}

ARM MapObjectDoorTouch::MapObjectDoorTouch() {
    this->mUnk_18[0] = 0x0F;
}

ARM bool MapObjectDoorTouch::vfunc_00(void) {
    this->MapObjectDoorClick::vfunc_00();
    this->mUnk_88 = true;
    return true;
}

ARM void MapObjectDoorTouch::vfunc2_10(void) {
    MapObjectProfileDoorTouch *p = GET_PROFILE(MapObjectProfileDoorTouch);
    unk32 index                  = this->mUnk_20.mUnk_00[0];
    this->mUnk_94.vfunc_08(GetUnkPointer2<MapObjectProfileDoorTouch>(index, data_ov031_02110c3c[index]));
}

ARM void MapObjectDoorTouch::vfunc_40(void) {
    data_027e09a8->func_ov000_02071b30(0x148, &this->mPos, 0);
}

ARM void MapObjectDoorTouch::vfunc_44(void) {
    unk32 local_c = *(u32 *) &this->mUnk_38;
    data_027e09a8->func_ov000_02071d34(&local_c, 0x147, &this->mPos, 0);
}

ARM void MapObjectDoorTouch::vfunc_48(void) {}

ARM void MapObjectDoorTouch::vfunc_4C(void) {}

ARM void MapObjectDoorTouch::vfunc2_18(void) {
    data_027e09a8->func_ov000_02071b30(0x146, &this->mPos, 0);
}

ARM MapObjectDoorTouch::~MapObjectDoorTouch() {}

ARM MapObjectProfileDoorTouch::~MapObjectProfileDoorTouch() {}
