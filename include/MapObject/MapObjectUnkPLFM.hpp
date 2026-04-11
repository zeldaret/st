//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkPLFM : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkPLFM();

    /* 4C */ virtual ~MapObjectUnkPLFM() override;

    void func_ov026_02108468(void);
    void func_ov026_0210847c(void);
    void func_ov026_02108490(void);
    void func_ov026_021084a4(void);
    void func_ov026_021088ec(void);
    void func_ov026_02108a40(void);
    void func_ov026_02108b7c(void);
    void func_ov026_02108bfc(void);
    void func_ov026_02108ca4(void);
    void func_ov026_02108cac(void);
    void func_ov026_02108cb4(void);
    void func_ov026_02108d10(void);
    void func_ov026_02108d34(void);
    void func_ov026_02108d60(void);
    void func_ov026_02108d8c(void);
    void func_ov026_02108da8(void);
    void func_ov026_02108df4(void);
};

class MapObjectProfileUnkPLFM : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkPLFM();
    ~MapObjectProfileUnkPLFM();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkPLFM *GetProfile();
};
