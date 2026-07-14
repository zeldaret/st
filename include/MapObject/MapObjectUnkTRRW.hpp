//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRRW : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRRW();

    /* 30 */ virtual ~MapObjectUnkTRRW() override;

    void func_ov029_02142648(void);
    void func_ov029_02142734(void);
    void func_ov029_02142754(void);
    void func_ov029_02142774(void);
    void func_ov029_02142794(void);
};

class MapObjectProfileUnkTRRW : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRRW();
    ~MapObjectProfileUnkTRRW();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRRW *GetProfile();
};
