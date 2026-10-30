#pragma once

#include "Actor_Derived1.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"

class ActorCharacter;

enum ActorCharacterState_ {
    ActorCharacterState_0 = 0,
    ActorCharacterState_1 = 1,
    ActorCharacterState_2 = 2,
    ActorCharacterState_3 = 3,
    ActorCharacterState_4 = 4,
    ActorCharacterState_5 = 5,
    ActorCharacterState_6 = 6,
    ActorCharacterState_7 = 7,
    ActorCharacterState_8 = 8,
    ActorCharacterState_Max
};

class ActorCharacter_12C : public UnkStruct_ov031_Items_00 {
public:
    /* 00 (base) */
    /* 04 */ PAD(0x04, 0x08);
    /* 08 */ ActorCharacter *mUnk_08;
    /* 0C */ VecFx16Cpp mUnk_0C;
    /* 12 */

    ActorCharacter_12C(ActorCharacter *param1);

    /* 00 */ virtual ~ActorCharacter_12C() override;

    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) override;
    /* 0C */ virtual bool vfunc_0C(RefStruct ref, UnkStruct_ov031_020e54d4 *param2, const VecFx32 *param3,
                                   const VecFx32 *param4) override;
};

class ActorCharacter : public Actor_Derived1 {
public:
    /* 000 (base) */
    /* 120 */ unk16 mUnk_120;
    /* 120 */ unk16 mUnk_122;
    /* 120 */ unk16 mUnk_124;
    /* 120 */ unk16 mUnk_126;
    /* 128 */ unk32 mUnk_128;
    /* 12C */ ActorCharacter_12C mUnk_12C;
    /* 140 */ unk32 mUnk_140;
    /* 14C */ UnkStruct_ov000_0207de98 mUnk_144;
    /* 158 */ u8 mUnk_158;
    /* 15C */ unk32 *mUnk_15C;
    /* 160 */

    ActorCharacter(ModelRender *param1, UnkStruct_ov000_020b31f0 *param2);

    // _ZTV19data_ov031_021132a8
    /* 020 */ virtual void Update() override;
    /* 04C */ virtual ~ActorCharacter() override;
    /* 054 */ virtual void vfunc_54(unk32 param1) override;
    /* 058 */ virtual void SetState(ActorState state) override;
    /* 0AC */ virtual void vfunc_AC() override;
    /* 0BC */ virtual void vfunc_0BC();
    /* 0C0 */ virtual void vfunc_0C0();
    /* 0C4 */ virtual void vfunc_0C4();
    /* 0C8 */ virtual void vfunc_0C8();
    /* 0CC */ virtual void vfunc_0CC();
    /* 0D0 */ virtual void vfunc_0D0();
    /* 0D4 */ virtual void vfunc_0D4();
    /* 0D8 */ virtual void vfunc_0D8();
    /* 0DC */ virtual void vfunc_0DC();
    /* 0E0 */ virtual void vfunc_0E0();
    /* 0E4 */ virtual void vfunc_0E4();
    /* 0E8 */ virtual void vfunc_0E8();
    /* 0EC */ virtual void vfunc_0EC();
    /* 0F0 */ virtual void vfunc_0F0();
    /* 0F4 */ virtual void vfunc_0F4();
    /* 0F8 */ virtual void vfunc_0F8();
    /* 0FC */ virtual void vfunc_0FC();
    /* 100 */ virtual void vfunc_100();
    /* 104 */ virtual void vfunc_104();
    /* 108 */ virtual bool vfunc_108(unk32 param1);
    /* 10C */ virtual void vfunc_10C();
    /* 110 */ virtual void vfunc_110();

    void func_ov031_020e79bc();
    bool func_ov031_020e812c();
};
