//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkGRSS : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkGRSS();

    /* 30 */ virtual ~MapObjectUnkGRSS() override;

    void func_ov031_021010e0(void);
    void func_ov031_02101170(void);
    void func_ov031_0210148c(void);
    void func_ov031_02101504(void);
    void func_ov031_02101578(void);
    void func_ov031_021016b4(void);
    void func_ov031_0210173c(void);
    void func_ov031_02101778(void);
    void func_ov031_021017ec(void);
    void func_ov031_021018a4(void);
    void func_ov031_02101950(void);
    void func_ov031_02101968(void);
    void func_ov031_02101978(void);
};

class MapObjectProfileUnkGRSS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkGRSS();
    ~MapObjectProfileUnkGRSS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkGRSS *GetProfile();
};
