//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSKBN : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSKBN();

    /* 30 */ virtual ~MapObjectUnkSKBN() override;

    void func_ov031_0210556c(void);
    void func_ov031_02105648(void);
    void func_ov031_02105690(void);
    void func_ov031_021056bc(void);
    void func_ov031_021057b4(void);
};

class MapObjectProfileUnkSKBN : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSKBN();
    ~MapObjectProfileUnkSKBN();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSKBN *GetProfile();
};
