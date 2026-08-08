//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMM2_C4 : public Actor_C4 {
public:
    ActorUnkRMM2_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMM2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMM2();

    /* 4C */ virtual ~ActorUnkRMM2() override;

    void func_ov088_02172248(void);
    void func_ov088_02172298(void);
};

class ActorProfileUnkRMM2 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMM2();
    ~ActorProfileUnkRMM2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMM2 *GetProfile();
};
