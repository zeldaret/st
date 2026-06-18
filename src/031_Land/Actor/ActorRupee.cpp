#include "Actor/ActorRupee.hpp"
#include "System/Random.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"

extern "C" void func_01ffedac(u16 *, VecFx32 *);
extern "C" void func_01fff05c(u32 *, UnkStruct_027e0cd8_0c *, VecFx32 *);
extern "C" unk32 func_02017158();
extern "C" void func_ov017_020bf99c();
extern "C" void func_ov031_0210acd4(u8);
extern "C" unk32 func_ov031_0210af50(u16, unk32 *);
extern void func_ov031_0210b0e4(u16, unk32);

extern Cylinder data_ov031_02113478;

ARM DECL_PROFILE(ActorProfileRupee);

ARM Actor *ActorProfileRupee::Create() {
    return new(HeapIndex_2) ActorRupee();
}

ARM ActorProfileRupee::ActorProfileRupee() :
    ActorProfile(ActorId_Rupee) {
    this->mUnk_04.pos.x = 0;
    this->mUnk_04.pos.y = 0x556;
    this->mUnk_04.pos.z = 0;
    this->mUnk_04.size  = 0x556;
}

ARM void ActorRupee::func_ov031_020e8d2c(ActorRef *pOutRef, const VecFx32 *pPos, u32 params, u32 unk_2C, ActorRef ref) {
    ActorParams actorParams;

    actorParams.mUnk_28.Reset();
    actorParams.func_ov000_020975f8();

    actorParams.mInitialPos.x = pPos->x;
    actorParams.mInitialPos.y = pPos->y;
    actorParams.mInitialPos.z = pPos->z;

    actorParams.mParams[0] = params & 0xFF;
    actorParams.mUnk_28    = ref;
    actorParams.mUnk_2C    = unk_2C;

    Actor::func_ov000_020973f4(pOutRef, &data_ov000_020b539c_eur, ActorId_Rupee, &actorParams, 0);
}

ARM ActorRupee::ActorRupee() :
    mUnk_94(0),
    mUnk_96(0),
    mUnk_98(0),
    mUnk_9A(6),
    mUnk_BC(0),
    mUnk_C0(0),
    mUnk_C4(this),
    mUnk_E8(0),
    mUnk_F0(0),
    mUnk_F4(false) {
    this->mUnk_9C.mUnk_04 = 0x13100;
    this->mUnk_40         = &this->mUnk_C4;
}

// https://decomp.me/scratch/wunA4
ARM bool ActorRupee::vfunc_18(unk32 param1) {
    if (this->func_ov031_020e9d54()) {
        this->mUnk_30 = &data_ov031_02113478;
        this->mUnk_34 = &data_ov031_02113478;
        SET_FLAG(this->mFlags, ActorFlag_12);
    }

    if (this->mUnk_5C.mUnk_24 >= 0) {
        if (this->func_ov000_02098a60(0)) {
            return false;
        }

        if (this->mUnk_5C.mParams[1] == 0) {
            this->SetState(ActorRupeeState_3);
        } else {
            this->SetState(ActorRupeeState_10);
        }

        return true;
    }

    switch (this->mUnk_5C.mUnk_2C) {
        case 0:
            this->mUnk_96 = 0x1E0;
            this->mUnk_94 = 0;
            {
                VecFx32 vel;
                vel.x = 0;
                vel.y = 0;
                vel.z = 0;
                VecFx32_Copy(&vel, &this->mVel);
            }
            this->SetState(ActorRupeeState_0);
            break;

        case 1:
            this->mUnk_96 = 0x1E0;
            this->mUnk_94 = 0;
            {
                VecFx32 vel;

                fx32 vx = gRandom.Next32(0x223) - 0x111;
                vel.x   = vx;

                fx32 vy = gRandom.Next32(0x333) + 0x555;
                vel.y   = vy;

                fx32 vz = gRandom.Next32(0x223) - 0x111;
                vel.z   = vz;

                VecFx32_Copy(&vel, &this->mVel);
            }
            this->SetState(ActorRupeeState_0);
            break;

        case 2:
            this->mUnk_96 = 0x1E0;
            this->mUnk_94 = 0;
            {
                VecFx32 vel;
                vel.x        = 0;
                vel.y        = 0x800;
                vel.z        = 0;
                this->mVel.x = vel.x;
                this->mVel.y = vel.y;
                this->mVel.z = vel.z;
            }
            this->SetState(ActorRupeeState_0);
            break;

        case 3:
            break;

        case 4:
            this->SetState(ActorRupeeState_10);
            break;

        default:
            break;
    }

    return true;
}

ARM void ActorRupee::func_ov031_020e8fec() {
    switch (this->mUnk_5C.mParams[0]) {
        case RupeeId_Green:
            data_027e09a8->func_ov000_02071b30(0x73, &this->mPos, 0);
            break;
        case RupeeId_Blue:
            data_027e09a8->func_ov000_02071b30(0x74, &this->mPos, 0);
            break;
        case RupeeId_Red:
            data_027e09a8->func_ov000_02071b30(0x75, &this->mPos, 0);
            break;
        default:
            break;
    }
}

// non-matching (regalloc)
ARM void ActorRupee::func_ov031_020e9068() {
    bool var_r4 = false;

    switch (this->mUnk_5C.mParams[0]) {
        case RupeeId_BigGreen:
        case RupeeId_BigRed:
        case RupeeId_Gold:
            this->SetState(ActorRupeeState_5);
            break;
        default: {
            ItemManager *pItemManager = data_027e0ce0->mUnk_2C;
            pItemManager->GiveRupees(func_02017158(), false, true);
            var_r4 = true;
            break;
        }
    }

    if (this->mUnk_5C.mUnk_24 >= 0 && this->mUnk_5C.mUnk_1A != 0) {
        this->func_ov000_02098a88(0, 1);
    }

    this->func_ov031_020e8fec();

    if (var_r4) {
        this->func_ov000_020984d0();
    }
}

ARM void ActorRupee::func_ov031_020e9108() {
    VecFx32 vel;

    vel.x = gRandom.Next32(0x19B);
    vel.y = gRandom.Next32(0x19A);
    vel.z = gRandom.Next32(0x19B);

    vel.x -= 0xCD;
    vel.y += 0x9A + 0x100;
    vel.z -= 0xCD;

    VecFx32_Copy(&vel, &this->mVel);
    SET_FLAG(this->mFlags, ActorFlag_Visible);
}

ARM void ActorRupee::func_ov031_020e91a8() {
    u32 sp0;

    if (this->mUnk_50 < this->mUnk_52) {
        this->mUnk_50++;
    }

    this->func_ov031_020e9b88();

    if (!(this->mUnk_46 & 0x03)) {
        return;
    }

    func_01fff05c(&sp0, data_027e0cd8->mUnk_0C, &this->mPos);

    if (((sp0 >> 5) & 0x03) == 2) {
        this->func_ov000_020984d0();
        return;
    }

    this->SetState(ActorRupeeState_2);
}

ARM void ActorRupee::func_ov031_020e9234() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
    SET_FLAG(this->mFlags, ActorFlag_Visible);
}

ARM void ActorRupee::func_ov031_020e9254() {
    u32 sp0;

    if (this->mUnk_50 < this->mUnk_52) {
        this->mUnk_50++;
    }

    this->func_ov031_020e9be8();

    if (!(this->mUnk_46 & 0x03)) {
        return;
    }

    func_01fff05c(&sp0, data_027e0cd8->mUnk_0C, &this->mPos);

    if (((sp0 >> 5) & 0x03) == 2) {
        this->func_ov000_020984d0();
        return;
    }

    this->SetState(ActorRupeeState_2);
}

ARM void ActorRupee::func_ov031_020e92e0() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;

    if (this->mUnk_96 - this->mUnk_94 > 180) {
        this->mUnk_96 = 180;
        this->mUnk_94 = 0;
    }
}

// non-matching
ARM void ActorRupee::func_ov031_020e9310() {
    u32 sp0;

    if (this->mUnk_50 < this->mUnk_52) {
        this->mUnk_50++;
    }

    switch (this->mUnk_EC) {
        case 0:
            if (data_027e0cd8->mUnk_0C->vfunc_28(&this->mPos, 1, 0) < this->mPos.y) {
                this->mUnk_EC++;
            }
            break;
        case 1:
            this->func_ov031_020e9be8();
            if (this->mUnk_46 & 3) {
                this->mVel.x = 0;
                this->mVel.y = 0;
                this->mVel.z = 0;

                func_01fff05c(&sp0, data_027e0cd8->mUnk_0C, &this->mPos);

                if (((sp0 >> 5) & 3) != 2) {
                    this->mUnk_EC = 0;
                } else {
                    this->func_ov000_020984d0();
                }
            }
            break;
        default:
            break;
    }

    this->mUnk_44 = 3;
    this->func_ov000_02098910(0, 0x10);

    if (this->mUnk_46 & 3) {
        return;
    }

    this->SetState(ActorRupeeState_1);
}

ARM void ActorRupee::func_ov031_020e9428() {}

ARM void ActorRupee::func_ov031_020e942c() {}

ARM void ActorRupee::func_ov031_020e9430() {}

ARM void ActorRupee::func_ov031_020e9434() {}

ARM void ActorRupee::func_ov031_020e9438() {
    func_ov017_020bf99c();
    this->mUnk_9C.func_ov000_02097bec();
}

ARM void ActorRupee::func_ov031_020e9450() {
    this->func_ov017_020bf9c8(gpActorManager->func_01fff3b4(this->mUnk_BC));
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    if (!GET_FLAG(this->mFlags, ActorFlag_5)) {
        return;
    }

    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
    this->mUnk_9C.mUnk_04 |= 0x1000;
    this->SetState(ActorRupeeState_0);
}

ARM void ActorRupee::func_ov031_020e94d4() {
    this->mUnk_52    = -1;
    this->mUnk_50    = 0;
    this->mVel.x     = 0;
    this->mVel.y     = 0;
    this->mVel.z     = 0;
    this->mUnk_4A[0] = 0;
    this->mUnk_44    = 0;
    this->mUnk_9C.func_ov000_02097bec();
    UNSET_FLAG(this->mFlags, ActorFlag_Visible);
}

ARM void ActorRupee::func_ov031_020e951c() {
    ItemId itemId;

    if (data_027e09b8->func_01ffd420() != 0) {
        return;
    }

    itemId = ItemId_None;

    switch (this->mUnk_5C.mParams[0]) {
        case RupeeId_Gold:
            itemId = ItemId_BigGoldRupee;
            break;
        case RupeeId_BigGreen:
            itemId = ItemId_BigGreenRupee;
            break;
        case RupeeId_BigRed:
            itemId = ItemId_BigRedRupee;
            break;
        default:
            break;
    }

    if (itemId != ItemId_None && !data_027e0d34->TryItemGive(itemId)) {
        return;
    }

    this->func_ov000_020984d0();
}

ARM void ActorRupee::func_ov031_020e9598() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
}

ARM void ActorRupee::func_ov031_020e95ac() {}

ARM void ActorRupee::func_ov031_020e95b0() {
    this->mVel.x = 0;
    this->mVel.z = 0;
}

// non-matching
ARM void ActorRupee::func_ov031_020e95c0() {
    Actor *pActor;

    pActor = gpActorManager->func_01fff3b4(this->mUnk_C0);
    if (pActor == NULL) {
        this->SetState(ActorRupeeState_0);
        return;
    }

    this->mPos.x = pActor->mPos.x;
    this->mPos.y = pActor->mPos.y;
    this->mPos.z = pActor->mPos.z;
}

ARM void ActorRupee::func_ov031_020e9610() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
}

ARM void ActorRupee::func_ov031_020e9624() {
    this->mUnk_9A = 0x14;
    this->mUnk_98 = 0x00;
}

ARM void ActorRupee::func_ov031_020e9638() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
    UNSET_FLAG(this->mFlags, ActorFlag_Visible);
    this->mUnk_C4.mUnk_04 = 0;

    if (this->mUnk_5C.mParams[1] == 2) {
        this->mUnk_4A[0] = 1;
        data_027e0cec->func_ov000_0209ff8c(&this->mUnk_F0, 0xD00C, &this->mPos, 2);
    } else {
        this->mUnk_4A[0] = 0;
    }

    this->mPos.y -= FLOAT_TO_FX32(1.2);
}

// non-matching
ARM void ActorRupee::func_ov031_020e96bc() {
    u16 sp0;

    func_01ffedac(&sp0, &this->mPos);

    if (func_ov031_0210af50(sp0, NULL) == 0) {
        return;
    }

    this->SetState(ActorRupeeState_11);
}

ARM void ActorRupee::func_ov031_020e970c() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
    SET_FLAG(this->mFlags, ActorFlag_Visible);
    this->mUnk_4A[0] = 1;
    this->mUnk_52    = -1;
    this->mUnk_50    = 0;
}

// non-matching
ARM void ActorRupee::func_ov031_020e9740() {
    u16 sp0;
    unk32 sp4;
    unk32 *psp4;
    s32 temp_r2;
    UnkStruct_027e0cd8_0c *temp_r0;

    func_01ffedac(&sp0, &this->mPos);
    sp4 = 0;

    if (func_ov031_0210af50(sp0, &sp4) != 0) {
        temp_r0 = data_027e0cd8->mUnk_0C;
        temp_r2 = (sp4 - 0x800) + temp_r0->vfunc_28(&this->mPos, 0, 0);

        if (this->mPos.y != temp_r2) {
            this->mPos.y  = temp_r2;
            this->mUnk_52 = -1;
            this->mUnk_50 = 0;
        } else if (this->mUnk_50 == 8) {
            this->SetState(ActorRupeeState_12);
        }
    } else {
        temp_r0      = data_027e0cd8->mUnk_0C;
        this->mPos.y = temp_r0->vfunc_28(&this->mUnk_5C.mInitialPos, 0, 0);
        this->SetState(ActorRupeeState_12);
    }

    if (this->mUnk_50 < this->mUnk_52) {
        this->mUnk_50++;
    }
}

// non-matching
ARM void ActorRupee::func_ov031_020e9838() {
    u16 sp2;

    func_01ffedac(&sp2, &this->mPos);
    this->mUnk_C4.mUnk_04 = 1;
    func_ov031_0210b0e4(sp2, 0);
    func_ov031_0210acd4(sp2);
    func_ov031_0210acd4(sp2);
    data_027e0cec->func_ov000_020a0110(&this->mUnk_F0);
}

// non-matching
ARM void ActorRupee::func_ov031_020e98c4() {
    u16 sp0;

    func_01ffedac(&sp0, &this->mPos);
    func_ov031_0210b0e4(sp0, 1);
    this->SetState(ActorRupeeState_1);
}

extern PTMF<ActorRupee> data_ov031_02113520[13];

ARM void ActorRupee::SetState(ActorState state) {
    this->mState  = state;
    this->mUnk_52 = -1;
    this->mUnk_50 = 0;
    this->mUnk_EC = 0;
    CALL_PTMF(PTMF<ActorRupee>, data_ov031_02113520[this->mState]);
}

extern "C" void func_01fff17c(unk16 *, UnkStruct_027e0ce0 *, unk32);
extern "C" void func_02018114(unk16 *, unk32);
extern PTMF<ActorRupee> data_ov031_02113588[13];

// non-matching
ARM void ActorRupee::vfunc_20() {
    short sVar1;
    unk16 uVar2;
    unk16 uVar3;
    int iVar4;
    u32 uVar5;
    int iVar7;
    int iVar8;
    unk16 uStack_16;
    unk16 uStack_18;
    unk16 uStack_1a;
    short sStack_1c;
    u16 uStack_1e;
    u16 uStack_20;
    VecFx32 test;

    uStack_1a = 0;
    uVar2     = 0x666;
    uStack_16 = 0xFB33;
    uStack_18 = uVar2;

    func_01fff17c(&sStack_1c, data_027e0ce0, 0);
    func_02018114(&uStack_1a, sStack_1c);
    this->mUnk_C4.mUnk_08 = uStack_1a;
    this->mUnk_C4.mUnk_0A = uStack_18;
    this->mUnk_C4.mUnk_0C = uStack_16;

    uStack_1a             = 0;
    uStack_18             = 0x666;
    uStack_16             = 0;
    this->mUnk_C4.mUnk_0E = 0;
    this->mUnk_C4.mUnk_10 = 0x666;
    sVar1                 = this->mState;

    test = this->mPos;

    if (sVar1 != ActorRupeeState_5) {
        iVar4 = (int) (short) this->mState;
    }

    this->mUnk_C4.mUnk_12 = 0;

    this->mPrevPos = test;

    uVar3 = uVar2;

    if ((sVar1 != ActorRupeeState_5 && iVar4 != ActorRupeeState_10) && iVar4 != ActorRupeeState_11) {
        if ((sVar1 != ActorRupeeState_6) && ((u16) this->mUnk_98 < (u16) this->mUnk_9A)) {
            this->mUnk_98++;
        }

        uVar3 = uStack_18;

        if ((u16) this->mUnk_9A <= (u16) this->mUnk_98) {
            this->mUnk_3C = &this->mUnk_9C;
            uStack_18     = uVar2;
            this->func_ov000_020989e0();
            uVar3 = uStack_18;

            if ((this->mUnk_9C.mUnk_08 & 0x3FFFF) != 0) {
                sVar1 = *(short *) &this->mUnk_9C.mUnk_1C;

                switch (this->mUnk_9C.mUnk_1C) {
                    case 0x08:
                    case 0x10:
                        if ((this->mUnk_9C.mUnk_0C.type_index & 0x100) != 0) {
                            this->func_ov031_020e9068();
                            uVar3 = uStack_18;
                        }
                        break;
                    case 0x0C:
                        this->mUnk_BC = this->mUnk_9C.mUnk_0C;
                        this->mUnk_9C.mUnk_04 &= 0xFFFFEFFF;
                        this->SetState(ActorRupeeState_6);
                        uVar3 = uStack_18;
                        break;
                    default:
                        break;
                }
            }
        }
    }

    CALL_PTMF(PTMF<ActorRupee>, data_ov031_02113588[this->mState]);

    if (this->mUnk_5C.mUnk_24 < 0 && this->mState != ActorRupeeState_5) {
        this->func_ov031_020e9d94();
    }

    if (this->mUnk_5C.mParams[1] != 0) {
        sVar1 = this->mState;

        if (!(sVar1 != ActorRupeeState_10 && sVar1 != ActorRupeeState_11 && sVar1 != ActorRupeeState_12)) {
            func_01ffedac(&uStack_1e, &this->mPos);
            func_ov031_0210b0e4(uStack_1e, 0);
        } else {
            func_01ffedac(&uStack_20, &this->mPos);
            func_ov031_0210b0e4(uStack_20, 1);
        }
    }
}

ARM void ActorRupee::func_ov031_020e9b88() {
    this->func_ov000_02098838();
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    if (this->mUnk_5C.mInitialPos.y < this->mPos.y + this->mVel.y) {
        this->mUnk_44 = 0x9C;
    } else {
        this->mUnk_44 = 0x9F;
    }

    if (this->func_ov000_02098910(0, 0x10) != 0) {
        this->mVel.x = 0;
        this->mVel.z = 0;
    }
}

ARM void ActorRupee::func_ov031_020e9be8() {
    this->func_ov000_02098838();
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    if (this->mVel.y < 0) {
        this->mUnk_44 = 3;
        this->func_ov000_02098910(0, 0x10);
    }
}

extern "C" void func_ov000_0205c1f0(unk32 *, unk16);
extern unk32 data_ov031_02110aa0[];
extern unk32 data_ov031_02113468[];
extern "C" void func_ov000_0205c204(unk32 *, VecFx32 *, unk32, unk32, unk32);

// non-matching
ARM void ActorRupee::vfunc_2C(unk32 param1) {
    VecFx32 iStack_18;
    VecFx32 iStack_28;
    unk32 auStack_30[4];
    s32 uVar2;

    if (this->func_01fff5d0(param1, 0) == 0) {
        return;
    }

    func_ov000_0205c1f0(auStack_30, data_ov031_02110aa0[this->mUnk_5C.mParams[0]]);
    iStack_18 = this->mPos;

    if (!this->func_ov031_020e9d54()) {
        iStack_18.y += 0x800;
        func_ov000_0205c204(auStack_30, &iStack_18, 0xB0A, 0x0A, 0x1F);
        uVar2 = 0x333;
    } else {
        iStack_18.y += data_ov031_02113468[2];
        func_ov000_0205c204(auStack_30, &iStack_18, data_ov031_02113468[1], data_ov031_02113468[1], 0x1F);
        uVar2 = 0x4CD;
    }

    if (this->mState != ActorRupeeState_9) {
        iStack_28.x = this->mPos.x;
        iStack_28.y = this->mPos.y + 0x80;
        iStack_28.z = this->mPos.z;
        this->func_ov017_020bf5c4(&iStack_28, uVar2, uVar2, 0x1F, 0);
    }
}

ARM bool ActorRupee::func_ov031_020e9d54() {
    switch (this->mUnk_5C.mParams[0]) {
        case RupeeId_BigGreen:
        case RupeeId_BigRed:
        case RupeeId_Gold:
        case RupeeId_7:
            return true;

        default:
            break;
    }

    return false;
}

// non-matching
ARM void ActorRupee::func_ov031_020e9d94() {
    s32 temp_r0_2;
    s32 var_r0;
    s32 var_r1;
    bool var_r1_2;
    u16 temp_r0;
    u32 temp_r1;

    if (this->func_ov031_020e9e5c()) {
        SET_FLAG(this->mFlags, ActorFlag_Visible);
        return;
    }

    if (!this->mUnk_F4) {
        if (this->mUnk_94 < this->mUnk_96) {
            this->mUnk_94++;
            var_r1 = 0;
        } else {
            var_r1 = 1;
        }

        if (var_r1 == 0) {
            return;
        }
        this->mUnk_F4 = 1;
        this->mUnk_96 = 0x3C;
        this->mUnk_94 = 0;
        return;
    }

    temp_r0 = this->mUnk_94;
    temp_r1 = temp_r0 >> 0x1F;

    if ((this->mUnk_94 & 7) < 4) {
        UNSET_FLAG(this->mFlags, ActorFlag_Visible);
    } else {
        SET_FLAG(this->mFlags, ActorFlag_Visible);
    }

    if (this->mUnk_94 < this->mUnk_96) {
        var_r1_2 = 0;
        this->mUnk_94++;
    } else {
        var_r1_2 = 1;
    }

    if (var_r1_2 == 0) {
        return;
    }

    this->func_ov000_020984d0();
}

// non-matching (and awful...)
ARM bool ActorRupee::func_ov031_020e9e5c() {
    short sVar1;
    bool bVar8;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;

    sVar1 = this->mState;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar7 = true;
    bVar8 = true;
    if ((sVar1 != ActorRupeeState_6 && sVar1 != ActorRupeeState_7)) {
        bVar2 = false;
    }
    if ((!bVar2) && (sVar1 != ActorRupeeState_3)) {
        bVar8 = false;
    }
    if ((!bVar8) && (sVar1 != ActorRupeeState_8)) {
        bVar3 = false;
    }
    if ((!bVar3) && (sVar1 != ActorRupeeState_9)) {
        bVar4 = false;
    }
    if ((!bVar4) && (sVar1 != ActorRupeeState_10)) {
        bVar5 = false;
    }
    if ((!bVar5) && (sVar1 != ActorRupeeState_11)) {
        bVar6 = false;
    }
    if (!(bVar6) && (sVar1 != ActorRupeeState_12)) {
        bVar7 = false;
    }

    return bVar7;
}

ARM ActorRupee_C4::ActorRupee_C4(Actor *param1) :
    Actor_C4(param1) {
    this->mUnk_20 = param1;
    this->mUnk_04 = 1;
}

ARM bool ActorRupee_C4::vfunc_00(ActorRef ref, unk32 param2) {
    if (param2 != 0) {
        ActorRupee *pRupee = this->GetActorPtr<ActorRupee>();
        pRupee->mUnk_C0    = ref.Get32();
        pRupee->SetState(ActorRupeeState_7);
    }

    return this->Actor_C4::vfunc_00(ref, param2);
}

ARM void ActorRupee_C4::vfunc_04() {
    this->GetActorPtr<ActorRupee>()->SetState(ActorRupeeState_8);
    this->Actor_C4::vfunc_04();
}

ARM void ActorRupee_C4::vfunc_0C(unk32 param1) {
    this->GetActorPtr<ActorRupee>()->SetState(ActorRupeeState_1);
    this->Actor_C4::vfunc_0C(param1);
}

ARM void ActorRupee_C4::vfunc_08() {
    this->GetActorPtr<ActorRupee>()->func_ov031_020e9068();
    this->Actor_C4::vfunc_08();
}

ARM ActorRupee::~ActorRupee() {}
