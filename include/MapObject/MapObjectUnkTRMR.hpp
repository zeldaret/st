//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRMR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRMR();

    /* 30 */ virtual ~MapObjectUnkTRMR() override;

    void func_ov090_02174980(void);
    void func_ov090_021749c0(void);
    void func_ov090_02174a10(void);
    void func_ov090_02174a1c(void);
};

class MapObjectProfileUnkTRMR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRMR();
    ~MapObjectProfileUnkTRMR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRMR *GetProfile();
};
