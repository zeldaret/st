//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBDS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRBDS();

    /* 4C */ virtual ~ActorUnkRBDS() override;

    void func_ov087_02161244(void);
    void func_ov087_021612b4(void);
    void func_ov087_021612b8(void);
    void func_ov087_021612cc(void);
    void func_ov087_021612e0(void);
    void func_ov087_021612ec(void);
};

class ActorProfileUnkRBDS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRBDS();
    ~ActorProfileUnkRBDS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRBDS *GetProfile();
};
