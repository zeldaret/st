//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMS4_C4 : public Actor_C4 {
public:
    ActorUnkRMS4_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMS4 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMS4();

    /* 4C */ virtual ~ActorUnkRMS4() override;

    void func_ov065_02159298(void);
};

class ActorProfileUnkRMS4 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMS4();
    ~ActorProfileUnkRMS4();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMS4 *GetProfile();
};
