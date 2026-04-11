//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMWS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMWS();

    /* 4C */ virtual ~ActorUnkDMWS() override;

    void func_ov088_021716d8(void);
    void func_ov088_0217172c(void);
    void func_ov088_0217173c(void);
    void func_ov088_02171750(void);
    void func_ov088_02171764(void);
};

class ActorProfileUnkDMWS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDMWS();
    ~ActorProfileUnkDMWS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMWS *GetProfile();
};
