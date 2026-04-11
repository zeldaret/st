//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCAWA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCAWA();

    /* 4C */ virtual ~ActorUnkCAWA() override;

    void func_ov061_02158b88(void);
    void func_ov061_02158ba8(void);
    void func_ov061_02158ccc(void);
    void func_ov061_02158cf8(void);
    void func_ov061_02158d4c(void);
};

class ActorProfileUnkCAWA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCAWA();
    ~ActorProfileUnkCAWA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCAWA *GetProfile();
};
