//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor FMAS ---

class ActorUnkFMAS_c4 : public Actor_c4 {
public:
    ActorUnkFMAS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkFMAS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFMAS();

    /* 4C */ virtual ~ActorUnkFMAS() override;
};

class ActorProfileUnkFMAS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFMAS();
    ~ActorProfileUnkFMAS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFMAS *GetProfile();
};

// --- Actor FMLS ---

class ActorUnkFMLS_c4 : public Actor_c4 {
public:
    ActorUnkFMLS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkFMLS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFMLS();

    /* 4C */ virtual ~ActorUnkFMLS() override;
};

class ActorProfileUnkFMLS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFMLS();
    ~ActorProfileUnkFMLS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFMLS *GetProfile();
};
