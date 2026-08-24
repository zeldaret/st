#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorProfile_ov000_020b3018.hpp"
#include "ActorSpinut.hpp"
#include "global.h"
#include "types.h"

enum ActorUnkMKURState_ {
    ActorUnkMKURState_0 = 0,
    ActorUnkMKURState_1 = 1,
    ActorUnkMKURState_2 = 2,
    ActorUnkMKURState_3 = 3,
    ActorUnkMKURState_4 = 4,
    ActorUnkMKURState_5 = 5,
    ActorUnkMKURState_6 = 6,
    ActorUnkMKURState_Max
};

class ActorUnkMKUR_1EC {
public:
    /* 00 */ unk8 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk16 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */

    ActorUnkMKUR_1EC();

    void func_ov032_0211cf74();
    void func_ov032_0211d028();
};

class ActorUnkMKUR : public Actor_Derived2 {
public:
    /* 000 (base) */
    /* 0AE */ STRUCT_PAD(0x0AE, 0x0B0);
    /* 0B0 */ ModelRender_ov000_020b1a1c mUnk_0B0;
    /* 110 */ ActorSpinut_110 mUnk_110;
    /* 1A0 */ STRUCT_PAD(0x1A0, 0x1BC);
    /* 1BC */ unk16 mUnk_1BC;
    /* 1BE */ unk16 mUnk_1BE;
    /* 1C0 */ Actor_9C mUnk_1C0;
    /* 1E0 */ Actor_Derived1_94 mUnk_1E0;
    /* 1EC */ ActorUnkMKUR_1EC mUnk_1EC;
    /* 21C */ unk32 mUnk_21C;
    /* 220 */ unk32 mUnk_220;
    /* 224 */ bool mUnk_224;

    ActorUnkMKUR();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 30 */ virtual void vfunc_30(Actor_vfunc_30 *param1) override;
    /* 4C */ virtual ~ActorUnkMKUR() override;

    void SetState(ActorState state);
    bool func_ov032_0211be04();
    void func_ov032_0211be30();
    void func_ov032_0211bea8();
    void func_ov032_0211bf84();
    void func_ov032_0211bffc();
    void func_ov032_0211c07c();
    void func_ov032_0211c108();
    void func_ov032_0211c2c4();
    void func_ov032_0211c340();
    void func_ov032_0211c444();
    void func_ov032_0211c4d4();
    void func_ov032_0211c53c();
    void func_ov032_0211c5cc();
    void func_ov032_0211c73c();
    void func_ov032_0211c7bc();
    bool func_ov032_0211c938();
    void func_ov032_0211c9d8();
    void func_ov032_0211ca20();
    void func_ov032_0211ca6c();
    void func_ov032_0211cab8();
    void func_ov032_0211cb2c();
    void func_ov032_0211cc48();
    void func_ov032_0211cd20();
    void func_ov032_0211cd60();
    void func_ov032_0211cfac();
    void func_ov032_0211d040();
    void func_ov032_0211d08c();
    void func_ov032_0211d2e4();
    void func_ov032_0211d384();
    void func_ov032_0211d568();
    void func_ov032_0211d674();
    void func_ov032_0211d6d8();
    void func_ov032_0211d7e8();
    void func_ov032_0211d80c();
    void func_ov032_0211d830();
    void func_ov032_0211d864();
    void func_ov032_0211d910();
    void func_ov032_0211d920();
    void func_ov032_0211da0c();
};

class ActorProfileUnkMKUR : public ActorProfile_ov000_020b3018 {
public:
    /* 00 (base) */
    /* 3C */ STRUCT_PAD(0x3C, 0x44);
    /* 44 */

    ActorProfileUnkMKUR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMKUR *GetProfile();
};
