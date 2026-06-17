//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKEYB_c4 : public Actor_c4 {
public:
    ActorUnkKEYB_c4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkKEYB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKEYB();

    /* 4C */ virtual ~ActorUnkKEYB() override;

    void func_ov041_021235b0(void);
    void func_ov041_021235e8(void);
    void func_ov041_02123630(void);
};

class ActorProfileUnkKEYB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkKEYB();
    ~ActorProfileUnkKEYB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKEYB *GetProfile();
};
