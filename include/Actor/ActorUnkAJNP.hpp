//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkAJNP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkAJNP();

    /* 4C */ virtual ~ActorUnkAJNP() override;

    void func_ov068_0215d018(void);
    void func_ov068_0215d104(void);
    void func_ov068_0215d160(void);
    void func_ov068_0215d268(void);
    void func_ov068_0215d294(void);
    void func_ov068_0215d2b4(void);
    void func_ov068_0215d30c(void);
    void func_ov068_0215d434(void);
    void func_ov068_0215d448(void);
    void func_ov068_0215d478(void);
    void func_ov068_0215d47c(void);
    void func_ov068_0215d500(void);
    void func_ov068_0215d590(void);
    void func_ov068_0215d620(void);
    void func_ov068_0215d68c(void);
    void func_ov068_0215d6e8(void);
    void func_ov068_0215d710(void);
};

class ActorProfileUnkAJNP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkAJNP();
    ~ActorProfileUnkAJNP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkAJNP *GetProfile();
};
