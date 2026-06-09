#include "MainGame/AdventureMode.hpp"
#include "Message/BMG.hpp"
#include "math.hpp"

class UnkStruct_ov024_020d7f40 {
public:
    /* 00 */ s16 mUnk_00;
    /* 02 */ s16 mUnk_02;
    /* 04 */ s16 mUnk_04;
    /* 06 */ s16 mUnk_06;
    /* 08 */ s16 mUnk_08;
    /* 0A */ s16 mUnk_0A;
    /* 0C */ s16 mUnk_0C;
    /* 0E */ s16 mUnk_0E;
    /* 10 */

    UnkStruct_ov024_020d7f40() {
        this->mUnk_0C = 0xFF00;
        this->mUnk_0E = 0x0000;
        this->mUnk_08 = 0x0100;
        this->mUnk_0A = 0x0000;
        this->mUnk_04 = 0x0100;
        this->mUnk_06 = 0x0000;
        this->mUnk_00 = 0xFF00;
        this->mUnk_02 = 0x0000;
    }
};

const UnkStruct_ov024_020d7f40 data_ov024_020d7f40;

const int data_ov024_020d7320 = BMG_ID(BMGGroup_maingame, MsgIndex_SnowdriftStation);
const int data_ov024_020d731c = BMG_ID(BMGGroup_maingame, MsgIndex_SlipperyStation);
const int data_ov024_020d7324 = BMG_ID(BMGGroup_maingame, MsgIndex_ThreeQuestionMarks);
const int data_ov024_020d7318 = BMG_ID(BMGGroup_maingame, MsgIndex_LostAtSeaStation);
