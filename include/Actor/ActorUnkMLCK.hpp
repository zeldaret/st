#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorUnkTLKT.hpp"
#include "FileSelect/FileSelectUnkDraw.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMLCK;

class ActorUnkMLCK_D8 : public ActorUnkTLKT_9C_Base {
public:
    /* 00 (vtable) */
    /* 08 */ ActorUnkMLCK *mUnk_08;
    /* 0C */

    ActorUnkMLCK_D8(ActorUnkMLCK *actor) {
        this->mUnk_04b = true;
        this->mUnk_05  = true;
        this->mUnk_08  = actor;
    }

    /* 00 */ virtual void vfunc2_00() override; // func_ov031_020fb1b0
    /* 04 */ virtual void vfunc2_04() override; // func_ov031_020fb1cc
};

class ActorUnkMLCK_A0 {
public:
    /* 00 (vtable) */

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual bool vfunc_04();
    /* 08 */ virtual void vfunc_08();
};

struct ActorUnkMLCK_C4_00 {
    /* 00 */ unk16 unk_00;
    /* 02 */ s16 unk_02;
    /* 04 */ unk32 unk_04;
    /* 08 */ unk32 unk_08;
    /* 0C */ unk32 unk_0C;
    /* 10 */ unk32 unk_10;
    /* 14 */ unk16 unk_14[];
};

class ActorUnkMLCK_C4 {
public:
    /* 00 */ ActorUnkMLCK_C4_00 *mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk16 mUnk_0C;
    /* 0E */ u16 mUnk_0E;
    /* 10 */ unk16 mUnk_10;
    /* 12 */ u16 mUnk_12;
    /* 14 */

    ActorUnkMLCK_C4() :
        mUnk_00(NULL),
        mUnk_04(0),
        mUnk_08(-1),
        mUnk_0C(0),
        mUnk_0E(0),
        mUnk_10(0),
        mUnk_12(0) {}

    // overlay 31
    void func_ov031_020fb184();

    // overlay 102
    bool func_ov102_021847e8(unk32 param1, unk32 param2);
};

class ActorUnkMLCK : public Actor, public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* A0 */ ActorUnkMLCK_A0 *mUnk_A0[5];
    /* B4 */ ActorUnkMLCK_A0 **mUnk_B4;
    /* B8 */ unk32 mUnk_B8;
    /* BC */ unk32 mUnk_BC;
    /* C0 */ u16 mUnk_C0;
    /* C2 */ vu16 mUnk_C2;
    /* C4 */ ActorUnkMLCK_C4 mUnk_C4;
    /* D8 */ ActorUnkMLCK_D8 mUnk_D8;
    /* E4 */ ActorUnkMLCK_D8 mUnk_E4;
    /* F0 */ bool mUnk_F0;
    /* F1 */ bool mUnk_F1;
    /* F2 */ bool mUnk_F2;
    /* F2 */ bool mUnk_F3;
    /* F4 */ unk32 mUnk_F4;

    ActorUnkMLCK();

    /// (Actor)
    // overlay 31
    /* 18 */ virtual bool vfunc_18(unk32 param1) override;

    // overlay 102
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;

    /// (FileSelectManager_UnkDrawBase)
    // overlay 31
    /* 54 */ virtual void vfunc_54(unk32 param1, unk32 param2) override;
    /* 58 */ virtual void vfunc_58(unk32 param1, unk32 param2) override;
    /* 5C */ virtual void vfunc_5C(unk32 param1) override;
    /* 60 */ virtual void vfunc_60() override;

    /* 64 */ virtual void vfunc_64(unk32 param1) override;
    /* 68 */ virtual void vfunc_68() override;
    /* 6C */ virtual void vfunc_6C() override;
    /* 70 */ virtual void vfunc_70() override;

    void func_ov031_020faeb0();
    void func_ov031_020faf24();
    void func_ov031_020fb104();
    void func_ov031_020fb11c();
    void func_ov031_020fb1e8(ActorUnkMLCK_A0 *param1);
    bool func_ov031_020fb204(unk32 param1);
};

class ActorProfileUnkMLCK : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkMLCK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMLCK *GetProfile();
};
