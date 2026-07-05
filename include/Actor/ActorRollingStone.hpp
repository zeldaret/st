#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorShotArrow.hpp"
#include "Actor_Derived1.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"
#include "global.h"
#include "types.h"

enum ActorRollingStoneState_ {
    ActorRollingStoneState_0  = 0,
    ActorRollingStoneState_1  = 1,
    ActorRollingStoneState_2  = 2,
    ActorRollingStoneState_3  = 3,
    ActorRollingStoneState_4  = 4,
    ActorRollingStoneState_5  = 5,
    ActorRollingStoneState_6  = 6,
    ActorRollingStoneState_7  = 7,
    ActorRollingStoneState_8  = 8,
    ActorRollingStoneState_9  = 9,
    ActorRollingStoneState_10 = 10,
    ActorRollingStoneState_MAX
};

class ActorRollingStone;

class ActorRollingStone_104 : UnkStruct_ov031_Items_00 {
public:
    /* 00 (vtable) */
    /* 04 */

    // data_ov031_02114a5c
    /* 0C */ virtual bool vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 param2) override; // func_ov031_020f8354
    /* 10 */ virtual void vfunc_10() override;                                                     // func_ov031_020f83e4
    /* 14 */
};

class ActorRollingStone_D4 : UnkStruct_ov031_Items_01 {
public:
    /* 00 (vtable) */
    /* 2C */ ActorRollingStone *mUnk_2C;
    /* 30 */

    ActorRollingStone_D4(ActorRollingStone *param1) {
        this->mUnk_2C = param1;
    }

    // data_ov031_02114a40
    /* 10 */ virtual void vfunc_10(Actor *param1) override; // func_ov031_020f849c
};

class ActorRollingStone : public Actor {
public:
    /* 000 (base) */
    /* 094 */ UnkSystem6_Derived2 mUnk_94;
    /* 09C */ unk8 mUnk_9C;
    /* 09D */ STRUCT_PAD(0x9D, 0xA0);
    /* 0A0 */ Actor_Derived1_94 mUnk_A0;
    /* 0B0 */ ActorShotArrow_140 mUnk_B0;
    /* 0D4 */ ActorRollingStone_D4 mUnk_D4;
    /* 104 */ ActorRollingStone_104 mUnk_104;
    /* 108 */ STRUCT_PAD(0x108, 0x10C);
    /* 10C */ Mat3p mUnk_10C;
    /* 130 */ UnkStruct_PlayerGet_ec mUnk_130[0x2];
    /* 138 */ unk16 mUnk_138;
    /* 13C */ Cylinder mUnk_13C;
    /* 14C */ unk32 mUnk_14C;
    /* 150 */ unk16 mUnk_150;
    /* 152 */ unk16 mUnk_152;
    /* 154 */ unk16 mUnk_154;
    /* 156 */ unk16 mUnk_156;
    /* 158 */ bool mUnk_158;
    /* 159 */ bool mUnk_159;
    /* 15A */ s8 mUnk_15A;
    /* 15B */ s8 mUnk_15B;
    /* 15C */ Actor_Derived1_EC mUnk_15C;
    /* 17C */

    ActorRollingStone();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override; // func_ov031_020f869c
    /* 20 */ virtual void vfunc_20() override;             // func_ov031_020f878c
    /* 2C */ virtual void vfunc_2C(unk32 param1) override; // func_ov031_020f8948
    /* 4C */ virtual ~ActorRollingStone() override;        // ? & func_ov031_020f9d60
    /* 54 */

    void SetState(ActorState state);
    void func_ov031_020f8880();
    void func_ov031_020f89f4();
    void func_ov031_020f8a04();
    void func_ov031_020f8a2c();
    void func_ov031_020f8a38();
    void func_ov031_020f8a3c();
    void func_ov031_020f8a58();
    void func_ov031_020f8b58();
    void func_ov031_020f8bc4();
    void func_ov031_020f8de8();
    void func_ov031_020f8ed4();
    void func_ov031_020f8f0c();
    void func_ov031_020f8f10();
    void func_ov031_020f8f30();
    void func_ov031_020f9018();
    void func_ov031_020f9050();
    void func_ov031_020f916c();
    void func_ov031_020f91ac();
    void func_ov031_020f9250();
    void func_ov031_020f92cc();
    void func_ov031_020f9340();
    void func_ov031_020f93bc();
    void func_ov031_020f9494();
    void func_ov031_020f9554();
    void func_ov031_020f97cc();
    void func_ov031_020f98e4();
    void func_ov031_020f9af4();
    void func_ov031_020f9af8();
    bool func_ov031_020f9ba4();
    void func_ov031_020f9cc0();
};

class ActorProfileRollingStone : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileRollingStone();
    ~ActorProfileRollingStone();

    /* 0C */ virtual Actor *Create();

    static ActorProfileRollingStone *GetProfile();
};
