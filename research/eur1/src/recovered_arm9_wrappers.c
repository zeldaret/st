/*
 * Spirit Tracks EU Rev 1: additional preliminary ARM9 control-flow translations.
 * Based on user-supplied BKIP rev1 ROM. NOT matched to original compiler output.
 * Functions are for documentation/analysis and are NOT linked into the game.
 * Addresses and calling conventions may differ in other ROM revisions.
 */
#include <stdint.h>
#include <stddef.h>

extern void sub_02002060(void *);
extern void sub_02001300(void *);
/* ARM9 0x02002048..0x0200205c: call cleanup, then pass *(obj) to finalizer. */
void research_02002048(void *obj)
{
    sub_02002060(obj);
    sub_02001300(*(void **)obj);
}

extern void sub_02006850(void *);
/* ARM9 0x02006798..0x020067b0: test low bit at +0x24, conditionally call. */
void research_02006798(void *obj)
{
    uint32_t flags = *(const uint32_t *)((const uint8_t *)obj + 0x24);
    if ((flags & 1U) != 0) {
        sub_02006850(obj);
    }
}

extern uint32_t sub_020075A8(void *);
/* ARM9 0x02007784..0x0200779c: clear field +0x10 only if callee is nonzero. */
uint32_t research_02007784(void *obj)
{
    uint32_t result = sub_020075A8(obj);
    if (result != 0) {
        *(uint32_t *)((uint8_t *)obj + 0x10) = 0;
    }
    return result;
}

extern void sub_02007850(void *);
extern void sub_02007860(void *);
/* ARM9 0x02007980..0x02007994: call two routines with same self pointer. */
void research_02007980(void *self)
{
    sub_02007850(self);
    sub_02007860(self);
}

extern void sub_02016694(void *);
/* ARM9 0x0201ba94..0x0201baa8: initialize embedded object at +4. */
void *research_0201BA94(void *obj)
{
    sub_02016694((uint8_t *)obj + 4);
    return obj;
}

extern void sub_02011FF4(void *);
/* ARM9 0x0201baac..0x0201bac8: release embedded object, then parent. */
void *research_0201BAAC(void *obj)
{
    sub_02016694((uint8_t *)obj + 4);
    sub_02011FF4(obj);
    return obj;
}

/* ARM9 0x0201bacc..0x0201bae0: similar wrapper to 0x0201ba94. */
void *research_0201BACC(void *obj)
{
    sub_02016694((uint8_t *)obj + 4);
    return obj;
}

/* ARM9 0x0201bae4..0x0201bae8: unconditional constant return (leaf). */
uint32_t research_0201BAE4(void)
{
    return 1;
}

extern void sub_020153E4(void *);
extern void sub_02013118(void *);
/* ARM9 0x020153a4..0x020153bc: invoke method then global routine, return self. */
void *research_020153A4(void *self)
{
    sub_020153E4(self);
    sub_02013118((void *)(uintptr_t)0x0204999cU);
    return self;
}

extern void sub_02001C0C(void);
/* ARM9 0x0200174c..0x02001770: two guards on global state. */
void research_0200174C(void)
{
    volatile const uint32_t *state = (volatile const uint32_t *)(uintptr_t)0x02044e18U;
    if (state[0] != 0U && state[1] == 1U) {
        sub_02001C0C();
    }
}
