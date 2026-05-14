//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRRA : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRRA();

    /* 30 */ virtual ~MapObjectUnkTRRA() override;

    void func_ov027_02143940(void);
    void func_ov027_02143a2c(void);
    void func_ov027_02143aa0(void);
    void func_ov027_02143ab8(void);
    void func_ov027_02143af8(void);
    void func_ov027_02143b18(void);
    void func_ov027_02143b38(void);
};

class MapObjectProfileUnkTRRA : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRRA();
    ~MapObjectProfileUnkTRRA();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRRA *GetProfile();
};
