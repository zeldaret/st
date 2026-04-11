//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMM3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMM3();

    /* 4C */ virtual ~ActorUnkRMM3() override;

    void func_ov072_0215220c(void);
    void func_ov072_021522dc(void);
    void func_ov072_0215233c(void);
    void func_ov072_02152350(void);
};

class ActorProfileUnkRMM3 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMM3();
    ~ActorProfileUnkRMM3();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMM3 *GetProfile();
};
