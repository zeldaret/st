#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorProfile_ov000_020b3018.hpp"
#include "ActorSpinut.hpp"
#include "global.h"
#include "types.h"

enum ActorFleeingSpinutState_ {
    ActorFleeingSpinutState_0 = 0,
    ActorFleeingSpinutState_1 = 1,
    ActorFleeingSpinutState_2 = 2,
    ActorFleeingSpinutState_3 = 3,
    ActorFleeingSpinutState_4 = 4,
    ActorFleeingSpinutState_5 = 5,
    ActorFleeingSpinutState_6 = 6,
    ActorFleeingSpinutState_Max
};

class ActorFleeingSpinut_1EC {
public:
    /* 00 */ u8 mUnk_00;
    /* 04 */ UnkStruct_027e0960_TableEntry_04 *mUnk_04;
    /* 08 */ UnkStruct_027e0960_TableEntry_04 *mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ VecFx32 mUnk_1C;
    /* 28 */ u16 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */

    ActorFleeingSpinut_1EC();

    void func_ov032_0211cc48(VecFx32 *param1);
    UnkStruct_027e0960_TableEntry_04 *func_ov032_0211cd20(VecFx32 *param1);
    u16 *func_ov032_0211cd60(VecFx32 *param1, s16 *param2, VecFx32 *param3, unk32 param4, unk32 param5, unk32 param6);
    void func_ov032_0211cf74();
    void func_ov032_0211cfac(unk32 param1);
    void func_ov032_0211d028();
    bool func_ov032_0211d040(VecFx32 *param1);
    void func_ov032_0211d08c(VecFx32 *param1);
    bool func_ov032_0211d2e4(UnkStruct_027e0960_TableEntry_04_Base *param1);
    UnkStruct_027e0960_TableEntry_04 *func_ov032_0211d384(VecFx32 *param1);
    unk32 func_ov032_0211d568(VecFx32 *param1, UnkStruct_027e0960_TableEntry_04_Base *param2,
                              UnkStruct_027e0960_TableEntry_04_Base *param3);
    bool func_ov032_0211d674(VecFx32 *param1, UnkStruct_027e0960_TableEntry_04_Base *param2);
    bool func_ov032_0211d6d8(VecFx32 *param1, UnkStruct_027e0960_TableEntry_04_Base *param2, unk32 param3);
    void func_ov032_0211d7e8(VecFx32 *param1);
    void func_ov032_0211d80c();
    void func_ov032_0211d830(UnkStruct_027e0960_TableEntry_04 *param1);
    void func_ov032_0211d910();
    bool func_ov032_0211d920(VecFx32 *param1);
    bool func_ov032_0211d864(VecFx32 *param1);
    bool func_ov032_0211da0c(unk32 param1, VecFx32 *param2);
};

class ActorFleeingSpinut : public Actor_Derived2 {
public:
    /* 000 (base) */
    /* 0AE */ STRUCT_PAD(0x0AE, 0x0B0);
    /* 0B0 */ ModelRender_ov000_020b1a1c mUnk_0B0;
    /* 110 */ ActorSpinut_110 mUnk_110;
    /* 1A0 */ STRUCT_PAD(0x1A0, 0x1BC);
    /* 1BC */ ActorState mPrevState;
    /* 1BE */ unk16 mUnk_1BE;
    /* 1C0 */ Actor_9C mUnk_1C0;
    /* 1E0 */ Actor_Derived1_94 mUnk_1E0;
    /* 1EC */ ActorFleeingSpinut_1EC mUnk_1EC;
    /* 21C */ fx32 mUnk_21C;
    /* 220 */ unk32 mUnk_220;
    /* 224 */ bool mUnk_224;

    ActorFleeingSpinut();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 30 */ virtual void vfunc_30(Actor_vfunc_30 *param1) override;
    /* 4C */ virtual ~ActorFleeingSpinut() override;

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
    bool func_ov032_0211c9d8();
    bool func_ov032_0211ca20();
    bool func_ov032_0211ca6c();
    bool func_ov032_0211cab8(unk32 param1, unk32 param2);
    void func_ov032_0211cb2c();
};

class ActorProfileFleeingSpinut : public ActorProfile_ov000_020b3018 {
public:
    /* 00 (base) */
    /* 3C */ STRUCT_PAD(0x3C, 0x44);
    /* 44 */

    ActorProfileFleeingSpinut();

    /* 0C */ virtual Actor *Create();

    static ActorProfileFleeingSpinut *GetProfile();
};
