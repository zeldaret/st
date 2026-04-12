//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor TCOW ---

class ActorUnkTCOW_c4 : public Actor_c4 {
public:
    ActorUnkTCOW_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkTCOW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTCOW();

    /* 4C */ virtual ~ActorUnkTCOW() override;
};

class ActorProfileUnkTCOW : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTCOW();
    ~ActorProfileUnkTCOW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTCOW *GetProfile();
};

// --- Actor WCAS ---

class ActorUnkWCAS_c4 : public Actor_c4 {
public:
    ActorUnkWCAS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkWCAS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWCAS();

    /* 4C */ virtual ~ActorUnkWCAS() override;
};

class ActorProfileUnkWCAS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWCAS();
    ~ActorProfileUnkWCAS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWCAS *GetProfile();
};
