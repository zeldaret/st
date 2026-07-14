//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRSH : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRSH();

    /* 30 */ virtual ~MapObjectUnkTRSH() override;

    void func_ov027_021427e0(void);
    void func_ov027_021428cc(void);
    void func_ov027_02142938(void);
    void func_ov027_02142950(void);
    void func_ov027_02142990(void);
    void func_ov027_021429b0(void);
    void func_ov027_021429d0(void);
};

class MapObjectProfileUnkTRSH : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRSH();
    ~MapObjectProfileUnkTRSH();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRSH *GetProfile();
};
