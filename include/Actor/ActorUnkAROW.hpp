//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkAROW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkAROW();

    /* 4C */ virtual ~ActorUnkAROW() override;

    void func_ov031_020f1404(void);
    void func_ov031_020f1608(void);
    void func_ov031_020f173c(void);
    void func_ov031_020f1868(void);
    void func_ov031_020f1874(void);
    void func_ov031_020f1878(void);
    void func_ov031_020f18bc(void);
    void func_ov031_020f1958(void);
    void func_ov031_020f195c(void);
    void func_ov031_020f1a64(void);
    void func_ov031_020f1b04(void);
    void func_ov031_020f1c24(void);
    void func_ov031_020f1c7c(void);
    void func_ov031_020f1dd4(void);
    void func_ov031_020f1e3c(void);
    void func_ov031_020f1f54(void);
    void func_ov031_020f2010(void);
    void func_ov031_020f206c(void);
    void func_ov031_020f20bc(void);
    void func_ov031_020f2134(void);
    void func_ov031_020f2160(void);
    void func_ov031_020f21dc(void);
    void func_ov031_020f2214(void);
    void func_ov031_020f2270(void);
    void func_ov031_020f2280(void);
    void func_ov031_020f229c(void);
    void func_ov031_020f22d4(void);
    void func_ov031_020f2310(void);
    void func_ov031_020f2654(void);
    void func_ov031_020f2794(void);
    void func_ov031_020f28ac(void);
    void func_ov031_020f2b8c(void);
    void func_ov031_020f2bbc(void);
    void func_ov031_020f2bec(void);
    void func_ov031_020f2c08(void);
    void func_ov031_020f2cac(void);
    void func_ov031_020f2ef0(void);
    void func_ov031_020f2f5c(void);
    void func_ov031_020f2f9c(void);
    void func_ov031_020f3000(void);
    void func_ov031_020f311c(void);
    void func_ov031_020f3210(void);
    void func_ov031_020f3258(void);
    void func_ov031_020f3288(void);
    void func_ov031_020f32c4(void);
    void func_ov031_020f32e0(void);
    void func_ov031_020f3304(void);
    void func_ov031_020f3310(void);
    void func_ov031_020f33bc(void);
    void func_ov031_020f370c(void);
    void func_ov031_020f374c(void);
    void func_ov031_020f38b0(void);
    void func_ov031_020f3c38(void);
    void func_ov031_020f3d04(void);
    void func_ov031_020f3d4c(void);
};

class ActorProfileUnkAROW : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkAROW();
    ~ActorProfileUnkAROW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkAROW *GetProfile();
};
