//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFBBF : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFBBF();

    /* 4C */ virtual ~ActorUnkFBBF() override;

    void func_ov054_0213d720(void);
    void func_ov054_0213d798(void);
    void func_ov054_0213d8e0(void);
    void func_ov054_0213d934(void);
    void func_ov054_0213d9ac(void);
};

class ActorProfileUnkFBBF : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFBBF();
    ~ActorProfileUnkFBBF();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFBBF *GetProfile();
};
