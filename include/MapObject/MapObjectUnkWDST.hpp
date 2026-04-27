//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkWDST : public MapObject {
public:
    /* 00 (base) */
    /* 40 */ STRUCT_PAD(0x40, 0xB8);
    /* B8 */ unk32 mUnk_B8;

    MapObjectUnkWDST();

    /* 30 */ virtual ~MapObjectUnkWDST() override;

    void func_ov094_02171d4c(void);
    void func_ov094_02171e58(void);
    void func_ov094_02171e9c(void);
    void func_ov094_02171fbc(void);
    void func_ov094_02172030(void);
    void func_ov094_02172290(void);
    void func_ov094_021722e0(void);
    void func_ov094_021722f4(void);
    void func_ov094_021726a0(void);
    void func_ov094_021726ac(void);
    void func_ov094_021727d4(void);
    void func_ov094_021728a4(void);
    void func_ov094_02172930(void);
    void func_ov094_02172a18(void);
    void func_ov094_02172a44(void);
    void func_ov094_02172ae0(void);
    void func_ov094_02172af4(void);
    void func_ov094_02172bfc(void);
    void func_ov094_02172c94(unk32 param1);
    void func_ov094_0217310c(void);
    void func_ov094_021731e4(void);
    void func_ov094_02173464(void);
    void func_ov094_02173494(void);
    void func_ov094_021734d4(void);
    void func_ov094_021734fc(void);
    void func_ov094_02173514(void);
    void func_ov094_02173520(void);
    void func_ov094_02173574(void);
    void func_ov094_02173578(void);
    void func_ov094_02173584(void);
    void func_ov094_02173618(void);
    void func_ov094_02173620(void);
    void func_ov094_02173680(void);
    void func_ov094_021738c0(void);
};

class MapObjectProfileUnkWDST : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkWDST();
    ~MapObjectProfileUnkWDST();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkWDST *GetProfile();
};
