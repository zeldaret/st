//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRSA : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTRSA();

    /* 4C */ virtual ~MapObjectUnkTRSA() override;

    void func_ov029_02142914(void);
    void func_ov029_02142b50(void);
    void func_ov029_02142c38(void);
    void func_ov029_02142c40(void);
    void func_ov029_02142c48(void);
    void func_ov029_02142c4c(void);
    void func_ov029_02142dc0(void);
    void func_ov029_02142f58(void);
    void func_ov029_02142fa4(void);
    void func_ov029_02143030(void);
    void func_ov029_02143088(void);
    void func_ov029_021430d0(void);
    void func_ov029_021430f0(void);
    void func_ov029_02143110(void);
    void func_ov029_02143130(void);
    void func_ov029_021431c0(void);
};

class MapObjectProfileUnkTRSA : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRSA();
    ~MapObjectProfileUnkTRSA();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRSA *GetProfile();
};
