#include "Actor/Actor_Derived1.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "flags.h"
#include "global.h"

ARM void Actor_Derived1::func_ov000_020a8ae0(fx32 param1) {
    u32 posY = this->mVel.y;

    if (posY <= param1) {
        posY = param1;
    }

    this->mVel.y = posY;
}

ARM Actor_Derived1::Actor_Derived1(ModelRender *param1, unk32 param2) :
    mUnk_094(param2),
    mUnk_0A4(param1),
    mUnk_0B0(0),
    mUnk_0B4(-1),
    mUnk_0B8(0),
    mUnk_0BC(0),
    mUnk_0C0(0, 0, 0),
    mUnk_0CC(0),
    mUnk_0CE(0),
    mUnk_0D0(0),
    mUnk_0D4(0),
    mUnk_0D8(0),
    mUnk_0DA(0),
    mUnk_0DC(0x2AAB),
    mUnk_0DE(0xEAAB),
    mUnk_0E0(0x1555),
    mUnk_0E4(0),
    mUnk_0E8(0),
    mUnk_0EA(0),
    mUnk_104(this->mUnk_34->size),
    mUnk_114(-1),
    mUnk_118(0x1000),
    mUnk_11C(0x019A) {
    this->mUnk_30          = &this->mUnk_104;
    this->mUnk_4A[0]       = 5;
    this->mUnk_44          = 0x1F;
    this->mUnk_094.mUnk_08 = 3;
    this->mUnk_38          = &this->mUnk_094.mUnk_00;
    this->mUnk_0B0 |= 0x08;
}

ARM Actor_Derived1::~Actor_Derived1() {}

ARM bool Actor_Derived1::vfunc_18(unk32 param1) {
    if (this->mUnk_5C.mParams[2] == 0 && this->func_ov000_020a8dd0()) {
        UNSET_FLAG(this->mFlags, ActorFlag_Alive);
    }

    if (this->mUnk_0B0 & 8) {
        this->mUnk_0A4.mpModelRender->func_ov000_02057c38(6, 2);
        this->mUnk_0A4.mpModelRender->func_ov000_0209a7b8(this, Actor_Derived1::func_ov000_020a9804);
    }

    this->vfunc_54(param1);
    return 1;
}

ARM void Actor_Derived1::vfunc_54(unk32 param1) {}

ARM void Actor_Derived1::vfunc_1c() {
    this->func_ov031_020e3ca4();
}

ARM bool Actor_Derived1::func_ov000_020a8db0() {
    return data_027e0cd8->func_ov000_02081e30(this->mUnk_5C.mUnk_1A, this->mUnk_5C.mUnk_18.x);
}

ARM bool Actor_Derived1::func_ov000_020a8dd0() {
    return data_027e0cd8->func_ov000_02081e30(this->mUnk_5C.mUnk_1C_0, this->mUnk_5C.mUnk_18.y);
}

// non-matching
ARM void Actor_Derived1::func_ov000_020a8df0(ActorRef param1, unk32 param2) {
    if (!((u32) (((param2 + 8) - param2) / 2) < 2)) {
        this->mUnk_0B0 |= 2;
    } else {
        this->mUnk_0B0 &= ~2;
    }

    if (this->mRef != param1) {
        this->vfunc_b4();
        *(u32 *) &this->mUnk_0BC = param1.Get32();
        this->mUnk_0C0.x         = 0;
        this->mUnk_0C0.y         = 0;
        this->mUnk_0C0.z         = 0;
        this->mUnk_0B0 |= 1;
    }
}

ARM void Actor_Derived1::vfunc_b4() {
    this->vfunc_58(0);
}

// non-matching
ARM void Actor_Derived1::func_ov000_020a8e9c(VecFx32 *param1) {
    fx32 z = param1->x;
    fx32 y = param1->y;
    fx32 x = param1->z;

    this->mUnk_0C0.x = x;
    this->mUnk_0C0.y = y;
    this->mUnk_0C0.z = x;
    this->mUnk_0BC.Reset();
}

ARM void Actor_Derived1::vfunc_b0() {
    if (data_027e09b8->func_01ffd420() == 0) {
        ActorUnk_vfunc_b0 auStack_60;
        auStack_60.mpActor = this;
        auStack_60.mUnk_0C = this->mUnk_5C.mUnk_20;
        auStack_60.mUnk_14 = 0;
        auStack_60.mUnk_18 = -1;
        auStack_60.mUnk_1C = -1;
        auStack_60.mUnk_20 = 0;
        auStack_60.mUnk_21 = 0;
        auStack_60.mUnk_32 = 1;

        this->GetOffsetPos(&auStack_60.mUnk_34);
        this->mUnk_0B4 = data_027e09b8->func_ov000_02073470(&auStack_60, 0);
    }
}

ARM unk32 Actor_Derived1::vfunc_88() {
    return 1;
}

ARM unk32 Actor_Derived1::vfunc_8c() {
    return 1;
}

ARM unk32 Actor_Derived1::vfunc_90() {
    return 0x7B;
}

ARM void Actor_Derived1::vfunc_94() {
    this->mUnk_0A4.mUnk_08 = 0xF6;
}

ARM void Actor_Derived1::vfunc_60() {
    if (data_027e09b8->func_01ffd420() == 0) {
        if (this->vfunc_64()) {
            this->vfunc_b0();
            this->func_ov000_020a9200();
            this->vfunc_58(4);
        }
    }
}

ARM bool Actor_Derived1::vfunc_64() {
    return GET_FLAG(this->mFlags, ActorFlag_Interacting);
}

ARM void Actor_Derived1::func_ov000_020a8ff4() {}

ARM void Actor_Derived1::vfunc_6c() {}

ARM void Actor_Derived1::vfunc_68() {
    UNSET_FLAG(this->mFlags, ActorFlag_Interacting);
    this->func_ov000_020a9200();
    this->vfunc_ac();
    this->mUnk_0B0 &= ~0x01;
    this->mUnk_0B0 &= ~0x10;
}

ARM unk32 Actor_Derived1::vfunc_7c() {
    return 1;
}

ARM unk32 Actor_Derived1::vfunc_80() {
    return -1;
}

ARM unk32 Actor_Derived1::vfunc_84() {
    return 1;
}

ARM void Actor_Derived1::func_ov000_020a91b8(VecFx32 *param1, unk32 param2) {
    this->func_ov000_020a8e9c(param1);

    if (param2 != 0) {
        this->mUnk_0B0 |= 0x20;
    } else {
        this->mUnk_0B0 &= ~0x20;
    }

    this->vfunc_58(7);
}

ARM void Actor_Derived1::func_ov000_020a9200() {}

ARM void Actor_Derived1::vfunc_70() {
    if (this->mState != 5) {
        this->vfunc_58(4);
    }
}

ARM void Actor_Derived1::vfunc_74() {}
ARM void Actor_Derived1::vfunc_78() {}
ARM void Actor_Derived1::func_ov000_020a9248() {}
ARM void Actor_Derived1::vfunc_5c() {}
ARM void Actor_Derived1::vfunc_98(unk32 param1) {}
ARM void Actor_Derived1::func_ov000_020a94b0() {}
ARM void Actor_Derived1::vfunc_9c() {}

ARM unk32 Actor_Derived1::vfunc_a0() {
    this->GetActorId();
    return 1;
}

ARM void Actor_Derived1::vfunc_ac() {}
ARM void Actor_Derived1::func_ov000_020a95d8() {}
ARM void Actor_Derived1::vfunc_a4() {}

ARM unk32 Actor_Derived1::vfunc_a8() {
    return 1;
}

ARM void Actor_Derived1::func_ov000_020a9804() {}
ARM void Actor_Derived1::vfunc_20() {}

// non-matching
ARM void Actor_Derived1::vfunc_24() {
    if (!data_027e09b8->func_ov000_020732dc(3) || !(this->mUnk_0B0 & 4)) {
        this->vfunc_20();
    }

    if (!(this->mUnk_0B0 & 0x200)) {
        this->mUnk_0B0 &= ~0x100;
    } else {
        this->mUnk_0B0 &= ~0x200;
    }
}

// non-matching
ARM void Actor_Derived1::vfunc_2c(unk32 param1) {
    if (this->func_01fff5d0(param1, 0) == 0) {
        return;
    }

    this->vfunc_b8();
    this->mUnk_0A4.func_01ffc6d4(this->mAngle, &this->mPos);
}

ARM void Actor_Derived1::vfunc_b8() {
    this->func_ov017_020bf5c4(&this->mPos, 0x666, 0x666, 0x1F, 0);
}

ARM void Actor_Derived1::vfunc_14() {}
ARM void Actor_Derived1::func_ov000_020a9a20() {}
ARM void Actor_Derived1::func_ov000_020a9a34() {}
ARM void Actor_Derived1::func_ov000_020a9a50() {}
ARM void Actor_Derived1::func_ov000_020a9a94() {}
ARM void Actor_Derived1::func_ov000_020a9abc() {}
ARM void Actor_Derived1::func_ov000_020a9ae0() {}
ARM void Actor_Derived1::func_ov000_020a9afc() {}
