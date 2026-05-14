#pragma once

#include "global.h"
#include "types.h"

enum SaveCourseIndex_ {
    SaveCourseIndex_None        = 0xFF,
    SaveCourseIndex_t_area0     = 0x00,
    SaveCourseIndex_t_area1     = 0x01,
    SaveCourseIndex_t_area2     = 0x02,
    SaveCourseIndex_t_area3     = 0x03,
    SaveCourseIndex_t_tutorial  = 0x04,
    SaveCourseIndex_t_forest    = 0x05,
    SaveCourseIndex_t_smarine   = 0x06,
    SaveCourseIndex_t_smount    = 0x07,
    SaveCourseIndex_t_smount2   = 0x08,
    SaveCourseIndex_t_smount3   = 0x09,
    SaveCourseIndex_t_eviltrain = 0x0A,
    SaveCourseIndex_d_main      = 0x0B,
    SaveCourseIndex_d_main_f    = 0x0C,
    SaveCourseIndex_d_main_s    = 0x0D,
    SaveCourseIndex_d_main_a    = 0x0E,
    SaveCourseIndex_d_main_w    = 0x0F,
    SaveCourseIndex_d_tutorial  = 0x10,
    SaveCourseIndex_d_forest    = 0x11,
    SaveCourseIndex_d_snow      = 0x12,
    SaveCourseIndex_d_water     = 0x13,
    SaveCourseIndex_d_flame     = 0x14,
    SaveCourseIndex_d_sand      = 0x15,
    SaveCourseIndex_b_forest    = 0x16,
    SaveCourseIndex_b_snow      = 0x17,
    SaveCourseIndex_b_water     = 0x18,
    SaveCourseIndex_b_flame     = 0x19,
    SaveCourseIndex_b_sand      = 0x1A,
    SaveCourseIndex_b_deago     = 0x1B,
    SaveCourseIndex_b_last1     = 0x1C,
    SaveCourseIndex_b_last2     = 0x1D,
    SaveCourseIndex_b_last22    = 0x1E,
    SaveCourseIndex_b_last23    = 0x1F,
    SaveCourseIndex_f_hyral     = 0x20,
    SaveCourseIndex_f_htown     = 0x21,
    SaveCourseIndex_f_forest1   = 0x22,
    SaveCourseIndex_f_snow      = 0x23,
    SaveCourseIndex_f_water     = 0x24,
    SaveCourseIndex_f_flame     = 0x25,
    SaveCourseIndex_f_flame5    = 0x26,
    SaveCourseIndex_f_first     = 0x27,
    SaveCourseIndex_f_forest2   = 0x28,
    SaveCourseIndex_f_snow2     = 0x29,
    SaveCourseIndex_f_water2    = 0x2A,
    SaveCourseIndex_f_flame2    = 0x2B,
    SaveCourseIndex_f_sand      = 0x2C,
    SaveCourseIndex_f_tetsuo    = 0x2D,
    SaveCourseIndex_f_bridge    = 0x2E,
    SaveCourseIndex_f_bridge2   = 0x2F,
    SaveCourseIndex_f_forest3   = 0x30,
    SaveCourseIndex_f_water3    = 0x31,
    SaveCourseIndex_f_ajito     = 0x32,
    SaveCourseIndex_f_ajito2    = 0x33,
    SaveCourseIndex_f_flame3    = 0x34,
    SaveCourseIndex_f_flame4    = 0x35,
    SaveCourseIndex_f_rabbit    = 0x36,
    SaveCourseIndex_f_kakushi1  = 0x37,
    SaveCourseIndex_f_kakushi2  = 0x38,
    SaveCourseIndex_f_kakushi3  = 0x39,
    SaveCourseIndex_f_kakushi4  = 0x3A,
    SaveCourseIndex_f_pirate    = 0x3B,
    SaveCourseIndex_f_passenger = 0x3C,
    SaveCourseIndex_f_trnnpc    = 0x3D,
    SaveCourseIndex_e3_train    = 0x3E,
    SaveCourseIndex_e3_dungeon  = 0x3F,
    SaveCourseIndex_e3_boss     = 0x40,
    SaveCourseIndex_e3_bossm    = 0x41,
    SaveCourseIndex_e3_smount   = 0x42,
    SaveCourseIndex_Max         = 0x60,
};

struct UnkStruct_func_ov000_020702a8 {
    /* 00 */ STRUCT_PAD(0x00, 0x20);
    /* 20 */ unk16 mUnk_20;
};

struct CourseRoomEntry {
    u8 roomIndex;
    u8 mapPaintIndex;
    u8 unk_02;
    u8 unk_03;
};

struct CourseEntry {
    /* 00 */ const char name[16];
    /* 10 */ unk32 unk_10;
    /* 14 */ unk8 mNumRooms;
    /* 15 */ unk8 unk_15;
    /* 16 */ unk8 unk_16;
    /* 17 */ u8 mSaveCourseIndex;
    /* 18 */ STRUCT_PAD(0x18, 0x1D);
    /* 1D */ u8 unk_1D;
    /* 1E */ u8 unk_1E;
    /* 1F */ u8 unk_1F;
    /* 20 */ u8 defaultMapPaintIndex;
    /* 24 */ CourseRoomEntry roomEntries[];
};

class UnkStruct_027e09a0 {
public:
    /* 00 */ CourseEntry **mUnk_00; // elements from courselist.clb

    UnkStruct_027e09a0();
    ~UnkStruct_027e09a0();

    CourseEntry *GetCourseEntry(u32 sceneIndex);
    UnkStruct_func_ov000_020702a8 *func_ov000_020702a8(unk32 param1);
    unk32 GetRoomEntryIndex();
    CourseRoomEntry *GetRoomEntry(u32 sceneIndex, unk32 param2);
    bool func_ov000_02070378(u32 param1);
};

extern UnkStruct_027e09a0 *data_027e09a0;
