//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPMST : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPMST();

    /* 4C */ virtual ~ActorUnkPMST() override;

    void func_ov077_02159db4(void);
    void func_ov077_02159ddc(void);
    void func_ov077_02159e14(void);
    void func_ov077_02159e40(void);
    void func_ov077_0215a188(void);
    void func_ov077_0215a19c(void);
    void func_ov077_0215a374(void);
    void func_ov077_0215a438(void);
    void func_ov077_0215a44c(void);
    void func_ov077_0215a590(void);
    void func_ov077_0215a654(void);
    void func_ov077_0215a6ac(void);
    void func_ov077_0215a704(void);
    void func_ov077_0215a7b0(void);
    void func_ov077_0215a924(void);
    void func_ov077_0215a9e8(void);
    void func_ov077_0215a9ec(void);
    void func_ov077_0215aa10(void);
    void func_ov077_0215aa20(void);
    void func_ov077_0215aa44(void);
    void func_ov077_0215aa88(void);
};

class ActorProfileUnkPMST : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPMST();
    ~ActorProfileUnkPMST();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPMST *GetProfile();
};
