//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMFR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMFR();

    /* 4C */ virtual ~ActorUnkDMFR() override;

    void func_ov088_02170690(void);
    void func_ov088_021706a4(void);
    void func_ov088_021706f8(void);
    void func_ov088_02170708(void);
    void func_ov088_0217071c(void);
    void func_ov088_02170730(void);
    void func_ov088_02170780(void);
    void func_ov088_021707a4(void);
    void func_ov088_021707b4(void);
    void func_ov088_02170800(void);
};

class ActorProfileUnkDMFR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDMFR();
    ~ActorProfileUnkDMFR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMFR *GetProfile();
};
