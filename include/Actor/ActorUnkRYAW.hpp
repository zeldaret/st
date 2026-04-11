//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRYAW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRYAW();

    /* 4C */ virtual ~ActorUnkRYAW() override;

    void func_ov070_0214c204(void);
    void func_ov070_0214c218(void);
    void func_ov070_0214c22c(void);
    void func_ov070_0214c354(void);
    void func_ov070_0214c4d4(void);
    void func_ov070_0214c4f4(void);
    void func_ov070_0214c6fc(void);
    void func_ov070_0214c74c(void);
    void func_ov070_0214c81c(void);
    void func_ov070_0214cc08(void);
    void func_ov070_0214cc78(void);
    void func_ov070_0214cdac(void);
    void func_ov070_0214ce04(void);
    void func_ov070_0214ce88(void);
    void func_ov070_0214cfb4(void);
    void func_ov070_0214d174(void);
    void func_ov070_0214d214(void);
    void func_ov070_0214d268(void);
    void func_ov070_0214d2a4(void);
    void func_ov070_0214d2e0(void);
    void func_ov070_0214d5d4(void);
    void func_ov070_0214d854(void);
    void func_ov070_0214d860(void);
    void func_ov070_0214d958(void);
    void func_ov070_0214d9cc(void);
    void func_ov070_0214d9f4(void);
    void func_ov070_0214da88(void);
    void func_ov070_0214dac4(void);
    void func_ov070_0214db34(void);
    void func_ov070_0214db90(void);
};

class ActorProfileUnkRYAW : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRYAW();
    ~ActorProfileUnkRYAW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRYAW *GetProfile();
};
