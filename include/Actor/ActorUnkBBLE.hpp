//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBBLE_c4 : public Actor_c4 {
public:
    ActorUnkBBLE_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkBBLE : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBBLE();

    /* 4C */ virtual ~ActorUnkBBLE() override;

    void func_ov077_02157b48(void);
    void func_ov077_02157ba8(void);
    void func_ov077_02157bc8(void);
    void func_ov077_02157d14(void);
    void func_ov077_02157d48(void);
    void func_ov077_0215804c(void);
    void func_ov077_021580b8(void);
    void func_ov077_02158140(void);
    void func_ov077_0215816c(void);
    void func_ov077_02158220(void);
    void func_ov077_02158268(void);
    void func_ov077_02158348(void);
    void func_ov077_0215837c(void);
    void func_ov077_0215842c(void);
    void func_ov077_0215856c(void);
    void func_ov077_021586dc(void);
    void func_ov077_021587d4(void);
    void func_ov077_0215885c(void);
    void func_ov077_02158918(void);
    void func_ov077_021589c4(void);
    void func_ov077_02158a3c(void);
    void func_ov077_02158a54(void);
    void func_ov077_02158ad8(void);
};

class ActorProfileUnkBBLE : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBBLE();
    ~ActorProfileUnkBBLE();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBBLE *GetProfile();
};
