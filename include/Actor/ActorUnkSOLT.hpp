//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSOLT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSOLT();

    /* 4C */ virtual ~ActorUnkSOLT() override;

    void func_ov037_0211eb6c(void);
    void func_ov037_0211eb88(void);
    void func_ov037_0211ebf4(void);
    void func_ov037_0211ec58(void);
    void func_ov037_0211ee94(void);
    void func_ov037_0211eeb4(void);
    void func_ov037_0211efa8(void);
    void func_ov037_0211f020(void);
    void func_ov037_0211f0f4(void);
    void func_ov037_0211f150(void);
    void func_ov037_0211f214(void);
    void func_ov037_0211f278(void);
    void func_ov037_0211f2b4(void);
    void func_ov037_0211f338(void);
    void func_ov037_0211f4b0(void);
    void func_ov037_0211f574(void);
    void func_ov037_0211f61c(void);
    void func_ov037_0211f6c4(void);
    void func_ov037_0211f76c(void);
    void func_ov037_0211f7e8(void);
    void func_ov037_0211f824(void);
    void func_ov037_0211f888(void);
    void func_ov037_0211fa30(void);
    void func_ov037_0211fad0(void);
    void func_ov037_0211fbec(void);
    void func_ov037_0211fc64(void);
    void func_ov037_0211fd10(void);
    void func_ov037_0211fd60(void);
    void func_ov037_0211fd98(void);
    void func_ov037_0211fdb4(void);
    void func_ov037_0211fe2c(void);
    void func_ov037_0211fe64(void);
    void func_ov037_0211feb4(void);
    void func_ov037_02120020(void);
    void func_ov037_0212005c(void);
    void func_ov037_02120074(void);
    void func_ov037_021200a0(void);
    void func_ov037_021200b8(void);
    void func_ov037_021200e8(void);
    void func_ov037_02120134(void);
    void func_ov037_02120160(void);
    void func_ov037_021201a4(void);
    void func_ov037_021201d4(void);
    void func_ov037_02120228(void);
    void func_ov037_02120280(void);
    void func_ov037_021202d4(void);
    void func_ov037_021203e4(void);
    void func_ov037_02120408(void);
    void func_ov037_0212046c(void);
    void func_ov037_02120478(void);
    void func_ov037_0212048c(void);
    void func_ov037_02120494(void);
    void func_ov037_021204a8(void);
    void func_ov037_021205a8(void);
    void func_ov037_021205c0(void);
    void func_ov037_021205c8(void);
    void func_ov037_021206d4(void);
    void func_ov037_02120834(void);
    void func_ov037_0212087c(void);
};

class ActorProfileUnkSOLT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSOLT();
    ~ActorProfileUnkSOLT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSOLT *GetProfile();
};
