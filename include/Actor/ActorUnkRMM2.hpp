//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMM2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMM2();

    /* 4C */ virtual ~ActorUnkRMM2() override;

    void func_ov088_02172248(void);
    void func_ov088_02172298(void);
};

class ActorProfileUnkRMM2 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMM2();
    ~ActorProfileUnkRMM2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMM2 *GetProfile();
};
