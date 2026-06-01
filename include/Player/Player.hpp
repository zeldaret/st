#pragma once

#include "LinkList.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_ov000_0208f820.hpp"
#include "math.hpp"
#include "types.h"

class PlayerActorBase_5C {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ void *mUnk_10;
    /* 14 */
};

class PlayerActorBase_70 {
public:
    /* 000 */ STRUCT_PAD(0x00, 0x160);
    /* 160 */

    PlayerActorBase_70();
};

class PlayerActorBase_74 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x34);
    /* 34 */

    PlayerActorBase_74();
};

class PlayerActorBase {
public:
    /* 00 */ VecFx32 mPos;
    /* 0C */ VecFx32 mPrevPos;
    /* 18 */ VecFx32 mVel;
    /* 24 */ VecFx32 mAccel;
    /* 30 */ u16 mAngle;
    /* 32 */ u8 mInvincibilityTimer;
    /* 33 */ u8 mInvincibilityIconTimer; // the blinking icon on top-screen
    /* 34 */ unk32 mUnk_34;
    /* 38 */ UnkStruct_PlayerGet_64 mUnk_38;
    /* 44 */ unk32 mUnk_44;
    /* 48 */ unk32 mUnk_48;
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ unk32 mUnk_50;
    /* 54 */ unk32 mUnk_54;
    /* 58 */ unk32 mUnk_58;
    /* 5C */ PlayerActorBase_5C mUnk_5C;
    /* 70 */ PlayerActorBase_70 *mUnk_70;
    /* 74 */ PlayerActorBase_74 *mUnk_74;
    /* 78 */ STRUCT_PAD(0x78, 0x84);
    /* 84 */ UnkStruct_ov019_020d24c8_28_258 mUnk_84;
    /* 9C */

    PlayerActorBase();
};

class PlayerActor_9C {
public:
    /* 000 (vtable) */
    /* 004 */ STRUCT_PAD(0x04, 0x154);
    /* 154 */

    PlayerActor_9C();

    // data_ov000_020b2a8c
    /* 00 */ virtual ~PlayerActor_9C();
};

class PlayerActor_A0_38;

class PlayerActor_A0_38_04_Base : public LinkList<PlayerActor_A0_38_04_Base> {
public:
    /* 00 (vtable) */
    /* 04 (base) */
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ PlayerActor_A0_38 *mUnk_10;
    /* 14 */

    PlayerActor_A0_38_04_Base(PlayerActor_A0_38 *param1) {
        this->mUnk_0C = 0;
        this->mUnk_10 = param1;
    }

    /* 00 */ virtual void vfunc_00();
};

class PlayerActor_A0_38_04 : public PlayerActor_A0_38_04_Base {
public:
    /* 00 (vtable) */
    /* 04 (base) */
    /* 0C */

    PlayerActor_A0_38_04(PlayerActor_A0_38 *param1) :
        PlayerActor_A0_38_04_Base(param1) {}

    // data_ov024_020d8250
    /* 00 */ virtual void vfunc_00() override;
};

class PlayerActor_A0_38_18 : public PlayerActor_A0_38_04_Base {
public:
    /* 00 (vtable) */
    /* 04 (base) */
    /* 0C */

    PlayerActor_A0_38_18(PlayerActor_A0_38 *param1) :
        PlayerActor_A0_38_04_Base(param1) {}

    // data_ov024_020d8244
    /* 00 */ virtual void vfunc_00() override;
};

class PlayerActor_A0_38 {
public:
    /* 00 */ unk16 mUnk_00;
    /* 02 */ unk16 mUnk_02;
    /* 04 */ PlayerActor_A0_38_04 mUnk_04;
    /* 18 */ PlayerActor_A0_38_18 mUnk_18;
    /* 2C */ Vec2s mUnk_2C;
    /* 30 */ u16 mUnk_30;
    /* 32 */ unk16 mUnk_32;
    /* 34 */ u16 mUnk_34;
    /* 36 */ bool mUnk_36;
    /* 37 */ bool mUnk_37;
    /* 38 */

    PlayerActor_A0_38();
    ~PlayerActor_A0_38();

    void func_ov024_020d19d8();
};

class PlayerActor_A0 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x38);
    /* 38 */ PlayerActor_A0_38 *mUnk_38;
    /* 3C */ STRUCT_PAD(0x3C, 0x94);
    /* 94 */

    PlayerActor_A0();
};

class PlayerActor_A4 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk8 mUnk_08;
    /* 09 */ unk8 mUnk_09;
    /* 0A */ unk8 mUnk_0A;
    /* 0B */ unk8 mUnk_0B;
    /* 0C */
};

class PlayerActor_134 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */

    PlayerActor_134() {
        this->mUnk_00 = 0;
        this->mUnk_04 = 0;
    }
};

class PlayerActor_1B0 : public UnkSystem7 {
public:
    /* 00 (base) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    PlayerActor_1B0();
    ~PlayerActor_1B0();
};

class PlayerActor : public PlayerActorBase {
public:
    /* 000 (base) */
    /* 09C */ PlayerActor_9C *mUnk_9C;
    /* 0A0 */ PlayerActor_A0 *mUnk_A0;
    /* 0A4 */ PlayerActor_A4 mUnk_A4;
    /* 0B0 */ unk32 mUnk_B0;
    /* 0B4 */ unk8 mUnk_B4;
    /* 0B5 */ unk8 mUnk_B5;
    /* 0B6 */ unk8 mUnk_B6;
    /* 0B7 */ unk8 mUnk_B7;
    /* 0B8 */ unk8 mUnk_B8;
    /* 0B9 */ unk8 mUnk_B9;
    /* 0BA */ unk8 mUnk_BA;
    /* 0BB */ unk8 mUnk_BB;
    /* 0BC */ UnkSubStruct19 mUnk_BC;
    /* 134 */ PlayerActor_134 *mUnk_134;
    /* 138 */ UnkSubStruct19 mUnk_138; // sanctuary link icon animation
    /* 1B0 */ PlayerActor_1B0 mUnk_1B0[3];
    /* 1D4 */

    PlayerActor(); //! TODO: params
};
