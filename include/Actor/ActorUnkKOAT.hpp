//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKOAT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKOAT();

    /* 4C */ virtual ~ActorUnkKOAT() override;

    void func_ov058_02141e54(void);
    void func_ov058_0214210c(void);
    void func_ov058_02142228(void);
    void func_ov058_021422f0(void);
};

class ActorProfileUnkKOAT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkKOAT();
    ~ActorProfileUnkKOAT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKOAT *GetProfile();
};
