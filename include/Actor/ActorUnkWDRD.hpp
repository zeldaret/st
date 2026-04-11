//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWDRD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWDRD();

    /* 4C */ virtual ~ActorUnkWDRD() override;

    void func_ov090_0216df28(void);
    void func_ov090_0216df84(void);
    void func_ov090_0216dfd4(void);
    void func_ov090_0216e00c(void);
    void func_ov090_0216e0bc(void);
    void func_ov090_0216e120(void);
    void func_ov090_0216e1ac(void);
    void func_ov090_0216e214(void);
    void func_ov090_0216e308(void);
    void func_ov090_0216e42c(void);
    void func_ov090_0216e490(void);
    void func_ov090_0216e544(void);
    void func_ov090_0216e5f0(void);
    void func_ov090_0216e6ac(void);
    void func_ov090_0216e738(void);
    void func_ov090_0216e8d0(void);
    void func_ov090_0216e954(void);
    void func_ov090_0216e9ec(void);
    void func_ov090_0216eacc(void);
    void func_ov090_0216eb48(void);
    void func_ov090_0216eb80(void);
    void func_ov090_0216eb84(void);
    void func_ov090_0216ebe4(void);
    void func_ov090_0216ec48(void);
    void func_ov090_0216ece0(void);
    void func_ov090_0216edd0(void);
    void func_ov090_0216ee68(void);
    void func_ov090_0216eee8(void);
    void func_ov090_0216ef5c(void);
    void func_ov090_0216f0e0(void);
    void func_ov090_0216f1e4(void);
    void func_ov090_0216f200(void);
};

class ActorProfileUnkWDRD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWDRD();
    ~ActorProfileUnkWDRD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWDRD *GetProfile();
};
