#include "Actor/ActorUnk_ov000_020a8bb0.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "flags.h"
#include "global.h"

ARM void ActorUnk_ov000_020a8bb0::func_ov000_020a8ae0(q20 param1) {
    u32 posY = this->mVel.y;

    if (posY <= param1) {
        posY = param1;
    }

    this->mVel.y = posY;
}

ARM ActorUnk_ov000_020a8bb0::ActorUnk_ov000_020a8bb0(ActorUnk_ov000_020a8bb0_a4_00 *param1, unk32 param2) {
    unk32 uVar2;

    this->mUnk_0b0         = 0;
    this->mUnk_094.mUnk_0c = param2;
    this->mUnk_0a4.mUnk_00 = param1;
    this->mUnk_0a4.mUnk_04 = 0;
    this->mUnk_0a4.mUnk_08 = 0;
    this->mUnk_0b4         = -1;
    this->mUnk_0b8         = 0;
    this->mUnk_0bc.Reset();
    this->mUnk_0c0.x = 0;
    this->mUnk_0c0.y = 0;
    this->mUnk_0c0.z = 0;
    this->mUnk_0cc   = 0;
    this->mUnk_0ce   = 0;
    this->mUnk_0d0   = 0;
    this->mUnk_0d4   = 0;
    this->mUnk_0d8   = 0;
    this->mUnk_0da   = 0;
    this->mUnk_0dc   = 0x2AAB;
    this->mUnk_0de   = 0xEAAB;
    this->mUnk_0e0   = 0x1555;
    this->mUnk_0e4   = 0;
    this->mUnk_0e8   = 0;
    this->mUnk_0ea   = 0;
    this->mUnk_0ec.func_ov024_020d6668();
    uVar2                  = this->mUnk_34->size;
    this->mUnk_114         = -1;
    this->mUnk_118         = 0x1000;
    this->mUnk_11c         = 0x019A;
    this->mUnk_104         = 0;
    this->mUnk_108         = uVar2;
    this->mUnk_10c         = 0;
    this->mUnk_110         = uVar2;
    this->mUnk_30          = (Cylinder *) &this->mUnk_104;
    this->mUnk_4a          = 5;
    this->mUnk_44          = 0x1F;
    this->mUnk_094.mUnk_08 = 3;
    this->mUnk_38          = &this->mUnk_094.mUnk_00;
    this->mUnk_0b0 |= 8;
}

ARM ActorUnk_ov000_020a8bb0::~ActorUnk_ov000_020a8bb0() {}

ARM bool ActorUnk_ov000_020a8bb0::vfunc_18(unk32 param1) {
    if (this->mUnk_70 == 0 && this->func_ov000_020a8dd0() != 0) {
        UNSET_FLAG(&this->mFlags, ActorFlag_Alive);
    }

    if (this->mUnk_0b0 & 8) {
        this->mUnk_0a4.mUnk_00->func_ov000_02057c38(6, 2);
        this->mUnk_0a4.mUnk_00->func_ov000_0209a7b8(this, ActorUnk_ov000_020a8bb0::func_ov000_020a9804);
    }

    this->vfunc_54(param1);
    return 1;
}

ARM void ActorUnk_ov000_020a8bb0::vfunc_54(unk32 param1) {}

ARM void ActorUnk_ov000_020a8bb0::vfunc_1c() {
    this->func_ov031_020e3ca4();
}

ARM unk32 ActorUnk_ov000_020a8bb0::func_ov000_020a8db0() {
    return data_027e0cd8->func_ov000_02081e30(this->mUnk_76, this->mUnk_74);
}

ARM unk32 ActorUnk_ov000_020a8bb0::func_ov000_020a8dd0() {
    return data_027e0cd8->func_ov000_02081e30(this->mUnk_78, this->mUnk_75);
}

// non-matching
ARM void ActorUnk_ov000_020a8bb0::func_ov000_020a8df0(ActorRef param1, unk32 param2) {
    if (!((u32) (((param2 + 8) - param2) / 2) < 2)) {
        this->mUnk_0b0 |= 2;
    } else {
        this->mUnk_0b0 &= ~2;
    }

    if (this->mRef != param1) {
        this->vfunc_b4();
        this->mUnk_0bc   = param1;
        this->mUnk_0c0.x = 0;
        this->mUnk_0c0.y = 0;
        this->mUnk_0c0.z = 0;
        this->mUnk_0b0 |= 1;
    }
}

ARM void ActorUnk_ov000_020a8bb0::vfunc_b4() {
    this->vfunc_58(0);
}

// non-matching
ARM void ActorUnk_ov000_020a8bb0::func_ov000_020a8e9c(Vec3p *param1) {
    q20 z = param1->x;
    q20 y = param1->y;
    q20 x = param1->z;

    this->mUnk_0c0.x = x;
    this->mUnk_0c0.y = y;
    this->mUnk_0c0.z = x;
    this->mUnk_0bc.Reset();
}

ARM void ActorUnk_ov000_020a8bb0::vfunc_b0() {
    if (data_027e09b8->func_01ffd420() == 0) {
        ActorUnk_vfunc_b0 auStack_60;
        auStack_60.mUnk_24 = this;
        auStack_60.mUnk_0c = this->mUnk_7c;
        auStack_60.mUnk_14 = 0;
        auStack_60.mUnk_18 = -1;
        auStack_60.mUnk_1c = -1;
        auStack_60.mUnk_20 = 0;
        auStack_60.mUnk_21 = 0;
        auStack_60.mUnk_32 = 1;

        this->vfunc_00(&auStack_60.mUnk_34);
        this->mUnk_0b4 = data_027e09b8->func_ov000_02073470(&auStack_60, 0);
    }
}

ARM unk32 ActorUnk_ov000_020a8bb0::vfunc_88() {
    return 1;
}

ARM unk32 ActorUnk_ov000_020a8bb0::vfunc_8c() {
    return 1;
}

ARM unk32 ActorUnk_ov000_020a8bb0::vfunc_90() {
    return 0x7B;
}

ARM void ActorUnk_ov000_020a8bb0::vfunc_94() {
    this->mUnk_0a4.mUnk_08 = 0xF6;
}

ARM void ActorUnk_ov000_020a8bb0::vfunc_60() {
    if (data_027e09b8->func_01ffd420() == 0) {
        if (this->vfunc_64()) {
            this->vfunc_b0();
            this->func_ov000_020a9200();
            this->vfunc_58(4);
        }
    }
}

ARM bool ActorUnk_ov000_020a8bb0::vfunc_64() {
    return GET_FLAG(&this->mFlags, ActorFlag_Interacting);
}

ARM void ActorUnk_ov000_020a8bb0::func_ov000_020a8ff4() {}

ARM void ActorUnk_ov000_020a8bb0::vfunc_6c() {}

ARM void ActorUnk_ov000_020a8bb0::vfunc_68() {
    UNSET_FLAG(&this->mFlags, ActorFlag_Interacting);
    this->func_ov000_020a9200();
    this->vfunc_ac();
    this->mUnk_0b0 &= ~0x01;
    this->mUnk_0b0 &= ~0x10;
}

ARM unk32 ActorUnk_ov000_020a8bb0::vfunc_7c() {
    return 1;
}

ARM unk32 ActorUnk_ov000_020a8bb0::vfunc_80() {
    return -1;
}

ARM unk32 ActorUnk_ov000_020a8bb0::vfunc_84() {
    return 1;
}

ARM void ActorUnk_ov000_020a8bb0::func_ov000_020a91b8(Vec3p *param1, unk32 param2) {
    this->func_ov000_020a8e9c(param1);

    if (param2 != 0) {
        this->mUnk_0b0 |= 0x20;
    } else {
        this->mUnk_0b0 &= ~0x20;
    }

    this->vfunc_58(7);
}

ARM void ActorUnk_ov000_020a8bb0::func_ov000_020a9200() {}

ARM void ActorUnk_ov000_020a8bb0::vfunc_70() {
    if (this->mUnk_4c != 5) {
        this->vfunc_58(4);
    }
}

ARM void ActorUnk_ov000_020a8bb0::vfunc_74() {}
ARM void ActorUnk_ov000_020a8bb0::vfunc_78() {}
ARM void ActorUnk_ov000_020a8bb0::func_ov000_020a9248() {}
ARM void ActorUnk_ov000_020a8bb0::vfunc_5c() {}
ARM void ActorUnk_ov000_020a8bb0::vfunc_98() {}
ARM void ActorUnk_ov000_020a8bb0::func_ov000_020a94b0() {}
ARM void ActorUnk_ov000_020a8bb0::vfunc_9c() {}

ARM unk32 ActorUnk_ov000_020a8bb0::vfunc_a0() {
    this->func_01fff458();
    return 1;
}

ARM void ActorUnk_ov000_020a8bb0::vfunc_ac() {}
ARM void ActorUnk_ov000_020a8bb0::func_ov000_020a95d8() {}
ARM void ActorUnk_ov000_020a8bb0::vfunc_a4() {}

ARM unk32 ActorUnk_ov000_020a8bb0::vfunc_a8() {
    return 1;
}

ARM void ActorUnk_ov000_020a8bb0::func_ov000_020a9804() {}
ARM void ActorUnk_ov000_020a8bb0::vfunc_20() {}

// non-matching
ARM void ActorUnk_ov000_020a8bb0::vfunc_24() {
    if (data_027e09b8->func_ov000_020732dc(3) == 0 || !(this->mUnk_0b0 & 4)) {
        this->vfunc_20();
    }

    if (!(this->mUnk_0b0 & 0x200)) {
        this->mUnk_0b0 &= ~0x100;
    } else {
        this->mUnk_0b0 &= ~0x200;
    }
}

// non-matching
ARM void ActorUnk_ov000_020a8bb0::vfunc_2c(unk32 param1) {
    if (this->func_01fff5d0(param1, 0) == 0) {
        return;
    }

    this->vfunc_b8();
    this->mUnk_0a4.func_01ffc6d4(this->mAngle, &this->mPos);
}

ARM void ActorUnk_ov000_020a8bb0::vfunc_b8() {
    this->func_ov017_020bf5c4(&this->mPos, 0x666, 0x666, 0x1F, 0);
}

ARM void ActorUnk_ov000_020a8bb0::vfunc_14() {}
ARM void ActorUnk_ov000_020a8bb0::func_ov000_020a9a20() {}
ARM void ActorUnk_ov000_020a8bb0::func_ov000_020a9a34() {}
ARM void ActorUnk_ov000_020a8bb0::func_ov000_020a9a50() {}
ARM void ActorUnk_ov000_020a8bb0::func_ov000_020a9a94() {}
ARM void ActorUnk_ov000_020a8bb0::func_ov000_020a9abc() {}
ARM void ActorUnk_ov000_020a8bb0::func_ov000_020a9ae0() {}
ARM void ActorUnk_ov000_020a8bb0::func_ov000_020a9afc() {}
