//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkVOLV : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkVOLV();

    /* 4C */ virtual ~ActorUnkVOLV() override;

    void func_ov099_021819fc(void);
    void func_ov099_02181ae8(void);
    void func_ov099_02181b14(void);
    void func_ov099_02181b28(void);
};

class ActorProfileUnkVOLV : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkVOLV();
    ~ActorProfileUnkVOLV();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkVOLV *GetProfile();
};
