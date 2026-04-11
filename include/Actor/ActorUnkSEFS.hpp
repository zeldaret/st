//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSEFS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSEFS();

    /* 4C */ virtual ~ActorUnkSEFS() override;

    void func_ov091_0216c230(void);
    void func_ov091_0216c368(void);
    void func_ov091_0216c3b4(void);
    void func_ov091_0216c50c(void);
    void func_ov091_0216c634(void);
    void func_ov091_0216c734(void);
    void func_ov091_0216c798(void);
    void func_ov091_0216c7d4(void);
    void func_ov091_0216d090(void);
    void func_ov091_0216d1a8(void);
    void func_ov091_0216d570(void);
    void func_ov091_0216d654(void);
    void func_ov091_0216d868(void);
    void func_ov091_0216d8ac(void);
    void func_ov091_0216d8e4(void);
    void func_ov091_0216d8f0(void);
    void func_ov091_0216d9b0(void);
};

class ActorProfileUnkSEFS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSEFS();
    ~ActorProfileUnkSEFS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSEFS *GetProfile();
};
