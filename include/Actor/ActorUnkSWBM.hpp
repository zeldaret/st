#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Player/PlayerGet.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWBM;
enum ActorUnkSWBMState_ {
    ActorUnkSWBMState_0 = 0,
    ActorUnkSWBMState_1 = 1,
    ActorUnkSWBMState_2 = 2,
    ActorUnkSWBMState_Max
};

class ActorUnkSWBM_94 : public UnkStruct_ov031_Items_00_Base {
public:
    /* 00 (base) */
    /* 04 */

    // data_ov031_02113148
    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1) override;
    /* 0C */ virtual bool vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 *param2, unk32 param3) override;
};

class ActorUnkSWBM_98 : public UnkStruct_ov031_Items_01 {
public:
    /* 00 (base) */
    /* 2C */ ActorUnkSWBM *mUnk_2C;
    /* 30 */

    ActorUnkSWBM_98(ActorUnkSWBM *param1) :
        mUnk_2C(param1) {}

    // data_ov031_0211312c
    /* 0C */ virtual bool vfunc_0C(Actor *param1, VecFx32 *vector) override;
    /* 10 */ virtual void vfunc_10(Actor *actor) override;
};

class ActorUnkSWBM_C8 : public UnkStruct_PlayerGet_74_base {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x04, 0x14);
    /* 14 */ ActorUnkSWBM *mUnk_14;
    /* 18 */

    ActorUnkSWBM_C8(ActorUnkSWBM *param1) :
        mUnk_14(param1) {}

    // data_ov031_02113110
    /* 00 */ virtual void vfunc_00(unk32 param1, unk32 param2) override;
};

class ActorUnkSWBM : public Actor {
public:
    /* 000 (base) */
    /* 094 */ ActorUnkSWBM_94 mUnk_094;
    /* 098 */ ActorUnkSWBM_98 mUnk_098;
    /* 0C8 */ ActorUnkSWBM_C8 mUnk_0C8;
    /* 0E0 */ unk16 mUnk_0E0;
    /* 0E4 */ VecFx32 mUnk_0E4[0x3];
    /* 108 */ unk16 mUnk_108;
    /* 10A */ unk16 mUnk_10A;
    /* 10C */

    ActorUnkSWBM();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;

    void func_ov031_020e6d48();
    void func_ov031_020e6d80(unk32 param1);
    void func_ov031_020e6e84(ActorState state);
    static void func_ov031_020e718c(VecFx32 *param0, Mat3p *param1, s32 param2, s16 param3, u16 param4, s16 param5);
};

class ActorProfileUnkSWBM : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSWBM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSWBM *GetProfile();
};
