//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDOPA : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkDOPA();

    /* 4C */ virtual ~MapObjectUnkDOPA() override;

    void func_ov033_02119e7c(void);
    void func_ov033_02119ee0(void);
    void func_ov033_02119f30(void);
    void func_ov033_0211a1ac(void);
    void func_ov033_0211a570(void);
    void func_ov033_0211a8fc(void);
    void func_ov033_0211a910(void);
    void func_ov033_0211aa0c(void);
    void func_ov033_0211ac74(void);
    void func_ov033_0211adb4(void);
    void func_ov033_0211add8(void);
    void func_ov033_0211af54(void);
    void func_ov033_0211b09c(void);
    void func_ov033_0211b1c4(void);
    void func_ov033_0211b214(void);
    void func_ov033_0211b230(void);
    void func_ov033_0211b3cc(void);
    void func_ov033_0211b43c(void);
    void func_ov033_0211b458(void);
    void func_ov033_0211b480(void);
    void func_ov033_0211b4c4(void);
    void func_ov033_0211b608(void);
    void func_ov033_0211b644(void);
};

class MapObjectProfileUnkDOPA : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDOPA();
    ~MapObjectProfileUnkDOPA();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDOPA *GetProfile();
};
