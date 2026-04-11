//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFIBB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFIBB();

    /* 4C */ virtual ~ActorUnkFIBB() override;

    void func_ov054_0213c414(void);
    void func_ov054_0213c568(void);
    void func_ov054_0213c5b8(void);
    void func_ov054_0213c648(void);
    void func_ov054_0213c6c4(void);
    void func_ov054_0213c6f8(void);
    void func_ov054_0213c768(void);
    void func_ov054_0213c7f8(void);
    void func_ov054_0213c868(void);
    void func_ov054_0213c918(void);
    void func_ov054_0213c9cc(void);
    void func_ov054_0213cab4(void);
    void func_ov054_0213cb24(void);
    void func_ov054_0213cb94(void);
    void func_ov054_0213cc04(void);
    void func_ov054_0213cd28(void);
    void func_ov054_0213cd3c(void);
    void func_ov054_0213cda0(void);
    void func_ov054_0213cda4(void);
    void func_ov054_0213ce08(void);
    void func_ov054_0213ce0c(void);
    void func_ov054_0213ce70(void);
    void func_ov054_0213ce7c(void);
    void func_ov054_0213cee0(void);
    void func_ov054_0213cf0c(void);
    void func_ov054_0213cf70(void);
    void func_ov054_0213cf7c(void);
    void func_ov054_0213cfe0(void);
    void func_ov054_0213d0d0(void);
    void func_ov054_0213d0dc(void);
    void func_ov054_0213d140(void);
    void func_ov054_0213d184(void);
    void func_ov054_0213d1e8(void);
    void func_ov054_0213d220(void);
    void func_ov054_0213d330(void);
    void func_ov054_0213d3b4(void);
    void func_ov054_0213d4dc(void);
    void func_ov054_0213d510(void);
    void func_ov054_0213d534(void);
};

class ActorProfileUnkFIBB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFIBB();
    ~ActorProfileUnkFIBB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFIBB *GetProfile();
};
