//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMIFR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMIFR();

    /* 4C */ virtual ~ActorUnkMIFR() override;

    void func_ov042_02125224(void);
    void func_ov042_0212537c(void);
    void func_ov042_02125390(void);
    void func_ov042_021253a4(void);
    void func_ov042_021253e4(void);
    void func_ov042_02125450(void);
    void func_ov042_021254c0(void);
    void func_ov042_02125620(void);
    void func_ov042_02125630(void);
    void func_ov042_0212569c(void);
    void func_ov042_021256ac(void);
    void func_ov042_0212578c(void);
    void func_ov042_02125804(void);
    void func_ov042_02125894(void);
    void func_ov042_021258b0(void);
    void func_ov042_02125924(void);
    void func_ov042_02125d6c(void);
    void func_ov042_02125e94(void);
    void func_ov042_02125eb0(void);
    void func_ov042_02125fa8(void);
    void func_ov042_02126028(void);
    void func_ov042_02126164(void);
    void func_ov042_02126190(void);
    void func_ov042_021262c8(void);
    void func_ov042_02126604(void);
    void func_ov042_021268cc(void);
    void func_ov042_02126918(void);
};

class ActorProfileUnkMIFR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkMIFR();
    ~ActorProfileUnkMIFR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMIFR *GetProfile();
};
