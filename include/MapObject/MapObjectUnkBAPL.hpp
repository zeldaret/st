//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBAPL : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkBAPL();

    /* 30 */ virtual ~MapObjectUnkBAPL() override;

    void func_ov021_020f49f4(void);
    void func_ov021_020f4b4c(void);
    void func_ov021_020f4ba0(void);
    void func_ov021_020f4c18(void);
    void func_ov021_020f4c58(void);
    void func_ov021_020f4c5c(void);
    void func_ov021_020f4c60(void);
    void func_ov021_020f4c64(void);
    void func_ov021_020f4c90(void);
    void func_ov021_020f4c9c(void);
    void func_ov021_020f4d0c(void);
    void func_ov021_020f4d3c(void);
    void func_ov021_020f4d78(void);
    void func_ov021_020f4dc0(void);
    void func_ov021_020f4e00(void);
    void func_ov021_020f4e3c(void);
    void func_ov021_020f4e68(void);
    void func_ov021_020f505c(void);
    void func_ov021_020f5268(void);
    void func_ov021_020f5490(void);
    void func_ov021_020f56b4(void);
    void func_ov021_020f5868(void);
    void func_ov021_020f58a4(void);
    void func_ov021_020f58f0(void);
    void func_ov021_020f5900(void);
    void func_ov021_020f591c(void);
    void func_ov021_020f59d0(void);
};

class MapObjectProfileUnkBAPL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBAPL();
    ~MapObjectProfileUnkBAPL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBAPL *GetProfile();
};
