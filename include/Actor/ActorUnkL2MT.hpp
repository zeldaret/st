//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkL2MT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkL2MT();

    /* 4C */ virtual ~ActorUnkL2MT() override;

    void func_ov044_0212c954(void);
    void func_ov044_0212c974(void);
    void func_ov044_0212c978(void);
};

class ActorProfileUnkL2MT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkL2MT();
    ~ActorProfileUnkL2MT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkL2MT *GetProfile();
};
