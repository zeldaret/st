//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRER : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTRER();

    /* 4C */ virtual ~ActorUnkTRER() override;

    void func_ov027_02144944(void);
    void func_ov027_021449dc(void);
    void func_ov027_02144a18(void);
    void func_ov027_02144cf0(void);
    void func_ov027_02144d48(void);
    void func_ov027_02144db8(void);
    void func_ov027_02144ecc(void);
    void func_ov027_02144ed0(void);
    void func_ov027_02144f48(void);
    void func_ov027_02144f4c(void);
    void func_ov027_02144f58(void);
    void func_ov027_02144f5c(void);
    void func_ov027_02144f9c(void);
};

class ActorProfileUnkTRER : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTRER();
    ~ActorProfileUnkTRER();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTRER *GetProfile();
};
