//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTDDR : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTDDR();

    /* 4C */ virtual ~MapObjectUnkTDDR() override;

    void func_ov092_021668f8(void);
    void func_ov092_02166990(void);
    void func_ov092_0216699c(void);
};

class MapObjectProfileUnkTDDR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTDDR();
    ~MapObjectProfileUnkTDDR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTDDR *GetProfile();
};
