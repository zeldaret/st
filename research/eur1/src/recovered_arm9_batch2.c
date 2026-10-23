/*
 * Spirit Tracks EU Rev 1 (BKIP): ARM9 research batch 2.
 * Provisional instruction-level reconstructions, not byte-matching code.
 * Addresses refer to the decompressed ARM9 image at 0x02000000.
 * Return signatures and C++ class ownership are unproven.
 * Do not integrate this file into the official ROM build without matching.
 */
#include <stdint.h>
#include <stddef.h>

/* 0x0201AEAC / 0x0201AEBC: forward r0/r1, replace r2 with a constant. */
extern uint32_t research_external_0201ADFC(uint32_t, uint32_t, uint32_t);
uint32_t research_0201AEAC(uint32_t a, uint32_t b)
{
    return research_external_0201ADFC(a,b,0);
}
uint32_t research_0201AEBC(uint32_t a, uint32_t b)
{
    return research_external_0201ADFC(a,b,1);
}

/* 0x0201BDC0: unconditional zero-return stub (ARM register result r0). */
uint32_t research_0201BDC0(void) { return 0; }

/* 0x0201BE08: write first word only if previously zero. */
uint32_t research_0201BE08(uint32_t *slot, uint32_t value)
{
    if (*slot != 0) return 0;
    *slot = value;
    return 1;
}

/* 0x0201BE20: write one byte without changing surrounding memory. */
void research_0201BE20(void *self)
{
    ((uint8_t *)self)[4] = 1;
}

/* 0x0201BBCC: byte and halfword fields; truncations mirror STRB/STRH. */
void research_0201BBCC(void *self, uint32_t a, uint32_t b)
{
    uint8_t *p = (uint8_t *)self;
    p[0x0D] = (uint8_t)a;
    p[0x0E] = 0;
    *(uint16_t *)(void *)(p + 0x10) = (uint16_t)b;
    *(uint16_t *)(void *)(p + 0x20) = 0;
}

/* 0x0201C494: three consecutive bytes. */
void research_0201C494(void *self, uint32_t value)
{
    uint8_t *p = (uint8_t *)self;
    p[7] = 1;
    p[6] = (uint8_t)value;
    p[8] = 1;
}

/* 0x0201C4A8: initialize two packed, three-byte records. */
void research_0201C4A8(void *table)
{
    uint8_t *p = (uint8_t *)table;
    for (uint32_t i=0; i<2; i++) {
        p[i*3+0] = 16;
        p[i*3+1] = 0;
        p[i*3+2] = 0;
    }
}

/* 0x0201C4D8: signed ARM conditional LE. */
void research_0201C4D8(void *table, uint32_t index,
                       uint32_t first, int32_t threshold)
{
    uint8_t *rec = (uint8_t *)table + index*3;
    if ((int32_t)rec[2] <= threshold) {
        rec[0] = (uint8_t)first;
        rec[1] = (uint8_t)(16U-first);
        rec[2] = (uint8_t)threshold;
    }
}

/* 0x0201C504: fifth stack argument is the threshold. */
void research_0201C504(void *table, uint32_t index,
                       uint32_t first, uint32_t second, int32_t threshold)
{
    uint8_t *rec = (uint8_t *)table + index*3;
    if ((int32_t)rec[2] <= threshold) {
        rec[0] = (uint8_t)first;
        rec[1] = (uint8_t)second;
        rec[2] = (uint8_t)threshold;
    }
}
