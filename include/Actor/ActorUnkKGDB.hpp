//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKGDB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKGDB();

    /* 4C */ virtual ~ActorUnkKGDB() override;

    void func_ov041_0212375c(void);
    void func_ov041_02123770(void);
    void func_ov041_021237e4(void);
    void func_ov041_0212382c(void);
    void func_ov041_02123a2c(void);
};

class ActorProfileUnkKGDB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkKGDB();
    ~ActorProfileUnkKGDB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKGDB *GetProfile();
};
