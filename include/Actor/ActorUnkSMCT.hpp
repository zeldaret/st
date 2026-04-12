//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSMCT_c4 : public Actor_c4 {
public:
    ActorUnkSMCT_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSMCT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSMCT();

    /* 4C */ virtual ~ActorUnkSMCT() override;

    void func_ov091_02169c9c(void);
    void func_ov091_02169cd8(void);
};

class ActorProfileUnkSMCT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSMCT();
    ~ActorProfileUnkSMCT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSMCT *GetProfile();
};
