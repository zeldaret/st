//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkRNBO : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkRNBO();

    /* 4C */ virtual ~MapObjectUnkRNBO() override;

    void func_ov071_02160b04(void);
    void func_ov071_02160b18(void);
};

class MapObjectProfileUnkRNBO : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkRNBO();
    ~MapObjectProfileUnkRNBO();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkRNBO *GetProfile();
};
