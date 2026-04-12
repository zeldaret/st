//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCASL_c4 : public Actor_c4 {
public:
    ActorUnkCASL_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkCASL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCASL();

    /* 4C */ virtual ~ActorUnkCASL() override;

    void func_ov060_0215eafc(void);
    void func_ov060_0215eb10(void);
    void func_ov060_0215eb24(void);
};

class ActorProfileUnkCASL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCASL();
    ~ActorProfileUnkCASL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCASL *GetProfile();
};
