//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkAJEM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkAJEM();

    /* 4C */ virtual ~ActorUnkAJEM() override;

    void func_ov068_02159490(void);
    void func_ov068_021594a4(void);
    void func_ov068_02159508(void);
    void func_ov068_0215952c(void);
    void func_ov068_02159574(void);
    void func_ov068_02159800(void);
    void func_ov068_021598ac(void);
    void func_ov068_0215991c(void);
    void func_ov068_021599a4(void);
    void func_ov068_02159a14(void);
    void func_ov068_02159a44(void);
    void func_ov068_02159ad4(void);
    void func_ov068_02159bf4(void);
    void func_ov068_02159c74(void);
    void func_ov068_02159e08(void);
    void func_ov068_02159e78(void);
    void func_ov068_0215a018(void);
    void func_ov068_0215a0a0(void);
    void func_ov068_0215a258(void);
    void func_ov068_0215a354(void);
    void func_ov068_0215a358(void);
    void func_ov068_0215a3d8(void);
    void func_ov068_0215a3dc(void);
    void func_ov068_0215a46c(void);
    void func_ov068_0215a5c8(void);
    void func_ov068_0215a5e8(void);
    void func_ov068_0215a654(void);
    void func_ov068_0215a70c(void);
    void func_ov068_0215a76c(void);
    void func_ov068_0215a790(void);
    void func_ov068_0215a800(void);
};

class ActorProfileUnkAJEM : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkAJEM();
    ~ActorProfileUnkAJEM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkAJEM *GetProfile();
};
