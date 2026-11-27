#include "Actor/Actor.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"

#include <nitro/math.h>

UnkStruct_ov031_Items_01_Derived2::UnkStruct_ov031_Items_01_Derived2(PlayerType playerType) {
    this->mPlayerType = playerType;

    this->mUnk_04.common.unk_00 = 0x102;
    this->mUnk_04.common.unk_02 = this->mPlayerType == PlayerType_Link ? 0x00 : 0x01;
}

bool UnkStruct_ov031_Items_01_Derived2::vfunc_0C(Actor *param1, VecFx32 *vector) {
    bool result = this->UnkStruct_ov031_Items_01::vfunc_0C(param1, vector);

    if (result) {
        VEC_Subtract(&this->mUnk_0C.center, data_027e0ce0->func_01fff148(this->mPlayerType), vector);
    }

    return result;
}
