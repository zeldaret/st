#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorUnk_ov000_020a8bb0.hpp"
#include "Player/PlayerGet.hpp"
#include "types.h"

typedef u32 RupeeId;
enum RupeeId_ {
    /* 0 */ RupeeId_Green,
    /* 1 */ RupeeId_Blue,
    /* 2 */ RupeeId_Red,
    /* 3 */ RupeeId_BigGreen,
    /* 4 */ RupeeId_BigRed,
    /* 5 */ RupeeId_Gold,
    /* 6 */ RupeeId_6,
    /* 7 */ RupeeId_7,
};

class Actor_9c {
public:
    /* 00 (vtable) */
    /* 04 */

    /* 00 */ virtual void vfunc_00(); // corresponds to func_ov000_02097c14
    /* 04 */ virtual void vfunc_04(); // corresponds to func_ov000_02097c20
    /* 08 */

    Actor_9c();
    void func_ov000_02097bec();
};

class ActorRupee_c4 : public Actor_c4 {
public:
    ActorRupee_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorRupee : public Actor {
public:
    /* 00 (base) */
    /* 94 */ u16 mUnk_94;
    /* 96 */ u16 mUnk_96;
    /* 98 */ u16 mUnk_98;
    /* 9A */ u16 mUnk_9A;
    /* 9C */ Actor_9c mUnk_9C;
    /* A0 */ unk32 mUnk_A0;
    /* A4 */ unk32 mUnk_A4;
    /* A8 */ unk32 mUnk_A8;
    /* AC */ unk32 mUnk_AC;
    /* B0 */ unk32 mUnk_B0;
    /* B4 */ unk32 mUnk_B4;
    /* B8 */ unk32 mUnk_B8;
    /* BC */ unk32 mUnk_BC;
    /* C0 */ unk32 mUnk_C0;
    /* C4 */ ActorRupee_c4 mUnk_C4;
    /* E8 */ unk32 mUnk_E8;
    /* EC */ s16 mUnk_EC;
    /* F0 */ UnkStruct_PlayerGet_ec mUnk_F0;
    /* F4 */ bool mUnk_F4;
    /* F5 */ unk8 mUnk_F5;
    /* F6 */ unk8 mUnk_F6;
    /* F7 */ unk8 mUnk_F7;
    /* F8 */

    ActorRupee();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 2C */ virtual void vfunc_2c(unk32 param1) override;
    /* 4C */ virtual ~ActorRupee() override;

    void func_ov017_020bf9c8(Actor *param1);

    void func_ov031_020e8d2c(Vec3p *param1, u8 param2, unk32 param3, unk32 param4);
    void func_ov031_020e8fec();
    void func_ov031_020e9068();
    void func_ov031_020e9108();
    void func_ov031_020e91a8();
    void func_ov031_020e9234();
    void func_ov031_020e9254();
    void func_ov031_020e92e0();
    void func_ov031_020e9310();
    void func_ov031_020e9428();
    void func_ov031_020e942c();
    void func_ov031_020e9430();
    void func_ov031_020e9434();
    void func_ov031_020e9438();
    void func_ov031_020e9450();
    void func_ov031_020e94d4();
    void func_ov031_020e951c();
    void func_ov031_020e9598();
    void func_ov031_020e95ac();
    void func_ov031_020e95b0();
    void func_ov031_020e95c0();
    void func_ov031_020e9610();
    void func_ov031_020e9624();
    void func_ov031_020e9638();
    void func_ov031_020e96bc();
    void func_ov031_020e970c();
    void func_ov031_020e9740();
    void func_ov031_020e9838();
    void func_ov031_020e98c4();
    void func_ov031_020e9904(unk32 param1);
    void func_ov031_020e9b88();
    void func_ov031_020e9be8();
    bool func_ov031_020e9d54();
    void func_ov031_020e9d94();
    bool func_ov031_020e9e5c();
};

class ActorProfileRupee : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileRupee();

    /* 0C */ virtual Actor *Create();

    static ActorProfileRupee *GetProfile();
};
