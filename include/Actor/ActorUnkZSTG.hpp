//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkZSTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkZSTG();

    /* 4C */ virtual ~ActorUnkZSTG() override;

    void func_ov040_0212a83c(void);
    void func_ov040_0212a888(void);
    void func_ov040_0212a8c4(void);
    void func_ov040_0212a8c8(void);
    void func_ov040_0212a900(void);
    void func_ov040_0212a914(void);
    void func_ov040_0212a9bc(void);
    void func_ov040_0212a9dc(void);
    void func_ov040_0212aa74(void);
    void func_ov040_0212aa78(void);
    void func_ov040_0212aaa4(void);
};

class ActorProfileUnkZSTG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkZSTG();
    ~ActorProfileUnkZSTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkZSTG *GetProfile();
};
