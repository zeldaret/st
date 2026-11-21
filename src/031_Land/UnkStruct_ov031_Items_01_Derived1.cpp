#include "Actor/Actor.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"

UnkStruct_ov031_Items_01_Derived1::UnkStruct_ov031_Items_01_Derived1(PlayerType playerType) {
    this->mPlayerType = playerType;

    this->mUnk_30               = 0x00;
    this->mUnk_04.common.unk_00 = 0x102;
    this->mUnk_04.common.unk_02 = this->mPlayerType == PlayerType_Link ? 0x02 : 0x03;
}

bool UnkStruct_ov031_Items_01_Derived1::vfunc_0C(Actor *param1, VecFx32 *vector) {
    bool result = this->UnkStruct_ov031_Items_01::vfunc_0C(param1, vector);

    if (result) {
        fx16 sin  = SIN(this->mUnk_30);
        fx16 cos  = COS(this->mUnk_30);
        vector->x = sin;
        vector->y = 0;
        vector->z = cos;
    }

    return result;
}
