//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSHDL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSHDL();

    /* 4C */ virtual ~ActorUnkSHDL() override;

    void func_ov043_02128b44(void);
    void func_ov043_02128d94(void);
    void func_ov043_021290c0(void);
    void func_ov043_02129230(void);
    void func_ov043_0212946c(void);
    void func_ov043_02129614(void);
    void func_ov043_02129710(void);
    void func_ov043_02129724(void);
    void func_ov043_021297d4(void);
    void func_ov043_02129ac0(void);
    void func_ov043_02129ae8(void);
    void func_ov043_02129af8(void);
    void func_ov043_02129b94(void);
    void func_ov043_02129bdc(void);
    void func_ov043_02129d74(void);
    void func_ov043_02129dd0(void);
    void func_ov043_02129df0(void);
    void func_ov043_02129e40(void);
    void func_ov043_02129ef8(void);
    void func_ov043_0212a0a8(void);
    void func_ov043_0212a110(void);
    void func_ov043_0212a27c(void);
    void func_ov043_0212a2b4(void);
    void func_ov043_0212a300(void);
    void func_ov043_0212a3fc(void);
    void func_ov043_0212a428(void);
    void func_ov043_0212a4a4(void);
    void func_ov043_0212a57c(void);
    void func_ov043_0212a588(void);
    void func_ov043_0212a5a0(void);
    void func_ov043_0212a61c(void);
    void func_ov043_0212a67c(void);
    void func_ov043_0212a6ec(void);
    void func_ov043_0212a71c(void);
    void func_ov043_0212a768(void);
    void func_ov043_0212a834(void);
    void func_ov043_0212a8bc(void);
    void func_ov043_0212a8f4(void);
    void func_ov043_0212a954(void);
    void func_ov043_0212a98c(void);
    void func_ov043_0212ac24(void);
    void func_ov043_0212b080(void);
    void func_ov043_0212b3c8(void);
    void func_ov043_0212b4c0(void);
    void func_ov043_0212b544(void);
    void func_ov043_0212b5f8(void);
    void func_ov043_0212b694(void);
    void func_ov043_0212b6f0(void);
    void func_ov043_0212b76c(void);
    void func_ov043_0212b814(void);
    void func_ov043_0212b854(void);
    void func_ov043_0212b898(void);
    void func_ov043_0212b918(void);
    void func_ov043_0212b948(void);
    void func_ov043_0212b974(void);
    void func_ov043_0212ba8c(void);
    void func_ov043_0212bd44(void);
    void func_ov043_0212bd94(void);
    void func_ov043_0212be0c(void);
    void func_ov043_0212be8c(void);
    void func_ov043_0212bfbc(void);
    void func_ov043_0212bff8(void);
    void func_ov043_0212c088(void);
    void func_ov043_0212c104(void);
    void func_ov043_0212c140(void);
    void func_ov043_0212c1bc(void);
    void func_ov043_0212c294(void);
    void func_ov043_0212c3a8(void);
    void func_ov043_0212c498(void);
    void func_ov043_0212c5c4(void);
    void func_ov043_0212c6b4(void);
    void func_ov043_0212c720(void);
    void func_ov043_0212c7ac(void);
    void func_ov043_0212c844(void);
    void func_ov043_0212c88c(void);
    void func_ov043_0212c94c(void);
};

class ActorProfileUnkSHDL : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSHDL();
    ~ActorProfileUnkSHDL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSHDL *GetProfile();
};
