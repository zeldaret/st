#include "Actor/Actor.hpp"
#include "Unknown/UnkMemFuncs.h"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

ARM Actor::Actor() {
    this->mVel.x  = 0;
    this->mVel.y  = 0;
    this->mVel.z  = 0;
    this->mUnk_2c = 0xCD;
    this->mUnk_38 = 0;
    this->mUnk_3c = 0;
    this->mUnk_40 = 0;
    this->mUnk_48 = 4;
    this->mUnk_4c = -1;
    this->mUnk_50 = 0;
    this->mUnk_52 = 0;
    this->mUnk_54 = 0;
    this->mFlags  = 0;
    this->mUnk_84 = 0;
    this->mUnk_5c.func_ov000_020975f8();
    this->mRef.Reset();
    this->mType = NULL;
    Copy256(&data_ov000_020b539c.mUnk_00, &this->mUnk_5c, sizeof(data_ov000_020b539c.mUnk_00));
    this->mPrevPos = this->mPos = this->mUnk_5c.mUnk_00;
    this->mAngle                = this->mUnk_5c.mUnk_0c;
    this->mFlags  = (1 << ActorFlag_Alive) | (1 << ActorFlag_Visible) | (1 << ActorFlag_Active) | (1 << ActorFlag_14);
    this->mUnk_44 = 0xFF;
    this->mUnk_46 = 0;
    this->func_ov000_0209862c(0);
    this->func_ov000_0209848c(data_ov000_020b539c.mUnk_30);
}

ARM Actor::~Actor() {}

// non-matching (equivalent)
ARM void Actor::func_ov000_0209848c(ActorType *param1) {
    s16 unk_1c;
    Cylinder *temp_r3;

    unk_1c  = param1->mUnk_1c;
    temp_r3 = &param1->mUnk_04;

    this->mType   = param1;
    this->mUnk_30 = this->mUnk_34 = temp_r3;
    this->mUnk_4e                 = unk_1c;
}

ARM bool Actor::vfunc_18(unk32 param1) {
    return true;
}

ARM void Actor::vfunc_1c() {}

ARM void Actor::vfunc_20() {}

ARM void Actor::vfunc_24() {}

ARM void Actor::vfunc_28() {}

ARM void Actor::vfunc_2c(unk32 param1) {}

ARM void Actor::vfunc_30() {}

ARM unk32 Actor::vfunc_34() {
    return 1;
}

ARM void Actor::func_ov000_020984d0() {
    UNSET_FLAG(&this->mFlags, ActorFlag_Alive);

    if (GET_FLAG(&this->mFlags, ActorFlag_16)) {
        this->func_ov000_020984f0();
    }
}

ARM void Actor::func_ov000_020984f0() {
    if (this->mUnk_80 >= 0) {
        data_027e0cd8->func_ov000_02081ecc(this->mUnk_80, 1);
    }
}

// non-matching
ARM void Actor::vfunc_00(Vec3p *param1) {
    *param1 = mPos;
    param1->y += mUnk_4e;
    // short sVar1;
    // int iVar2;
    // int iVar3;

    // param1->x = this->mPos.x;
    // param1->y = this->mPos.y + this->mUnk_4e;
    // param1->z = this->mPos.z;
}

ARM void Actor::func_ov000_0209853c(void) {
    data_027e0ce0->func_01fff148();
}

ARM bool Actor::vfunc_04() {
    return this->mType->mUnk_1e & 1;
}

ARM unk16 Actor::vfunc_08() {
    return this->mType->mUnk_1a;
}

ARM unk8 Actor::vfunc_0c() {
    return this->mType->mUnk_18;
}

// non-matching
ARM unk32 Actor::vfunc_38(unk32 param1) {
    u16 var_r3;
    short stack_c;

    var_r3 = param1 >> 16;

    if (GET_FLAG(&this->mFlags, ActorFlag_Grabbed)) {
        return 0;
    }

    SET_FLAG(&this->mFlags, ActorFlag_Grabbed);
    stack_c = this->mFlags;

    switch (stack_c) {
        case 0x100:
        case 0x101:
            if (stack_c == 0x101) {
                var_r3 = 0;
            }

            // ???
            *(&this->mUnk_4a + var_r3) = 0;
            break;
        default:
            break;
    }

    return 1;
}

// non-matching
ARM bool Actor::vfunc_3c(unk32 param2, Vec3p *param3) {
    if (!GET_FLAG(&this->mFlags, ActorFlag_Grabbed)) {
        return false;
    }

    this->mVel = *param3;
    UNSET_FLAG(&this->mFlags, ActorFlag_Grabbed);
    return true;
}

// non-matching
ARM void Actor::func_ov000_0209862c(unk32 param1) {
    s8 var_ip;
    void *temp_r2;

    var_ip = 0;
    do {
        var_ip += 1;
        (&this->mUnk_4a)[var_ip] = param1;
    } while (var_ip < 2);
}
