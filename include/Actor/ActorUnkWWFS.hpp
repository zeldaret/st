//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWWFS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWWFS();

    /* 4C */ virtual ~ActorUnkWWFS() override;

    void func_ov038_0211914c(void);
    void func_ov038_02119184(void);
    void func_ov038_02119418(void);
    void func_ov038_0211942c(void);
    void func_ov038_02119440(void);
    void func_ov038_02119454(void);
    void func_ov038_021195a4(void);
    void func_ov038_0211961c(void);
    void func_ov038_02119660(void);
    void func_ov038_021196b0(void);
    void func_ov038_021196d4(void);
    void func_ov038_02119700(void);
    void func_ov038_0211974c(void);
    void func_ov038_02119780(void);
    void func_ov038_021197d0(void);
    void func_ov038_0211989c(void);
    void func_ov038_02119928(void);
    void func_ov038_02119a08(void);
    void func_ov038_02119a54(void);
    void func_ov038_02119b08(void);
    void func_ov038_02119fec(void);
    void func_ov038_0211a138(void);
    void func_ov038_0211a2c8(void);
    void func_ov038_0211a3ac(void);
    void func_ov038_0211a3e8(void);
    void func_ov038_0211a458(void);
    void func_ov038_0211a49c(void);
    void func_ov038_0211a50c(void);
    void func_ov038_0211a534(void);
    void func_ov038_0211a66c(void);
    void func_ov038_0211aa2c(void);
    void func_ov038_0211ab9c(void);
    void func_ov038_0211ad24(void);
    void func_ov038_0211aee0(void);
    void func_ov038_0211b094(void);
    void func_ov038_0211b18c(void);
    void func_ov038_0211b210(void);
    void func_ov038_0211b34c(void);
    void func_ov038_0211b7a0(void);
    void func_ov038_0211b8b0(void);
    void func_ov038_0211ba7c(void);
    void func_ov038_0211bb7c(void);
    void func_ov038_0211bcbc(void);
    void func_ov038_0211bdd4(void);
    void func_ov038_0211bf0c(void);
    void func_ov038_0211bf6c(void);
    void func_ov038_0211c1d4(void);
    void func_ov038_0211c6ac(void);
    void func_ov038_0211c8d4(void);
    void func_ov038_0211c9c0(void);
    void func_ov038_0211ca6c(void);
    void func_ov038_0211cab8(void);
    void func_ov038_0211cafc(void);
    void func_ov038_0211cb20(void);
    void func_ov038_0211cb64(void);
    void func_ov038_0211cc88(void);
    void func_ov038_0211cce0(void);
    void func_ov038_0211cd04(void);
    void func_ov038_0211cd30(void);
    void func_ov038_0211cd4c(void);
    void func_ov038_0211cd68(void);
};

class ActorProfileUnkWWFS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWWFS();
    ~ActorProfileUnkWWFS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWWFS *GetProfile();
};
