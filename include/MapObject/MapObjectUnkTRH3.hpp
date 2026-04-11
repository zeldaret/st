//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRH3 : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTRH3();

    /* 4C */ virtual ~MapObjectUnkTRH3() override;

    void func_ov030_02143544(void);
    void func_ov030_02143630(void);
    void func_ov030_021436a4(void);
    void func_ov030_021436bc(void);
    void func_ov030_021436fc(void);
    void func_ov030_0214371c(void);
    void func_ov030_0214373c(void);
};

class MapObjectProfileUnkTRH3 : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRH3();
    ~MapObjectProfileUnkTRH3();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRH3 *GetProfile();
};
