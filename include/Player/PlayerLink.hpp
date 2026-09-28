#pragma once

#include "Player/PlayerActorBase.hpp"

class UnkStruct_027e0ce0_40;
class PlayerActorBase;
class UnkStruct_027e0ce0_40_150;
class PlayerLinkActor_A0_38;
class ItemManager;

class PlayerLinkActor_A0_04 {
public:
    /* 00 */ unk32 mUnk_00;

    // overlay 0
    void func_ov000_02088268();
};

class PlayerLinkActor_A0_10 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;

    /* 00 */ virtual ~PlayerLinkActor_A0_10();

    // overlay 31
    void func_ov031_020e076c();
};

class PlayerLinkActor_A0_14 {
public:
    /* 00 */ unk32 mUnk_00;

    /* 00 */ virtual ~PlayerLinkActor_A0_14();
};

class PlayerLinkActor_A0_18 {
public:
    /* 00 */ unk32 mUnk_00;

    ~PlayerLinkActor_A0_18();

    // overlay 82
    void func_ov082_02157bb8();
};

class PlayerLinkActor_A0_1C {
public:
    /* 00 */ UnkStruct_027e0ce0_40 *mUnk_00;
    /* 04 */ unk16 mUnk_04;
    /* 06 */ bool mUnk_06;
    /* 07 */ STRUCT_PAD(0x07, 0x0C);
    /* 0C */ ActorRef mUnk_0C;
    /* 10 */

    PlayerLinkActor_A0_1C(UnkStruct_027e0ce0_40 *param1);

    // overlay 101
    void func_ov101_02183290();
};

class PlayerLinkActor_A0_28 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    PlayerLinkActor_A0_28(PlayerLinkActor_A0_10 *param1, PlayerLinkActor_A0_14 *param2);
    ~PlayerLinkActor_A0_28();
};

class PlayerLinkActor_A0_2C {
public:
    /* 00 */ unk32 mUnk_00;

    PlayerLinkActor_A0_2C();

    // overlay 0
    void func_ov000_0208e704();
};

class PlayerLinkActor_A0_34 {
public:
    /* 00 */ unk32 mUnk_00;

    PlayerLinkActor_A0_34();

    // overlay 0
    void func_ov000_02082748();
};

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
    /* 00 */ Vec2s mUnk_00;
    /* 04 */ PlayerLinkActor_A0_38_04 mUnk_04;
    /* 18 */ PlayerLinkActor_A0_38_18 mUnk_18;
    /* 2C */ Vec2s mUnk_2C;
    /* 30 */ u16 mUnk_30;
    /* 32 */ unk16 mUnk_32;
    /* 34 */ u16 mUnk_34;
    /* 36 */ bool mUnk_36;
    /* 37 */ bool mUnk_37;
    /* 38 */

    const bool UnknownCheck1(u16 flag, s16 pos, s16 min, s16 max) {
        if (this->mUnk_34 & flag) {
            if (pos > min) {
                return true;
            }
        } else {
            if (pos < max) {
                return true;
            }
        }

        return false;
    }

    PlayerLinkActor_A0_38();
    ~PlayerLinkActor_A0_38();

    // overlay 17
    void func_ov017_020be0a8(unk32 param1);
    void func_ov017_020be0e0(s32 param1, VecFx32 *param2, bool param3, bool param4);

    // overlay 24
    void func_ov024_020d19d8();
};

class PlayerLinkActor_A0 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ PlayerLinkActor_A0_04 *mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ PlayerLinkActor_A0_10 *mUnk_10;
    /* 14 */ PlayerLinkActor_A0_14 *mUnk_14;
    /* 18 */ PlayerLinkActor_A0_18 *mUnk_18;
    /* 1C */ PlayerLinkActor_A0_1C *mUnk_1C;
    /* 20 */ PlayerLinkActor_A0_38 *mUnk_20;
    /* 24 */ void *mUnk_24;
    /* 28 */ PlayerLinkActor_A0_28 *mUnk_28;
    /* 2C */ PlayerLinkActor_A0_2C mUnk_2C;
    /* 30 */ unk32 mUnk_30;
    /* 34 */ PlayerLinkActor_A0_34 mUnk_34;
    /* 38 */ PlayerLinkActor_A0_38 *mUnk_38;
    /* 3C */ STRUCT_PAD(0x3C, 0x5C);
    /* 5C */ UnkStruct_PlayerGet_64 mUnk_5C;
    /* 68 */ unk32 mUnk_68;
    /* 6C */ unk32 mUnk_6C;
    /* 70 */ u32 mUnk_70;
    /* 74 */ unk32 mUnk_74;
    /* 78 */ bool mUnk_78;
    /* 79 */ STRUCT_PAD(0x79, 0x7D);
    /* 7D */ bool mUnk_7D;
    /* 7E */ bool mUnk_7E;
    /* 80 */ void *mUnk_80;
    /* 84 */ unk32 mUnk_84;
    /* 88 */ unk32 mUnk_88;
    /* 8C */ unk32 mUnk_8C;
    /* 90 */ unk32 mUnk_90;
    /* 94 */

    PlayerLinkActor_A0(ItemManager *pItemMgr, UnkStruct_027e0ce0_40 *param2, PlayerActorBase *pPlayer,
                       PlayerLinkActor_9C *param4);
    ~PlayerLinkActor_A0();

    // overlay 0
    void func_ov000_02091ea0();
    bool func_ov000_02091f08(unk32 param1);
    void func_ov000_020921e4(unk32 param1);
    void func_ov000_02092e38();
    bool func_ov000_0209360c();
    void func_ov000_02092648(unk32 param1);
    void func_ov000_02092ea8(unk32 param1, unk32 param2);
    void func_ov000_02092ecc(void *param1, bool param2);
    u8 func_ov000_02093650();
    bool func_ov000_020936c4();
    void func_ov000_020936ec();
    u32 func_ov000_02093718();
    u8 func_ov000_0209378c(); // bool?
    void func_ov000_02093a04();
    void func_ov000_02093fe8();

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

    void func_ov000_02089998(bool param1);
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
    void func_ov031_020db160(bool param1);
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
    /* 094 */ UnkStruct_027e0ce0_40_150 *mUnk_094;
    /* 098 */ PlayerActorBase *mpZelda;
    /* 09C */ PlayerLinkActor_9C *mUnk_09C;
    /* 0A0 */ PlayerLinkActor_A0 *mUnk_0A0;
    /* 0A4 */ PlayerLinkActor_A4 mUnk_0A4;
    /* 0B0 */ u32 mUnk_0B0;
    /* 0B4 */ bool mUnk_0B4;
    /* 0B5 */ bool mUnk_0B5;
    /* 0B6 */ bool mUnk_0B6;
    /* 0B7 */ u8 mUnk_0B7;
    /* 0B8 */ u8 mUnk_0B8;
    /* 0B9 */ bool mUnk_0B9;
    /* 0BA */ bool mUnk_0BA;
    /* 0BB */ bool mUnk_0BB;
    /* 0BC */ CellAnimObject mUnk_0BC;
    /* 134 */ PlayerLinkActor_134 *mUnk_134;
    /* 138 */ CellAnimObject mUnk_138; // sanctuary link icon animation
    /* 1B0 */ PlayerLinkActor_1B0 mUnk_1B0[3];
    /* 1D4 */

    PlayerLinkActor(unk32 param1, ItemManager *param2, UnkStruct_027e0ce0_40 *param3, UnkStruct_027e0ce0_40_150 *param4);
    ~PlayerLinkActor();

    // overlay 1
    void func_ov001_020bcb60(PlayerActorBase *pZelda);
    void func_ov001_020bcb70();
    void func_ov001_020bcba8();
    void func_ov001_020bcbd0(VecFx32 *pVec);

    // overlay 17
    bool func_ov017_020bd6b8();
    unk32 func_ov017_020bd6e0(bool param1);
    void func_ov017_020bd758();
    void func_ov017_020bd788(bool param1);
    void func_ov017_020bdcf4(unk32 param1, unk32 param2);
    void func_ov017_020bdd84(void *param1, unk32 param2);
    void func_ov017_020bdf48(s8 *param1, unk32 param2, void *param3, UnkStruct_ov019_020d24c8_28_258_00 *param4);
    void func_ov017_020be098();

    // overlay 21
    void func_ov021_020ebda0();
    void func_ov021_020ebda0(unk32 param1);

    // overlay 31
    void func_ov031_020d96a4(PlayerLinkActor_A0 *param1, UnkStruct_027e0ce0_40 *param2);
    void func_ov031_020d96a4(int, PlayerLinkActor_A0 *param1, UnkStruct_027e0ce0_40 *param2);
    void func_ov031_020dccf0();
    void func_ov031_020dccf0(unk32 param1);

    // overlay 93
    void func_ov093_0216ce24(unk32 *param1);
};
