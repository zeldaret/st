//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkAJSP_c4 : public Actor_c4 {
public:
    ActorUnkAJSP_c4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkAJSP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkAJSP();

    /* 4C */ virtual ~ActorUnkAJSP() override;

    void func_ov068_02160a08(void);
    void func_ov068_02160ad0(void);
};

class ActorProfileUnkAJSP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkAJSP();
    ~ActorProfileUnkAJSP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkAJSP *GetProfile();
};
