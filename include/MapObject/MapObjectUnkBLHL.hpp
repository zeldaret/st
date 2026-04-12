//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBLHL : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkBLHL();

    /* 30 */ virtual ~MapObjectUnkBLHL() override;

    void func_ov079_0215673c(void);
    void func_ov079_02156780(void);
    void func_ov079_021567b8(void);
    void func_ov079_02156840(void);
};

class MapObjectProfileUnkBLHL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBLHL();
    ~MapObjectProfileUnkBLHL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBLHL *GetProfile();
};
