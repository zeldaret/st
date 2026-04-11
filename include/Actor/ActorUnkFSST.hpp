//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFSST : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFSST();

    /* 4C */ virtual ~ActorUnkFSST() override;

    void func_ov057_02138734(void);
    void func_ov057_02138748(void);
    void func_ov057_0213892c(void);
    void func_ov057_02138950(void);
    void func_ov057_02138b84(void);
    void func_ov057_02138bd0(void);
    void func_ov057_02138c50(void);
    void func_ov057_02138d04(void);
    void func_ov057_02138dc8(void);
    void func_ov057_02138e70(void);
    void func_ov057_02138f6c(void);
    void func_ov057_02138f98(void);
    void func_ov057_02139224(void);
    void func_ov057_02139284(void);
    void func_ov057_0213943c(void);
    void func_ov057_021394ac(void);
    void func_ov057_021396c0(void);
    void func_ov057_02139940(void);
    void func_ov057_02139bbc(void);
    void func_ov057_02139be0(void);
    void func_ov057_02139c08(void);
    void func_ov057_02139c20(void);
    void func_ov057_02139d70(void);
};

class ActorProfileUnkFSST : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFSST();
    ~ActorProfileUnkFSST();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFSST *GetProfile();
};
