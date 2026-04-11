//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCOMM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCOMM();

    /* 4C */ virtual ~ActorUnkCOMM() override;

    void func_ov060_0215c8ac(void);
    void func_ov060_0215c8f8(void);
    void func_ov060_0215ca08(void);
    void func_ov060_0215ca84(void);
    void func_ov060_0215caf8(void);
    void func_ov060_0215cb34(void);
    void func_ov060_0215cb40(void);
    void func_ov060_0215cb88(void);
    void func_ov060_0215cba4(void);
    void func_ov060_0215cbe4(void);
    void func_ov060_0215cc50(void);
    void func_ov060_0215ccac(void);
    void func_ov060_0215ccc4(void);
    void func_ov060_0215ccd8(void);
    void func_ov060_0215ccf4(void);
    void func_ov060_0215ccfc(void);
    void func_ov060_0215cda8(void);
    void func_ov060_0215cdb0(void);
    void func_ov060_0215cdcc(void);
    void func_ov060_0215ce38(void);
};

class ActorProfileUnkCOMM : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCOMM();
    ~ActorProfileUnkCOMM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCOMM *GetProfile();
};
