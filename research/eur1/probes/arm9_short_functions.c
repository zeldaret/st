/*
 * The Legend of Zelda: Spirit Tracks (Europe Rev 1, BKIP), ARM9.
 * Independent C source reconstructions derived from examining locally dumped
 * game code. One target is compiled per translation unit via -DPROBE_<ADDR>.
 * Use verify_arm9_short_functions.py to verify output instruction bytes.
 * This is Clang ARMv5TE equivalence, NOT CodeWarrior or zeldaret integration.
 * No ROM data/assembly is shipped with this file.
 */
#if defined(PROBE_020022A8)
/* ARM9 0x020022A8, 12 bytes: halfword read and subtract. */
unsigned int st_020022A8(void *obj) {
    return *(volatile unsigned short *)((char *)obj + 12) - 1;
}
#elif defined(PROBE_02002C80)
/* ARM9 0x02002C80, 12 bytes: reset a word. */
void st_02002C80(unsigned int *obj) { *obj = 0; }
#elif defined(PROBE_02005030)
/* ARM9 0x02005030, 12 bytes: reset a word. */
void st_02005030(unsigned int *obj) { *obj = 0; }
#elif defined(PROBE_0200E254)
/* ARM9 0x0200E254, 12 bytes: reset a word. */
void st_0200E254(unsigned int *obj) { *obj = 0; }
#elif defined(PROBE_02007350)
/* ARM9 0x02007350, 16 bytes: base pointer + 16-byte indexed record. */
struct ST_02007350 { unsigned int *base; char unknown[4]; unsigned short index; };
unsigned int *st_02007350(struct ST_02007350 *obj) {
    return (unsigned int *)((char *)obj->base + ((unsigned)obj->index << 4));
}
#elif defined(PROBE_02007360)
/* ARM9 0x02007360, 16 bytes: like above with index at offset 0xA. */
struct ST_02007360 { unsigned int *base; char unknown[6]; unsigned short index; };
unsigned int *st_02007360(struct ST_02007360 *obj) {
    return (unsigned int *)((char *)obj->base + ((unsigned)obj->index << 4));
}
#elif defined(PROBE_020075E0)
/* ARM9 0x020075E0, 12 bytes: double indirect read. */
struct ST_020075E0 { unsigned int unknown; int *ptr; };
int st_020075E0(struct ST_020075E0 *obj) { return *obj->ptr; }
#elif defined(PROBE_020092EC)
/* ARM9 0x020092EC, 12 bytes: write indexed word at base+8. */
void st_020092EC(unsigned int *base, unsigned int index, unsigned int value) {
    base[2 + index] = value;
}
#elif defined(PROBE_02013A34)
/* ARM9 0x02013A34, 16 bytes: clear two 16-bit fields. */
void st_02013A34(volatile unsigned short *obj) { obj[0] = 0; obj[1] = 0; }
#elif defined(PROBE_02013B88)
/* ARM9 0x02013B88, 16 bytes: clear 16-bit fields at +2 and +4. */
void st_02013B88(volatile unsigned short *obj) { obj[1] = 0; obj[2] = 0; }
#elif defined(PROBE_02016798)
/* ARM9 0x02016798, 16 bytes: clear 16-bit fields at +0 and +14. */
void st_02016798(volatile unsigned short *obj) { obj[0] = 0; obj[7] = 0; }
#elif defined(PROBE_0201BE20)
/* ARM9 0x0201BE20, 12 bytes: set byte flag at offset 4. */
void st_0201BE20(void *obj) { ((volatile unsigned char *)obj)[4] = 1; }
#elif defined(PROBE_020186F8)
/* ARM9 0x020186F8, 12 bytes: read word from indexed slot + 4. */
unsigned int st_020186F8(unsigned int *base, unsigned int index) {
    return base[index + 1];
}
#else
#error "Choose one function with -DPROBE_<ADDR> for independent compilation."
#endif
