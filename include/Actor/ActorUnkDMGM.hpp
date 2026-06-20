//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMGM_C4 : public Actor_C4 {
public:
    ActorUnkDMGM_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkDMGM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMGM();

    /* 4C */ virtual ~ActorUnkDMGM() override;

    void func_ov088_0216e8b0(void);
    void func_ov088_0216ebb8(void);
    void func_ov088_0216ec78(void);
};

class ActorProfileUnkDMGM : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkDMGM();
    ~ActorProfileUnkDMGM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMGM *GetProfile();
};
