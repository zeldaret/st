//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTBRD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTBRD();

    /* 4C */ virtual ~ActorUnkTBRD() override;

    void func_ov026_02116a04(void);
    void func_ov026_02116c6c(void);
    void func_ov026_02116dd0(void);
    void func_ov026_02116e70(void);
    void func_ov026_02116f24(void);
    void func_ov026_02116f6c(void);
    void func_ov026_02116fa4(void);
    void func_ov026_02117038(void);
    void func_ov026_0211713c(void);
    void func_ov026_021171a0(void);
    void func_ov026_02117230(void);
    void func_ov026_0211725c(void);
    void func_ov026_021172b0(void);
    void func_ov026_02117450(void);
    void func_ov026_02117464(void);
    void func_ov026_021175f4(void);
    void func_ov026_02117608(void);
    void func_ov026_021176a8(void);
    void func_ov026_0211775c(void);
    void func_ov026_02117978(void);
    void func_ov026_02117a64(void);
    void func_ov026_02117cac(void);
    void func_ov026_02117d98(void);
    void func_ov026_02118064(void);
    void func_ov026_0211814c(void);
    void func_ov026_02118380(void);
    void func_ov026_02118404(void);
    void func_ov026_0211845c(void);
    void func_ov026_021185d8(void);
    void func_ov026_02118934(void);
    void func_ov026_02118ac4(void);
    void func_ov026_02118df4(void);
    void func_ov026_02118ef8(void);
    void func_ov026_02119168(void);
    void func_ov026_02119320(void);
    void func_ov026_02119798(void);
    void func_ov026_02119830(void);
    void func_ov026_0211a570(void);
    void func_ov026_0211a5c0(void);
    void func_ov026_0211a768(void);
    void func_ov026_0211a85c(void);
    void func_ov026_0211a9d4(void);
    void func_ov026_0211a9dc(void);
};

class ActorProfileUnkTBRD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTBRD();
    ~ActorProfileUnkTBRD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTBRD *GetProfile();
};
