#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

enum ActorUnkSWTMState_ {
    ActorUnkSWTMState_0 = 0,
    ActorUnkSWTMState_1 = 1,
    ActorUnkSWTMState_2 = 2,
    ActorUnkSWTMState_3 = 3,
    ActorUnkSWTMState_Max,
};

class ActorUnkSWTM_B0 {
public:
    /* 00 */ unk32 mUnk_00;

    ActorUnkSWTM_B0() {
        this->mUnk_00 = 0;
    };
};

class ActorUnkSWTM : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */ unk32 mUnk_98;
    /* 9C */ unk16 mUnk_9C;
    /* 9C */ unk16 mUnk_9E;
    /* A0 */ unk16 mUnk_A0;
    /* A0 */ s16 mUnk_A2;
    /* A4 */ u32 mUnk_A4;
    /* A8 */ u32 mUnk_A8;
    /* AC */ bool mUnk_AC;
    /* AC */ unk8 mUnk_AD;               // pad?
    /* AC */ unk8 mUnk_AE;               // pad?
    /* AC */ unk8 mUnk_AF;               // pad?
    /* B0 */ ActorUnkSWTM_B0 mUnk_B0[5]; // unused?
    /* C4 */

    ActorUnkSWTM();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 4C */ virtual ~ActorUnkSWTM() override;

    void SetState(ActorState state);
    bool func_ov000_0209afe4(void);
    unk32 func_ov000_0209b038(void);
    void func_ov000_0209b160(void);
    void func_ov000_0209b184(void);
    void func_ov000_0209b1d0(void);
};

class ActorProfileUnkSWTM : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSWTM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSWTM *GetProfile();
};
