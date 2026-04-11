//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFLCT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFLCT();

    /* 4C */ virtual ~ActorUnkFLCT() override;

    void func_ov061_0215926c(void);
    void func_ov061_02159280(void);
    void func_ov061_021592e8(void);
    void func_ov061_021592ec(void);
    void func_ov061_02159360(void);
    void func_ov061_02159374(void);
    void func_ov061_02159408(void);
};

class ActorProfileUnkFLCT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFLCT();
    ~ActorProfileUnkFLCT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFLCT *GetProfile();
};
