//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFBRD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFBRD();

    /* 4C */ virtual ~ActorUnkFBRD() override;

    void func_ov058_02148c60(void);
    void func_ov058_02148c88(void);
    void func_ov058_02148ca8(void);
    void func_ov058_02148cf8(void);
    void func_ov058_02149080(void);
    void func_ov058_02149094(void);
    void func_ov058_02149214(void);
    void func_ov058_021492b0(void);
    void func_ov058_02149314(void);
    void func_ov058_02149354(void);
    void func_ov058_0214938c(void);
    void func_ov058_021494c0(void);
    void func_ov058_0214951c(void);
    void func_ov058_02149574(void);
    void func_ov058_021495fc(void);
    void func_ov058_0214967c(void);
    void func_ov058_02149690(void);
    void func_ov058_021496e4(void);
    void func_ov058_021498b4(void);
    void func_ov058_02149bcc(void);
    void func_ov058_02149c5c(void);
    void func_ov058_02149d84(void);
    void func_ov058_02149d98(void);
    void func_ov058_0214a36c(void);
    void func_ov058_0214a384(void);
    void func_ov058_0214a610(void);
    void func_ov058_0214a7e0(void);
    void func_ov058_0214a840(void);
    void func_ov058_0214a8d0(void);
    void func_ov058_0214a8e4(void);
    void func_ov058_0214a958(void);
};

class ActorProfileUnkFBRD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFBRD();
    ~ActorProfileUnkFBRD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFBRD *GetProfile();
};
