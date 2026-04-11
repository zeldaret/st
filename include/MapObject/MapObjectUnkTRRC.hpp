//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRRC : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTRRC();

    /* 4C */ virtual ~MapObjectUnkTRRC() override;

    void func_ov026_02109a50(void);
    void func_ov026_02109af0(void);
    void func_ov026_02109b90(void);
    void func_ov026_02109c34(void);
    void func_ov026_02109c8c(void);
    void func_ov026_02109d04(void);
    void func_ov026_02109d34(void);
    void func_ov026_02109dd8(void);
    void func_ov026_02109e28(void);
};

class MapObjectProfileUnkTRRC : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRRC();
    ~MapObjectProfileUnkTRRC();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRRC *GetProfile();
};
