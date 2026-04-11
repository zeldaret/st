//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTGTZ : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTGTZ();

    /* 4C */ virtual ~ActorUnkTGTZ() override;

    void func_ov031_020f6984(void);
    void func_ov031_020f6998(void);
    void func_ov031_020f6ae4(void);
    void func_ov031_020f6e48(void);
    void func_ov031_020f6e5c(void);
    void func_ov031_020f6ea8(void);
    void func_ov031_020f6f20(void);
    void func_ov031_020f7170(void);
    void func_ov031_020f72a8(void);
    void func_ov031_020f7358(void);
    void func_ov031_020f73e4(void);
    void func_ov031_020f73f0(void);
    void func_ov031_020f7438(void);
};

class ActorProfileUnkTGTZ : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTGTZ();
    ~ActorProfileUnkTGTZ();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTGTZ *GetProfile();
};
