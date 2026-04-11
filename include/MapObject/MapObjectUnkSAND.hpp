//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSAND : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkSAND();

    /* 4C */ virtual ~MapObjectUnkSAND() override;

    void func_ov031_0210acd4(void);
    void func_ov031_0210ad64(void);
    void func_ov031_0210ae00(void);
    void func_ov031_0210ae90(void);
    void func_ov031_0210af50(void);
    void func_ov031_0210b018(void);
    void func_ov031_0210b028(void);
    void func_ov031_0210b0ac(void);
    void func_ov031_0210b0e4(void);
    void func_ov031_0210b144(void);
    void func_ov031_0210b17c(void);
    void func_ov031_0210b1ec(void);
    void func_ov031_0210b2cc(void);
    void func_ov031_0210b32c(void);
    void func_ov031_0210b34c(void);
};

class MapObjectProfileUnkSAND : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSAND();
    ~MapObjectProfileUnkSAND();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSAND *GetProfile();
};
