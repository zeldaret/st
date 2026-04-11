//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPHEY : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPHEY();

    /* 4C */ virtual ~ActorUnkPHEY() override;

    void func_ov042_02128b30(void);
    void func_ov042_02128b44(void);
    void func_ov042_02128bd0(void);
    void func_ov042_02128c1c(void);
    void func_ov042_02128e40(void);
    void func_ov042_02129048(void);
    void func_ov042_021290ec(void);
    void func_ov042_02129100(void);
    void func_ov042_02129110(void);
    void func_ov042_0212914c(void);
    void func_ov042_02129194(void);
    void func_ov042_02129278(void);
    void func_ov042_021292d8(void);
    void func_ov042_021293c4(void);
    void func_ov042_0212948c(void);
    void func_ov042_02129540(void);
    void func_ov042_02129680(void);
    void func_ov042_021297a8(void);
    void func_ov042_02129a88(void);
    void func_ov042_02129bc0(void);
    void func_ov042_02129e7c(void);
    void func_ov042_02129f60(void);
    void func_ov042_02129fb4(void);
    void func_ov042_0212a044(void);
    void func_ov042_0212a188(void);
    void func_ov042_0212a254(void);
    void func_ov042_0212a3e0(void);
    void func_ov042_0212a418(void);
    void func_ov042_0212a47c(void);
    void func_ov042_0212a4d8(void);
    void func_ov042_0212a52c(void);
    void func_ov042_0212a584(void);
    void func_ov042_0212a5f4(void);
    void func_ov042_0212a67c(void);
    void func_ov042_0212a6c4(void);
    void func_ov042_0212a77c(void);
    void func_ov042_0212a948(void);
    void func_ov042_0212a960(void);
    void func_ov042_0212ab14(void);
    void func_ov042_0212abb8(void);
    void func_ov042_0212ac68(void);
    void func_ov042_0212ada4(void);
    void func_ov042_0212ae24(void);
    void func_ov042_0212ae88(void);
    void func_ov042_0212afa0(void);
    void func_ov042_0212b00c(void);
    void func_ov042_0212b0fc(void);
    void func_ov042_0212b124(void);
    void func_ov042_0212b13c(void);
    void func_ov042_0212b25c(void);
    void func_ov042_0212b2dc(void);
    void func_ov042_0212b48c(void);
    void func_ov042_0212b4e0(void);
    void func_ov042_0212b504(void);
    void func_ov042_0212b514(void);
    void func_ov042_0212b538(void);
    void func_ov042_0212b5b4(void);
};

class ActorProfileUnkPHEY : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPHEY();
    ~ActorProfileUnkPHEY();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPHEY *GetProfile();
};
