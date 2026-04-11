//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkIBSP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkIBSP();

    /* 4C */ virtual ~ActorUnkIBSP() override;

    void func_ov044_0212b84c(void);
    void func_ov044_0212b8a0(void);
    void func_ov044_0212b918(void);
    void func_ov044_0212bb74(void);
};

class ActorProfileUnkIBSP : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkIBSP();
    ~ActorProfileUnkIBSP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkIBSP *GetProfile();
};
