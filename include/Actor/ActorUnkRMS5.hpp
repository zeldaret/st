//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMS5_C4 : public Actor_C4 {
public:
    ActorUnkRMS5_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMS5 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMS5();

    /* 4C */ virtual ~ActorUnkRMS5() override;

    void func_ov065_021593bc(void);
};

class ActorProfileUnkRMS5 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMS5();
    ~ActorProfileUnkRMS5();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMS5 *GetProfile();
};
