//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTPDO : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTPDO();

    /* 4C */ virtual ~ActorUnkTPDO() override;

    void func_ov091_0216dbdc(void);
    void func_ov091_0216dbf0(void);
    void func_ov091_0216dbf8(void);
    void func_ov091_0216dc90(void);
    void func_ov091_0216dcf8(void);
    void func_ov091_0216ddd4(void);
    void func_ov091_0216deb0(void);
    void func_ov091_0216df7c(void);
    void func_ov091_0216e0c0(void);
    void func_ov091_0216e498(void);
    void func_ov091_0216e4f8(void);
    void func_ov091_0216e5f4(void);
};

class ActorProfileUnkTPDO : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTPDO();
    ~ActorProfileUnkTPDO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTPDO *GetProfile();
};
