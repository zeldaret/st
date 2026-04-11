//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFKTR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFKTR();

    /* 4C */ virtual ~ActorUnkFKTR() override;

    void func_ov027_02145144(void);
    void func_ov027_02145358(void);
    void func_ov027_02145398(void);
    void func_ov027_021453ac(void);
    void func_ov027_02145400(void);
    void func_ov027_021455f4(void);
    void func_ov027_02145644(void);
    void func_ov027_02145768(void);
    void func_ov027_02145788(void);
    void func_ov027_021457a8(void);
    void func_ov027_021458ec(void);
    void func_ov027_02145a34(void);
    void func_ov027_02145a38(void);
    void func_ov027_02145d4c(void);
    void func_ov027_02145f2c(void);
    void func_ov027_02145f74(void);
    void func_ov027_02145fb8(void);
    void func_ov027_0214603c(void);
    void func_ov027_02146258(void);
    void func_ov027_0214634c(void);
    void func_ov027_021465dc(void);
    void func_ov027_02146a9c(void);
    void func_ov027_02146ac8(void);
    void func_ov027_02146b30(void);
    void func_ov027_02146c04(void);
    void func_ov027_02146c18(void);
    void func_ov027_02146c1c(void);
    void func_ov027_02146d84(void);
    void func_ov027_02146e28(void);
    void func_ov027_02146e64(void);
    void func_ov027_02146f0c(void);
    void func_ov027_02147034(void);
    void func_ov027_02147170(void);
    void func_ov027_0214718c(void);
    void func_ov027_021472a0(void);
    void func_ov027_021472bc(void);
    void func_ov027_02147468(void);
    void func_ov027_021474a4(void);
    void func_ov027_02147534(void);
    void func_ov027_0214757c(void);
    void func_ov027_02147654(void);
    void func_ov027_02147740(void);
    void func_ov027_021477fc(void);
    void func_ov027_02147840(void);
    void func_ov027_021478ec(void);
    void func_ov027_02147948(void);
    void func_ov027_02147a04(void);
    void func_ov027_02147a48(void);
    void func_ov027_02147af4(void);
    void func_ov027_02147b20(void);
    void func_ov027_02147c40(void);
    void func_ov027_02147d9c(void);
    void func_ov027_02147e24(void);
    void func_ov027_02147e48(void);
    void func_ov027_02147e74(void);
    void func_ov027_02147e98(void);
    void func_ov027_02147ea8(void);
    void func_ov027_02147eb0(void);
    void func_ov027_02147ecc(void);
};

class ActorProfileUnkFKTR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFKTR();
    ~ActorProfileUnkFKTR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFKTR *GetProfile();
};
