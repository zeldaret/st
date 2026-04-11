//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkAJAI : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkAJAI();

    /* 4C */ virtual ~ActorUnkAJAI() override;

    void func_ov068_02158c14(void);
    void func_ov068_02158c84(void);
    void func_ov068_02158c90(void);
    void func_ov068_02158cd8(void);
    void func_ov068_02158d44(void);
    void func_ov068_02158d74(void);
    void func_ov068_02158d88(void);
    void func_ov068_02158d8c(void);
    void func_ov068_02158da8(void);
    void func_ov068_02158ddc(void);
    void func_ov068_02158eb0(void);
    void func_ov068_02158f5c(void);
    void func_ov068_02158f70(void);
    void func_ov068_021590c0(void);
    void func_ov068_021590f0(void);
    void func_ov068_02159120(void);
    void func_ov068_02159170(void);
    void func_ov068_02159180(void);
    void func_ov068_02159204(void);
};

class ActorProfileUnkAJAI : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkAJAI();
    ~ActorProfileUnkAJAI();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkAJAI *GetProfile();
};
