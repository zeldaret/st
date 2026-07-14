//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkEFRS : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkEFRS();

    /* 30 */ virtual ~MapObjectUnkEFRS() override;

    void func_ov026_0210e944(void);
    void func_ov026_0210e9bc(void);
    void func_ov026_0210ea0c(void);
    void func_ov026_0210ec24(void);
    void func_ov026_0210ec30(void);
    void func_ov026_0210ec4c(void);
    void func_ov026_0210ec54(void);
    void func_ov026_0210ecb8(void);
};

class MapObjectProfileUnkEFRS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkEFRS();
    ~MapObjectProfileUnkEFRS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkEFRS *GetProfile();
};
