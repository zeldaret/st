#include "Player/PlayerActorBase.hpp"
#include "Unknown/UnkStruct_027e09ac.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"
#include "global.h"
#include "math.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"

extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, void *);

void PlayerActorBase_70::func_ov017_020bbaa8(VecFx32 *param1, UnkAngleStruct param2) {
    if (this->mCharacter == PlayerCharacter_Link) {
        ModelRender_Derived4 *var_r5 = this->mUnk_00C.GetUnk08OrUnk0C(this->mUnk_126 != 0);

        var_r5->mUnk_BC = this->mUnk_114;
        var_r5->func_ov000_02057fe8(this->mUnk_124, param2, param1);

        if (this->mUnk_114 != NULL) {
            VecFx32 sp4;

            func_01ffb714(&this->mUnk_114[PlayerCharacter_Link].wColumn, param1, &sp4);
            VecFx32_Copy(&sp4, &this->mUnk_0E4.mUnk_0C[PlayerCharacter_Link]);

            func_01ffb714(&this->mUnk_114[PlayerCharacter_Phantom].wColumn, param1, &sp4);
            VecFx32_Copy(&sp4, &this->mUnk_0E4.mUnk_0C[PlayerCharacter_Phantom]);

            func_01ffb714(&this->mUnk_114[PlayerCharacter_Zelda].wColumn, param1, &sp4);
            VecFx32_Copy(&sp4, &this->mUnk_0E4.mUnk_0C[PlayerCharacter_Zelda]);

            if (this->mUnk_126 != 0) {
                ModelRender_Derived4 *temp_r1 = (ModelRender_Derived4 *) this->mUnk_00C.GetUnk08();
                VecFx32_Copy(&var_r5->mUnk_68, &temp_r1->mUnk_68);
            } else {
                ModelRender_Derived4 *temp_r1_2 = (ModelRender_Derived4 *) this->mUnk_00C.GetUnk0C();
                VecFx32_Copy(&var_r5->mUnk_68, &temp_r1_2->mUnk_68);
            }
        }
    } else {
        ModelRender_Derived4 *var_r4 = this->mUnk_00C.GetUnk08OrUnk0C(this->mUnk_126 != 0);

        var_r4->func_ov093_0216ca38(this->mUnk_127, this->mUnk_128, this->mUnk_126 != 0, this->mUnk_12A);
        var_r4->func_ov000_02057fe8(this->mUnk_124, param2, param1);

        if (this->mUnk_126 != 0) {
            ModelRender_Derived4 *temp_r1_3 = (ModelRender_Derived4 *) this->mUnk_00C.GetUnk08();
            VecFx32_Copy(&var_r4->mUnk_68, &temp_r1_3->mUnk_68);
        } else {
            ModelRender_Derived4 *temp_r1_4 = (ModelRender_Derived4 *) this->mUnk_00C.GetUnk0C();
            VecFx32_Copy(&var_r4->mUnk_68, &temp_r1_4->mUnk_68);
        }
    }
}

struct UnkStackStruct {
    /* 00 */ VecFx32 unk_00;
    /* 0C */ STRUCT_PAD(0x0C, 0x12);
    /* 12 */ s16 unk_12;
    /* 13 */ STRUCT_PAD(0x13, 0x50);
    /* 50 */
};

extern unk16 data_ov000_020ab318;
extern unk16 data_ov000_020ab31c;
extern "C" void func_ov017_020c1104(UnkStackStruct *param1, VecFx32 *param2, unk16 param3, unk32 param4);
extern "C" void func_ov017_020c117c(UnkStackStruct *param1, VecFx32 *param2, unk16 param3);
extern "C" void func_ov017_020c12fc(UnkStackStruct *param1, u8 param2, unk16 param3);

struct UnkStruct_ov021_02106c5c {
    /* 00 */ STRUCT_PAD(0x00, 0x13);
    /* 13 */ u8 unk_13;
};
extern "C" const UnkStruct_ov021_02106c5c *func_ov021_020ea868(int index);

void PlayerActorBase_70::func_ov017_020bbcd8(VecFx32 *param1, UnkAngleStruct param2) {
    UnkStackStruct sp28;
    VecFx32 sp1C;
    VecFx32 sp10;
    s16 temp_r9;
    u8 var_r7;

    VecFx32_Add(param1, (VecFx32 *) &this->mUnk_118, &sp1C);

    if (this->mUnk_126 != 0) {
        this->mUnk_01C->func_ov000_0208c7b0(&sp1C, param2);
    } else {
        this->func_ov017_020bbaa8(&sp1C, param2);
    }

    VecFx32_Add(&sp1C, &this->mUnk_0E4.mUnk_00, &sp10);
    sp10.y = sp1C.y;

    var_r7 = Get_ov000_020ab4dc(this->mCharacter)->mUnk_83;

    if (this->mUnk_008 == -1 && this->mCharacter == PlayerCharacter_Link) {
        if (!data_027e0d34->func_ov031_020d9ab8()) {
            func_ov017_020c1104(&sp28, &sp10, data_ov000_020ab31c, 4);

            sp28.unk_12 = this->mUnk_132;
            VecFx32_Add(&sp1C, &this->mUnk_0E4.mUnk_0C[PlayerCharacter_Link], &sp10);
            temp_r9 = data_ov000_020ab318;

            func_ov017_020c117c(&sp28, &sp10, temp_r9);
            VecFx32_Add(&sp1C, &this->mUnk_0E4.mUnk_0C[PlayerCharacter_Phantom], &sp10);

            func_ov017_020c117c(&sp28, &sp10, temp_r9);
            func_ov017_020c12fc(&sp28, var_r7, 0x6000);
        }
    } else {
        unk16 unk_6C = Get_ov000_020ab4dc(this->mCharacter)->mUnk_6C;

        if (this->mCharacter != PlayerCharacter_Link) {
            sp10.y += 0x19A;
        } else {
            var_r7 = func_ov021_020ea868(this->mUnk_008)->unk_13;
        }

        fx32 value = ROUND_FX32(data_027e09b4->mUnk_304 * this->mUnk_132);

        data_027e09b4->func_ov017_020c0970(&sp10, unk_6C, unk_6C, var_r7, 0xC, data_027e09ac->mUnk_014.mUnk_06, value);
    }
}

void PlayerActorBase_70::func_ov017_020bbef4(VecFx32 *param1, UnkAngleStruct param2) {
    VecFx32 sp0;
    ModelRender_Derived3 *var_r4;

    VecFx32_Add(param1, (VecFx32 *) &this->mUnk_118, &sp0);
    var_r4 = this->mUnk_00C.GetUnk08OrUnk0C(this->mUnk_126 != 0);

    var_r4->mRenderObj.flag |= 0x02;
    this->func_ov017_020bbaa8(&sp0, param2);
    var_r4->mRenderObj.flag &= ~0x02;
}

void PlayerActorBase_70::func_ov017_020bbf6c() {
    this->mUnk_01C->func_ov000_0208c7f0();
}
