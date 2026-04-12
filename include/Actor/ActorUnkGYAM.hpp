//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGYAM_c4 : public Actor_c4 {
public:
    ActorUnkGYAM_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkGYAM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGYAM();

    /* 4C */ virtual ~ActorUnkGYAM() override;

    void func_ov051_02130514(void);
    void func_ov051_021307bc(void);
    void func_ov051_021307d0(void);
    void func_ov051_021307e4(void);
    void func_ov051_021307f8(void);
    void func_ov051_0213080c(void);
    void func_ov051_02130974(void);
    void func_ov051_02130a58(void);
    void func_ov051_02130ab4(void);
    void func_ov051_02130afc(void);
    void func_ov051_02130b90(void);
    void func_ov051_021315c0(void);
    void func_ov051_02131698(void);
    void func_ov051_02131708(void);
    void func_ov051_02131748(void);
    void func_ov051_021317b8(void);
    void func_ov051_021318b0(void);
    void func_ov051_02131920(void);
    void func_ov051_02131954(void);
    void func_ov051_021319cc(void);
    void func_ov051_02131a1c(void);
    void func_ov051_02131a8c(void);
    void func_ov051_02131adc(void);
    void func_ov051_02131afc(void);
    void func_ov051_02131d3c(void);
    void func_ov051_02131e30(void);
    void func_ov051_021322f4(void);
    void func_ov051_0213237c(void);
    void func_ov051_02132884(void);
    void func_ov051_02132898(void);
    void func_ov051_02132cd4(void);
    void func_ov051_02133000(void);
    void func_ov051_0213330c(void);
    void func_ov051_021334bc(void);
    void func_ov051_021337c8(void);
    void func_ov051_02133968(void);
    void func_ov051_02133bc0(void);
    void func_ov051_02133c40(void);
    void func_ov051_02133c7c(void);
    void func_ov051_02133d08(void);
    void func_ov051_02133d30(void);
    void func_ov051_02133da0(void);
    void func_ov051_02133dd4(void);
    void func_ov051_02133ee0(void);
    void func_ov051_02134050(void);
    void func_ov051_0213410c(void);
    void func_ov051_02134210(void);
    void func_ov051_02134238(void);
    void func_ov051_0213426c(void);
    void func_ov051_02134418(void);
    void func_ov051_021349f4(void);
    void func_ov051_02134aac(void);
    void func_ov051_02134b2c(void);
    void func_ov051_02134b6c(void);
    void func_ov051_02134c00(void);
    void func_ov051_02134c48(void);
    void func_ov051_02134d18(void);
    void func_ov051_02134de8(void);
    void func_ov051_02134e00(void);
    void func_ov051_021350e8(void);
    void func_ov051_0213519c(void);
    void func_ov051_021351e4(void);
    void func_ov051_02135298(void);
    void func_ov051_02135338(void);
    void func_ov051_021353ec(void);
    void func_ov051_021354b8(void);
    void func_ov051_021355c8(void);
    void func_ov051_021355d8(void);
    void func_ov051_0213564c(void);
    void func_ov051_021356ec(void);
    void func_ov051_021357c8(void);
    void func_ov051_021357e0(void);
    void func_ov051_02135ab0(void);
    void func_ov051_02135bdc(void);
    void func_ov051_02135c54(void);
    void func_ov051_02135cb8(void);
    void func_ov051_02135d30(void);
    void func_ov051_02135e44(void);
    void func_ov051_02136364(void);
    void func_ov051_021364e4(void);
    void func_ov051_0213651c(void);
    void func_ov051_02136578(void);
    void func_ov051_02136694(void);
    void func_ov051_02136b9c(void);
    void func_ov051_02136ba4(void);
    void func_ov051_02136bd0(void);
    void func_ov051_02136bf4(void);
    void func_ov051_02136c18(void);
    void func_ov051_02136c44(void);
    void func_ov051_02136c50(void);
    void func_ov051_02136c6c(void);
    void func_ov051_02136c88(void);
    void func_ov051_02136ca4(void);
};

class ActorProfileUnkGYAM : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkGYAM();
    ~ActorProfileUnkGYAM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGYAM *GetProfile();
};
