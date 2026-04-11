//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkLIRA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkLIRA();

    /* 4C */ virtual ~ActorUnkLIRA() override;

    void func_ov070_0214286c(void);
    void func_ov070_021428b4(void);
    void func_ov070_02142b48(void);
    void func_ov070_02142b78(void);
    void func_ov070_02142bb0(void);
    void func_ov070_02142c28(void);
    void func_ov070_02142ca0(void);
    void func_ov070_02142d50(void);
    void func_ov070_02142e04(void);
    void func_ov070_02142edc(void);
    void func_ov070_02142f1c(void);
    void func_ov070_02142f58(void);
    void func_ov070_02142f94(void);
    void func_ov070_02142f98(void);
    void func_ov070_02143064(void);
    void func_ov070_02143074(void);
    void func_ov070_02143078(void);
    void func_ov070_021430d4(void);
    void func_ov070_021430f8(void);
    void func_ov070_02143198(void);
    void func_ov070_021431c8(void);
    void func_ov070_02143220(void);
    void func_ov070_02143244(void);
    void func_ov070_0214328c(void);
    void func_ov070_021432b4(void);
    void func_ov070_02143308(void);
    void func_ov070_02143350(void);
    void func_ov070_021433d0(void);
    void func_ov070_02143414(void);
};

class ActorProfileUnkLIRA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkLIRA();
    ~ActorProfileUnkLIRA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkLIRA *GetProfile();
};
