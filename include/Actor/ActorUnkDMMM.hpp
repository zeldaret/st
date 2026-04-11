//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMMM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMMM();

    /* 4C */ virtual ~ActorUnkDMMM() override;

    void func_ov088_02171e3c(void);
    void func_ov088_02171e90(void);
    void func_ov088_02171ea0(void);
    void func_ov088_02171eb4(void);
    void func_ov088_02171ec8(void);
    void func_ov088_02171f18(void);
};

class ActorProfileUnkDMMM : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDMMM();
    ~ActorProfileUnkDMMM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMMM *GetProfile();
};
