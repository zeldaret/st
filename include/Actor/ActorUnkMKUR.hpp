//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMKUR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMKUR();

    /* 4C */ virtual ~ActorUnkMKUR() override;

    void func_ov032_0211b988(void);
    void func_ov032_0211b9a4(void);
    void func_ov032_0211ba0c(void);
    void func_ov032_0211bc74(void);
    void func_ov032_0211bd78(void);
    void func_ov032_0211be04(void);
    void func_ov032_0211be30(void);
    void func_ov032_0211bea8(void);
    void func_ov032_0211bf84(void);
    void func_ov032_0211bffc(void);
    void func_ov032_0211c07c(void);
    void func_ov032_0211c108(void);
    void func_ov032_0211c2c4(void);
    void func_ov032_0211c340(void);
    void func_ov032_0211c444(void);
    void func_ov032_0211c4d4(void);
    void func_ov032_0211c53c(void);
    void func_ov032_0211c5cc(void);
    void func_ov032_0211c73c(void);
    void func_ov032_0211c7bc(void);
    void func_ov032_0211c938(void);
    void func_ov032_0211c9d8(void);
    void func_ov032_0211ca20(void);
    void func_ov032_0211ca6c(void);
    void func_ov032_0211cab8(void);
    void func_ov032_0211cb2c(void);
    void func_ov032_0211cc10(void);
    void func_ov032_0211cc48(void);
    void func_ov032_0211cd20(void);
    void func_ov032_0211cd60(void);
    void func_ov032_0211cf74(void);
    void func_ov032_0211cfac(void);
    void func_ov032_0211d028(void);
    void func_ov032_0211d040(void);
    void func_ov032_0211d08c(void);
    void func_ov032_0211d2e4(void);
    void func_ov032_0211d384(void);
    void func_ov032_0211d568(void);
    void func_ov032_0211d674(void);
    void func_ov032_0211d6d8(void);
    void func_ov032_0211d7e8(void);
    void func_ov032_0211d80c(void);
    void func_ov032_0211d830(void);
    void func_ov032_0211d864(void);
    void func_ov032_0211d910(void);
    void func_ov032_0211d920(void);
    void func_ov032_0211da0c(void);
};

class ActorProfileUnkMKUR : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkMKUR();
    ~ActorProfileUnkMKUR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMKUR *GetProfile();
};
