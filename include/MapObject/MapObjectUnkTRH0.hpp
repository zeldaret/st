//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRH0 : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTRH0();

    /* 4C */ virtual ~MapObjectUnkTRH0() override;

    void func_ov028_02145eb8(void);
    void func_ov028_02145fa4(void);
    void func_ov028_02145fc4(void);
    void func_ov028_02145fe4(void);
    void func_ov028_02146004(void);
};

class MapObjectProfileUnkTRH0 : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRH0();
    ~MapObjectProfileUnkTRH0();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRH0 *GetProfile();
};
