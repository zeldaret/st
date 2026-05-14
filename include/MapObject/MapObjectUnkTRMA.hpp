//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRMA : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRMA();

    /* 30 */ virtual ~MapObjectUnkTRMA() override;

    void func_ov028_02144bc4(void);
    void func_ov028_02144cb0(void);
    void func_ov028_02144d24(void);
    void func_ov028_02144d3c(void);
    void func_ov028_02144d7c(void);
    void func_ov028_02144d9c(void);
    void func_ov028_02144dbc(void);
};

class MapObjectProfileUnkTRMA : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRMA();
    ~MapObjectProfileUnkTRMA();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRMA *GetProfile();
};
