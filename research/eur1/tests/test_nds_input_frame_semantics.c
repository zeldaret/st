/* Host-only coverage of reconstructed DS input and frame polling semantics. */
#include <stdint.h>
#include <assert.h>
#include <stddef.h>
#include "../src/nds_input_frame_semantics.c"

static void input_test(void)
{
    ST_InputState s = {0x1111u, 0xFFFFu, 0xFFFFu};
    st_research_02013B10_input_init(&s);
    assert(s.held == 0 && s.pressed == 0 && s.released == 0);
    st_research_02013B24_input_update(&s, 0x0009u);
    assert(s.held == 9 && s.pressed == 9 && s.released == 0);
    st_research_02013B24_input_update(&s, 0x000Au);
    assert(s.held == 10 && s.pressed == 2 && s.released == 1);
    st_research_02013B24_input_update(&s, 0x000Au);
    assert(s.pressed == 0 && s.released == 0);
    st_research_02013B88_clear_edges(&s);
    assert(s.held == 10 && s.pressed == 0 && s.released == 0);
    st_research_02013B24_input_update(&s, 0x00F0u);
    assert(s.held == 0 && s.pressed == 0 && s.released == 10);
    st_research_02013B24_input_update(&s, 0x8004u);
    assert(s.held == 0x8004 && s.pressed == 0 && s.released == 0);
    st_research_02013B24_input_update(&s, 0x0004u);
    assert(s.held == 4 && s.pressed == 0 && s.released == 0);
    st_research_02013B24_input_update(&s, 0x0005u);
    assert(s.pressed == 1 && s.released == 0);
}

static void input_register_test(void)
{
    assert(st_research_02013B98_ipc_special(0) == 0);
    assert(st_research_02013B98_ipc_special(0x8000) == 1);
    assert(st_research_02013BBC_read_keys(0, 0x2FFFu) == 0);
    assert(st_research_02013BBC_read_keys(0, 0x2FFEu) == 1);
    assert(st_research_02013BBC_read_keys(0, 0) == 0x2FFFu);
    assert(st_research_02013BBC_read_keys(0x8000u, 0) == 0);
    assert(st_research_02013C08_mask_special(0x1234u, 0) == 0x1234u);
    assert(st_research_02013C08_mask_special(0x1234u, 0x8000u) == 0x8000u);
}

typedef struct Poll {
    const uint16_t *vc;
    unsigned n;
    unsigned used;
    uint16_t status;
    unsigned disp_reads;
} Poll;
static uint16_t read_vc(void *ctx)
{
    Poll *p = (Poll *)ctx;
    if (p->used < p->n) return p->vc[p->used++];
    return p->vc[p->n - 1];
}
static uint16_t read_disp(void *ctx)
{
    Poll *p = (Poll *)ctx;
    p->disp_reads++;
    return p->status;
}
static void frame_test(void)
{
    const uint16_t low[] = {100};
    Poll p = {low, 1, 0, 0, 0};
    assert(st_research_0201328C_wait_scanline(read_vc, read_disp, &p, 8) == 0);
    assert(p.disp_reads == 0);
    const uint16_t high[] = {188, 188, 190, 191};
    Poll q = {high, 4, 0, 0, 0};
    assert(st_research_0201328C_wait_scanline(read_vc, read_disp, &q, 4) == 1);
    assert(q.used == 4 && q.disp_reads == 1);
    Poll r = {high, 4, 0, 1, 0};
    assert(st_research_0201328C_wait_scanline(read_vc, read_disp, &r, 4) == 0);
    assert(r.disp_reads == 1 && r.used == 1);
    const uint16_t stuck[] = {188};
    Poll t = {stuck, 1, 0, 0, 0};
    assert(st_research_0201328C_wait_scanline(read_vc, read_disp, &t, 3) == -1);
}

static int called;
static void *callback_arg;
static void callback(void *p) { called++; callback_arg = p; }

int main(void)
{
    input_test();
    input_register_test();
    frame_test();
    st_research_02013354_dispatch(callback);
    assert(called == 1 && callback_arg == NULL);
    return 0;
}
