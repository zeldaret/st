//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFIK : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFIK();

    /* 4C */ virtual ~ActorUnkEFIK() override;

    void func_ov000_0209c100(void);
    void func_ov000_0209c140(void);
    void func_ov000_0209c2d0(void);
    void func_ov000_0209c2e4(void);
};

class ActorProfileUnkEFIK : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkEFIK();
    ~ActorProfileUnkEFIK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFIK *GetProfile();
};
