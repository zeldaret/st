//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWTH3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWTH3();

    /* 4C */ virtual ~ActorUnkWTH3() override;

    void func_ov046_021267b8(void);
    void func_ov046_021268a0(void);
    void func_ov046_0212699c(void);
    void func_ov046_021269f8(void);
    void func_ov046_02126a74(void);
    void func_ov046_02126aa4(void);
    void func_ov046_02126b24(void);
    void func_ov046_02126c1c(void);
    void func_ov046_02126c38(void);
    void func_ov046_02126c98(void);
    void func_ov046_02126ca8(void);
    void func_ov046_02126d2c(void);
    void func_ov046_02126db8(void);
    void func_ov046_02126df8(void);
    void func_ov046_02126e54(void);
    void func_ov046_02126e9c(void);
    void func_ov046_02126f3c(void);
    void func_ov046_02126f78(void);
    void func_ov046_02127008(void);
    void func_ov046_02127190(void);
    void func_ov046_02127218(void);
    void func_ov046_021273a8(void);
    void func_ov046_021276a0(void);
    void func_ov046_021276cc(void);
    void func_ov046_0212771c(void);
    void func_ov046_02127750(void);
    void func_ov046_021277b4(void);
};

class ActorProfileUnkWTH3 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWTH3();
    ~ActorProfileUnkWTH3();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWTH3 *GetProfile();
};
