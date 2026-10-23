/*
 * The Legend of Zelda: Spirit Tracks (BKIP EUR revision 1)
 * Input and frame synchronization reconstructed from ARM9 instructions.
 *
 * RESEARCH / HOST SIDE SEMANTIC MODEL ONLY. This is not linked into the DS
 * game. CPU-register semantics and address widths must be validated against
 * the original CodeWarrior source build before integrating anything.
 *
 * Only the two init/reset functions below have also been independently
 * reproduced byte-for-byte with Clang ARMv5TE (separate probes).
 */
#include <stdint.h>
#include <stddef.h>

typedef struct ST_InputState {
    uint16_t held;        /* +0: current button mask */
    uint16_t pressed;     /* +2: transitioned to pressed */
    uint16_t released;    /* +4: transitioned to released */
} ST_InputState;

_Static_assert(sizeof(ST_InputState) == 6, "ARM9 input state must occupy six bytes");

/* 0x02013B10, 20 ARM bytes: Input::Init */
void st_research_02013B10_input_init(volatile ST_InputState *state)
{
    state->held = 0;
    state->pressed = 0;
    state->released = 0;
}

/* 0x02013B24, 0x64 ARM bytes: Input::func_02013b24.
 * If either special/high bit is active, the previous/current transition
 * signals are cleared, but the new held mask is still recorded.
 */
void st_research_02013B24_input_update(volatile ST_InputState *state, uint32_t raw)
{
    /* Opposing physical directions (two pairs) are discarded. */
    if ((raw & 0xC0u) == 0xC0u) raw &= 0xFF3Fu;
    const uint32_t previous = state->held;
    if ((raw & 0x30u) == 0x30u) raw &= 0xFFCFu;

    if (!(previous & 0x8000u) && !(raw & 0x8000u)) {
        const uint32_t changes = previous ^ raw;
        state->pressed = (uint16_t)(raw & changes);
        state->released = (uint16_t)(previous & changes);
    } else {
        state->pressed = 0;
        state->released = 0;
    }
    state->held = (uint16_t)raw;
}

/* 0x02013B88, 16 ARM bytes: reset edge events but preserve held. */
void st_research_02013B88_clear_edges(volatile ST_InputState *state)
{
    state->pressed = 0;
    state->released = 0;
}

/* 0x02013B98, 0x24 ARM bytes: query bit 15 of IPC/shared input register. */
uint32_t st_research_02013B98_ipc_special(uint16_t ipc_state)
{
    return (ipc_state & 0x8000u) ? 1u : 0u;
}

/* 0x02013BBC, 0x4c ARM bytes: collect active-low buttons from
 * REG_KEYINPUT (0x04000130) and IPC/shared state (0x027FFFA8).
 * Physical MMIO reads are caller-provided in this host-side model.
 * The original routine may read the shared register more than once.
 */
uint16_t st_research_02013BBC_read_keys(uint16_t ipc_state,
                                       uint16_t keyinput_register)
{
    if (st_research_02013B98_ipc_special(ipc_state)) return 0;
    return (uint16_t)(((keyinput_register | ipc_state) ^ 0x2FFFu) & 0x2FFFu);
}

/* 0x02013C08, 0x1c ARM bytes: return 0x8000 in special state, otherwise r1. */
uint32_t st_research_02013C08_mask_special(uint32_t requested,
                                          uint16_t ipc_state)
{
    return st_research_02013B98_ipc_special(ipc_state) ? 0x8000u : requested;
}

/* 0x0201328C, 0x3c ARM bytes: display scanline wait predicate.
 * Original polls VCOUNT until an odd sample after VCOUNT >= 187
 * provided bit 0 of DISPSTAT is clear. To make host tests bounded, a
 * callback drives additional VCOUNT reads and max_polls guards hangs.
 * Result -1 means a test guard was reached; impossible in original loop.
 */
typedef uint16_t (*ST_ReadRegister16)(void *context);
int st_research_0201328C_wait_scanline(ST_ReadRegister16 read_vcount,
                                        ST_ReadRegister16 read_dispstat,
                                        void *context, unsigned max_polls)
{
    if (read_vcount(context) < 187u) return 0;
    if (read_dispstat(context) & 1u) return 0;
    for (unsigned i = 0; i < max_polls; ++i) {
        if (read_vcount(context) & 1u) return 1;
    }
    return -1;
}

/* 0x02013354, 0x1c ARM bytes: call callback at +0x14 of 0x02049A2C
 * with r0 = 0. As in the original, callback must be valid.
 */
typedef void (*ST_CallbackZero)(void *arg);
void st_research_02013354_dispatch(ST_CallbackZero callback)
{
    callback(NULL);
}
