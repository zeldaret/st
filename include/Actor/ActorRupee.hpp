#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
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

struct Actor_c4_stack {
    unk32 param1;
    unk32 param2;
};

class Actor_c4_Base {
public:
    Actor_c4_Base(void *param1, unk32 param2);
};

class Actor_c4 : public Actor_c4_Base {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk16 mUnk_08;
    /* 08 */ unk16 mUnk_0a;
    /* 0c */ unk16 mUnk_0c;
    /* 0c */ unk16 mUnk_0e;
    /* 10 */ unk16 mUnk_10;
    /* 10 */ unk16 mUnk_12;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1c */ unk32 mUnk_1c;
    /* 20 */ Actor *mUnk_20;
    /* 24 */

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2);
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0c */ virtual void vfunc_0c(unk32 param1);
    /* 10 */

    Actor_c4(Actor *param1);
    void func_ov031_020f637c();
    void func_ov031_020f6374();
    void func_ov031_020f6384(unk32 param1);
    unk32 func_ov031_020f62e4(unk32 param1, unk32 param2);
};

class ActorRupee : public Actor {
public:
    /* 00 (base) */
    /* 94 */ u16 mUnk_94;
    /* 96 */ u16 mUnk_96;
    /* 98 */ u16 mUnk_98;
    /* 9a */ u16 mUnk_9a;
    /* 9c */ Actor_9c mUnk_9c;
    /* a0 */ unk32 mUnk_a0;
    /* a4 */ unk32 mUnk_a4;
    /* a8 */ unk32 mUnk_a8;
    /* ac */ unk32 mUnk_ac;
    /* b0 */ unk32 mUnk_b0;
    /* b4 */ unk32 mUnk_b4;
    /* b8 */ unk32 mUnk_b8;
    /* bc */ unk32 mUnk_bc;
    /* c0 */ unk32 mUnk_c0;
    /* c4 */ Actor_c4 mUnk_c4;
    /* e8 */ unk32 mUnk_e8;
    /* ec */ s16 mUnk_ec;
    /* f0 */ UnkStruct_PlayerGet_ec mUnk_f0;
    /* f4 */ bool mUnk_f4;
    /* f5 */ unk8 mUnk_f5;
    /* f6 */ unk8 mUnk_f6;
    /* f7 */ unk8 mUnk_f7;
    /* f8 */

    ActorRupee();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 2c */ virtual void vfunc_2c(unk32 param1) override;
    /* 4c */ virtual ~ActorRupee() override;

    void func_ov000_02098a88(unk32 param1, unk32 param2);

    void func_ov017_020bf9c8(ActorUnk_ov000_020a8bb0 *param1);

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

class ActorTypeRupee : public ActorType {
public:
    static ActorTypeRupee gInstance;

    /* 00 (base) */

    ActorTypeRupee();

    /* 0c */ virtual Actor *Create();

    static ActorTypeRupee *GetInstance();
};
