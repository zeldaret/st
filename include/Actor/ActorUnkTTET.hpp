//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTTET : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTTET();

    /* 4C */ virtual ~ActorUnkTTET() override;

    void func_ov026_02122f14(void);
    void func_ov026_02122f94(void);
    void func_ov026_02122ff8(void);
    void func_ov026_021230b0(void);
    void func_ov026_02123110(void);
    void func_ov026_0212344c(void);
    void func_ov026_02123544(void);
    void func_ov026_021235bc(void);
    void func_ov026_021235c4(void);
};

class ActorProfileUnkTTET : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTTET();
    ~ActorProfileUnkTTET();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTTET *GetProfile();
};
