//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRPI : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTRPI();

    /* 4C */ virtual ~MapObjectUnkTRPI() override;

    void func_ov029_02143614(void);
    void func_ov029_02143700(void);
    void func_ov029_02143720(void);
    void func_ov029_02143740(void);
    void func_ov029_02143760(void);
};

class MapObjectProfileUnkTRPI : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRPI();
    ~MapObjectProfileUnkTRPI();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRPI *GetProfile();
};
