//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTREW : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTREW();

    /* 30 */ virtual ~MapObjectUnkTREW() override;

    void func_ov031_02104250(void);
    void func_ov031_02104298(void);
    void func_ov031_021042a8(void);
    void func_ov031_021042d4(void);
    void func_ov031_021042e0(void);
};

class MapObjectProfileUnkTREW : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTREW();
    ~MapObjectProfileUnkTREW();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTREW *GetProfile();
};
