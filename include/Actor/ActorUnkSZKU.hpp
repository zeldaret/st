//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSZKU : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSZKU();

    /* 4C */ virtual ~ActorUnkSZKU() override;

    void func_ov071_0215f424(void);
    void func_ov071_0215f530(void);
    void func_ov071_0215f5dc(void);
    void func_ov071_0215f608(void);
    void func_ov071_0215f654(void);
    void func_ov071_0215f714(void);
    void func_ov071_0215f7dc(void);
    void func_ov071_0215f7f4(void);
    void func_ov071_0215f80c(void);
    void func_ov071_0215f824(void);
    void func_ov071_0215f92c(void);
    void func_ov071_0215fc0c(void);
    void func_ov071_0215fc54(void);
    void func_ov071_0215fca4(void);
    void func_ov071_0215fd04(void);
    void func_ov071_0215fd80(void);
    void func_ov071_0215fdd4(void);
    void func_ov071_0215fe54(void);
    void func_ov071_0215fe94(void);
    void func_ov071_0215fed4(void);
    void func_ov071_0215ff08(void);
    void func_ov071_0215ff3c(void);
    void func_ov071_0215ffb8(void);
    void func_ov071_0215ffbc(void);
    void func_ov071_02160000(void);
    void func_ov071_02160038(void);
    void func_ov071_02160078(void);
    void func_ov071_02160094(void);
    void func_ov071_021600b8(void);
    void func_ov071_021600d4(void);
    void func_ov071_021600e8(void);
};

class ActorProfileUnkSZKU : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSZKU();
    ~ActorProfileUnkSZKU();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSZKU *GetProfile();
};
