//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkMZFE : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkMZFE();

    /* 30 */ virtual ~MapObjectUnkMZFE() override;

    void func_ov027_02144378(void);
    void func_ov027_0214454c(void);
    void func_ov027_02144618(void);
    void func_ov027_02144664(void);
    void func_ov027_021446b4(void);
    void func_ov027_02144738(void);
    void func_ov027_02144774(void);
};

class MapObjectProfileUnkMZFE : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkMZFE();
    ~MapObjectProfileUnkMZFE();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkMZFE *GetProfile();
};
