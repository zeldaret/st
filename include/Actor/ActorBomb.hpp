#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor_Derived1.hpp"
#include "global.h"
#include "types.h"

enum ActorBombState_ {
    ActorBombState_0 = 0,
    ActorBombState_1 = 1,
    ActorBombState_2 = 2,
    ActorBombState_3 = 3,
    ActorBombState_4 = 4,
    ActorBombState_5 = 5,
    ActorBombState_6 = 6,
    ActorBombState_Max
};

class ActorBomb_unk : public UnkSystem7 {
public:
    /* 00 (base) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    ActorBomb_unk();
};

class ActorBomb_19C : public UnkStruct_ov031_Items_01 {
public:
    /* 00 (base) */
    /* 2C */ Actor *mUnk_2C;
    /* 30 */

    ActorBomb_19C(Actor *param1);

    // data_ov031_02112c94
    /* 10 */ virtual void vfunc_10(Actor *actor) override;
};

class ActorBomb_180 : public UnkStruct_ov031_Items_00 {
public:
    /* 00 (base) */
    /* 04 */ u16 mUnk_04;
    /* 08 */ Actor *mUnk_08;
    /* 0C */ VecFx32 mUnk_0C; // cylinder ?
    /* 18 */ unk32 mUnk_18;
    /* 1C */

    ActorBomb_180(Actor *param1);

    // data_ov031_02112c78
    /* 00 */ virtual ~ActorBomb_180() override;
    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1) override;
    /* 0C */ virtual bool vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 *param2, unk32 param3) override;
    /* 10 */ virtual bool vfunc_10(ActorRef param1, unk32 param2) override;
};

class ActorBomb_ov031_020e2134 : public UnkStruct_ov031_Items_00 {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x4, 0x8);
    /* 08 */

    // data_ov031_02112cb0
    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1) override;
};

class ActorBomb : public Actor {
public:
    /* 000 (base) */
    /* 094 */ ModelRender mUnk_094;
    /* 0F4 */ UnkSystem5 mUnk_0F4;
    /* 114 */ unk32 mUnk_114;
    /* 118 */ STRUCT_PAD(0x118, 0x134);
    /* 134 */ Actor_9C mUnk_134;
    /* 154 */ Cylinder mUnk_154;
    /* 164 */ ActorBomb_unk mUnk_164[0x2];
    /* 17C */ VecFx32 *mUnk_17C;
    /* 180 */ ActorBomb_180 mUnk_180;
    /* 19C */ ActorBomb_19C mUnk_19C;
    /* 1CC */ VecFx32 mUnk_1CC;
    /* 1D8 */ unk32 mUnk_1D8;
    /* 1D8 */ unk32 mUnk_1DC;
    /* 1E0 */ ActorRef mUnk_1E0;
    /* 1E4 */ ActorRef mUnk_1E4;
    /* 1E8 */ u8 mUnk_1E8;
    /* 1E8 */ u8 mUnk_1E9;
    /* 1EA */ volatile u16 mUnk_1EA;
    /* 1EC */ u16 mUnk_1EC;
    /* 1EE */ bool mUnk_1EE;
    /* 1EF */ bool mUnk_1EF;
    /* 1F0 */ bool mUnk_1F0;
#if IS_JP
    /* 1F1 */ bool mUnk_1F1;
#else
    /* 1F1 */ STRUCT_PAD(0x1F1, 0x1F2);
#endif
    /* 1F2 */ STRUCT_PAD(0x1F2, 0x1F4);
    /* 1F4 */ Actor_Derived1_94 mUnk_1F4;
    /* 200 */

    ActorBomb();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 38 */ virtual bool Grab(ActorGrabParams grabParams) override;
    /* 3C */ virtual bool Drop(ActorGrabParams grabParams, const VecFx32 *pVel) override;

    bool IsInternalTimerOut() {
        if (this->mUnk_1EA < this->mUnk_1EC) {
            ++this->mUnk_1EA;
            return false;
        }
        return true;
    }

    // check if really in ActorUnkBomb
    G3d_Model *func_ov031_020e1540(u16 param1);
    UnkStruct_ov000_02058a84 *func_ov031_020e15d0(u16 param1);
    static void func_ov031_020e1634();
    void func_ov031_020e17f4();

    //
    void func_ov031_020e18a0();
    void SetState(ActorState state);
    void func_ov031_020e1908();
    void func_ov031_020e1920(VecFx32 *param1);
    void func_ov031_020e193c();
    void func_ov031_020e1b1c();
    void func_ov031_020e1b7c();
    void func_ov031_020e1d18();
    void func_ov031_020e1d48();
    bool func_ov031_020e1d58();
    bool func_ov031_020e1d74();
    void func_ov031_020e1da0();
    void func_ov031_020e1ebc();
    void func_ov031_020e1ed8();
    void func_ov031_020e1f18();
    void func_ov031_020e1f88();
    void func_ov031_020e1fe0();
    void func_ov031_020e1fe4();
    void func_ov031_020e2034();
    void func_ov031_020e2064();
    void func_ov031_020e20d8();
    void func_ov031_020e20fc();
    void func_ov031_020e2100();
    void func_ov031_020e2134();
    void func_ov031_020e238c();
    bool func_ov031_020e25bc();
    bool func_ov031_020e262c();
    void func_ov031_020e2680(VecFx32 *param1);
    void func_ov031_020e2780(VecFx32 *param1);
    fx32 func_ov031_020e2820(UnkStruct_ov031_Items_00 *param1);
    fx32 func_ov031_020e295c(UnkStruct_ov031_Items_00 *param1);
    void func_ov031_020e2a9c();
    bool func_ov031_020e2b40();
    void func_ov031_020e2c2c();
};

class ActorProfileBomb : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileBomb();

    /* 0C */ virtual Actor *Create();

    static ActorProfileBomb *GetProfile();
};
