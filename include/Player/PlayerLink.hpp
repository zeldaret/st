#pragma once

#include "Player/PlayerActorBase.hpp"

class UnkStruct_027e0ce0_40;
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

    PlayerLinkActor_A0(unk32 param1, UnkStruct_027e0ce0_40 *param2, PlayerActorBase *pPlayer, PlayerLinkActor_9C *param4);
    ~PlayerLinkActor_A0();

    // overlay 0
    u32 func_ov000_02093718();
    u8 func_ov000_0209378c(); // bool?

    // overlay 1
    void func_ov001_020bd2e0();
    void func_ov001_020bd358();
    void func_ov001_020bd388(bool param1, bool param2);
};

class PlayerLinkActor_A4 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ bool mUnk_08;
    /* 09 */ unk8 mUnk_09;
    /* 0A */ unk8 mUnk_0A;
    /* 0B */ unk8 mUnk_0B;
    /* 0C */

    PlayerLinkActor_A4(PlayerActorBase *pPlayer, PlayerLinkActor_A0 *param2);
    ~PlayerLinkActor_A4();
};

class PlayerLinkActor_134 {
public:
    /* 00 */ UnkStruct_PlayerGet_ec mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */

    PlayerLinkActor_134() :
        mUnk_00(NULL) {
        this->mUnk_04 = 0;
    }

    ~PlayerLinkActor_134() {
        this->func_ov031_020db0fc();
    }

    // overlay 31
    void func_ov031_020db0fc();
};

class PlayerLinkActor_1B0 : public UnkSystem7 {
public:
    /* 00 (base) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    PlayerLinkActor_1B0();
    // ~PlayerLinkActor_1B0() {}
};

class PlayerLinkActor : public PlayerActorBase {
public:
    /* 000 (base) */
    /* 094 */ bool *mUnk_094;
    /* 098 */ unk32 mUnk_098;
    /* 09C */ PlayerLinkActor_9C *mUnk_09C;
    /* 0A0 */ PlayerLinkActor_A0 *mUnk_0A0;
    /* 0A4 */ PlayerLinkActor_A4 mUnk_0A4;
    /* 0B0 */ u32 mUnk_0B0;
    /* 0B4 */ bool mUnk_0B4;
    /* 0B5 */ bool mUnk_0B5;
    /* 0B6 */ bool mUnk_0B6;
    /* 0B7 */ bool mUnk_0B7;
    /* 0B8 */ bool mUnk_0B8;
    /* 0B9 */ bool mUnk_0B9;
    /* 0BA */ bool mUnk_0BA;
    /* 0BB */ bool mUnk_0BB;
    /* 0BC */ CellAnimObject mUnk_0BC;
    /* 134 */ PlayerLinkActor_134 *mUnk_134;
    /* 138 */ CellAnimObject mUnk_138; // sanctuary link icon animation
    /* 1B0 */ PlayerLinkActor_1B0 mUnk_1B0[3];
    /* 1D4 */

    PlayerLinkActor(unk32 param1, unk32 param2, UnkStruct_027e0ce0_40 *param3, bool *param4);
    ~PlayerLinkActor();

    // overlay 1
    void func_ov001_020bcb60(unk32 param1);
    void func_ov001_020bcb70();
    void func_ov001_020bcba8();
    void func_ov001_020bcbd0(VecFx32 *pVec);

    // overlay 21
    void func_ov021_020ebda0();
    void func_ov021_020ebda0(int);

    // overlay 31
    void func_ov031_020d96a4(PlayerLinkActor_A0 *param1, UnkStruct_027e0ce0_40 *param2);
    void func_ov031_020d96a4(int, PlayerLinkActor_A0 *param1, UnkStruct_027e0ce0_40 *param2);
    void func_ov031_020dccf0();
    void func_ov031_020dccf0(int);
};
