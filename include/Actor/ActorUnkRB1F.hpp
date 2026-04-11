//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRB1F : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRB1F();

    /* 4C */ virtual ~ActorUnkRB1F() override;

    void func_ov069_02159000(void);
    void func_ov069_02159014(void);
    void func_ov069_021591c8(void);
    void func_ov069_02159260(void);
    void func_ov069_02159278(void);
    void func_ov069_021592c8(void);
    void func_ov069_02159400(void);
    void func_ov069_02159404(void);
    void func_ov069_0215944c(void);
    void func_ov069_02159508(void);
    void func_ov069_02159678(void);
    void func_ov069_02159690(void);
    void func_ov069_021596f8(void);
    void func_ov069_0215990c(void);
    void func_ov069_02159938(void);
    void func_ov069_02159974(void);
    void func_ov069_021599a8(void);
    void func_ov069_021599cc(void);
    void func_ov069_02159a20(void);
    void func_ov069_02159ca4(void);
    void func_ov069_02159ccc(void);
    void func_ov069_02159dcc(void);
    void func_ov069_02159df4(void);
    void func_ov069_02159e0c(void);
    void func_ov069_02159e38(void);
    void func_ov069_02159e5c(void);
    void func_ov069_02159e6c(void);
    void func_ov069_02159ec0(void);
};

class ActorProfileUnkRB1F : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRB1F();
    ~ActorProfileUnkRB1F();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRB1F *GetProfile();
};
