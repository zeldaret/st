#include "CommonFuncs.hpp"
#include "Player/PlayerSceneChange.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

PlayerSceneChange2::PlayerSceneChange2() {
    this->mUnk_54 = *this->mUnk_34;
    this->mUnk_60 = *this->mUnk_34;
}

// non-matching
void PlayerSceneChange2::vfunc_0C(UnkStruct_PlayerGet_vfunc_0C_param1 *param1) {
    s16 auStack_18[12];
    s16 auStack_2c;

    VecFx32 *pVVar1 = this->mUnk_38;
    pVVar1->x       = 0;
    pVVar1->y       = 0;
    pVVar1->z       = 0;

    this->mUnk_2C->mUnk_58 = 0;

    func_ov000_0208ba10(auStack_18, &this->mUnk_24->mUnk_094, 0);

    if (this->mUnk_44->mUnk_00 != 0) {
        this->mUnk_28->func_ov000_0208cf20(0x1400, 0);
    }

    if (this->mUnk_24->mUnk_078 != NULL && this->mUnk_24->mUnk_078->HasValue() ? 1 : 0) {
        func_ov000_02087ee8();
    }

    switch (param1->mUnk_04) {
        case 0x40:
        case 0x41:
            this->mUnk_54.x = this->mUnk_34->x;
            this->mUnk_54.y = this->mUnk_34->y;
            this->mUnk_54.z = this->mUnk_34->z;
            this->mUnk_60   = param1->mUnk_10;

            {
                u16 test = this->mUnk_40->angle_u;
                func_ov000_0205d65c(&auStack_2c, this->mUnk_34, &this->mUnk_60, test);
            }
            this->mUnk_40->angle_u = auStack_2c;
            break;
        case 0x42:
        case 0x43:
            this->mUnk_54.x = this->mUnk_34->x;
            this->mUnk_54.y = this->mUnk_34->y;
            this->mUnk_54.z = this->mUnk_34->z;
            this->mUnk_60   = param1->mUnk_10;

            func_ov000_0205d65c(&auStack_2c, &this->mUnk_60, (VecFx32 *) &this->mUnk_54, this->mUnk_40->angle_u);
            this->mUnk_40->angle_u = auStack_2c;

            func_ov000_0208cac8(this->mUnk_28, &this->mUnk_60, 0);
            func_ov000_020830a4(this->mUnk_48, 0, this->mUnk_28->mUnk_48, 1, 1, func_ov000_0208dc98(this->mUnk_28->mUnk_48));
            func_ov000_020830d4(this->mUnk_48, this->mUnk_40->angle_u, this->mUnk_30->func_ov000_02093718(),
                                this->mUnk_30->func_ov000_0209378c(), 0);
            break;
        case 0x44:
            func_ov000_0208cac8(this->mUnk_28, &this->mUnk_60, 0);

            func_ov000_0205d65c(&auStack_2c, this->mUnk_34, (VecFx32 *) &this->mUnk_54, this->mUnk_40->angle_u);
            this->mUnk_40->angle_u = auStack_2c;

            this->mUnk_2C->mUnk_26 = 0;
            break;
        case 0x45:
            this->mUnk_2C->mUnk_26 = 0;
            break;
        default:
            break;
    }
}

void PlayerSceneChange2::vfunc_10(unk32 param1, unk32 param2) {}

PlayerSceneChange2::~PlayerSceneChange2() {}
