//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSTLF : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSTLF();

    /* 4C */ virtual ~ActorUnkSTLF() override;

    void func_ov043_02123734(void);
    void func_ov043_02123810(void);
    void func_ov043_02123900(void);
    void func_ov043_02123970(void);
    void func_ov043_02123994(void);
    void func_ov043_02123a28(void);
    void func_ov043_02123cf0(void);
    void func_ov043_02123da8(void);
    void func_ov043_02123e28(void);
    void func_ov043_02123e90(void);
    void func_ov043_02123f50(void);
    void func_ov043_02123fa4(void);
    void func_ov043_02124024(void);
    void func_ov043_02124148(void);
    void func_ov043_02124220(void);
    void func_ov043_02124324(void);
    void func_ov043_02124334(void);
    void func_ov043_021243c0(void);
    void func_ov043_0212448c(void);
    void func_ov043_02124544(void);
    void func_ov043_021245c4(void);
    void func_ov043_02124650(void);
    void func_ov043_021246cc(void);
    void func_ov043_02124750(void);
    void func_ov043_02124828(void);
    void func_ov043_02124948(void);
    void func_ov043_02124b5c(void);
    void func_ov043_02124bf4(void);
    void func_ov043_02124cec(void);
    void func_ov043_02124d88(void);
    void func_ov043_02124ef0(void);
    void func_ov043_02124f6c(void);
    void func_ov043_021250c4(void);
    void func_ov043_021251c0(void);
    void func_ov043_02125208(void);
    void func_ov043_02125220(void);
    void func_ov043_02125280(void);
    void func_ov043_0212535c(void);
    void func_ov043_021253e0(void);
    void func_ov043_021253f8(void);
    void func_ov043_02125480(void);
    void func_ov043_021255b4(void);
    void func_ov043_02125700(void);
    void func_ov043_02125828(void);
    void func_ov043_021258bc(void);
    void func_ov043_0212599c(void);
    void func_ov043_021259c0(void);
    void func_ov043_02125a34(void);
    void func_ov043_02125ad0(void);
    void func_ov043_02125b48(void);
    void func_ov043_02125cd8(void);
    void func_ov043_02125cf0(void);
    void func_ov043_021260a0(void);
    void func_ov043_02126108(void);
    void func_ov043_02126130(void);
    void func_ov043_02126218(void);
    void func_ov043_02126230(void);
    void func_ov043_02126260(void);
    void func_ov043_021262f4(void);
    void func_ov043_021264a0(void);
    void func_ov043_02126698(void);
    void func_ov043_021266bc(void);
    void func_ov043_021266e8(void);
};

class ActorProfileUnkSTLF : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSTLF();
    ~ActorProfileUnkSTLF();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSTLF *GetProfile();
};
