#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "FileSelect/FileSelectUnkDraw.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMLCK;

class ActorUnkMLCK_94 : FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 0C */

    // /* 00 */ virtual ~ActorUnkMLCK_94() override; // func_ov031_020fb2fc & func_ov031_020fb2ac
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override; // func_ov031_020fb2ec
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;               // func_ov031_020fb2dc
    /* 20 */ virtual void vfunc_20(unk32 param1, unk32 param2) override; // func_ov031_020fb2cc
    /* 24 */ virtual void vfunc_24() override;                           // func_ov031_020fb2bc
};

class ActorUnkMLCK_D8 {
public:
    /* 00 (vtable) */
    /* 04 */ u8 mUnk_04;
    /* 05 */ u8 mUnk_05;
    /* 08 */ ActorUnkMLCK *mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ u8 mUnk_10;
    /* 11 */ u8 mUnk_11;
    /* 14 */ STRUCT_PAD(0x14, 0x18);
    /* 18 */

    /* 00 */ virtual void vfunc2_00() override; // func_ov031_020fb1b0
    /* 04 */ virtual void vfunc2_04() override; // func_ov031_020fb1cc
};

class ActorUnkMLCK_B4_00 {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ u16 mUnk_0C;
    /* 0E */ u16 mUnk_0E;
    /* 10 */ u16 mUnk_10;
    /* 12 */ u16 mUnk_12;
    /* 14 */

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual bool vfunc_04();
    /* 08 */ virtual void vfunc_08();

    void func_ov031_020fb184();
};

class ActorUnkMLCK_B4 {
public:
    /* 00 */ ActorUnkMLCK_B4_00 *mUnk_00;
    /* 04 */
};

class Actor_ov102_02184950 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    /* 20 */ virtual void vfunc_20() override; // func_ov102_02184644
    /* 24 */ virtual void vfunc_24() override; // func_ov102_021847d4

    /* 54 */ virtual void vfunc_54(unk32 param1, unk32 param2) override;
    /* 58 */ virtual void vfunc_58() override;
    /* 5C */ virtual void vfunc_5C() override;
    /* 60 */ virtual void vfunc_60() override;
    /* 64 */ virtual void vfunc_64(unk32 param1) override;
    /* 68 */ virtual void vfunc_68() override;
    /* 6C */ virtual void vfunc_6C() override;
    /* 70 */ virtual void vfunc_70() override;
};

class ActorUnkMLCK : public Actor_ov102_02184950 {
public:
    /* 00 (base) */
    /* 94 */ ActorUnkMLCK_94 mUnk_94;
    /* A0 */ ActorUnkMLCK_B4 mUnk_A0[0x5];
    /* B4 */ ActorUnkMLCK_B4 *mUnk_B4;
    /* B8 */ unk32 mUnk_B8;
    /* BC */ unk32 mUnk_BC;
    /* C0 */ u16 mUnk_C0;
    /* C2 */ u16 mUnk_C2;
    /* C4 */ ActorUnkMLCK_B4_00 *mUnk_C4;
    /* C8 */ STRUCT_PAD(0xC8, 0xD8);
    /* D8 */ ActorUnkMLCK_D8 mUnk_D8;
    /* F0 */ bool mUnk_F0;
    /* F1 */ bool mUnk_F1;
    /* F2 */ bool mUnk_F2;
    /* F4 */ unk32 mUnk_F4;

    ActorUnkMLCK();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override; // func_ov031_020fac64
    /* 4C */ virtual ~ActorUnkMLCK() override;
    /* 54 */ virtual void vfunc_54(unk32 param1, unk32 param2) override; // func_ov031_020fad88
    /* 58 */ virtual void vfunc_58() override;                           // func_ov031_020fada8
    /* 5C */ virtual void vfunc_5C() override;                           // func_ov031_020fadb4
    /* 60 */ virtual void vfunc_60() override;                           // func_ov031_020fae08
    /* 64 */ virtual void vfunc_64(unk32 param1) override;               // func_ov031_020fad3c
    /* 68 */ virtual void vfunc_68() override;                           // func_ov031_020fae20
    /* 6C */ virtual void vfunc_6C() override;                           // func_ov031_020faeb4
    /* 70 */ virtual void vfunc_70() override;                           // func_ov031_020faf04

    void func_ov031_020faeb0();
    void func_ov031_020faf24();
    void func_ov031_020fb104();
    void func_ov031_020fb11c();
    void func_ov031_020fb1e8(ActorUnkMLCK_B4_00 *param1);
    bool func_ov031_020fb204(unk32 param1);
};

class ActorProfileUnkMLCK : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkMLCK();
    ~ActorProfileUnkMLCK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMLCK *GetProfile();
};
