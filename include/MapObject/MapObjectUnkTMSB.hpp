//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTMSB : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTMSB();

    /* 4C */ virtual ~MapObjectUnkTMSB() override;

    void func_ov091_02168138(void);
    void func_ov091_0216814c(void);
    void func_ov091_02168340(void);
    void func_ov091_02168428(void);
    void func_ov091_02168430(void);
    void func_ov091_02168438(void);
    void func_ov091_0216843c(void);
    void func_ov091_02168440(void);
    void func_ov091_021684a0(void);
    void func_ov091_021684c0(void);
    void func_ov091_021684e0(void);
    void func_ov091_02168544(void);
    void func_ov091_02168574(void);
};

class MapObjectProfileUnkTMSB : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTMSB();
    ~MapObjectProfileUnkTMSB();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTMSB *GetProfile();
};
