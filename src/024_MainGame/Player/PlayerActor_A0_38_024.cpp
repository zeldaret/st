#include "Player/PlayerLink.hpp"

extern "C" void func_ov000_0205be34(void *thisx, unk16 param1);
extern "C" void func_ov000_0205be44(void *thisx, Vec2s *param1, Vec2s *param2, bool param3, bool param4);

struct UnkStruct_auStack_14 {
    unk16 unk_00;
    unk8 unk_02;
};

int dummy; //! TODO: remove
static const Vec2s data_ov024_020d8238(0x40, 0x10);
static const Vec2s data_ov024_020d8234(0x40, 0x10);
static const Vec2s data_ov024_020d8230(0x20, 0x20);
static const Vec2s data_ov024_020d822c(0x20, 0x10);
static const Vec2s data_ov024_020d8228(0x20, 0x40);
static const Vec2s data_ov024_020d8224(0x40, 0x40);

void PlayerLinkActor_A0_38_04::vfunc_00() {
    UnkStruct_auStack_14 spC;
    Vec2s sp8;
    Vec2s sp4;
    bool var_r3;
    bool var_r4;

    func_ov000_0205be34(&spC, 0x28);

    if (this->mUnk_10->mUnk_34 & 0x02) {
        var_r4 = true;
    } else {
        var_r4 = false;
    }

    if (this->mUnk_10->mUnk_34 & 0x01) {
        var_r3 = true;
    } else {
        var_r3 = false;
    }

    sp4.x = data_ov024_020d8224.x;
    sp4.y = data_ov024_020d8224.y;

    sp8.x = this->mUnk_10->mUnk_2C.x;
    sp8.y = this->mUnk_10->mUnk_2C.y;

    func_ov000_0205be44(&spC, &sp8, &sp4, var_r3, var_r4);
}

void PlayerLinkActor_A0_38_18::vfunc_00() {
    UnkStruct_auStack_14 sp3C;
    UnkStruct_auStack_14 sp38;
    UnkStruct_auStack_14 sp34;
    UnkStruct_auStack_14 sp30;
    Vec2s sp2C;
    Vec2s sp28;
    Vec2s sp24;
    Vec2s sp20;
    Vec2s sp1C;
    Vec2s sp18;
    Vec2s sp14;
    Vec2s sp10;
    Vec2s spC;
    Vec2s sp8;
    Vec2s sp4;

    s16 temp_r6 = this->mUnk_10->mUnk_2C.x;
    s16 temp_r7 = this->mUnk_10->mUnk_2C.y;

    if (this->mUnk_10->mUnk_36) {
        func_ov000_0205be34(&sp3C, 0x2A);
        sp3C.unk_02 = 0x14;
        sp24.x      = data_ov024_020d8238.x;
        sp24.y      = data_ov024_020d8238.y;
        sp28.x      = temp_r6;
        sp28.y      = temp_r7 + 0x17;
        func_ov000_0205be44(&sp3C, &sp28, &sp24, false, false);

        func_ov000_0205be34(&sp38, 0x29);
        sp38.unk_02 = 0x1E;

        Vec2us temp1;
        Vec2us temp2;
        temp1.x = data_ov024_020d8228.x;
        temp1.y = data_ov024_020d8228.y;
        temp2.x = (temp_r6 + 0x18) + ROUND_FX32(MUL_FX32(SIN(this->mUnk_10->mUnk_30), FLOAT_TO_FX32(16.0f)));
        temp2.y = temp_r7 - 0x18;
        temp2.y = temp2.y & 0xFFFF; //! TODO: fake match?

        sp1C.x = temp1.x;
        sp1C.y = temp1.y;
        sp20.x = temp2.x;
        sp20.y = temp2.y;

        func_ov000_0205be44(&sp38, &sp20, &sp1C, false, false);

        func_ov000_0205be34(&sp34, 0x2D);
        sp34.unk_02 = 0x1E;
        sp14.x      = data_ov024_020d8234.x;
        sp14.y      = data_ov024_020d8234.y;
        sp18.x      = temp_r6;
        sp18.y      = temp_r7 + 0x28;
        func_ov000_0205be44(&sp34, &sp18, &sp14, false, false);
    } else {
        func_ov000_0205be34(&sp30, 0x2B);
        spC.x  = data_ov024_020d8230.x;
        spC.y  = data_ov024_020d8230.y;
        sp10.x = temp_r6 + 0x10;
        sp10.y = temp_r7 + 0x18;
        func_ov000_0205be44(&sp30, &sp10, &spC, false, false);

        func_ov000_0205be34(&sp2C, 0x2C);
        sp4.x = data_ov024_020d822c.x;
        sp4.y = data_ov024_020d822c.y;
        sp8.x = temp_r6 + 0x10u;
        sp8.y = temp_r7 + 0x08;
        func_ov000_0205be44(&sp2C, &sp8, &sp4, false, false);
    }
}

THUMB_BEGIN

PlayerLinkActor_A0_38::PlayerLinkActor_A0_38() :
    mUnk_00(0xC0),
    mUnk_02(0x80),
    mUnk_04(this),
    mUnk_18(this) {
    this->func_ov024_020d19d8();
}

PlayerLinkActor_A0_38::~PlayerLinkActor_A0_38() {}

void PlayerLinkActor_A0_38::func_ov024_020d19d8() {
    this->mUnk_2C.x = 0x8000;
    this->mUnk_2C.y = 0x8000;
    this->mUnk_30   = 0;
    this->mUnk_32   = 0;
    this->mUnk_34   = 0;
    this->mUnk_36   = false;
    this->mUnk_37   = false;
}

THUMB_END
