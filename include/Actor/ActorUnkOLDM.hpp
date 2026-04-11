//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOLDM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkOLDM();

    /* 4C */ virtual ~ActorUnkOLDM() override;

    void func_ov060_0215d0bc(void);
    void func_ov060_0215d124(void);
    void func_ov060_0215d2a0(void);
    void func_ov060_0215d2d0(void);
    void func_ov060_0215d304(void);
    void func_ov060_0215d348(void);
    void func_ov060_0215d360(void);
    void func_ov060_0215d378(void);
    void func_ov060_0215d390(void);
    void func_ov060_0215d39c(void);
    void func_ov060_0215d3a8(void);
    void func_ov060_0215d3ac(void);
    void func_ov060_0215d3bc(void);
    void func_ov060_0215d3c0(void);
};

class ActorProfileUnkOLDM : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkOLDM();
    ~ActorProfileUnkOLDM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkOLDM *GetProfile();
};
