//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMNCB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMNCB();

    /* 4C */ virtual ~ActorUnkMNCB() override;

    void func_ov094_0216fbc0(void);
    void func_ov094_0216fbd4(void);
    void func_ov094_0216fbdc(void);
    void func_ov094_0216fc74(void);
    void func_ov094_0216fc7c(void);
    void func_ov094_0216fd58(void);
    void func_ov094_0216fe34(void);
    void func_ov094_0216fe70(void);
    void func_ov094_0216ffe8(void);
    void func_ov094_02170374(void);
    void func_ov094_02170584(void);
};

class ActorProfileUnkMNCB : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkMNCB();
    ~ActorProfileUnkMNCB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMNCB *GetProfile();
};
