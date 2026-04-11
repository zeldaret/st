//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKLTR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKLTR();

    /* 4C */ virtual ~ActorUnkKLTR() override;

    void func_ov026_021116e0(void);
    void func_ov026_02111974(void);
    void func_ov026_0211197c(void);
    void func_ov026_02111a84(void);
    void func_ov026_02111aa4(void);
    void func_ov026_02111ac4(void);
    void func_ov026_02111c08(void);
    void func_ov026_02111d50(void);
    void func_ov026_02111d54(void);
    void func_ov026_02111f3c(void);
    void func_ov026_0211202c(void);
    void func_ov026_0211205c(void);
    void func_ov026_02112088(void);
    void func_ov026_0211210c(void);
    void func_ov026_02112328(void);
    void func_ov026_021127e8(void);
    void func_ov026_02112850(void);
    void func_ov026_02112944(void);
    void func_ov026_02112bd4(void);
    void func_ov026_02112ca8(void);
    void func_ov026_02112cbc(void);
    void func_ov026_02112cc0(void);
    void func_ov026_02112e28(void);
    void func_ov026_02112ecc(void);
    void func_ov026_02112f08(void);
    void func_ov026_02112fb0(void);
    void func_ov026_02112fec(void);
    void func_ov026_02112ff8(void);
    void func_ov026_02113040(void);
    void func_ov026_02113118(void);
    void func_ov026_02113204(void);
    void func_ov026_021132c0(void);
    void func_ov026_02113304(void);
    void func_ov026_021133b0(void);
    void func_ov026_0211340c(void);
    void func_ov026_021134c8(void);
    void func_ov026_0211350c(void);
    void func_ov026_021135b8(void);
    void func_ov026_021135e4(void);
    void func_ov026_02113704(void);
    void func_ov026_02113718(void);
    void func_ov026_02113784(void);
    void func_ov026_0211391c(void);
    void func_ov026_02113a40(void);
    void func_ov026_02113a5c(void);
    void func_ov026_02113b5c(void);
    void func_ov026_02113b98(void);
};

class ActorProfileUnkKLTR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkKLTR();
    ~ActorProfileUnkKLTR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKLTR *GetProfile();
};
