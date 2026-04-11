//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkLVCM : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkLVCM();

    /* 4C */ virtual ~MapObjectUnkLVCM() override;

    void func_ov084_0215d544(void);
    void func_ov084_0215d67c(void);
    void func_ov084_0215d7cc(void);
    void func_ov084_0215d820(void);
    void func_ov084_0215d8c0(void);
    void func_ov084_0215d998(void);
    void func_ov084_0215d9ac(void);
    void func_ov084_0215da28(void);
    void func_ov084_0215da48(void);
    void func_ov084_0215da98(void);
    void func_ov084_0215dabc(void);
    void func_ov084_0215dacc(void);
};

class MapObjectProfileUnkLVCM : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkLVCM();
    ~MapObjectProfileUnkLVCM();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkLVCM *GetProfile();
};
