//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBFFL : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkBFFL();

    /* 4C */ virtual ~MapObjectUnkBFFL() override;

    void func_ov021_020f5b9c(void);
    void func_ov021_020f5c08(void);
    void func_ov021_020f5d94(void);
    void func_ov021_020f5da8(void);
    void func_ov021_020f5e30(void);
    void func_ov021_020f5e40(void);
    void func_ov021_020f5f38(void);
    void func_ov021_020f6058(void);
    void func_ov021_020f609c(void);
    void func_ov021_020f60b8(void);
    void func_ov021_020f6160(void);
};

class MapObjectProfileUnkBFFL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBFFL();
    ~MapObjectProfileUnkBFFL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBFFL *GetProfile();
};
