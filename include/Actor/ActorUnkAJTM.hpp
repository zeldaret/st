//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkAJTM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkAJTM();

    /* 4C */ virtual ~ActorUnkAJTM() override;

    void func_ov068_0215c1fc(void);
    void func_ov068_0215c29c(void);
    void func_ov068_0215c2a8(void);
    void func_ov068_0215c2f0(void);
    void func_ov068_0215c304(void);
    void func_ov068_0215c464(void);
    void func_ov068_0215c478(void);
    void func_ov068_0215c4b0(void);
    void func_ov068_0215c4e4(void);
    void func_ov068_0215c58c(void);
    void func_ov068_0215c590(void);
    void func_ov068_0215c5ac(void);
    void func_ov068_0215c79c(void);
    void func_ov068_0215c840(void);
    void func_ov068_0215c894(void);
    void func_ov068_0215c8c0(void);
    void func_ov068_0215c908(void);
    void func_ov068_0215c98c(void);
    void func_ov068_0215cb78(void);
    void func_ov068_0215cb90(void);
    void func_ov068_0215cdf8(void);
    void func_ov068_0215cf38(void);
};

class ActorProfileUnkAJTM : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkAJTM();
    ~ActorProfileUnkAJTM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkAJTM *GetProfile();
};
