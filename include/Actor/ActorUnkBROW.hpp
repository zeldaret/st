//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBROW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBROW();

    /* 4C */ virtual ~ActorUnkBROW() override;

    void func_ov070_021400e8(void);
    void func_ov070_02140138(void);
    void func_ov070_02140238(void);
    void func_ov070_0214030c(void);
    void func_ov070_02140400(void);
    void func_ov070_02140470(void);
    void func_ov070_021406bc(void);
    void func_ov070_021407a4(void);
    void func_ov070_02140844(void);
    void func_ov070_02140858(void);
    void func_ov070_02140894(void);
    void func_ov070_021408b4(void);
    void func_ov070_021408d0(void);
    void func_ov070_02140944(void);
    void func_ov070_02140994(void);
    void func_ov070_021409bc(void);
};

class ActorProfileUnkBROW : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBROW();
    ~ActorProfileUnkBROW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBROW *GetProfile();
};
