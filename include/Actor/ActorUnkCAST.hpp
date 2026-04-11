//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCAST : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCAST();

    /* 4C */ virtual ~ActorUnkCAST() override;

    void func_ov060_0215ec7c(void);
    void func_ov060_0215eca4(void);
    void func_ov060_0215eca8(void);
    void func_ov060_0215ecbc(void);
};

class ActorProfileUnkCAST : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCAST();
    ~ActorProfileUnkCAST();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCAST *GetProfile();
};
