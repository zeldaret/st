//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBLBL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBLBL();

    /* 4C */ virtual ~ActorUnkBLBL() override;

    void func_ov038_0211eadc(void);
    void func_ov038_0211eb0c(void);
    void func_ov038_0211eb14(void);
    void func_ov038_0211eb64(void);
    void func_ov038_0211eb90(void);
    void func_ov038_0211ebbc(void);
};

class ActorProfileUnkBLBL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBLBL();
    ~ActorProfileUnkBLBL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBLBL *GetProfile();
};
