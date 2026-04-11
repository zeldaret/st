//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkITSC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkITSC();

    /* 4C */ virtual ~ActorUnkITSC() override;

    void func_ov084_02159dd8(void);
    void func_ov084_02159dfc(void);
    void func_ov084_0215a0dc(void);
    void func_ov084_0215a118(void);
    void func_ov084_0215a280(void);
};

class ActorProfileUnkITSC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkITSC();
    ~ActorProfileUnkITSC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkITSC *GetProfile();
};
