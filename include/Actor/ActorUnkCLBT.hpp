//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCLBT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCLBT();

    /* 4C */ virtual ~ActorUnkCLBT() override;

    void func_ov096_0217a7cc(void);
    void func_ov096_0217a80c(void);
    void func_ov096_0217a858(void);
    void func_ov096_0217a894(void);
    void func_ov096_0217a8cc(void);
    void func_ov096_0217a910(void);
    void func_ov096_0217a948(void);
    void func_ov096_0217a9e4(void);
};

class ActorProfileUnkCLBT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkCLBT();
    ~ActorProfileUnkCLBT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCLBT *GetProfile();
};
