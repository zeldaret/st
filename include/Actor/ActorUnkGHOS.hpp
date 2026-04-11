//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGHOS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGHOS();

    /* 4C */ virtual ~ActorUnkGHOS() override;

    void func_ov047_02131500(void);
    void func_ov047_02131520(void);
    void func_ov047_021315ec(void);
    void func_ov047_02131620(void);
    void func_ov047_02131658(void);
    void func_ov047_02131894(void);
    void func_ov047_021318a8(void);
    void func_ov047_021318bc(void);
    void func_ov047_021318d0(void);
    void func_ov047_021318e4(void);
    void func_ov047_02131a14(void);
    void func_ov047_02131a88(void);
    void func_ov047_02131ab0(void);
    void func_ov047_02131b08(void);
    void func_ov047_02132468(void);
    void func_ov047_0213255c(void);
    void func_ov047_02132604(void);
    void func_ov047_02132630(void);
    void func_ov047_021326d4(void);
    void func_ov047_02132974(void);
    void func_ov047_021329e8(void);
    void func_ov047_02132a84(void);
    void func_ov047_02132b1c(void);
    void func_ov047_02132cec(void);
    void func_ov047_02132d88(void);
    void func_ov047_02132f88(void);
    void func_ov047_02133044(void);
    void func_ov047_021331c8(void);
    void func_ov047_02133284(void);
    void func_ov047_02133340(void);
    void func_ov047_02133378(void);
    void func_ov047_0213349c(void);
    void func_ov047_021334f0(void);
    void func_ov047_02133604(void);
    void func_ov047_021336d4(void);
    void func_ov047_0213374c(void);
    void func_ov047_021337f0(void);
    void func_ov047_02133968(void);
    void func_ov047_02133b2c(void);
    void func_ov047_02133fa0(void);
    void func_ov047_02134028(void);
    void func_ov047_02134394(void);
    void func_ov047_02134614(void);
    void func_ov047_021346bc(void);
    void func_ov047_021346fc(void);
    void func_ov047_0213478c(void);
    void func_ov047_02134798(void);
    void func_ov047_021347cc(void);
    void func_ov047_021348b0(void);
    void func_ov047_021348c4(void);
    void func_ov047_0213491c(void);
    void func_ov047_021349d0(void);
    void func_ov047_02134a48(void);
    void func_ov047_02134aec(void);
    void func_ov047_02134b18(void);
    void func_ov047_02134b70(void);
    void func_ov047_02134c64(void);
    void func_ov047_02134f7c(void);
    void func_ov047_02134fa4(void);
    void func_ov047_02135080(void);
    void func_ov047_021350a4(void);
    void func_ov047_021350b4(void);
    void func_ov047_021350bc(void);
    void func_ov047_021350e0(void);
    void func_ov047_0213510c(void);
    void func_ov047_02135128(void);
    void func_ov047_02135144(void);
    void func_ov047_02135160(void);
    void func_ov047_0213517c(void);
};

class ActorProfileUnkGHOS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkGHOS();
    ~ActorProfileUnkGHOS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGHOS *GetProfile();
};
