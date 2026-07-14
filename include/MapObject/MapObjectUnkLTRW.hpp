//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkLTRW : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkLTRW();

    /* 30 */ virtual ~MapObjectUnkLTRW() override;

    void func_ov063_02160c6c(void);
    void func_ov063_02160cc8(void);
    void func_ov063_02160ce4(void);
    void func_ov063_02160d18(void);
    void func_ov063_02160d34(void);
    void func_ov063_02160df8(void);
    void func_ov063_02160e18(void);
};

class MapObjectProfileUnkLTRW : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkLTRW();
    ~MapObjectProfileUnkLTRW();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkLTRW *GetProfile();
};
