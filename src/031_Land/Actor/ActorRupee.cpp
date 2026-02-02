#include "Actor/ActorRupee.hpp"
#include "System/Random.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"

extern "C" void func_01ffedac(u16 *, Vec3p *);
extern "C" void func_01fff05c(u32 *, UnkStruct_027e0cd8_0c *, Vec3p *);
extern "C" unk32 func_02017158();
extern "C" void func_ov000_02098838();
extern "C" void func_ov017_020bf99c();
extern "C" void func_ov031_0210acd4(u8);
extern "C" unk32 func_ov031_0210af50(u16, unk32 *);
extern void func_ov031_0210b0e4(u16, unk32);
extern "C" unk32 func_ov031_020d9834(unk32 *);

extern ActorTypeRupee ActorTypeRupee::gInstance;
extern unk32 *data_027e0d34;

ARM ActorTypeRupee *ActorTypeRupee::GetInstance() {
    return &ActorTypeRupee::gInstance;
}

ARM Actor *ActorTypeRupee::Create() {
    return new(HeapIndex_2) ActorRupee();
}

ARM ActorTypeRupee::ActorTypeRupee() :
    ActorType(ActorId_Rupee) {
    this->mUnk_04.pos.x = 0;
    this->mUnk_04.pos.y = 0x556;
    this->mUnk_04.pos.z = 0;
    this->mUnk_04.size  = 0x556;
}

// non-matching
ARM void ActorRupee::func_ov031_020e8d2c(Vec3p *param1) {
    Actor_5c uStack_4c;
    uStack_4c.func_ov000_020975f8();
    uStack_4c.mUnk_00 = *param1;
    uStack_4c.mUnk_0c = 0;
    this->func_ov000_020973f4(&data_ov000_020b539c, ActorId_Rupee, uStack_4c);
}

ARM ActorRupee::ActorRupee() :
    mUnk_94(0),
    mUnk_96(0),
    mUnk_98(0),
    mUnk_9a(6),
    mUnk_bc(0),
    mUnk_c0(0),
    mUnk_c4(this),
    mUnk_e8(0),
    mUnk_f0(0),
    mUnk_f4(false) {
    this->mUnk_a0 = 0x13100;
    this->mUnk_40 = &this->mUnk_c4;
}

ARM unk32 ActorRupee::vfunc_18() {}

ARM void ActorRupee::func_ov031_020e8fec() {
    switch (this->mUnk_6c) {
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

    switch (this->mUnk_6c) {
        case RupeeId_BigGreen:
        case RupeeId_BigRed:
        case RupeeId_Gold:
            this->func_ov031_020e9904(5);
            break;
        default: {
            ItemManager *pItemManager = data_027e0ce0->mUnk_2c;
            pItemManager->GiveRupees(func_02017158(), false, true);
            var_r4 = true;
            break;
        }
    }

    if (this->mUnk_80 >= 0 && this->mUnk_76 != 0) {
        this->func_ov000_02098a88(0, 1);
    }

    this->func_ov031_020e8fec();

    if (var_r4) {
        this->func_ov000_020984d0();
    }
}

ARM void ActorRupee::func_ov031_020e9108() {
    Vec3p vel;

    vel.x = gRandom.Next32(0, 0x19B);
    vel.y = gRandom.Next32(0, 0x19A);
    vel.z = gRandom.Next32(0, 0x19B);

    this->mVel.x = vel.x - 0xCD;
    this->mVel.y = vel.y + 0x9A + 0x100;
    this->mVel.z = vel.z - 0xCD;

    SET_FLAG(&this->mFlags, ActorFlag_Visible);
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

    func_01fff05c(&sp0, data_027e0cd8->mUnk_0c, &this->mPos);

    if (((sp0 >> 5) & 0x03) == 2) {
        this->func_ov000_020984d0();
        return;
    }

    this->func_ov031_020e9904(2);
}

ARM void ActorRupee::func_ov031_020e9234() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
    SET_FLAG(&this->mFlags, ActorFlag_Visible);
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

    func_01fff05c(&sp0, data_027e0cd8->mUnk_0c, &this->mPos);

    if (((sp0 >> 5) & 0x03) == 2) {
        this->func_ov000_020984d0();
        return;
    }

    this->func_ov031_020e9904(2);
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

    switch (this->mUnk_ec) {
        case 0:
            if (data_027e0cd8->mUnk_0c->vfunc_28(&this->mPos, 1, 0) < this->mPos.y) {
                this->mUnk_ec++;
            }
            break;
        case 1:
            this->func_ov031_020e9be8();
            if (this->mUnk_46 & 3) {
                this->mVel.x = 0;
                this->mVel.y = 0;
                this->mVel.z = 0;

                func_01fff05c(&sp0, data_027e0cd8->mUnk_0c, &this->mPos);

                if (((sp0 >> 5) & 3) != 2) {
                    this->mUnk_ec = 0;
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

    this->func_ov031_020e9904(1);
}

ARM void ActorRupee::func_ov031_020e9428() {}

ARM void ActorRupee::func_ov031_020e942c() {}

ARM void ActorRupee::func_ov031_020e9430() {}

ARM void ActorRupee::func_ov031_020e9434() {}

ARM void ActorRupee::func_ov031_020e9438() {
    func_ov017_020bf99c();
    this->mUnk_9c.func_ov000_02097bec();
}

ARM void ActorRupee::func_ov031_020e9450() {
    this->func_ov017_020bf9c8(gActorManager->func_01fff3b4(this->mUnk_bc));
    this->mPrevPos = this->mPos;
    Vec3p_Add(&this->mPos, &this->mVel, &this->mPos);

    if (!GET_FLAG(&this->mFlags, ActorFlag_5)) {
        return;
    }

    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
    this->mUnk_a0 |= 0x1000;
    this->func_ov031_020e9904(0);
}

ARM void ActorRupee::func_ov031_020e94d4() {
    this->mUnk_52 = -1;
    this->mUnk_50 = 0;
    this->mVel.x  = 0;
    this->mVel.y  = 0;
    this->mVel.z  = 0;
    this->mUnk_4a = 0;
    this->mUnk_44 = 0;
    this->mUnk_9c.func_ov000_02097bec();
    UNSET_FLAG(&this->mFlags, ActorFlag_Visible);
}

ARM void ActorRupee::func_ov031_020e951c() {
    ItemId itemId;

    if (data_027e09b8->func_01ffd420() != 0) {
        return;
    }

    itemId = ItemId_None;

    switch (this->mUnk_6c) {
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

    if (itemId != ItemId_None && func_ov031_020d9834(data_027e0d34) == 0) {
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
    ActorUnk_ov000_020a8bb0 *temp_r0;

    temp_r0 = gActorManager->func_01fff3b4(this->mUnk_c0);
    if (temp_r0 == NULL) {
        this->func_ov031_020e9904(0);
        return;
    }

    this->mPos = temp_r0->mPos;
}

ARM void ActorRupee::func_ov031_020e9610() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
}

ARM void ActorRupee::func_ov031_020e9624() {
    this->mUnk_9a = 0x14;
    this->mUnk_98 = 0x00;
}

ARM void ActorRupee::func_ov031_020e9638() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
    UNSET_FLAG(&this->mFlags, ActorFlag_Visible);
    this->mUnk_c4.mUnk_04 = 0;

    if (this->mUnk_6e == 2) {
        this->mUnk_4a = 1;
        data_027e0cec->func_ov000_0209ff8c(&this->mUnk_f0, 0xD00C, &this->mPos, 2);
    } else {
        this->mUnk_4a = 0;
    }

    this->mPos.y -= FLOAT_TO_Q20(1.2);
}

// non-matching
ARM void ActorRupee::func_ov031_020e96bc() {
    u16 sp0;

    func_01ffedac(&sp0, &this->mPos);

    if (func_ov031_0210af50(sp0, NULL) == 0) {
        return;
    }

    this->func_ov031_020e9904(0xB);
}

ARM void ActorRupee::func_ov031_020e970c() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
    SET_FLAG(&this->mFlags, ActorFlag_Visible);
    this->mUnk_4a = 1;
    this->mUnk_52 = -1;
    this->mUnk_50 = 0;
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
        temp_r0 = data_027e0cd8->mUnk_0c;
        temp_r2 = (sp4 - 0x800) + temp_r0->vfunc_28(&this->mPos, 0, 0);

        if (this->mPos.y != temp_r2) {
            this->mPos.y  = temp_r2;
            this->mUnk_52 = -1;
            this->mUnk_50 = 0;
        } else if (this->mUnk_50 == 8) {
            this->func_ov031_020e9904(0xC);
        }
    } else {
        temp_r0      = data_027e0cd8->mUnk_0c;
        this->mPos.y = temp_r0->vfunc_28(&this->mUnk_5c.mUnk_00, 0, 0);
        this->func_ov031_020e9904(0xC);
    }

    if (this->mUnk_50 < this->mUnk_52) {
        this->mUnk_50++;
    }
}

// non-matching
ARM void ActorRupee::func_ov031_020e9838() {
    u16 sp2;

    func_01ffedac(&sp2, &this->mPos);
    this->mUnk_c4.mUnk_04 = 1;
    func_ov031_0210b0e4(sp2, 0);
    func_ov031_0210acd4(sp2);
    func_ov031_0210acd4(sp2);
    data_027e0cec->func_ov000_020a0110(&this->mUnk_f0);
}

// non-matching
ARM void ActorRupee::func_ov031_020e98c4() {
    u16 sp0;

    func_01ffedac(&sp0, &this->mPos);
    func_ov031_0210b0e4(sp0, 1);
    this->func_ov031_020e9904(1);
}

typedef void (*UnkCallback_ov031_02113520)(void *);
struct UnkStruct_ov031_02113520 {
    /* 00 */ UnkCallback_ov031_02113520 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */
};
extern UnkStruct_ov031_02113520 data_ov031_02113520[13];

// non-matching
ARM void ActorRupee::func_ov031_020e9904(unk32 param1) {
    this->mUnk_4c = param1;
    this->mUnk_52 = -1;
    this->mUnk_50 = 0;
    this->mUnk_ec = 0;
    u32 uVar1     = data_ov031_02113520[this->mUnk_4c].mUnk_04;
    UnkCallback_ov031_02113520 pcVar2;

    if (!(uVar1 & 1)) {
        pcVar2 = data_ov031_02113520[this->mUnk_4c].mUnk_00;
    } else {
        pcVar2 = (UnkCallback_ov031_02113520) (((u32) this + uVar1 >> 1) + &data_ov031_02113520[this->mUnk_4c]);
    }

    pcVar2(this);
}

extern "C" void func_01fff17c(unk16 *, UnkStruct_027e0ce0 *, unk32);
extern "C" void func_02018114(unk16 *, unk32);
typedef void (*UnkCallback_vfunc_20)(Vec3p *);

struct UnkStruct_ov031_02113588 {
    /* 00 */ UnkCallback_vfunc_20 callback;
    /* 04 */ unk32 mUnk_04;
    /* 08 */
};
extern UnkStruct_ov031_02113588 data_ov031_02113588[13];

// non-matching
ARM void ActorRupee::vfunc_20() {
    short sVar1;
    unk16 uVar2;
    unk16 uVar3;
    int iVar4;
    u32 uVar5;
    UnkCallback_vfunc_20 pcVar6;
    int iVar7;
    int iVar8;
    unk16 uStack_16;
    unk16 uStack_18;
    unk16 uStack_1a;
    short sStack_1c;
    u16 uStack_1e;
    u16 uStack_20;
    Vec3p test;

    uStack_1a = 0;
    uVar2     = 0x666;
    uStack_16 = 0xFB33;
    uStack_18 = uVar2;

    func_01fff17c(&sStack_1c, data_027e0ce0, 0);
    func_02018114(&uStack_1a, sStack_1c);
    this->mUnk_c4.mUnk_08 = uStack_1a;
    this->mUnk_c4.mUnk_0a = uStack_18;
    this->mUnk_c4.mUnk_0c = uStack_16;

    uStack_1a             = 0;
    uStack_18             = 0x666;
    uStack_16             = 0;
    this->mUnk_c4.mUnk_0e = 0;
    this->mUnk_c4.mUnk_10 = 0x666;
    sVar1                 = this->mUnk_4c;

    test = this->mPos;

    if (sVar1 != 5) {
        iVar4 = (int) (short) this->mUnk_4c;
    }

    this->mUnk_c4.mUnk_12 = 0;

    this->mPrevPos = test;

    uVar3 = uVar2;

    if ((sVar1 != 5 && iVar4 != 10) && iVar4 != 0xb) {
        if ((sVar1 != 6) && ((u16) this->mUnk_98 < (u16) this->mUnk_9a)) {
            this->mUnk_98++;
        }

        uVar3 = uStack_18;

        if ((u16) this->mUnk_9a <= (u16) this->mUnk_98) {
            this->mUnk_3c = (unk32) & this->mUnk_9c;
            uStack_18     = uVar2;
            this->func_ov000_020989e0();
            uVar3 = uStack_18;

            if ((this->mUnk_a4 & 0x3ffff) != 0) {
                sVar1 = *(short *) &this->mUnk_b8;

                switch (mUnk_b8) {
                    case 0x08:
                    case 0x10:
                        if ((this->mUnk_a8 & 0x100) != 0) {
                            this->func_ov031_020e9068();
                            uVar3 = uStack_18;
                        }
                        break;
                    case 0x0C:
                        this->mUnk_bc = this->mUnk_a8;
                        this->mUnk_a0 &= 0xffffefff;
                        this->func_ov031_020e9904(6);
                        uVar3 = uStack_18;
                        break;
                    default:
                        break;
                }
            }
        }
    }

    uStack_18 = uVar3;
    iVar4     = (int) (short) this->mUnk_4c;
    // uVar5     = *(u32 *) (data_ov031_0211358c[iVar4 * 8]);

    if (!(uVar5 & 1)) {
        data_ov031_02113588[iVar4 * 2].callback(NULL);
    } else {
        this->vfunc_00(NULL);
        // pcVar6 = *(code **) (*(int *) ((int) &this->vtable + ((int) uVar5 >> 1)) + (&data_ov031_02113588)[iVar4 * 2]);
    }

    // (*pcVar6)();

    if ((this->mUnk_80 < 0) && (this->mUnk_4c != 5)) {
        this->func_ov031_020e9d94();
    }

    if (this->mUnk_6e != 0) {
        sVar1 = this->mUnk_4c;

        if (!(sVar1 != 10 && sVar1 != 0xb && sVar1 != 0xc)) {
            func_01ffedac(&uStack_1e, &this->mPos);
            func_ov031_0210b0e4(uStack_1e, 0);
        } else {
            func_01ffedac(&uStack_20, &this->mPos);
            func_ov031_0210b0e4(uStack_20, 1);
        }
    }
}

ARM void ActorRupee::func_ov031_020e9b88() {
    func_ov000_02098838();
    Vec3p_Add(&this->mPos, &this->mVel, &this->mPos);

    if (this->mUnk_5c.mUnk_00.y < this->mPos.y + this->mVel.y) {
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
    func_ov000_02098838();
    Vec3p_Add(&this->mPos, &this->mVel, &this->mPos);

    if (this->mVel.y < 0) {
        this->mUnk_44 = 3;
        this->func_ov000_02098910(0, 0x10);
    }
}

extern "C" void func_ov000_0205c1f0(unk32 *, unk16);
extern unk32 data_ov031_02110aa0[];
extern unk32 data_ov031_02113468[];
extern "C" void func_ov000_0205c204(unk32 *, Vec3p *, unk32, unk32, unk32);

// non-matching
ARM void ActorRupee::vfunc_2c(unk32 param1) {
    Vec3p iStack_18;
    Vec3p iStack_28;
    unk32 auStack_30[4];
    s32 uVar2;

    if (this->func_01fff5d0(param1, 0) == 0) {
        return;
    }

    func_ov000_0205c1f0(auStack_30, data_ov031_02110aa0[this->mUnk_6c]);
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

    if (this->mUnk_4c != 9) {
        iStack_28.x = this->mPos.x;
        iStack_28.y = this->mPos.y + 0x80;
        iStack_28.z = this->mPos.z;
        this->func_ov017_020bf5c4(&iStack_28, uVar2, uVar2, 0x1F, 0);
    }
}

ARM bool ActorRupee::func_ov031_020e9d54() {
    switch (this->mUnk_6c) {
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
        SET_FLAG(&this->mFlags, ActorFlag_Visible);
        return;
    }

    if (!this->mUnk_f4) {
        if (this->mUnk_94 < this->mUnk_96) {
            this->mUnk_94++;
            var_r1 = 0;
        } else {
            var_r1 = 1;
        }

        if (var_r1 == 0) {
            return;
        }
        this->mUnk_f4 = 1;
        this->mUnk_96 = 0x3C;
        this->mUnk_94 = 0;
        return;
    }

    temp_r0 = this->mUnk_94;
    temp_r1 = temp_r0 >> 0x1F;

    if ((this->mUnk_94 & 7) < 4) {
        UNSET_FLAG(&this->mFlags, ActorFlag_Visible);
    } else {
        SET_FLAG(&this->mFlags, ActorFlag_Visible);
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

    sVar1 = this->mUnk_4c;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar7 = true;
    bVar8 = true;
    if ((sVar1 != 6 && sVar1 != 7)) {
        bVar2 = false;
    }
    if ((!bVar2) && (sVar1 != 3)) {
        bVar8 = false;
    }
    if ((!bVar8) && (sVar1 != 8)) {
        bVar3 = false;
    }
    if ((!bVar3) && (sVar1 != 9)) {
        bVar4 = false;
    }
    if ((!bVar4) && (sVar1 != 10)) {
        bVar5 = false;
    }
    if ((!bVar5) && (sVar1 != 0xb)) {
        bVar6 = false;
    }
    if (!(bVar6) && (sVar1 != 0xc)) {
        bVar7 = false;
    }

    return bVar7;
}

#define GET_ACTOR_RUPEE(pActor) ((ActorRupee *) (pActor))

ARM Actor_c4::Actor_c4(Actor *param1) :
    Actor_c4_Base(&param1->mRef, 0) {
    this->mUnk_20 = param1;
    this->mUnk_04 = 1;
}

// non-matching
ARM unk32 Actor_c4::vfunc_00(unk32 param1, unk32 param2) {
    if (param2 != 0) {
        ActorRupee *pRupee = GET_ACTOR_RUPEE(this->mUnk_20);
        pRupee->mUnk_c0    = param2;
        pRupee->func_ov031_020e9904(7);
    }

    return this->func_ov031_020f62e4(param2);
}

ARM void Actor_c4::vfunc_04() {
    GET_ACTOR_RUPEE(this->mUnk_20)->func_ov031_020e9904(8);
    this->func_ov031_020f6374();
}

ARM void Actor_c4::vfunc_0c(unk32 param1) {
    GET_ACTOR_RUPEE(this->mUnk_20)->func_ov031_020e9904(1);
    this->func_ov031_020f6384(param1);
}

ARM void Actor_c4::vfunc_08() {
    GET_ACTOR_RUPEE(this->mUnk_20)->func_ov031_020e9068();
    this->func_ov031_020f637c();
}

ARM ActorRupee::~ActorRupee() {}
