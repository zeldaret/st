//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRDT : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRDT();

    /* 30 */ virtual ~MapObjectUnkTRDT() override;

    void func_ov090_02174e60(void);
    void func_ov090_02174eac(void);
    void func_ov090_02174f40(void);
};

class MapObjectProfileUnkTRDT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRDT();
    ~MapObjectProfileUnkTRDT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRDT *GetProfile();
};
