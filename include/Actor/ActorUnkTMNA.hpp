//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTMNA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTMNA();

    /* 4C */ virtual ~ActorUnkTMNA() override;

    void func_ov058_0214d9ec(void);
    void func_ov058_0214daa8(void);
    void func_ov058_0214dab4(void);
    void func_ov058_0214dad4(void);
    void func_ov058_0214db68(void);
    void func_ov058_0214dbc8(void);
    void func_ov058_0214dbe4(void);
    void func_ov058_0214dc88(void);
    void func_ov058_0214dca8(void);
};

class ActorProfileUnkTMNA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTMNA();
    ~ActorProfileUnkTMNA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTMNA *GetProfile();
};
