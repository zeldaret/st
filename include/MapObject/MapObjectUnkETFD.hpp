//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkETFD : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkETFD();

    /* 4C */ virtual ~MapObjectUnkETFD() override;

    void func_ov092_02166f5c(void);
    void func_ov092_02166ffc(void);
    void func_ov092_02167000(void);
    void func_ov092_02167008(void);
    void func_ov092_02167038(void);
    void func_ov092_02167040(void);
    void func_ov092_021671ac(void);
};

class MapObjectProfileUnkETFD : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkETFD();
    ~MapObjectProfileUnkETFD();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkETFD *GetProfile();
};
