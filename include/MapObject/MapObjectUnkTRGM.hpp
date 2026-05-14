//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRGM : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRGM();

    /* 30 */ virtual ~MapObjectUnkTRGM() override;

    void func_ov030_02142edc(void);
    void func_ov030_02142fc4(void);
    void func_ov030_02143058(void);
    void func_ov030_02143070(void);
    void func_ov030_021430b0(void);
    void func_ov030_021430d0(void);
    void func_ov030_021430f0(void);
    void func_ov030_021430f8(void);
};

class MapObjectProfileUnkTRGM : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRGM();
    ~MapObjectProfileUnkTRGM();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRGM *GetProfile();
};
