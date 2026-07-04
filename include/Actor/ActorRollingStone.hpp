#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorRollingStone : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorRollingStone();

    /* 4C */ virtual ~ActorRollingStone() override;

    void func_ov031_020f8354();
    void func_ov031_020f83e4();
    void func_ov031_020f849c();
    void func_ov031_020f8674();
    void func_ov031_020f8688();
    void func_ov031_020f869c();
    void func_ov031_020f878c();
    void func_ov031_020f8824();
    void func_ov031_020f8880();
    void func_ov031_020f8948();
    void func_ov031_020f89f4();
    void func_ov031_020f8a04();
    void func_ov031_020f8a2c();
    void func_ov031_020f8a38();
    void func_ov031_020f8a3c();
    void func_ov031_020f8a58();
    void func_ov031_020f8b58();
    void func_ov031_020f8bc4();
    void func_ov031_020f8de8();
    void func_ov031_020f8ed4();
    void func_ov031_020f8f0c();
    void func_ov031_020f8f10();
    void func_ov031_020f8f30();
    void func_ov031_020f9018();
    void func_ov031_020f9050();
    void func_ov031_020f916c();
    void func_ov031_020f91ac();
    void func_ov031_020f9250();
    void func_ov031_020f92cc();
    void func_ov031_020f9340();
    void func_ov031_020f93bc();
    void func_ov031_020f9494();
    void func_ov031_020f9554();
    void func_ov031_020f97cc();
    void func_ov031_020f98e4();
    void func_ov031_020f9af4();
    void func_ov031_020f9af8();
    void func_ov031_020f9ba4();
    void func_ov031_020f9cc0();
    void func_ov031_020f9cf4();
    void func_ov031_020f9d60();
};

class ActorProfileRollingStone : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileRollingStone();
    ~ActorProfileRollingStone();

    /* 0C */ virtual Actor *Create();

    static ActorProfileRollingStone *GetProfile();
};
