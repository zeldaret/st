//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMEQ_C4 : public Actor_C4 {
public:
    ActorUnkDMEQ_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkDMEQ : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMEQ();

    /* 4C */ virtual ~ActorUnkDMEQ() override;

    void func_ov088_0216e31c(void);
    void func_ov088_0216e718(void);
    void func_ov088_0216e738(void);
};

class ActorProfileUnkDMEQ : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkDMEQ();
    ~ActorProfileUnkDMEQ();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMEQ *GetProfile();
};
