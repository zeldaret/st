#pragma once

#include "Player/PlayerActorBase.hpp"

class PlayerLinkActor_9C {
public:
    /* 000 (vtable) */
    /* 004 */ STRUCT_PAD(0x04, 0x154);
    /* 154 */

    PlayerLinkActor_9C();

    // data_ov000_020b2a8c
    /* 00 */ virtual ~PlayerLinkActor_9C();
};

class PlayerLinkActor_A0_38;

class PlayerLinkActor_A0_38_04_Base : public LinkList<PlayerLinkActor_A0_38_04_Base> {
public:
    /* 00 (vtable) */
    /* 04 (base) */
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ PlayerLinkActor_A0_38 *mUnk_10;
    /* 14 */

    PlayerLinkActor_A0_38_04_Base(PlayerLinkActor_A0_38 *param1) {
        this->mUnk_0C = 0;
        this->mUnk_10 = param1;
    }

    /* 00 */ virtual void vfunc_00();
};

class PlayerLinkActor_A0_38_04 : public PlayerLinkActor_A0_38_04_Base {
public:
    /* 00 (vtable) */
    /* 04 (base) */
    /* 0C */

    PlayerLinkActor_A0_38_04(PlayerLinkActor_A0_38 *param1) :
        PlayerLinkActor_A0_38_04_Base(param1) {}

    // data_ov024_020d8250
    /* 00 */ virtual void vfunc_00() override;
};

class PlayerLinkActor_A0_38_18 : public PlayerLinkActor_A0_38_04_Base {
public:
    /* 00 (vtable) */
    /* 04 (base) */
    /* 0C */

    PlayerLinkActor_A0_38_18(PlayerLinkActor_A0_38 *param1) :
        PlayerLinkActor_A0_38_04_Base(param1) {}

    // data_ov024_020d8244
    /* 00 */ virtual void vfunc_00() override;
};

class PlayerLinkActor_A0_38 {
public:
    /* 00 */ unk16 mUnk_00;
    /* 02 */ unk16 mUnk_02;
    /* 04 */ PlayerLinkActor_A0_38_04 mUnk_04;
    /* 18 */ PlayerLinkActor_A0_38_18 mUnk_18;
    /* 2C */ Vec2s mUnk_2C;
    /* 30 */ u16 mUnk_30;
    /* 32 */ unk16 mUnk_32;
    /* 34 */ u16 mUnk_34;
    /* 36 */ bool mUnk_36;
    /* 37 */ bool mUnk_37;
    /* 38 */

    PlayerLinkActor_A0_38();
    ~PlayerLinkActor_A0_38();

    void func_ov024_020d19d8();
};

class PlayerLinkActor_A0 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x38);
    /* 38 */ PlayerLinkActor_A0_38 *mUnk_38;
    /* 3C */ STRUCT_PAD(0x3C, 0x94);
    /* 94 */

    PlayerLinkActor_A0();
};

class PlayerLinkActor_A4 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk8 mUnk_08;
    /* 09 */ unk8 mUnk_09;
    /* 0A */ unk8 mUnk_0A;
    /* 0B */ unk8 mUnk_0B;
    /* 0C */
};

class PlayerLinkActor_134 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */

    PlayerLinkActor_134() {
        this->mUnk_00 = 0;
        this->mUnk_04 = 0;
    }
};

class PlayerLinkActor_1B0 : public UnkSystem7 {
public:
    /* 00 (base) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    PlayerLinkActor_1B0();
    ~PlayerLinkActor_1B0();
};

class PlayerLinkActor : public PlayerActorBase {
public:
    /* 000 (base) */
    /* 09C */ PlayerLinkActor_9C *mUnk_9C;
    /* 0A0 */ PlayerLinkActor_A0 *mUnk_A0;
    /* 0A4 */ PlayerLinkActor_A4 mUnk_A4;
    /* 0B0 */ unk32 mUnk_B0;
    /* 0B4 */ unk8 mUnk_B4;
    /* 0B5 */ unk8 mUnk_B5;
    /* 0B6 */ unk8 mUnk_B6;
    /* 0B7 */ unk8 mUnk_B7;
    /* 0B8 */ unk8 mUnk_B8;
    /* 0B9 */ unk8 mUnk_B9;
    /* 0BA */ unk8 mUnk_BA;
    /* 0BB */ unk8 mUnk_BB;
    /* 0BC */ CellAnimObject mUnk_BC;
    /* 134 */ PlayerLinkActor_134 *mUnk_134;
    /* 138 */ CellAnimObject mUnk_138; // sanctuary link icon animation
    /* 1B0 */ PlayerLinkActor_1B0 mUnk_1B0[3];
    /* 1D4 */

    PlayerLinkActor(); //! TODO: params
};
