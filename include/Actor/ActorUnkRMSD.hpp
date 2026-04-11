//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMSD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMSD();

    /* 4C */ virtual ~ActorUnkRMSD() override;

    void func_ov063_0215c408(void);
    void func_ov063_0215c45c(void);
    void func_ov063_0215c474(void);
    void func_ov063_0215c488(void);
    void func_ov063_0215c4c8(void);
};

class ActorProfileUnkRMSD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMSD();
    ~ActorProfileUnkRMSD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSD *GetProfile();
};
