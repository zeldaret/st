//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRNTN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRNTN();

    /* 4C */ virtual ~ActorUnkRNTN() override;

    void func_ov086_0215bfb4(void);
    void func_ov086_0215c3cc(void);
    void func_ov086_0215c838(void);
    void func_ov086_0215c8fc(void);
    void func_ov086_0215ccf8(void);
    void func_ov086_0215cdd8(void);
    void func_ov086_0215cf94(void);
    void func_ov086_0215d154(void);
    void func_ov086_0215d394(void);
    void func_ov086_0215d610(void);
    void func_ov086_0215d890(void);
};

class ActorProfileUnkRNTN : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRNTN();
    ~ActorProfileUnkRNTN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRNTN *GetProfile();
};
