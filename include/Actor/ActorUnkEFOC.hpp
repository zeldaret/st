//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFOC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFOC();

    /* 4C */ virtual ~ActorUnkEFOC() override;

    void func_ov094_0216ee98(void);
    void func_ov094_0216ef0c(void);
    void func_ov094_0216f030(void);
    void func_ov094_0216f128(void);
    void func_ov094_0216f13c(void);
    void func_ov094_0216f1f8(void);
    void func_ov094_0216f20c(void);
    void func_ov094_0216f250(void);
    void func_ov094_0216f28c(void);
    void func_ov094_0216f3c0(void);
    void func_ov094_0216f3e4(void);
    void func_ov094_0216f3f8(void);
    void func_ov094_0216f440(void);
    void func_ov094_0216f4ac(void);
    void func_ov094_0216f508(void);
    void func_ov094_0216f52c(void);
};

class ActorProfileUnkEFOC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFOC();
    ~ActorProfileUnkEFOC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFOC *GetProfile();
};
