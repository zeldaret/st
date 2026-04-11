//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPSEM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPSEM();

    /* 4C */ virtual ~ActorUnkPSEM() override;

    void func_ov059_02158de4(void);
    void func_ov059_02158df8(void);
    void func_ov059_02158e9c(void);
    void func_ov059_02158ed8(void);
    void func_ov059_02158f20(void);
    void func_ov059_021591ac(void);
    void func_ov059_021592ec(void);
    void func_ov059_0215932c(void);
    void func_ov059_021594fc(void);
    void func_ov059_02159520(void);
    void func_ov059_02159654(void);
    void func_ov059_021598f0(void);
    void func_ov059_02159968(void);
    void func_ov059_02159a30(void);
    void func_ov059_02159ab8(void);
    void func_ov059_02159cb4(void);
    void func_ov059_02159d3c(void);
    void func_ov059_02159f08(void);
    void func_ov059_02159fa8(void);
    void func_ov059_0215a088(void);
    void func_ov059_0215a134(void);
    void func_ov059_0215a238(void);
    void func_ov059_0215a2c4(void);
    void func_ov059_0215a52c(void);
    void func_ov059_0215a618(void);
    void func_ov059_0215a724(void);
    void func_ov059_0215a920(void);
    void func_ov059_0215ab74(void);
    void func_ov059_0215abd8(void);
    void func_ov059_0215ae58(void);
    void func_ov059_0215aff0(void);
    void func_ov059_0215b238(void);
    void func_ov059_0215b248(void);
    void func_ov059_0215b294(void);
    void func_ov059_0215b348(void);
    void func_ov059_0215b370(void);
    void func_ov059_0215b420(void);
    void func_ov059_0215b484(void);
    void func_ov059_0215b4b0(void);
    void func_ov059_0215b8cc(void);
    void func_ov059_0215baa8(void);
    void func_ov059_0215bb04(void);
    void func_ov059_0215bd64(void);
    void func_ov059_0215bdd4(void);
    void func_ov059_0215be90(void);
    void func_ov059_0215bfb4(void);
    void func_ov059_0215bfe4(void);
    void func_ov059_0215c010(void);
    void func_ov059_0215c074(void);
    void func_ov059_0215c0a4(void);
    void func_ov059_0215c1b4(void);
    void func_ov059_0215c22c(void);
    void func_ov059_0215c2a8(void);
    void func_ov059_0215c2cc(void);
    void func_ov059_0215c2f8(void);
    void func_ov059_0215c314(void);
    void func_ov059_0215c398(void);
};

class ActorProfileUnkPSEM : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPSEM();
    ~ActorProfileUnkPSEM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPSEM *GetProfile();
};
