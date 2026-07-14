//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRH2 : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRH2();

    /* 30 */ virtual ~MapObjectUnkTRH2() override;

    void func_ov030_0214323c(void);
    void func_ov030_02143328(void);
    void func_ov030_0214339c(void);
    void func_ov030_021433b4(void);
    void func_ov030_021433f4(void);
    void func_ov030_02143414(void);
    void func_ov030_02143434(void);
};

class MapObjectProfileUnkTRH2 : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRH2();
    ~MapObjectProfileUnkTRH2();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRH2 *GetProfile();
};
