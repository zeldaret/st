#include "Player/PlayerSceneChange.hpp"
#include "Actor/ActorManager.hpp"
#include "Unknown/UnkStruct_027e0cdc.hpp"

extern "C" void func_ov000_0205ca74(unk32);

ARM PlayerSceneChange::PlayerSceneChange() {
    this->mUnk_68 = this->mUnk_2c->mUnk_14C;
    this->mUnk_6C = -1;

    *((Vec3p *) &this->mUnk_70) = *this->mUnk_34;
    this->mUnk_7C               = 0;

    *((Vec3p *) &this->mUnk_80) = *this->mUnk_34;
    this->mUnk_8C               = 0;

    this->mUnk_90            = 0;
    *((u32 *) this->mUnk_94) = 0;
    this->mUnk_98            = -1;
    this->mUnk_9C            = 0;
    this->mUnk_A0            = 0;
    this->mUnk_A4            = 0;
    this->mUnk_A8            = 0x8000;
    this->mUnk_AA            = 0x8000;
    this->mUnk_AC            = 0;
    this->mUnk_AD            = 0;
    this->mUnk_AE            = 0x8000;
}

ARM PlayerSceneChange::~PlayerSceneChange() {
    UnkStruct_ov000_0208f820_28 *pUnk_28 = this->mUnk_28;
    pUnk_28->mUnk_40 &= 0xFFFD;

    if (pUnk_28->mUnk_40 == 0) {
        pUnk_28->mUnk_38.~UnkStruct_PlayerGet_64();
    }

    func_ov000_0205ca74(this->mUnk_98);
}

ARM s16 PlayerSceneChange::func_ov112_02184bbc(s16 param1) {
    // fake match?
    if ((u32) (*(u16 *) &this->mUnk_90 << 0x10) >> 0x1E == 1) {
        ActorUnk_ov000_020a8bb0 *iVar1 = gActorManager->func_01fff3b4(this->mUnk_90);

        if (iVar1 != 0) {
            return iVar1->mAngle;
        }
    } else if (this->mUnk_94[0] == 0x1000) {
        return this->mUnk_AE;
    }

    return param1;
}

ARM void PlayerSceneChange::vfunc_0c(UnkStruct_PlayerGet_vfunc_0c_param1 *param1) {}
ARM void PlayerSceneChange::vfunc_10(unk32 param1) {}

ARM bool PlayerSceneChange::vfunc_1c(Vec3p *param1) {
    if (data_027e0cdc->func_ov000_02082a28(1) == 0) {
        switch (this->mUnk_30->mUnk_68) {
            case 0x3C:
            case 0x3D:
            case 0x3E:
            case 0x3F: {
                Vec3p unk_80;

                unk_80.x = this->mUnk_80.x;
                unk_80.y = this->mUnk_80.y;
                unk_80.z = this->mUnk_80.z;

                param1->x = unk_80.x;
                param1->y = unk_80.y;
                param1->z = unk_80.z;
                return true;
            }
            default:
                break;
        }
    }

    return this->UnkStruct_ov000_0208f820::vfunc_1c(param1);
}
