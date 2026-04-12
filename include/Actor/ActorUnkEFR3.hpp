//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFR3_c4 : public Actor_c4 {
public:
    ActorUnkEFR3_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkEFR3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFR3();

    /* 4C */ virtual ~ActorUnkEFR3() override;

    void func_ov083_0215c534(void);
    void func_ov083_0215c5d0(void);
};

class ActorProfileUnkEFR3 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFR3();
    ~ActorProfileUnkEFR3();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFR3 *GetProfile();
};
