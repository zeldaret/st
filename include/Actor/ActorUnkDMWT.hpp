//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMWT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMWT();

    /* 4C */ virtual ~ActorUnkDMWT() override;

    void func_ov088_021718ec(void);
    void func_ov088_02171940(void);
    void func_ov088_02171950(void);
    void func_ov088_02171964(void);
    void func_ov088_02171978(void);
    void func_ov088_021719c8(void);
};

class ActorProfileUnkDMWT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDMWT();
    ~ActorProfileUnkDMWT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMWT *GetProfile();
};
