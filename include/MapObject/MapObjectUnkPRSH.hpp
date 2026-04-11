//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkPRSH : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkPRSH();

    /* 4C */ virtual ~MapObjectUnkPRSH() override;

    void func_ov081_021520ec(void);
    void func_ov081_021521cc(void);
    void func_ov081_02152334(void);
    void func_ov081_021523b4(void);
    void func_ov081_0215243c(void);
    void func_ov081_02152444(void);
    void func_ov081_02152570(void);
    void func_ov081_02152574(void);
    void func_ov081_021525e0(void);
    void func_ov081_02152600(void);
    void func_ov081_02152610(void);
    void func_ov081_02152698(void);
};

class MapObjectProfileUnkPRSH : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkPRSH();
    ~MapObjectProfileUnkPRSH();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkPRSH *GetProfile();
};
