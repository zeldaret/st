//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDLTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDLTG();

    /* 4C */ virtual ~ActorUnkDLTG() override;

    void func_ov047_021357fc(void);
    void func_ov047_02135878(void);
    void func_ov047_021358a4(void);
    void func_ov047_021358c0(void);
};

class ActorProfileUnkDLTG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkDLTG();
    ~ActorProfileUnkDLTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDLTG *GetProfile();
};
