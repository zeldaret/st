//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBLS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRBLS();

    /* 4C */ virtual ~ActorUnkRBLS() override;

    void func_ov063_0215f3d4(void);
    void func_ov063_0215f3e8(void);
    void func_ov063_0215f474(void);
    void func_ov063_0215f488(void);
    void func_ov063_0215f49c(void);
    void func_ov063_0215f500(void);
};

class ActorProfileUnkRBLS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRBLS();
    ~ActorProfileUnkRBLS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRBLS *GetProfile();
};
