//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFRP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFRP();

    /* 4C */ virtual ~ActorUnkEFRP() override;

    void func_ov098_02181910(void);
    void func_ov098_02181a30(void);
    void func_ov098_02181acc(void);
    void func_ov098_02181b1c(void);
    void func_ov098_02181b30(void);
    void func_ov098_02181b88(void);
    void func_ov098_02181ba4(void);
};

class ActorProfileUnkEFRP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFRP();
    ~ActorProfileUnkEFRP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFRP *GetProfile();
};
