//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKOKO : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKOKO();

    /* 4C */ virtual ~ActorUnkKOKO() override;

    void func_ov058_0213f2f0(void);
    void func_ov058_0213f540(void);
    void func_ov058_0213f554(void);
    void func_ov058_0213f568(void);
    void func_ov058_0213f57c(void);
    void func_ov058_0213f590(void);
    void func_ov058_0213f790(void);
    void func_ov058_0213f874(void);
    void func_ov058_0213f910(void);
    void func_ov058_0213fc58(void);
    void func_ov058_0213fca0(void);
    void func_ov058_0213fd38(void);
    void func_ov058_0213fdb0(void);
    void func_ov058_0213fe18(void);
    void func_ov058_0213fe84(void);
    void func_ov058_0213fedc(void);
    void func_ov058_0213ff94(void);
    void func_ov058_02140024(void);
    void func_ov058_0214028c(void);
    void func_ov058_021403d0(void);
    void func_ov058_02140434(void);
    void func_ov058_021405a4(void);
    void func_ov058_02140644(void);
    void func_ov058_021408a8(void);
    void func_ov058_021409c4(void);
    void func_ov058_02140a34(void);
    void func_ov058_02140b18(void);
    void func_ov058_02140c20(void);
    void func_ov058_02140d28(void);
    void func_ov058_02140dd4(void);
    void func_ov058_02140eb4(void);
    void func_ov058_02140fa4(void);
    void func_ov058_02141030(void);
    void func_ov058_021410a4(void);
    void func_ov058_02141150(void);
    void func_ov058_021411dc(void);
    void func_ov058_02141264(void);
    void func_ov058_02141604(void);
    void func_ov058_02141634(void);
    void func_ov058_02141914(void);
    void func_ov058_021419bc(void);
    void func_ov058_02141a04(void);
    void func_ov058_02141a3c(void);
    void func_ov058_02141a74(void);
    void func_ov058_02141a84(void);
    void func_ov058_02141a94(void);
    void func_ov058_02141b50(void);
    void func_ov058_02141b84(void);
    void func_ov058_02141ba4(void);
    void func_ov058_02141c24(void);
    void func_ov058_02141cd0(void);
    void func_ov058_02141cf4(void);
    void func_ov058_02141d04(void);
    void func_ov058_02141d0c(void);
    void func_ov058_02141d30(void);
    void func_ov058_02141d5c(void);
    void func_ov058_02141d70(void);
    void func_ov058_02141d8c(void);
    void func_ov058_02141da8(void);
};

class ActorProfileUnkKOKO : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkKOKO();
    ~ActorProfileUnkKOKO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKOKO *GetProfile();
};
