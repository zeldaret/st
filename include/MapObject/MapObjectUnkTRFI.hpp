//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRFI : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRFI();

    /* 30 */ virtual ~MapObjectUnkTRFI() override;

    void func_ov030_02142a98(void);
    void func_ov030_02142b84(void);
    void func_ov030_02142c6c(void);
    void func_ov030_02142c74(void);
    void func_ov030_02142c7c(void);
    void func_ov030_02142c80(void);
    void func_ov030_02142cf4(void);
    void func_ov030_02142d0c(void);
    void func_ov030_02142d4c(void);
    void func_ov030_02142d6c(void);
    void func_ov030_02142d8c(void);
    void func_ov030_02142ddc(void);
};

class MapObjectProfileUnkTRFI : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRFI();
    ~MapObjectProfileUnkTRFI();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRFI *GetProfile();
};
