//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkAJCR_c4 : public Actor_c4 {
public:
    ActorUnkAJCR_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkAJCR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkAJCR();

    /* 4C */ virtual ~ActorUnkAJCR() override;

    void func_ov068_0215d7f4(void);
    void func_ov068_0215d8d8(void);
};

class ActorProfileUnkAJCR : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkAJCR();
    ~ActorProfileUnkAJCR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkAJCR *GetProfile();
};
