//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMFK : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMFK();

    /* 4C */ virtual ~ActorUnkRMFK() override;

    void func_ov057_0213a1d4(void);
    void func_ov057_0213a1e8(void);
    void func_ov057_0213a43c(void);
    void func_ov057_0213a44c(void);
    void func_ov057_0213a540(void);
    void func_ov057_0213a544(void);
    void func_ov057_0213a558(void);
    void func_ov057_0213a640(void);
    void func_ov057_0213a6b8(void);
    void func_ov057_0213a6f8(void);
};

class ActorProfileUnkRMFK : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMFK();
    ~ActorProfileUnkRMFK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMFK *GetProfile();
};
