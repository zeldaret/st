//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGOKI : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGOKI();

    /* 4C */ virtual ~ActorUnkGOKI() override;

    void func_ov077_02158d1c(void);
    void func_ov077_02158d30(void);
    void func_ov077_02158e9c(void);
    void func_ov077_02158eb0(void);
    void func_ov077_02158ed0(void);
    void func_ov077_02158f18(void);
    void func_ov077_021591f4(void);
    void func_ov077_02159260(void);
    void func_ov077_02159318(void);
    void func_ov077_02159364(void);
    void func_ov077_021593d4(void);
    void func_ov077_0215943c(void);
    void func_ov077_021594cc(void);
    void func_ov077_02159524(void);
    void func_ov077_021595bc(void);
    void func_ov077_02159624(void);
    void func_ov077_021596b8(void);
    void func_ov077_0215970c(void);
    void func_ov077_02159880(void);
    void func_ov077_02159a44(void);
    void func_ov077_02159aa8(void);
    void func_ov077_02159b5c(void);
    void func_ov077_02159b8c(void);
    void func_ov077_02159c3c(void);
    void func_ov077_02159cc0(void);
    void func_ov077_02159cdc(void);
};

class ActorProfileUnkGOKI : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkGOKI();
    ~ActorProfileUnkGOKI();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGOKI *GetProfile();
};
