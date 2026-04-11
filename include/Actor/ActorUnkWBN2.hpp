//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWBN2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWBN2();

    /* 4C */ virtual ~ActorUnkWBN2() override;

    void func_ov046_02128904(void);
    void func_ov046_02128a48(void);
    void func_ov046_02128b0c(void);
    void func_ov046_02128b8c(void);
    void func_ov046_02128bc0(void);
    void func_ov046_02128be4(void);
    void func_ov046_02128c90(void);
    void func_ov046_02128c98(void);
    void func_ov046_02128ca4(void);
    void func_ov046_02128d14(void);
    void func_ov046_02128ec8(void);
    void func_ov046_02128f0c(void);
    void func_ov046_021290f8(void);
    void func_ov046_021291e0(void);
    void func_ov046_021291e4(void);
    void func_ov046_02129228(void);
    void func_ov046_02129260(void);
    void func_ov046_021292d4(void);
    void func_ov046_02129304(void);
    void func_ov046_021293b4(void);
    void func_ov046_021293c8(void);
    void func_ov046_021293e4(void);
    void func_ov046_021293f4(void);
    void func_ov046_02129434(void);
    void func_ov046_0212946c(void);
    void func_ov046_021294a0(void);
    void func_ov046_021294dc(void);
    void func_ov046_021294f8(void);
    void func_ov046_02129538(void);
    void func_ov046_02129574(void);
    void func_ov046_021295b4(void);
    void func_ov046_021295c8(void);
};

class ActorProfileUnkWBN2 : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkWBN2();
    ~ActorProfileUnkWBN2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWBN2 *GetProfile();
};
