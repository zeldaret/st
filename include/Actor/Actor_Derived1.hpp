#pragma once

#include "Actor/Actor.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e0960.hpp"
#include "types.h"

class ActorUnk_vfunc_B0 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk16 mUnk_14;
    /* 16 */ unk16 mUnk_16;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ bool mUnk_20;
    /* 21 */ bool mUnk_21;
    /* 22 */ unk8 mUnk_22;
    /* 23 */ unk8 mUnk_23;
    /* 24 */ Actor *mpActor;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */ unk16 mUnk_30;
    /* 32 */ unk16 mUnk_32;
    /* 34 */ VecFx32 mUnk_34;
    /* 40 */ VecFx32 mUnk_40;
    /* 4C */

    ActorUnk_vfunc_B0();
};

class Actor_Derived1_94_vfunc_10 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x04);
    /* 04 */ unk32 mUnk_04;
    /* 08 */ STRUCT_PAD(0x04, 0x08);
    /* 0C */ unk32 mUnk_0C;
    /* 10 */
};

class Actor_Derived1_94_0C {
public:
    /* 00 (vtable) */
    /* 04 */

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual Actor_Derived1_94_vfunc_10 *vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1C */ virtual void vfunc_1C();
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual void vfunc_28();
    /* 2C */ virtual void vfunc_2C();
    /* 30 */ virtual unk32 vfunc_30();
};

class Actor_Derived1_94 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk16 mUnk_08;
    /* 0A */ unk16 mUnk_0A;
    /* 0C */ Actor_Derived1_94_0C *mUnk_0C;
    /* 10 */

    Actor_Derived1_94();
    ~Actor_Derived1_94();
};

class Actor_Derived1_94_Derived1 : public Actor_Derived1_94 {
public:
    /* 00 (base) */

    Actor_Derived1_94_Derived1(Actor_Derived1_94_0C *param1) {
        this->mUnk_0C = param1;
    }
};

class Actor_Derived1_a4 {
public:
    /* 00 */ ModelRender *mpModelRender;
    /* 08 */ unk16 mUnk_04;
    /* 08 */ unk16 mUnk_06;
    /* 0A */ unk32 mUnk_08;
    /* 0C */

    void func_01ffc6d4(u16 param1, VecFx32 *pos);

    Actor_Derived1_a4(ModelRender *pModelRender) {
        this->mpModelRender = pModelRender;
        this->mUnk_04       = 0;
        this->mUnk_08       = 0;
    }

    ~Actor_Derived1_a4() {}
};

class Actor_Derived1_EC {
public:
    /* 00 */ UnkStruct_027e0960_TableEntry *mUnk_00;
    /* 04 */ u8 mUnk_04;
    /* 05 */ u8 mUnk_05;
    /* 06 */ bool mUnk_06;
    /* 07 */ u8 mUnk_07;
    /* 08 */ u16 mUnk_08;
    /* 0C */ VecFx32 mUnk_0C;
    /* 18 */

    Actor_Derived1_EC();
    ~Actor_Derived1_EC() {}

    void func_ov024_020d6680(const VecFx32 *param1, u8 *param2);
    void func_ov024_020d66c0(const VecFx32 *param1, unk32 param2);
    bool func_ov024_020d6704();
    void func_ov024_020d6730();
    u16 *func_ov024_020d69d8(VecFx32 *pPos, s16 *pAngle, VecFx32 *pVel, unk32 param4, s16 param5, unk32 param6);
    u16 *func_ov024_020d6b7c(VecFx32 *pPos, s16 *pAngle, VecFx32 *pVel, unk32 param4, s16 param5, unk32 param6);
    u16 *func_ov024_020d6d80(VecFx32 *pPos, VecFx32 *pVel);
};

class Actor_Derived1 : public Actor {
public:
    /* 000 (base) */
    /* 094 */ Actor_Derived1_94_Derived1 mUnk_094;
    /* 0A4 */ Actor_Derived1_a4 mUnk_0A4;
    /* 0B0 */ u16 mUnk_0B0;
    /* 0B4 */ unk32 mUnk_0B4;
    /* 0B8 */ unk32 mUnk_0B8;
    /* 0BC */ ActorRef mUnk_0BC;
    /* 0C0 */ Vec3p mUnk_0C0;
    /* 0CC */ unk16 mUnk_0CC;
    /* 0CC */ unk16 mUnk_0CE;
    /* 0D0 */ unk32 mUnk_0D0;
    /* 0D4 */ unk32 mUnk_0D4;
    /* 0D8 */ unk16 mUnk_0D8;
    /* 0D8 */ unk16 mUnk_0DA;
    /* 0DC */ unk16 mUnk_0DC;
    /* 0DC */ unk16 mUnk_0DE;
    /* 0E0 */ unk16 mUnk_0E0;
    /* 0E0 */ unk16 mUnk_0E2;
    /* 0E4 */ void *mUnk_0E4; // callback
    /* 0E8 */ unk16 mUnk_0E8;
    /* 0E8 */ unk16 mUnk_0EA;
    /* 0EC */ Actor_Derived1_EC mUnk_0EC;
    /* 104 */ Cylinder mUnk_104;
    /* 114 */ unk32 mUnk_114;
    /* 118 */ unk32 mUnk_118;
    /* 11C */ unk32 mUnk_11C;

    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C() override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 4C */ virtual ~Actor_Derived1();
    /* 54 */ virtual void vfunc_54(unk32 param1);
    /* 58 */ virtual void vfunc_58(s16 param1) = 0;
    /* 5C */ virtual void vfunc_5C();
    /* 60 */ virtual void vfunc_60();
    /* 64 */ virtual bool vfunc_64();
    /* 68 */ virtual void vfunc_68();
    /* 6C */ virtual void vfunc_6C();
    /* 70 */ virtual void vfunc_70();
    /* 74 */ virtual void vfunc_74();
    /* 78 */ virtual void vfunc_78();
    /* 7C */ virtual unk32 vfunc_7C();
    /* 80 */ virtual bool vfunc_80(unk32 param1, unk32 param2);
    /* 84 */ virtual unk32 vfunc_84();
    /* 88 */ virtual bool vfunc_88();
    /* 8C */ virtual bool vfunc_8C();
    /* 90 */ virtual unk32 vfunc_90();
    /* 94 */ virtual void vfunc_94();
    /* 98 */ virtual void vfunc_98(unk32 param1);
    /* 9C */ virtual void vfunc_9C();
    /* A0 */ virtual unk32 vfunc_A0();
    /* A4 */ virtual void vfunc_A4();
    /* A8 */ virtual unk32 vfunc_A8();
    /* AC */ virtual void vfunc_AC();
    /* B0 */ virtual void vfunc_B0();
    /* B4 */ virtual void vfunc_B4();
    /* B8 */ virtual void vfunc_B8();
    /* BC */

    Actor_Derived1(ModelRender *param1, Actor_Derived1_94_0C *param2);

    // overlay 0
    void func_ov000_020a8ae0(fx32 param1);
    bool func_ov000_020a8db0();
    bool func_ov000_020a8dd0();
    void func_ov000_020a8df0(ActorRef param1, unk32 param2);
    void func_ov000_020a8e9c(VecFx32 *param1);
    void func_ov000_020a8ff4();
    void func_ov000_020a91b8(VecFx32 *param1, unk32 param2);
    void func_ov000_020a9200();
    bool func_ov000_020a9248(unk32 param1);
    void func_ov000_020a94b0();
    void func_ov000_020a95d8();
    void func_ov000_020a9a20();
    void func_ov000_020a9a34();
    void func_ov000_020a9a50();
    void func_ov000_020a9a94();
    void func_ov000_020a9abc();

    static void func_ov000_020a9804();

    // overlay 31
    void func_ov031_020e3ca4();
};
