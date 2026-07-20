//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMA3_C4 : public Actor_C4 {
public:
    ActorUnkRMA3_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMA3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMA3();

    /* 4C */ virtual ~ActorUnkRMA3() override;

    void func_ov068_02160840(void);
    void func_ov068_02160868(void);
    void func_ov068_0216086c(void);
};

class ActorProfileUnkRMA3 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMA3();
    ~ActorProfileUnkRMA3();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMA3 *GetProfile();
};
