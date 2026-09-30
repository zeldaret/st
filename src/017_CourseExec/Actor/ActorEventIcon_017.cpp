#include "Actor/ActorEventIcon.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"

void ActorEventIcon::vfunc_24() {
    this->func_ov017_020c002c();
}

void ActorEventIcon::vfunc_30(Actor_vfunc_30 *param1) {
    Vec2s sp4;
    bool var_r1;

    if (data_027e0cd8->func_ov000_02082124() != 0) {
        return;
    }

    if (this->mUnk_094.mUnk_60 & 0x01) {
        var_r1 = true;
    } else {
        var_r1 = false;
    }

    if (param1->mUnk_00.unk_00 != var_r1 && param1->mUnk_00.unk_01 != var_r1) {
        return;
    }

    if (data_027e0998->vfunc_00(&this->mPos, &sp4, &this->mRef) == 0) {
        return;
    }

    sp4.y += (s16) this->mUnk_5C.mParams[1] - this->mUnk_094.mCellAnim.unk_30->unk_0A;
    data_0204af1c.func_0201aad0(&this->mUnk_094, &sp4, 1, 0);
}

void ActorEventIcon::func_ov017_020c002c() {
    if (this->mUnk_094.mUnk_68 == 1) {
        if (this->mUnk_094.func_ov000_02060af8() != 0) {
            this->Kill();
        }
    } else if (this->mUnk_10C >= 600) {
        this->func_ov000_020984d0();
    }

    this->mUnk_094.func_ov000_020609c4();
}
