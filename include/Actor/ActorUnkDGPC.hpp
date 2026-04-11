//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDGPC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDGPC();

    /* 4C */ virtual ~ActorUnkDGPC() override;

    void func_ov073_021632cc(void);
    void func_ov073_0216330c(void);
    void func_ov073_0216333c(void);
    void func_ov073_02163350(void);
    void func_ov073_02163368(void);
    void func_ov073_02163388(void);
    void func_ov073_021633c0(void);
    void func_ov073_021633c8(void);
};

class ActorProfileUnkDGPC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDGPC();
    ~ActorProfileUnkDGPC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDGPC *GetProfile();
};
