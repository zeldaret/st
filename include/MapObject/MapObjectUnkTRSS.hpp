//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRSS : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTRSS();

    /* 4C */ virtual ~MapObjectUnkTRSS() override;

    void func_ov028_021444c8(void);
    void func_ov028_021445b4(void);
    void func_ov028_0214469c(void);
    void func_ov028_021446a4(void);
    void func_ov028_021446ac(void);
    void func_ov028_021446b0(void);
    void func_ov028_02144724(void);
    void func_ov028_0214473c(void);
    void func_ov028_0214477c(void);
    void func_ov028_0214479c(void);
    void func_ov028_021447bc(void);
    void func_ov028_0214480c(void);
};

class MapObjectProfileUnkTRSS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRSS();
    ~MapObjectProfileUnkTRSS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRSS *GetProfile();
};
