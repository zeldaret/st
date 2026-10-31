#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorCharacter.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorSpinut.hpp"
#include "ActorUnkTLKT.hpp"
#include "ActorUnkZLSL_ZSRS.hpp"
#include "global.h"
#include "types.h"

// --- Actor SYDL ---

class ActorUnkSYDL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSYDL();

    /* 4C */ virtual ~ActorUnkSYDL() override;
};

class ActorProfileUnkSYDL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSYDL();
    ~ActorProfileUnkSYDL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSYDL *GetProfile();
};

// --- Actor SYOS ---

class ActorUnkSYOS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSYOS();

    /* 4C */ virtual ~ActorUnkSYOS() override;
};

class ActorProfileUnkSYOS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSYOS();
    ~ActorProfileUnkSYOS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSYOS *GetProfile();
};

// --- Actor SYSS ---

class ActorUnkSYSS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSYSS();

    /* 4C */ virtual ~ActorUnkSYSS() override;
};

class ActorProfileUnkSYSS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSYSS();
    ~ActorProfileUnkSYSS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSYSS *GetProfile();
};

// --- Actor SYIL ---

class ActorUnkSYIL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSYIL();

    /* 4C */ virtual ~ActorUnkSYIL() override;
};

class ActorProfileUnkSYIL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSYIL();
    ~ActorProfileUnkSYIL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSYIL *GetProfile();
};

// --- Actor SYWS ---

class ActorUnkSYWS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSYWS();

    /* 4C */ virtual ~ActorUnkSYWS() override;
};

class ActorProfileUnkSYWS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSYWS();
    ~ActorProfileUnkSYWS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSYWS *GetProfile();
};

// --- Actor SYIS ---

class ActorUnkSYIS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSYIS();

    /* 4C */ virtual ~ActorUnkSYIS() override;
};

class ActorProfileUnkSYIS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSYIS();
    ~ActorProfileUnkSYIS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSYIS *GetProfile();
};

// --- Actor SYDS ---

class ActorUnkSYDS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSYDS();

    /* 4C */ virtual ~ActorUnkSYDS() override;
};

class ActorProfileUnkSYDS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSYDS();
    ~ActorProfileUnkSYDS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSYDS *GetProfile();
};

// --- Actor SYOL ---

class ActorUnkSYOL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSYOL();

    /* 4C */ virtual ~ActorUnkSYOL() override;
};

class ActorProfileUnkSYOL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSYOL();
    ~ActorProfileUnkSYOL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSYOL *GetProfile();
};

// --- Actor SYSL ---

class ActorUnkSYSL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSYSL();

    /* 4C */ virtual ~ActorUnkSYSL() override;
};

class ActorProfileUnkSYSL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSYSL();
    ~ActorProfileUnkSYSL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSYSL *GetProfile();
};

// --- Actor SYWL ---

class ActorUnkSYWL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSYWL();

    /* 4C */ virtual ~ActorUnkSYWL() override;
};

class ActorProfileUnkSYWL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSYWL();
    ~ActorProfileUnkSYWL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSYWL *GetProfile();
};

// --- Actor SYFO ---

class ActorProfileUnkSYFO : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSYFO();
    ~ActorProfileUnkSYFO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSYFO *GetProfile();
};

// --- Actor SYSN ---

class ActorProfileUnkSYSN : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSYSN();
    ~ActorProfileUnkSYSN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSYSN *GetProfile();
};

// --- Actor SYWA ---

class ActorProfileUnkSYWA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSYWA();
    ~ActorProfileUnkSYWA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSYWA *GetProfile();
};

// --- Actor SYFI ---

class ActorProfileUnkSYFI : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSYFI();
    ~ActorProfileUnkSYFI();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSYFI *GetProfile();
};

// --- Actor SYDE ---

class ActorProfileUnkSYDE : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSYDE();
    ~ActorProfileUnkSYDE();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSYDE *GetProfile();
};

// --- GENERAL ---

enum ActorLokomoState_ {
    ActorLokomoState_0  = 0,
    ActorLokomoState_1  = 1,
    ActorLokomoState_2  = 2,
    ActorLokomoState_3  = 3,
    ActorLokomoState_4  = 4,
    ActorLokomoState_5  = 5,
    ActorLokomoState_6  = 6,
    ActorLokomoState_7  = 7,
    ActorLokomoState_8  = 8,
    ActorLokomoState_9  = 9,
    ActorLokomoState_10 = 10,
    ActorLokomoState_11 = 11,
    ActorLokomoState_12 = 12,
    ActorLokomoState_Max
};

class ActorLokomo_874 : public ActorUnkTLKT_9C_Base {
public:
    /* 00 (base) */
    /* 08 */

    /* 00 */ virtual void vfunc2_00() override;
    /* 04 */ virtual void vfunc2_04() override;
};

class ActorKenzo_Base_160 : public UnkStruct_ov000_020b31f0 {
public:
    /* 00 (base) */
    /* 2C */ UnkSystem5 mUnk_2C;
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ PAD(0x50, 0x8C);
    /* 8C */ UnkSystem5 mUnk_8C;
    /* AC */ unk32 mUnk_AC;
    /* B0 */ PAD(0xB0, 0xEC);
    /* EC */

    ActorKenzo_Base_160(ModelRender *param1, UnkActorFileSystem2 *param2) :
        UnkStruct_ov000_020b31f0(&mUnk_2C, &mUnk_8C, param1, param2),
        mUnk_2C(&mUnk_4C, NULL),
        mUnk_8C(&mUnk_AC, NULL) {

        if (param2 != NULL) {
            this->mUnk_8C.mpModel = this->mUnk_10;
            this->mUnk_2C.mpModel = this->mUnk_10;
        }
    }

    /* 00 */ virtual ~ActorKenzo_Base_160() override;
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2) override; // ActorUnkKOKO::func_ov058_02141d30
    /* 3C */ virtual void vfunc_3C() override;                           // ActorUnkKOKO::func_ov058_02141d0c
};

class ActorKenzo_Base : public ActorCharacter {
public:
    /* 000 (base) */
    /* 160 */ ActorKenzo_Base_160 mUnk_160;
    /* 24C */

    ActorKenzo_Base(ModelRender *param1, UnkActorFileSystem2 *param2) :
        ActorCharacter(param1, &mUnk_160),
        mUnk_160(param1, param2) {}

    // should be inlined
    /* 4C */ virtual ~ActorKenzo_Base() override;
};

// TODO: move in ov000
class ActorLokomo_2BC : public ModelRender_ov000_020b4d64 {
public:
    /* 00 (base) */
    /* 60 */

    ActorLokomo_2BC(G3d_Model *param1); // func_ov000_0209a780

    // data_ov000_020b3268
};

class ActorLokomo : public ActorKenzo_Base {
public:
    /* 000 (base) */
    /* 24C */ ModelRender_ov000_020b4d64 mUnk_24C;
    /* 2AC */ PAD(0x2AC, 0x2BC);
    /* 2BC */ ActorLokomo_2BC mUnk_2BC;
    /* 31C */ PAD(0x31C, 0x328);
    /* 328 */ ModelRender_ov000_020b1a1c mUnk_328;
    /* 388 */ PAD(0x388, 0x38C);
    /* 38C */ ModelRender_ov000_020b1a1c mUnk_38C;
    /* 3EC */ PAD(0x3EC, 0x3F0);
    /* 3F0 */ ModelRender_ov000_020b1a1c mUnk_3F0;
    /* 450 */ PAD(0x450, 0x454);
    /* 454 */ bool mUnk_454;
    /* 455 */ PAD(0x455, 0x458);
    /* 458 */ UnkStruct_ov000_020b31a8 mUnk_458;
    /* 474 */ PAD(0x474, 0x4C4);
    /* 4C4 */ UnkStruct_ov000_020b31f0 mUnk_4C4;
    /* 4F0 */ PAD(0x4F0, 0x5B0);
    /* 5B0 */ UnkStruct_ov000_020b31f0 mUnk_5B0;
    /* 5DC */ PAD(0x5DC, 0x69C);
    /* 69C */ UnkStruct_ov000_020b31f0 mUnk_69C;
    /* 6C8 */ PAD(0x6C8, 0x788);
    /* 788 */ UnkStruct_ov000_020b31f0 mUnk_788;
    /* 7B4 */ PAD(0x7B4, 0x874);
    /* 874 */ ActorLokomo_874 mUnk_874;
    /* 87C */ PAD(0x87C, 0x880);
    /* 880 */ bool mUnk_880;
    /* 881 */ PAD(0x881, 0x884);
    /* 884 */ unk32 mUnk_884;
    /* 888 */ UnkSystem7 mUnk_888;
    /* 88C */ PAD(0x88C, 0x8D0);
    /* 8D0 */ unk32 mUnk_8D0;
    /* 8D4 */ unk32 mUnk_8D4;
    /* 8D8 */ unk32 mUnk_8D8;
    /* 8DC */ unk32 mUnk_8DC;
    /* 8E0 */ unk32 mUnk_8E0;
    /* 8E4 */ unk32 mUnk_8E4;
    /* 8E8 */ unk32 mUnk_8E8;
    /* 8EC */ unk32 mUnk_8EC;
    /* 8F0 */ bool mUnk_8F0;
    /* 8F1 */ bool mUnk_8F1;
    /* 8F4 */ unk32 mUnk_8F4;
    /* 8F8 */ unk32 mUnk_8F8;
    /* 8FC */ PAD(0x8FC, 0x8FE);
    /* 8FE */ unk16 mUnk_8FE;
    /* 900 */ bool mUnk_900;
    /* 901 */ bool mUnk_901;
    /* 902 */ bool mUnk_902;
    /* 903 */ bool mUnk_903;
    /* 904 */ bool mUnk_904;
    /* 908 */ u32 mUnk_908;
    /* 90C */ u32 mUnk_90C;
    /* 910 */ u32 mUnk_910;
    /* 914 */ MtxFx43 mUnk_914;
    /* 944 */ MtxFx43 mUnk_944;
    /* 974 */ MtxFx43 mUnk_974;
    /* 9A4 */ unk32 mUnk_9A4;
    /* 9A8 */ unk32 mUnk_9A8;
    /* 9AC */ unk32 mUnk_9AC;
    /* 9B0 */ unk32 mUnk_9B0;
    /* 9B4 */ unk32 mUnk_9B4;
    /* 9B8 */ unk32 mUnk_9B8;
    /* 9BC */ unk32 mUnk_9BC;
    /* 9C0 */ unk32 mUnk_9C0;
    /* 9C4 */

    ActorLokomo();

    /* 018 */ virtual bool Init(unk32 param1) override;
    /* 020 */ virtual void Update() override;
    /* 02C */ virtual void vfunc_2C(unk32 param1) override;
    /* 04C */ virtual ~ActorLokomo() override;
    /* 054 */ virtual void vfunc_54(unk32 param1) override;
    /* 058 */ virtual void SetState(ActorState state) override;
    /* 05C */ virtual bool vfunc_5C(unk32 param1, unk32 param2) override;
    /* 07C */ virtual unk32 vfunc_7C(unk32 param1) override;
    /* 080 */ virtual unk32 vfunc_80(unk32 param1, unk32 param2) override;
    /* 098 */ virtual void vfunc_98(u32 param1) override;
    /* 09C */ virtual bool vfunc_9C() override;
    /* 0A0 */ virtual unk32 vfunc_A0() override;
    /* 0A4 */ virtual void vfunc_A4() override;
    /* 0B8 */ virtual void vfunc_B8() override;
    /* 0BC */ virtual void vfunc_0BC() override;
    /* 0C0 */ virtual void vfunc_0C0() override;
    /* 0C4 */ virtual void vfunc_0C4() override;
    /* 0C8 */ virtual void vfunc_0C8() override;
    /* 0CC */ virtual void vfunc_0CC() override;
    /* 0D0 */ virtual void vfunc_0D0() override;
    /* 0D4 */ virtual void vfunc_0D4() override;
    /* 0D8 */ virtual void vfunc_0D8() override;
    /* 0DC */ virtual void vfunc_0DC() override;
    /* 0E0 */ virtual void vfunc_0E0() override;
    /* 0F4 */ virtual void vfunc_0F4() override;
    /* 100 */ virtual void vfunc_100() override;
    /* 114 */ virtual void vfunc_114();
    /* 118 */ virtual void vfunc_118();
    /* 11C */ virtual void vfunc_11C();
    /* 120 */ virtual void vfunc_120();
    /* 124 */ virtual void vfunc_124();
    /* 128 */ virtual void vfunc_128();
    /* 12C */ virtual void vfunc_12C();
    /* 130 */ virtual void vfunc_130();
    /* 134 */ virtual void vfunc_134(unk32 param1);

    // bold guess
    unk32 func_ov058_02143438(unk32 param1);
    void func_ov058_021446b8();
    void func_ov058_02144ba0();
    void func_ov058_02145120();
    unk32 func_ov058_021456a4();
    unk32 func_ov058_021456d8();
    void func_ov058_021459b8();
    void func_ov058_02145bd4();
    void func_ov058_02145e94(bool param1);
    void func_ov058_02145ef0();
    void func_ov058_02146070();
    void func_ov058_02146848();
    void func_ov058_021468d8();
    void func_ov058_02146984(unk32 param1, unk32 param2);
    void func_ov058_02146c6c();
    unk32 func_ov058_02146ccc();
    unk32 func_ov058_02146cec(unk32 param1);
    unk32 func_ov058_02146d30(unk32 param1);
    void func_ov058_02146d74(unk32 param1);
    void func_ov058_021470d8();
    void func_ov058_02147148();
    void func_ov058_021471f4();
    static void func_ov058_02147760(Actor *param0, G3d_RenderState_ *param1);
    static void func_ov058_02147860(Actor *param0, G3d_RenderState_ *param1);
    bool func_ov058_02147aec();
    void func_ov058_02147b6c();
    void func_ov058_02147b98();
    void func_ov058_02147bc4(VecFx32 *vec, UnkAngleStruct param1);
    void func_ov058_02147bf4();
    void func_ov058_02147c30();
    void func_ov058_02147c6c();
    void func_ov058_02147ca8();
    void func_ov058_02147ce4(unk32 param1);
    void func_ov058_02147d20();
};
