//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNICO : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNICO();

    /* 4C */ virtual ~ActorUnkNICO() override;

    void func_ov062_0215851c(void);
    void func_ov062_02158530(void);
    void func_ov062_0215866c(void);
    void func_ov062_02158690(void);
    void func_ov062_021586bc(void);
    void func_ov062_021586d8(void);
};

class ActorProfileUnkNICO : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkNICO();
    ~ActorProfileUnkNICO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNICO *GetProfile();
};
