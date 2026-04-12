//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWOB_c4 : public Actor_c4 {
public:
    ActorUnkSWOB_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSWOB_A4 {
public:
    /* 00 */ unk32 mUnk_00;

    ActorUnkSWOB_A4() {
        this->mUnk_00 = 0;
    };
};

class ActorUnkSWOB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */ unk32 mUnk_98;
    /* 9C */ unk16 mUnk_9C;
    /* 9C */ unk16 mUnk_9E;
    /* A0 */ unk16 mUnk_A0;
    /* A0 */ unk16 mUnk_A2;
    /* A4 */ ActorUnkSWOB_A4 mUnk_A4[5];
    /* B8 */

    ActorUnkSWOB();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 4C */ virtual ~ActorUnkSWOB() override;

    bool func_ov000_0209a948(void);
    void func_ov000_0209a9b4(unk32 param1);
    void func_ov000_0209aa30(void);
};

class ActorProfileUnkSWOB : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSWOB();
    ~ActorProfileUnkSWOB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSWOB *GetProfile();
};
