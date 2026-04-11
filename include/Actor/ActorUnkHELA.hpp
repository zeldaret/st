//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkHELA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkHELA();

    /* 4C */ virtual ~ActorUnkHELA() override;

    void func_ov030_02143b68(void);
    void func_ov030_02143b90(void);
    void func_ov030_02143c84(void);
    void func_ov030_02143ca4(void);
    void func_ov030_02143f4c(void);
    void func_ov030_02143f60(void);
    void func_ov030_02143fe0(void);
    void func_ov030_02144030(void);
    void func_ov030_02144110(void);
    void func_ov030_02144160(void);
    void func_ov030_021443c8(void);
    void func_ov030_02144674(void);
    void func_ov030_021446a0(void);
    void func_ov030_02144888(void);
    void func_ov030_02144fc0(void);
    void func_ov030_021450e8(void);
    void func_ov030_02145220(void);
    void func_ov030_021452a8(void);
    void func_ov030_02145620(void);
    void func_ov030_02145664(void);
    void func_ov030_021456bc(void);
    void func_ov030_02145704(void);
    void func_ov030_021459d0(void);
    void func_ov030_02145d00(void);
    void func_ov030_02145e10(void);
    void func_ov030_02145ea4(void);
    void func_ov030_0214628c(void);
    void func_ov030_02146324(void);
    void func_ov030_02146504(void);
    void func_ov030_02146534(void);
    void func_ov030_0214666c(void);
    void func_ov030_021468a8(void);
    void func_ov030_021469e8(void);
    void func_ov030_02146a8c(void);
    void func_ov030_02146ad4(void);
    void func_ov030_02146bbc(void);
    void func_ov030_02146bf4(void);
    void func_ov030_02146c40(void);
    void func_ov030_02146c88(void);
    void func_ov030_02146ce0(void);
    void func_ov030_02146e10(void);
    void func_ov030_02146f18(void);
    void func_ov030_02146f44(void);
    void func_ov030_0214703c(void);
    void func_ov030_02147078(void);
    void func_ov030_02147280(void);
    void func_ov030_02147294(void);
    void func_ov030_02147310(void);
    void func_ov030_02147364(void);
    void func_ov030_021474dc(void);
    void func_ov030_021476b4(void);
    void func_ov030_021477f0(void);
    void func_ov030_02147e3c(void);
    void func_ov030_02147ea4(void);
    void func_ov030_02147ee4(void);
    void func_ov030_02147f08(void);
    void func_ov030_02147fbc(void);
    void func_ov030_02148084(void);
    void func_ov030_02148220(void);
    void func_ov030_0214834c(void);
    void func_ov030_02148374(void);
    void func_ov030_02148614(void);
    void func_ov030_021489d8(void);
    void func_ov030_02148abc(void);
    void func_ov030_02148b3c(void);
    void func_ov030_02148b54(void);
    void func_ov030_02148c30(void);
    void func_ov030_02148f70(void);
    void func_ov030_02148f88(void);
    void func_ov030_02149084(void);
    void func_ov030_02149174(void);
    void func_ov030_02149278(void);
    void func_ov030_021492e0(void);
    void func_ov030_021492f8(void);
    void func_ov030_02149464(void);
    void func_ov030_021495e8(void);
    void func_ov030_021496f8(void);
    void func_ov030_02149774(void);
    void func_ov030_021497f4(void);
    void func_ov030_02149968(void);
    void func_ov030_021499a8(void);
    void func_ov030_02149a3c(void);
    void func_ov030_02149a9c(void);
    void func_ov030_02149d38(void);
    void func_ov030_02149dd4(void);
    void func_ov030_02149e24(void);
    void func_ov030_0214a060(void);
    void func_ov030_0214a404(void);
    void func_ov030_0214a424(void);
    void func_ov030_0214a524(void);
    void func_ov030_0214a72c(void);
    void func_ov030_0214a778(void);
    void func_ov030_0214aa64(void);
    void func_ov030_0214ab20(void);
    void func_ov030_0214acc8(void);
    void func_ov030_0214af3c(void);
    void func_ov030_0214af7c(void);
    void func_ov030_0214afa0(void);
    void func_ov030_0214afcc(void);
    void func_ov030_0214b03c(void);
    void func_ov030_0214b08c(void);
    void func_ov030_0214b0a4(void);
};

class ActorProfileUnkHELA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkHELA();
    ~ActorProfileUnkHELA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkHELA *GetProfile();
};
