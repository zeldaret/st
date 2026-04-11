//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkMBBS : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkMBBS();

    /* 4C */ virtual ~MapObjectUnkMBBS() override;

    void func_ov094_02175040(void);
    void func_ov094_0217506c(void);
    void func_ov094_02175088(void);
    void func_ov094_0217509c(void);
    void func_ov094_02175174(void);
    void func_ov094_02175190(void);
    void func_ov094_021751dc(void);
    void func_ov094_021751fc(void);
    void func_ov094_02175218(void);
    void func_ov094_02175258(void);
    void func_ov094_021752f4(void);
};

class MapObjectProfileUnkMBBS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkMBBS();
    ~MapObjectProfileUnkMBBS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkMBBS *GetProfile();
};
