//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKEYT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKEYT();

    /* 4C */ virtual ~ActorUnkKEYT() override;

    void func_ov041_02123c7c(void);
    void func_ov041_02123cf8(void);
    void func_ov041_02123d40(void);
    void func_ov041_02123d88(void);
    void func_ov041_02123eb8(void);
    void func_ov041_02123ff8(void);
    void func_ov041_02124094(void);
    void func_ov041_021240c0(void);
    void func_ov041_02124164(void);
};

class ActorProfileUnkKEYT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkKEYT();
    ~ActorProfileUnkKEYT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKEYT *GetProfile();
};
