//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOLDS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkOLDS();

    /* 4C */ virtual ~ActorUnkOLDS() override;

    void func_ov040_0212cd8c(void);
    void func_ov040_0212cee4(void);
    void func_ov040_0212cefc(void);
    void func_ov040_0212cf34(void);
    void func_ov040_0212cf5c(void);
    void func_ov040_0212cf74(void);
    void func_ov040_0212cfac(void);
    void func_ov040_0212cfb8(void);
    void func_ov040_0212cfd4(void);
    void func_ov040_0212d040(void);
};

class ActorProfileUnkOLDS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkOLDS();
    ~ActorProfileUnkOLDS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkOLDS *GetProfile();
};
