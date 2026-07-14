//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNCWA_C4 : public Actor_C4 {
public:
    ActorUnkNCWA_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkNCWA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNCWA();

    /* 4C */ virtual ~ActorUnkNCWA() override;

    void func_ov062_0215a084(void);
    void func_ov062_0215a220(void);
    void func_ov062_0215a238(void);
    void func_ov062_0215a28c(void);
};

class ActorProfileUnkNCWA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkNCWA();
    ~ActorProfileUnkNCWA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNCWA *GetProfile();
};
