//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRCK : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkDRCK();

    /* 4C */ virtual ~MapObjectUnkDRCK() override;

    void func_ov031_020ff598(void);
    void func_ov031_020ff6a8(void);
    void func_ov031_020ff6bc(void);
    void func_ov031_020ff7bc(void);
    void func_ov031_020ffb8c(void);
    void func_ov031_020ffb98(void);
    void func_ov031_020ffce4(void);
    void func_ov031_020ffddc(void);
    void func_ov031_020ffde4(void);
    void func_ov031_020ffe1c(void);
    void func_ov031_020ffe7c(void);
    void func_ov031_020ffe8c(void);
    void func_ov031_020ffe94(void);
    void func_ov031_020ffe9c(void);
    void func_ov031_020ffeec(void);
    void func_ov031_020fff10(void);
    void func_ov031_021000ac(void);
    void func_ov031_02100138(void);
    void func_ov031_02100164(void);
    void func_ov031_021001a8(void);
    void func_ov031_021001ac(void);
    void func_ov031_021001b0(void);
};

class MapObjectProfileUnkDRCK : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRCK();
    ~MapObjectProfileUnkDRCK();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRCK *GetProfile();
};
