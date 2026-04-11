//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRAP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTRAP();

    /* 4C */ virtual ~ActorUnkTRAP() override;

    void func_ov070_02148010(void);
    void func_ov070_02148024(void);
    void func_ov070_02148088(void);
    void func_ov070_02148260(void);
    void func_ov070_021482cc(void);
    void func_ov070_02148314(void);
    void func_ov070_02148324(void);
    void func_ov070_02148344(void);
    void func_ov070_02148354(void);
    void func_ov070_02148390(void);
    void func_ov070_021483b0(void);
    void func_ov070_021483d4(void);
    void func_ov070_021483f4(void);
    void func_ov070_02148418(void);
    void func_ov070_02148438(void);
    void func_ov070_0214845c(void);
    void func_ov070_02148478(void);
    void func_ov070_0214849c(void);
    void func_ov070_021484d4(void);
    void func_ov070_02148554(void);
    void func_ov070_02148568(void);
    void func_ov070_021485e0(void);
    void func_ov070_02148694(void);
    void func_ov070_02148750(void);
    void func_ov070_02148764(void);
    void func_ov070_02148880(void);
    void func_ov070_02148a44(void);
    void func_ov070_02148ad8(void);
    void func_ov070_02148b80(void);
};

class ActorProfileUnkTRAP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTRAP();
    ~ActorProfileUnkTRAP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTRAP *GetProfile();
};
