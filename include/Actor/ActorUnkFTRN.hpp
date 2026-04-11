//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFTRN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFTRN();

    /* 4C */ virtual ~ActorUnkFTRN() override;

    void func_ov040_02123688(void);
    void func_ov040_0212369c(void);
    void func_ov040_021236b0(void);
    void func_ov040_021236c4(void);
    void func_ov040_021236d8(void);
    void func_ov040_021238bc(void);
    void func_ov040_02123924(void);
    void func_ov040_02123cd8(void);
    void func_ov040_02123d50(void);
    void func_ov040_02123e0c(void);
    void func_ov040_02123e4c(void);
    void func_ov040_02123e50(void);
    void func_ov040_02124004(void);
    void func_ov040_02124048(void);
    void func_ov040_021243e0(void);
    void func_ov040_021245b4(void);
    void func_ov040_02124e00(void);
    void func_ov040_02124e94(void);
    void func_ov040_021250cc(void);
    void func_ov040_021255b4(void);
    void func_ov040_0212564c(void);
    void func_ov040_021258d8(void);
    void func_ov040_02125920(void);
    void func_ov040_02125998(void);
    void func_ov040_021259cc(void);
    void func_ov040_02125a28(void);
    void func_ov040_02125b94(void);
    void func_ov040_02125c68(void);
    void func_ov040_02125d10(void);
    void func_ov040_02125dc0(void);
    void func_ov040_02125f70(void);
    void func_ov040_0212602c(void);
    void func_ov040_02126090(void);
    void func_ov040_021260dc(void);
    void func_ov040_021260fc(void);
    void func_ov040_02126144(void);
    void func_ov040_02126214(void);
    void func_ov040_02126344(void);
    void func_ov040_021263c4(void);
    void func_ov040_02126450(void);
    void func_ov040_02126554(void);
    void func_ov040_021266b0(void);
    void func_ov040_02126710(void);
    void func_ov040_021267e4(void);
    void func_ov040_021268a0(void);
    void func_ov040_02126938(void);
    void func_ov040_02126a70(void);
    void func_ov040_02126b00(void);
    void func_ov040_02126bb0(void);
    void func_ov040_02126d64(void);
    void func_ov040_02126e5c(void);
    void func_ov040_02127014(void);
    void func_ov040_021271ec(void);
    void func_ov040_0212723c(void);
    void func_ov040_02127274(void);
    void func_ov040_021272a4(void);
    void func_ov040_0212740c(void);
    void func_ov040_0212741c(void);
};

class ActorProfileUnkFTRN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkFTRN();
    ~ActorProfileUnkFTRN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFTRN *GetProfile();
};
