//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFRBS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFRBS();

    /* 4C */ virtual ~ActorUnkFRBS() override;

    void func_ov078_02152f38(void);
    void func_ov078_02152f90(void);
    void func_ov078_021533ec(void);
    void func_ov078_02153400(void);
    void func_ov078_021534cc(void);
    void func_ov078_021535ec(void);
    void func_ov078_02153bb4(void);
    void func_ov078_02153cbc(void);
    void func_ov078_02153d3c(void);
    void func_ov078_02153ef8(void);
    void func_ov078_02154104(void);
    void func_ov078_02154260(void);
    void func_ov078_021544fc(void);
    void func_ov078_0215451c(void);
    void func_ov078_0215453c(void);
    void func_ov078_02154798(void);
    void func_ov078_021547c4(void);
    void func_ov078_0215483c(void);
    void func_ov078_021556d0(void);
    void func_ov078_0215574c(void);
    void func_ov078_021557a0(void);
    void func_ov078_02155940(void);
    void func_ov078_02155ce4(void);
    void func_ov078_02155dc4(void);
    void func_ov078_02155e2c(void);
    void func_ov078_02155f18(void);
    void func_ov078_02155ff8(void);
    void func_ov078_02156070(void);
    void func_ov078_02156114(void);
    void func_ov078_021561d4(void);
    void func_ov078_021561f8(void);
    void func_ov078_021563b8(void);
    void func_ov078_021564d4(void);
    void func_ov078_0215664c(void);
    void func_ov078_0215682c(void);
    void func_ov078_021568b0(void);
    void func_ov078_02156c94(void);
    void func_ov078_02156d34(void);
    void func_ov078_02156e74(void);
    void func_ov078_021570a4(void);
    void func_ov078_0215747c(void);
    void func_ov078_0215773c(void);
    void func_ov078_0215810c(void);
    void func_ov078_02158220(void);
    void func_ov078_021583ac(void);
    void func_ov078_021583fc(void);
    void func_ov078_0215888c(void);
    void func_ov078_02158940(void);
    void func_ov078_02158b7c(void);
    void func_ov078_02158c24(void);
    void func_ov078_02158c88(void);
    void func_ov078_02158d54(void);
    void func_ov078_02159168(void);
    void func_ov078_02159240(void);
    void func_ov078_02159318(void);
    void func_ov078_021595a8(void);
    void func_ov078_02159c34(void);
    void func_ov078_02159db8(void);
    void func_ov078_0215a214(void);
    void func_ov078_0215a31c(void);
    void func_ov078_0215a834(void);
    void func_ov078_0215a89c(void);
    void func_ov078_0215a8cc(void);
    void func_ov078_0215a900(void);
    void func_ov078_0215a96c(void);
    void func_ov078_0215aa1c(void);
    void func_ov078_0215aad4(void);
    void func_ov078_0215ade4(void);
    void func_ov078_0215ae2c(void);
    void func_ov078_0215b03c(void);
    void func_ov078_0215b2c4(void);
    void func_ov078_0215b7c4(void);
    void func_ov078_0215b938(void);
    void func_ov078_0215ba60(void);
    void func_ov078_0215bd18(void);
    void func_ov078_0215bdf4(void);
    void func_ov078_0215bfe4(void);
    void func_ov078_0215c0c0(void);
    void func_ov078_0215c150(void);
    void func_ov078_0215c210(void);
    void func_ov078_0215c2b0(void);
    void func_ov078_0215c2c4(void);
    void func_ov078_0215c2f8(void);
    void func_ov078_0215c37c(void);
    void func_ov078_0215c3a4(void);
    void func_ov078_0215c3d4(void);
    void func_ov078_0215c404(void);
    void func_ov078_0215c45c(void);
    void func_ov078_0215c4b4(void);
    void func_ov078_0215c518(void);
    void func_ov078_0215c5a0(void);
    void func_ov078_0215c620(void);
    void func_ov078_0215c658(void);
    void func_ov078_0215c6a0(void);
    void func_ov078_0215c7e4(void);
    void func_ov078_0215ca68(void);
    void func_ov078_0215cabc(void);
    void func_ov078_0215cae0(void);
    void func_ov078_0215cb0c(void);
    void func_ov078_0215cb28(void);
    void func_ov078_0215cbe0(void);
};

class ActorProfileUnkFRBS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFRBS();
    ~ActorProfileUnkFRBS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFRBS *GetProfile();
};
