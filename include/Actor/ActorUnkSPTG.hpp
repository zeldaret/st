//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSPTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSPTG();

    /* 4C */ virtual ~ActorUnkSPTG() override;

    void func_ov094_0216c7cc(void);
    void func_ov094_0216c828(void);
    void func_ov094_0216c900(void);
    void func_ov094_0216c92c(void);
    void func_ov094_0216ce44(void);
    void func_ov094_0216ce58(void);
    void func_ov094_0216ce98(void);
    void func_ov094_0216ceb8(void);
    void func_ov094_0216cfb0(void);
    void func_ov094_0216cfb4(void);
    void func_ov094_0216cfd8(void);
    void func_ov094_0216cfdc(void);
    void func_ov094_0216d02c(void);
    void func_ov094_0216d0b4(void);
    void func_ov094_0216d310(void);
    void func_ov094_0216d314(void);
    void func_ov094_0216d388(void);
    void func_ov094_0216d3d8(void);
    void func_ov094_0216d674(void);
    void func_ov094_0216d75c(void);
    void func_ov094_0216d784(void);
    void func_ov094_0216da3c(void);
    void func_ov094_0216da74(void);
    void func_ov094_0216da90(void);
};

class ActorProfileUnkSPTG : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSPTG();
    ~ActorProfileUnkSPTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSPTG *GetProfile();
};
