//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkGELG : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkGELG();

    /* 30 */ virtual ~MapObjectUnkGELG() override;

    void func_ov034_0212200c(void);
    void func_ov034_0212202c(void);
    void func_ov034_02122048(void);
    void func_ov034_021221b8(void);
    void func_ov034_021221e4(void);
    void func_ov034_021221ec(void);
    void func_ov034_02122334(void);
    void func_ov034_02122340(void);
};

class MapObjectProfileUnkGELG : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkGELG();
    ~MapObjectProfileUnkGELG();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkGELG *GetProfile();
};
