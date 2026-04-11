//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMMT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMMT();

    /* 4C */ virtual ~ActorUnkDMMT() override;

    void func_ov088_021709c4(void);
    void func_ov088_021709d8(void);
    void func_ov088_02170b2c(void);
    void func_ov088_02170b68(void);
    void func_ov088_02170b70(void);
    void func_ov088_02170b80(void);
    void func_ov088_02170b94(void);
    void func_ov088_02170ba8(void);
    void func_ov088_02170bf8(void);
    void func_ov088_02170c5c(void);
    void func_ov088_02170c8c(void);
};

class ActorProfileUnkDMMT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDMMT();
    ~ActorProfileUnkDMMT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMMT *GetProfile();
};
