#include "Player/PlayerLink.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "global.h"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nitro/types.h"

extern "C" bool func_ov000_020864f8(void *, UnkAngleStruct, void *, void *);

bool PlayerLinkActor::func_ov017_020bd6b8() {
    bool ret = false;

    if (!(this->mUnk_38.mUnk_00.mUnk_08 != 0 || this->mUnk_0A0->mUnk_68 == 0x32)) {
        ret = true;
    }

    return ret;
}

unk32 PlayerLinkActor::func_ov017_020bd6e0(bool param1) {
    if (data_027e0ce0->mUnk_24 != 0) {
        return data_027e0ce0->mUnk_24->func_ov021_020eaef0(this->mUnk_4C, param1);
    }

    if (!param1 && this->func_ov000_0208cc90()) {
        return 1;
    }

    if (data_027e0cd8->mUnk_0C->func_ov000_0208217c(&this->mPos, 1)) {
        return 2;
    }

    return 0;
}

void PlayerLinkActor::func_ov017_020bd758() {
    if (!this->func_ov000_0208db08()) {
        this->mUnk_0B8 = 6;
        return;
    }

    if (this->mUnk_0B8 != 0) {
        this->mUnk_0B8--;
    }
}

void PlayerLinkActor::func_ov017_020bd788(bool param1) {
    STACK_PAD(0x10);

    VecFx32_Copy(&this->mPos, &this->mPrevPos);

    if (this->func_ov000_0208d754() != 0) {
        this->mUnk_138.func_ov000_020609c4();
    } else {
        this->mUnk_138.func_ov000_02060b64();
    }

    this->mUnk_5C.func_ov000_02089f0c(param1);

    if (this->mUnk_0B7 != 0) {
        this->mUnk_0B7--;
    }

    if (this->mUnk_0B9 != 0) {
        if (this->mUnk_0BA != 0) {
            this->mUnk_0BC.func_ov000_020609c4();
        } else {
            this->func_ov000_0208d3fc();
        }
    }

    if (this->mUnk_134 != NULL) {
        this->mUnk_134->func_ov031_020db160(param1);
    }

    this->mUnk_70->func_ov000_02082e54();

    if (param1) {
        unk32 var_r4 = -1;

        if (this->mUnk_0A0->func_ov000_02091f08(0x0B) || this->mUnk_0A0->func_ov000_02091f08(0x0F)) {
            VecFx32_Reset(&this->mVel);
        } else {
            if (this->mUnk_09C->mUnk_090 >= 0 && !this->mUnk_0A0->func_ov000_020936c4()) {
                var_r4 = 3;

                if (this->mUnk_0A0->mUnk_68 != 0x16) {
                    this->mUnk_0A0->func_ov000_020921e4(0x16);
                }
            } else if (this->mUnk_0A0->mUnk_74 >= 0) {
                var_r4 = 0;
            } else {
                PlayerLinkActor_A0 *ptr = this->mUnk_0A0;

                if (this->mUnk_58->Unk78HasValue()) {
                    var_r4 = 2;
                } else if (ptr->func_ov000_020936c4()) {
                    var_r4 = 1;
                }
            }

            if (var_r4 == -1) {
                var_r4 = 0;

                if (this->mUnk_0A0->mUnk_68 != 0x70) {
                    this->mVel.x = 0;
                    this->mVel.z = 0;
                }

                this->func_ov000_0208cbf0();
            } else {
                this->func_ov000_0208cbf0();
            }
        }

        this->mUnk_09C->mUnk_098 = 0x1000;
        VecFx32_Reset(&this->mAccel);
        this->mUnk_0A0->func_ov000_02092648(1);

        if (this->mUnk_58->Unk78HasValue()) {
            this->func_ov000_0208d60c();
        }

        PlayerCharacter temp_r6     = this->mCharacter;
        PlayerActorBase_70 *temp_r7 = this->mUnk_70;
        temp_r7->func_ov000_020830a4(this->func_ov017_020bd6e0(1), temp_r6, 1, 1, this->func_ov000_0208dc98());

        if (var_r4 != -1) {
            if (!this->mUnk_09C->func_ov017_020bc640(var_r4, true, this->mUnk_0A0->func_ov000_0209360c(),
                                                     this->mUnk_0A0->func_ov000_02093650(), this->func_ov017_020bd6b8(),
                                                     &this->mAccel, &this->mPos, &this->mVel)) {
                if (var_r4 != 1 && this->mUnk_0A0->mUnk_68 != 0x16) {
                    this->mUnk_0A0->func_ov000_020921e4(0x16);
                }
            }
        }

        this->mUnk_0A4.mUnk_08 = 0;
        this->func_ov017_020bd758();

        PlayerActorBase_70 *temp_r5_3 = this->mUnk_70;
        temp_r5_3->func_ov000_020830d4(this->mAngle, this->mUnk_0A0->func_ov000_02093718(),
                                       this->mUnk_0A0->func_ov000_0209378c(), this->mUnk_0A0->mUnk_28);

        this->mUnk_0B0 = data_0204a088->mUnk_04;
        return;
    }

    if (this->mInvincibilityTimer != 0) {
        this->mInvincibilityTimer--;
    }

    if (this->mInvincibilityIconTimer != 0) {
        this->mInvincibilityIconTimer--;
    }

    unk32 var_r5_2 = 0;

    if (this->mUnk_09C->mUnk_090 >= 0 && !this->mUnk_0A0->func_ov000_020936c4()) {
        var_r5_2 = 3;

        if (this->mUnk_0A0->mUnk_68 != 0x16) {
            this->mUnk_0A0->func_ov000_020921e4(0x16);
        }
    }

    this->func_ov000_0208cbf0();
    this->mUnk_09C->mUnk_098 = 0x1000;
    VecFx32_Reset(&this->mAccel);
    this->mUnk_0A0->func_ov000_02092648(0);

    if (this->mUnk_58->Unk78HasValue()) {
        this->func_ov000_0208d60c();
    }

    PlayerCharacter temp_r6_4     = this->mCharacter;
    PlayerActorBase_70 *temp_r7_2 = this->mUnk_70;
    temp_r7_2->func_ov000_020830a4(this->func_ov017_020bd6e0(0), temp_r6_4, 1, 1, this->func_ov000_0208dc98());

    if (this->mUnk_58->Unk78HasValue()) {
        var_r5_2 = 2;
    } else if (this->mUnk_0A0->func_ov000_020936c4()) {
        var_r5_2 = 1;
    }

    if (!this->mUnk_09C->func_ov017_020bc640(var_r5_2, param1, this->mUnk_0A0->func_ov000_0209360c(),
                                             this->mUnk_0A0->func_ov000_02093650(), this->func_ov017_020bd6b8(), &this->mAccel,
                                             &this->mPos, &this->mVel)) {
        if (var_r5_2 != 1 && this->mUnk_0A0->mUnk_68 != 0x16) {
            this->mUnk_0A0->func_ov000_020921e4(0x16);
        }
    } else if (var_r5_2 == 0) {
        bool var_r1;

        if (this->mUnk_09C->mUnk_0DE < 0 && !(this->mUnk_09C->mUnk_0DC & 0x20)) {
            var_r1 = true;
        } else {
            var_r1 = false;
        }

        this->mUnk_0A4.func_ov000_02089998(var_r1);
    } else {
        this->mUnk_0A4.mUnk_08 = false;
    }

    this->func_ov017_020bd758();

    PlayerActorBase_70 *temp_r5_4 = this->mUnk_70;
    temp_r5_4->func_ov000_020830d4(this->mAngle, this->mUnk_0A0->func_ov000_02093718(), this->mUnk_0A0->func_ov000_0209378c(),
                                   this->mUnk_0A0->mUnk_28);

    this->mUnk_0A0->func_ov000_02092e38();
    this->mUnk_0B0 = data_0204a088->mUnk_04;
}

void PlayerLinkActor::func_ov017_020bdcf4(unk32 param1, unk32 param2) {
    this->mUnk_78.func_ov000_0205c5d0(param1, this);

    if (this->mUnk_78.mUnk_08[0] != 0 || this->mUnk_78.mUnk_08[1] != 0) {
        this->func_ov000_0208d7f0(this->func_ov000_0208d754());
    } else {
        UnkStruct_027e0cec *ptr = data_027e0cec;

        for (PlayerLinkActor_1B0 *var_r9 = this->mUnk_1B0; var_r9 != &this->mUnk_1B0[ARRAY_LEN(this->mUnk_1B0)]; var_r9++) {
            ptr->func_ov000_020a0110(var_r9);
        }
    }

    this->mUnk_0A0->func_ov000_02092ea8(param1, param2);
}

void PlayerLinkActor::func_ov017_020bdd84(void *param1, unk32 param2) {
    VecFx32 sp10;
    s32 spC;
    s8 sp8;
    bool var_r2;
    bool temp_r1_2;
    Mat4x3p *temp_r4;
    bool var_r5;

    //! TODO: figure out param1's type (most likely data_0204a110.mUnk_DF8)
    if (this->mUnk_38.mUnk_00.mUnk_08 == 0 && this->mUnk_78.mUnk_08[(unk32) param1] != 0) {
        var_r5 = true;
    } else {
        var_r5 = false;
    }

    if (var_r5) {
        if (param2 != 0) {
            if (this->mUnk_74 != 0) {
                this->mUnk_70->func_ov017_020bbef4(&this->mPos, this->mAngle);
            }
        } else {
            this->mUnk_70->func_ov017_020bbcd8(&this->mPos, this->mAngle);
        }

        if (param1 == NULL && data_0204a110.func_02019514() == 0) {
            if (this->mUnk_134 != NULL) {
                this->func_ov000_0208cc20(&sp10);
                PlayerLinkActor_134 *temp_r1 = this->mUnk_134;

                if (temp_r1->mUnk_04 > 0) {
                    UnkSystem7_UnkStruct_00 *temp_r0 = temp_r1->mUnk_00.mUnk_00;

                    if (temp_r0 != NULL) {
                        temp_r0->mUnk_28.x = sp10.x + temp_r0->mUnk_20->mUnk_00->mUnk_04.x;
                        temp_r0->mUnk_28.y = sp10.y + temp_r0->mUnk_20->mUnk_00->mUnk_04.y;
                        temp_r0->mUnk_28.z = sp10.z + temp_r0->mUnk_20->mUnk_00->mUnk_04.z;
                    }
                }
            }

            if (this->mUnk_74 != 0) {
                temp_r4 = this->mUnk_70->mUnk_114;

                sp8 = 0;
                spC = 0;

                temp_r1_2 = func_ov000_020864f8(&this->mUnk_09C->mUnk_0DC, this->mUnk_09C->mUnk_5A, &sp8, &spC);
                this->mUnk_74->func_ov102_02182c84(temp_r1_2, spC, this->mAngle, &temp_r4[0], &temp_r4[1]);
            }
        }
    }

    if (var_r5 && param2 == 0) {
        var_r2 = true;
    } else {
        var_r2 = false;
    }

    this->mUnk_0A0->func_ov000_02092ecc(param1, var_r2);
}

void PlayerLinkActor::func_ov017_020bdf48(s8 *param1, unk32 param2, void *param3, UnkStruct_ov019_020d24c8_28_258_00 *param4) {
    Vec2s sp8;
    ActorGrabParams sp4;

    if (this->func_ov000_0208d3a8() != 0) {
        return;
    }

    if (!this->mUnk_0A0->func_ov000_02091f08(0x0D) && param1[1] == 1) {
        sp4 = this->mUnk_50;

        if (!data_027e0998->vfunc_00(&this->mPos, &sp8, &sp4.mUnk_00)) {
            return;
        }

        if (param4 != 0) {
            data_0204af1c.func_0201aa44(param4, &sp8, param2, param3);
        }

        if (this->mUnk_0B9 != 0) {
            if (this->mUnk_0BA == 0) {
                return;
            }

            if (this->mUnk_0BB != 0) {
                sp8.y += 10;
            } else {
                sp8.y -= 10;
            }

            data_0204af1c.func_0201aad0(&this->mUnk_0BC, &sp8, param2, param3);
        } else if (this->func_ov000_0208d754()) {
            data_0204af1c.func_0201aad0(&this->mUnk_138, &sp8, param2, param3);
        } else {
            this->func_ov000_0208d3d0(&sp8, param2, param3);
        }
    }
}

void PlayerLinkActor::func_ov017_020be098() {
    this->mUnk_0A0->func_ov000_02093fe8();
}
