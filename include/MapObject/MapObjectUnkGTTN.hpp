//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkGTTN : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkGTTN();

    /* 4C */ virtual ~MapObjectUnkGTTN() override;

    void func_ov050_021363c4(void);
    void func_ov050_021363d8(void);
    void func_ov050_02136638(void);
    void func_ov050_02136658(void);
    void func_ov050_0213666c(void);
    void func_ov050_0213668c(void);
    void func_ov050_021366bc(void);
    void func_ov050_02136770(void);
};

class MapObjectProfileUnkGTTN : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkGTTN();
    ~MapObjectProfileUnkGTTN();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkGTTN *GetProfile();
};
