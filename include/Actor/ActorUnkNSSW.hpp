//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNSSW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNSSW();

    /* 4C */ virtual ~ActorUnkNSSW() override;

    void func_ov032_0211fefc(void);
    void func_ov032_0211ff10(void);
    void func_ov032_0211ff38(void);
    void func_ov032_02120118(void);
    void func_ov032_02120190(void);
    void func_ov032_0212025c(void);
    void func_ov032_021202d8(void);
    void func_ov032_021203fc(void);
    void func_ov032_0212074c(void);
    void func_ov032_02120880(void);
    void func_ov032_02120894(void);
    void func_ov032_02120b34(void);
    void func_ov032_02120b6c(void);
    void func_ov032_02120b7c(void);
    void func_ov032_02120bc0(void);
    void func_ov032_02120bfc(void);
    void func_ov032_02120c64(void);
    void func_ov032_02120cf0(void);
    void func_ov032_02120d24(void);
    void func_ov032_02120d60(void);
    void func_ov032_02120d7c(void);
    void func_ov032_02120dbc(void);
    void func_ov032_02120df8(void);
    void func_ov032_02120e4c(void);
};

class ActorProfileUnkNSSW : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkNSSW();
    ~ActorProfileUnkNSSW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNSSW *GetProfile();
};
