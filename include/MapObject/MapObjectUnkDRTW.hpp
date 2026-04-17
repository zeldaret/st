//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRTW : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkDRTW();

    /* 30 */ virtual ~MapObjectUnkDRTW() override;

    void func_ov048_02133dc4(void);
    void func_ov048_02133e94(void);
    void func_ov048_02133f28(void);
    void func_ov048_021342fc(void);
    void func_ov048_0213433c(void);
    void func_ov048_02134510(void);
    void func_ov048_02134634(void);
    void func_ov048_021346f4(void);
    void func_ov048_02134750(void);
    void func_ov048_02134784(void);
    void func_ov048_021347a0(void);
};

class MapObjectProfileUnkDRTW : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRTW();
    ~MapObjectProfileUnkDRTW();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRTW *GetProfile();
};
