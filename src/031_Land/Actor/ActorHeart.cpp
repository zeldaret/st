#include "Actor/ActorHeart.hpp"
#include "Actor/ActorRupee.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"

#include <nitro/math.h>

class UnkStruct_ov031_02113d64 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ Vec3p mUnk_04;

    UnkStruct_ov031_02113d64(unk32 param1, q20 x, q20 y, q20 z) {
        mUnk_00   = param1;
        mUnk_04.x = x;
        mUnk_04.y = y;
        mUnk_04.z = z;
    }
};
const UnkStruct_ov031_02113d64 data_ov031_02113d64(0, 0x800, 0, 0x800);

static ActorProfileHeart sActorProfileHeart;

// func_ov031_020eecf4
ARM ActorProfileHeart *ActorProfileHeart::GetProfile() {
    return &sActorProfileHeart;
}

// func_ov031_020eed00
ARM Actor *ActorProfileHeart::Create() {
    return new(HeapIndex_2) ActorHeart();
}

// func_ov031_020eed24
ARM ActorProfileHeart::ActorProfileHeart() :
    ActorProfile(ActorId_Heart) {
    this->mUnk_04.pos.x = 0;
    this->mUnk_04.pos.y = 0x400;
    this->mUnk_04.pos.z = 0;
    this->mUnk_04.size  = 0x400;
}

extern "C" void func_02098388(void);
extern "C" void func_02097bb8(void);

extern UnkStruct_ov000_020b539c UnkStruct_020b539c;

ARM void ActorHeart::func_ov031_020eed64(unk32 *param_2, unk32 param_3, unk32 param_4) {
    unk32 local_5c;
    unk32 local_58;
    unk32 local_54;
    // ??
    unk32 local_34;
    unk32 local_30;
    unk32 local_2c;

    local_30 = 0;
    local_2c = param_4;

    this->mUnk_5c.func_ov000_020975f8();
    local_58 = param_2[1];
    local_58 = param_2[2];
    local_5c = param_2[0];
    local_34 = param_4;
    local_30 = param_3;

    this->func_ov000_020973f4(&UnkStruct_020b539c, ActorId_Heart, this->mUnk_5c);
}

ARM void ActorHeart::func_ov031_020f0750() {}

// func_ov031_020eede0
ARM ActorHeart::ActorHeart() {
    func_02098388();
}

// func_ov031_020eeed8
ARM bool ActorHeart::vfunc_18(unk32 param1) {
    this->func_ov031_020ef4a8();
    return true;
}

extern "C" void func_01fff17c(unk16 *, UnkStruct_027e0ce0 *, unk32);
extern "C" void func_02018114(unk16 *, unk32);

static PTMF<ActorHeart> data_ov031_02113d74[] = {
    ActorHeart::func_ov031_020ef2f8, ActorHeart::func_ov031_020ef334, ActorHeart::func_ov031_020ef3a0,
    ActorHeart::func_ov031_020ef3d0, ActorHeart::func_ov031_020ef444, ActorHeart::func_ov031_020ef458,
};

void ActorHeart::vfunc_20() {

    short local_58;

    func_01fff17c(&local_58, nullptr, 0);
    CALL_PTMF(PTMF<ActorHeart>, data_ov031_02113d74[this->mUnk_4c]);

} // func_ov031_020eeee8

extern unk32 data_ov000_020aecf8;

static PTMF<ActorHeart> data_ov031_02113da4[] = {
    ActorHeart::func_ov031_020ef2ec, ActorHeart::func_ov031_020ef320, ActorHeart::func_ov031_020ef35c,
    ActorHeart::func_ov031_020ef3b8, ActorHeart::func_ov031_020ef430, ActorHeart::func_ov031_020ef448,
};

ARM void ActorHeart::func_ov031_020ef1b4(unk16 param_2) {
    this->mUnk_4c = param_2;
    this->mUnk_2c = data_ov000_020aecf8;
    this->mUnk_44 = 0x9C;
    CALL_PTMF(PTMF<ActorHeart>, data_ov031_02113da4[this->mUnk_4c]);
}

ARM void ActorHeart::func_ov031_020ef208() {
    if (this->mUnk_4c == 3 || this->mUnk_4c == 4 || this->mUnk_4c == 5) {
        this->mFlags[0] |= 0b10;
        return;
    }
    if (this->mUnk_be == 0) {
        if (this->mUnk_52 <= this->mUnk_50) {
            this->mUnk_52 = 0x3C;
            this->mUnk_50 = 0x00;
            this->mUnk_be = 0x01;
            return;
        }
        this->mUnk_50++;
        return;
    }

    if ((this->mUnk_50 & 0b111) < 4) {
        this->mFlags[0] &= 0xFFFFFFFD;
    } else {
        this->mFlags[0] |= 0b10;
    }

    if (this->mUnk_52 <= this->mUnk_50) {
        this->func_ov000_020984d0();
        return;
    }
    this->mUnk_50++;
}

ARM void ActorHeart::func_ov031_020ef2ec() {
    this->mVel.y = 0x400;
}

extern "C" void func_ov000_02098838();

ARM void ActorHeart::func_ov031_020ef2f8() {
    func_ov000_02098838();
    if (this->mVel.y > 0) {
        return;
    }
    this->func_ov031_020ef1b4(0x01);
}

ARM void ActorHeart::func_ov031_020ef320() {
    this->mUnk_2c = 0x06;
    this->mUnk_44 = 0x9F;
}

ARM void ActorHeart::func_ov031_020ef334() {
    this->func_ov031_020ef570();
    if ((this->mUnk_46 & 0b11) == 0) {
        return;
    }
    this->func_ov031_020ef1b4(0x02);
}

ARM void ActorHeart::func_ov031_020ef35c() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
    if (this->mUnk_be == 0 && (this->mUnk_52 - this->mUnk_50) > 0xB4) {
        this->mUnk_52 = 0xB4;
        this->mUnk_50 = 0x00;
    }
    this->mUnk_44 = 0x9F;
}

ARM void ActorHeart::func_ov031_020ef3a0() {
    if (this->mUnk_80 >= 0) {
        return;
    }
    this->func_ov031_020ef698();
}

extern "C" void func_ov017_020bf99c(void);
// Actor_9c::func_ov000_02097bec() ?
extern "C" void func_ov017_02097bec(int);

ARM void ActorHeart::func_ov031_020ef3b8() {
    func_ov017_020bf99c();
    func_ov017_02097bec(this->mUnk_98);
}

extern "C" void func_ov017_020bf9c8(ActorUnk_ov000_020a8bb0 *param1);

ARM void ActorHeart::func_ov031_020ef3d0() {
    ActorUnk_ov000_020a8bb0 *actor = gActorManager->func_01fff3b4(this->mUnk_c0);
    func_ov017_020bf9c8(actor);
    if ((this->mFlags[0] & 0x20) == 0) {
        return;
    }
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;

    this->mUnk_9c |= 0x1000;
    this->func_ov031_020ef1b4(0x01);
}

ARM void ActorHeart::func_ov031_020ef430() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
}

// ¯\_(ツ)_/¯
ARM void ActorHeart::func_ov031_020ef444() {
    return;
}

ARM void ActorHeart::func_ov031_020ef448() {
    this->mVel.x = 0;
    this->mVel.z = 0;
}

ARM void ActorHeart::func_ov031_020ef458() {
    ActorUnk_ov000_020a8bb0 *actorUnk = gActorManager->func_01fff3b4(this->mUnk_c4);
    if (actorUnk == nullptr) {
        this->func_ov031_020ef1b4(0x01);
        return;
    }
    this->mPos.x = actorUnk->mUnk_0e8;
    this->mPos.y = *reinterpret_cast<unk32 *>(&actorUnk->mUnk_0ec);
    this->mPos.z = actorUnk->mUnk_0f0;
}

ARM void ActorHeart::func_ov031_020ef4a8() {
    if (this->mUnk_80 >= 0) {
        this->func_ov031_020ef1b4(2);
        return;
    }

    if (this->mUnk_88 != 0) {
        if (this->mUnk_88 != 1) {
            this->mUnk_52 = 0x1E0;
            this->mUnk_50 = 0x000;
            this->func_ov031_020ef1b4(2);
            return;
        }
        this->mUnk_52 = 0x1E0;
        this->mUnk_50 = 0x000;
        this->func_ov031_020ef1b4(2);
        return;
    }
    this->mUnk_52 = 0xB4;
    this->mUnk_50 = 0x00;
    this->func_ov031_020ef1b4(2);
}

ARM void ActorHeart::func_ov031_020ef528() {
    data_027e0ce0->func_0208bc9c(4, 1);
    data_027e09a8->func_ov000_02071b30(0x76, &this->mPos, 0);
    this->func_ov000_020984d0();
}

ARM void ActorHeart::func_ov031_020ef570() {
    int value;
    int newVelY;
    u32 sine;

    func_ov000_02098838();
    this->mUnk_b8 += 0x666;
    sine         = SIN(this->mUnk_b8);
    this->mVel.z = 0x0;
    value        = ((unk32) sine >> 0x1F) << 6 | (sine >> 0x1A) + (0xFFFFF7FF < sine * 0x40);
    newVelY      = value;
    if (this->mVel.y < -0x13) {
        newVelY = -0x14;
    }
    *((u32 *) &this->mVel.x) = (sine * 0x40 + 0x800) >> 0xc | value * 0x100000;
    if (this->mVel.y < -0x13) {
        this->mVel.y = newVelY;
    }
}

// func_ov031_020ef5e8
ARM void ActorHeart::vfunc_2c(unk32 param1) {
    Vec3p uStack_20;
    Vec3p uStack_2c;

    // TODO : auStack30

    if (this->func_01fff5d0(param1, 0) == 0) {
        return;
    }

    uStack_20.x = this->mPos.x;
    uStack_20.z = this->mPos.z;
    uStack_20.y = this->mPos.y + 0x80;
    this->func_ov017_020bf5c4(&uStack_20, 0x400, 0x400, 0x1F, 0x00);

    uStack_20.x = this->mPos.x;
    uStack_20.z = this->mPos.z;
    uStack_20.y = this->mPos.y + 0x80;
    this->func_ov017_020bf5c4(&uStack_2c, 0xCCD, 0xCCD, 0x1F, 0x00);
}

ARM void ActorHeart::func_ov031_020ef698() {
    if (this->mUnk_bc == 0x00) {
        if ((this->mUnk_46 & 3) == 0) {
            this->mUnk_bc = 0x01;
            this->mUnk_2c = 0x06;
        }
        return;
    }
    if (this->mUnk_bc == 0x01) {
        this->func_ov031_020ef570();
        if ((this->mUnk_46 & 3) != 0) {
            this->mVel.x  = 0;
            this->mVel.y  = 0;
            this->mVel.z  = 0;
            this->mUnk_bc = 0;
        }
    }
}

#define GET_ACTORHEART(this) reinterpret_cast<ActorHeart *>((this)->mUnk_20)

ARM ActorHeart_c4::ActorHeart_c4(Actor *param1) :
    Actor_c4(param1) {
    this->mUnk_20 = param1;
    this->mUnk_04 = 1;
}

// non-matching
ARM unk32 ActorHeart_c4::vfunc_00(Actor_c4_stack param_2, unk32 param_3) {
    if (param_3 != 0) {
        ActorHeart *pHeart = GET_ACTORHEART(this);
        pHeart->mUnk_c4    = param_2.param1;
        pHeart->func_ov031_020ef1b4(0x04);
    }

    return this->Actor_c4::vfunc_00(param_2, param_3);
}

ARM void ActorHeart_c4::vfunc_04() {
    GET_ACTORHEART(this)->func_ov031_020ef1b4(0x05);
    this->Actor_c4::vfunc_04();
}

ARM void ActorHeart_c4::vfunc_0c(unk32 param1) {
    GET_ACTORHEART(this)->func_ov031_020ef1b4(0x01);
    this->Actor_c4::vfunc_0c(param1);
}

ARM void ActorHeart_c4::vfunc_08() {
    GET_ACTORHEART(this)->func_ov031_020ef528();
    this->Actor_c4::vfunc_08();
}
