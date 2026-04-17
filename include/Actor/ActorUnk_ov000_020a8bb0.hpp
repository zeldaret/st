#pragma once

#include "Actor/Actor.hpp"
#include "Unknown/Common.hpp"
#include "types.h"

class ActorUnk_vfunc_b0 {
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
    /* 20 */ unk8 mUnk_20;
    /* 21 */ unk8 mUnk_21;
    /* 22 */ unk8 mUnk_22;
    /* 23 */ unk8 mUnk_23;
    /* 24 */ void *mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */ unk16 mUnk_30;
    /* 32 */ unk16 mUnk_32;
    /* 34 */ Vec3p mUnk_34;
    /* 40 */ Vec3p mUnk_40;
    /* 4C */

    ActorUnk_vfunc_b0();
};

class ActorUnk_ov000_020a8bb0_94 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk16 mUnk_08;
    /* 0A */ unk16 mUnk_0A;
    /* 0C */ unk32 mUnk_0C;

    ActorUnk_ov000_020a8bb0_94();
    ~ActorUnk_ov000_020a8bb0_94();
};

class ActorUnk_ov000_020a8bb0_a4 {
public:
    /* 00 */ UnkSystem4 *mUnk_00;
    /* 08 */ unk16 mUnk_04;
    /* 08 */ unk16 mUnk_06;
    /* 0A */ unk32 mUnk_08;
    /* 0C */

    void func_01ffc6d4(u16 param1, Vec3p *pos);

    ActorUnk_ov000_020a8bb0_a4() {}
    ~ActorUnk_ov000_020a8bb0_a4() {}
};

class ActorUnk_ov000_020a8bb0_ec {
public:
    void func_ov024_020d6668();
};

class ActorUnk_ov000_020a8bb0 : public Actor {
public:
    /* 000 (base) */
    /* 094 */ ActorUnk_ov000_020a8bb0_94 mUnk_094;
    /* 0A4 */ ActorUnk_ov000_020a8bb0_a4 mUnk_0A4;
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
    /* 0E4 */ unk32 mUnk_0E4;
    /* 0E8 */ unk16 mUnk_0E8;
    /* 0E8 */ unk16 mUnk_0EA;
    /* 0EC */ ActorUnk_ov000_020a8bb0_ec mUnk_0EC;
    /* 0F0 */ unk32 mUnk_0F0;
    /* 0F4 */ unk32 mUnk_0F4;
    /* 0F8 */ unk32 mUnk_0F8;
    /* 0FC */ unk32 mUnk_0FC;
    /* 100 */ unk32 mUnk_100;
    /* 104 */ unk32 mUnk_104;
    /* 108 */ unk32 mUnk_108;
    /* 10C */ unk32 mUnk_10C;
    /* 110 */ unk32 mUnk_110;
    /* 114 */ unk32 mUnk_114;
    /* 118 */ unk32 mUnk_118;
    /* 11C */ unk32 mUnk_11C;

    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1c() override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2c(unk32 param1) override;
    /* 4C */ virtual ~ActorUnk_ov000_020a8bb0();
    /* 54 */ virtual void vfunc_54(unk32 param1);
    /* 54 */ virtual void vfunc_58(unk32 param1) = 0;
    /* 5C */ virtual void vfunc_5c();
    /* 60 */ virtual void vfunc_60();
    /* 64 */ virtual bool vfunc_64();
    /* 68 */ virtual void vfunc_68();
    /* 6C */ virtual void vfunc_6c();
    /* 70 */ virtual void vfunc_70();
    /* 74 */ virtual void vfunc_74();
    /* 78 */ virtual void vfunc_78();
    /* 7C */ virtual unk32 vfunc_7c();
    /* 80 */ virtual unk32 vfunc_80();
    /* 84 */ virtual unk32 vfunc_84();
    /* 88 */ virtual unk32 vfunc_88();
    /* 8C */ virtual unk32 vfunc_8c();
    /* 90 */ virtual unk32 vfunc_90();
    /* 94 */ virtual void vfunc_94();
    /* 98 */ virtual void vfunc_98();
    /* 9C */ virtual void vfunc_9c();
    /* A0 */ virtual unk32 vfunc_a0();
    /* A4 */ virtual void vfunc_a4();
    /* A8 */ virtual unk32 vfunc_a8();
    /* AC */ virtual void vfunc_ac();
    /* B0 */ virtual void vfunc_b0();
    /* B4 */ virtual void vfunc_b4();
    /* B8 */ virtual void vfunc_b8();
    /* BC */

    void func_ov000_020a8ae0(q20 param1);
    ActorUnk_ov000_020a8bb0(UnkSystem4 *param1, unk32 param2);
    unk32 func_ov000_020a8db0();
    unk32 func_ov000_020a8dd0();
    void func_ov000_020a8df0(ActorRef param1, unk32 param2);
    void func_ov000_020a8e9c(Vec3p *param1);
    void func_ov000_020a8ff4();
    void func_ov000_020a91b8(Vec3p *param1, unk32 param2);
    void func_ov000_020a9200();
    void func_ov000_020a9248();
    void func_ov000_020a94b0();
    void func_ov000_020a95d8();
    static void func_ov000_020a9804();
    void func_ov000_020a9a20();
    void func_ov000_020a9a34();
    void func_ov000_020a9a50();
    void func_ov000_020a9a94();
    void func_ov000_020a9abc();
    void func_ov000_020a9ae0();
    void func_ov000_020a9afc();

    void func_ov031_020e3ca4();
};
