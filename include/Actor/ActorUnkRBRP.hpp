//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBRP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRBRP();

    /* 4C */ virtual ~ActorUnkRBRP() override;

    void func_ov069_0215a41c(void);
    void func_ov069_0215a430(void);
    void func_ov069_0215a4ac(void);
    void func_ov069_0215a50c(void);
    void func_ov069_0215a548(void);
    void func_ov069_0215a5c8(void);
    void func_ov069_0215a5d8(void);
    void func_ov069_0215a5dc(void);
    void func_ov069_0215a618(void);
    void func_ov069_0215a694(void);
    void func_ov069_0215a720(void);
    void func_ov069_0215a72c(void);
    void func_ov069_0215a75c(void);
    void func_ov069_0215a834(void);
    void func_ov069_0215a84c(void);
    void func_ov069_0215a868(void);
};

class ActorProfileUnkRBRP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRBRP();
    ~ActorProfileUnkRBRP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRBRP *GetProfile();
};
