#include "Actor/Actor.hpp"
#include "Player/PlayerLink.hpp"

PlayerLinkActor_A0_14_14::PlayerLinkActor_A0_14_14(unk32 param1) {
    this->mUnk_2C = param1;

    this->mUnk_30               = 0x00;
    this->mUnk_04.common.unk_00 = 0x102;
    this->mUnk_04.common.unk_02 = this->mUnk_2C == 0x00 ? 0x02 : 0x03;
}

bool PlayerLinkActor_A0_14_14::vfunc_0C(Actor *param1, VecFx32 *vector) {
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
