#include "LinkList.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"

extern "C" void FlushGfxQueue();
extern "C" void func_ov000_02052238(void *, void *);
extern "C" void func_ov000_02052bcc(void *);
extern "C" unk32 func_ov000_020545d0(void *, void *);
extern "C" void func_ov000_02054548(void *, unk32);

void UnkStruct_027e0cec_18::func_ov017_020c297c(unk32 param1, unk32 param2) {
    UnkStruct_027e0cec_18_04 *pIt = GetBeginIterReverse(*this->mUnk_04);
    UnkStruct_027e0cec_18_04 *pNext;
    UnkStruct_027e0cec_18_04_20 *temp_r7;

    while (pIt != NULL) {
        temp_r7 = *pIt->mUnk_20;
        pNext   = (UnkStruct_027e0cec_18_04 *) pIt->GetNext();

        if (pIt->mUnk_24_04 == 0 && pIt->mUnk_4C >= temp_r7->mUnk_36) {
            pIt->mUnk_24_04 = 1;
            pIt->mUnk_4C    = 0;
        }

        if (pIt->mUnk_24_02 == 0 && (pIt->mUnk_84_16 == 0 || this->mUnk_04->mUnk_48 == pIt->mUnk_84_16 - 1)) {
            unk32 unk_9C = pIt->mUnk_9C;

            if ((param1 == (param1 & unk_9C)) && !(unk_9C & param2)) {
                func_ov000_02052238(this->mUnk_04, pIt);
            }
        }

        if ((temp_r7->mUnk_00_14 != 0 && temp_r7->mUnk_40 != 0 && pIt->mUnk_24_04 != 0 && pIt->mUnk_4C > temp_r7->mUnk_40) ||
            pIt->mUnk_24_00 != 0) {
            if (pIt->mUnk_0C == NULL && pIt->mUnk_18 == NULL) {
                func_ov000_02054548(&this->mUnk_04->mUnk_10, func_ov000_020545d0(this->mUnk_04->GetPrevRef(), pIt));
            }
        }

        pIt = pNext;
    }

    if (++this->mUnk_04->mUnk_48 > 1) {
        this->mUnk_04->mUnk_48 = 0;
    }
}

bool UnkStruct_027e0cec_18::func_ov017_020c2ad8(void *param1, unk32 param2, unk32 param3) {
    bool var_r4 = false;

    FlushGfxQueue();

    this->mUnk_04->mUnk_40.SetPrev((LinkListNode *) param1);

    for (UnkStruct_027e0cec_18_04::Iterator it = GetBeginIterReverse(*this->mUnk_04); it != NULL; it++) {
        this->mUnk_04->mUnk_40.SetNext(it.GetNode());

        if (it->mUnk_24_03 == 0) {
            unk32 temp_r1 = it->mUnk_9C;

            if (param2 == (param2 & temp_r1) && !(temp_r1 & param3)) {
                func_ov000_02052bcc(this->mUnk_04);
            } else if (temp_r1 & 0x10) {
                var_r4 = true;
            }
        }
    }

    return var_r4;
}
