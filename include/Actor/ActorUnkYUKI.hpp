//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkYUKI : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkYUKI();

    /* 4C */ virtual ~ActorUnkYUKI() override;

    void func_ov065_021580b0(void);
    void func_ov065_021580c4(void);
    void func_ov065_021580d8(void);
    void func_ov065_021580ec(void);
    void func_ov065_02158288(void);
    void func_ov065_02158304(void);
    void func_ov065_02158380(void);
    void func_ov065_02158520(void);
    void func_ov065_02158524(void);
    void func_ov065_021585f4(void);
    void func_ov065_02158608(void);
    void func_ov065_021586a8(void);
    void func_ov065_021586f4(void);
    void func_ov065_0215875c(void);
    void func_ov065_02158778(void);
    void func_ov065_02158798(void);
    void func_ov065_021587b0(void);
    void func_ov065_021587d4(void);
    void func_ov065_021587e4(void);
    void func_ov065_02158808(void);
    void func_ov065_02158854(void);
    void func_ov065_0215888c(void);
    void func_ov065_021588b0(void);
    void func_ov065_021588dc(void);
    void func_ov065_021588f8(void);
    void func_ov065_02158940(void);
    void func_ov065_02158960(void);
};

class ActorProfileUnkYUKI : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkYUKI();
    ~ActorProfileUnkYUKI();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkYUKI *GetProfile();
};
