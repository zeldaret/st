//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRWA : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTRWA();

    /* 4C */ virtual ~MapObjectUnkTRWA() override;

    void func_ov029_02142390(void);
    void func_ov029_0214247c(void);
    void func_ov029_0214249c(void);
    void func_ov029_021424bc(void);
    void func_ov029_021424dc(void);
};

class MapObjectProfileUnkTRWA : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRWA();
    ~MapObjectProfileUnkTRWA();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRWA *GetProfile();
};
