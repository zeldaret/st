//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTMNP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTMNP();

    /* 4C */ virtual ~ActorUnkTMNP() override;

    void func_ov040_0212d1e0(void);
    void func_ov040_0212d23c(void);
    void func_ov040_0212d248(void);
    void func_ov040_0212d268(void);
    void func_ov040_0212d280(void);
    void func_ov040_0212d298(void);
    void func_ov040_0212d2c8(void);
};

class ActorProfileUnkTMNP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTMNP();
    ~ActorProfileUnkTMNP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTMNP *GetProfile();
};
