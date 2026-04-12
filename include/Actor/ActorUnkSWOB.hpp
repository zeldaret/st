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

class ActorUnkSWOB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSWOB();

    /* 4C */ virtual ~ActorUnkSWOB() override;

    void func_ov000_0209a948(void);
    void func_ov000_0209a9b4(void);
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
