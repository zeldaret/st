//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkETYG : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkETYG();

    /* 4C */ virtual ~MapObjectUnkETYG() override;

    void func_ov092_021676e8(void);
    void func_ov092_021677e4(void);
    void func_ov092_021678f8(void);
    void func_ov092_021679e0(void);
    void func_ov092_021679e8(void);
    void func_ov092_021679f0(void);
    void func_ov092_021679f8(void);
    void func_ov092_02167a04(void);
    void func_ov092_02167a0c(void);
    void func_ov092_02167a14(void);
    void func_ov092_02167a28(void);
};

class MapObjectProfileUnkETYG : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkETYG();
    ~MapObjectProfileUnkETYG();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkETYG *GetProfile();
};
