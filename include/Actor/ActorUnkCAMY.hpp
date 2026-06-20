//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCAMY_C4 : public Actor_C4 {
public:
    ActorUnkCAMY_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkCAMY : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCAMY();

    /* 4C */ virtual ~ActorUnkCAMY() override;

    void func_ov036_0211b0c4(void);
    void func_ov036_0211b11c(void);
    void func_ov036_0211b148(void);
};

class ActorProfileUnkCAMY : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCAMY();
    ~ActorProfileUnkCAMY();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCAMY *GetProfile();
};
