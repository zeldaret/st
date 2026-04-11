//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGORS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGORS();

    /* 4C */ virtual ~ActorUnkGORS() override;

    void func_ov067_021596a4(void);
    void func_ov067_02159720(void);
    void func_ov067_02159754(void);
    void func_ov067_021597a8(void);
    void func_ov067_021598b8(void);
    void func_ov067_02159920(void);
    void func_ov067_02159948(void);
    void func_ov067_02159954(void);
    void func_ov067_02159960(void);
    void func_ov067_0215996c(void);
    void func_ov067_021599d0(void);
    void func_ov067_02159ad0(void);
    void func_ov067_02159ba8(void);
    void func_ov067_02159c48(void);
    void func_ov067_02159c90(void);
    void func_ov067_02159cec(void);
    void func_ov067_02159d10(void);
    void func_ov067_02159d20(void);
    void func_ov067_02159d28(void);
};

class ActorProfileUnkGORS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkGORS();
    ~ActorProfileUnkGORS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGORS *GetProfile();
};
