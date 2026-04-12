//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKIMA_c4 : public Actor_c4 {
public:
    ActorUnkKIMA_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkKIMA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKIMA();

    /* 4C */ virtual ~ActorUnkKIMA() override;

    void func_ov060_02160334(void);
    void func_ov060_02160340(void);
    void func_ov060_02160348(void);
};

class ActorProfileUnkKIMA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkKIMA();
    ~ActorProfileUnkKIMA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKIMA *GetProfile();
};
