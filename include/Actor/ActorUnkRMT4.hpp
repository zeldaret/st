//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMT4_C4 : public Actor_C4 {
public:
    ActorUnkRMT4_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMT4 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMT4();

    /* 4C */ virtual ~ActorUnkRMT4() override;

    void func_ov061_021584f4(void);
};

class ActorProfileUnkRMT4 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMT4();
    ~ActorProfileUnkRMT4();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMT4 *GetProfile();
};
