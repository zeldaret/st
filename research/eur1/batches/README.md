# Spirit Tracks EUR Rev 1 — batch 0001 (1,000 symbolized ARM9 functions)

This batch is an **incremental reverse-engineering work queue**, not a claim
that all 1,000 functions were reconstructed.

## Counts as of 2026-10-23

| Category | Count |
| --- | ---: |
| Named functions in the batch | **1,000** |
| ARM mode | 870 |
| Thumb mode | 130 |
| Provisional C with **verified isolated Clang ARMv5TE byte equality** | **60** |
| Additional input/frame semantic reconstructions, host-tested but not byte matching | **6** |
| Remaining functions queued without reconstructed C | **934** |
| Target original machine-code bytes exactly reproduced in 60 routines | **392** |
| Newly verified distinct functions relative to the prior 28 independent Clang probes | **46** |
| Distinct isolated Clang-exact functions across both previous batches and this one | **74** |
| Newly proven **CodeWarrior** matching functions | **0** |

The 1,000 were chosen from the `config/eur1/arm9/symbols.txt` catalog:
non-SDK/main-game functions at or above `0x02012000`, ranked by increasing
known function size and then sorted by address. This prioritizes tractable
functions while retaining complete official symbols and module-specific sizes.

60 functions passed isolated Clang compilation/byte comparison. **A catalog
entry is not a decompiled function.** Smaller object functions may have
already been reconstructed upstream; we do not claim they are new changes
to zeldaret's match percentage. These exact Clang snippets also cannot
substitute for correct Nintendo CodeWarrior ABI or full C++ class semantics.

## Files

- [Batch manifest (1,000 targets)](batch_0001_1000_manifest.json)
- [58 short C functions](batch_0001_short_exact_58.c)
- [Repeatable verifier](verify_batch_0001.py)

## Check on your own EUR1 ROM

Requirements: Python 3.11+, Clang with ARMv5TE target, `llvm-objcopy`,
and an independently dumped decrypted Spirit Tracks EUR1 (BKIP Rev 1) ROM.

From the repository root:

```powershell
python research/eur1/batches/verify_batch_0001.py --rom extract/baserom_st_eur1.nds
```

Or for a local decompressed ARM9 section:

```powershell
python research/eur1/batches/verify_batch_0001.py --arm9 C:\path\to\arm9.bin
```

The verifier checks the **original ROM/image SHA-1** first, compiles each
function separately and compares the emitted instruction bytes to the original
ARM9 image. It validates the initial 58 functions marked
`isolated_clang_armv5te_byte_exact`, while the new separate verifier below handles two additional input functions.

Do not add this C directly to the upstream game build. First resolve the
original C++ signature and layout, compile with the correct CodeWarrior target
toolchain and flags, inspect object comparison, then integrate a readable
version without regressions.

No proprietary ROM, original assets, copyrighted machine-code dump, or BIOS
files are included in this repository.

## Input and frame synchronization — second decompilation batch

Eight ARM9 functions relevant to the **future** native port have now been reconstructed in [`../src/nds_input_frame_semantics.c`](../src/nds_input_frame_semantics.c). They model input initialization (0x02013B10), button edge generation (0x02013B24), edge clearing (0x02013B88), IPC status (0x02013B98), active-low key reads (0x02013BBC), special-input mask (0x02013C08), frame scanline polling (0x0201328C), and callback invocation (0x02013354).

- **2 isolated Clang ARMv5TE exact matches** (20+16 bytes): `0x02013B10` and `0x02013B88`, independently verified by [`../scripts/verify_arm9_input_exact.py`](../scripts/verify_arm9_input_exact.py). Address `0x02013B88` was already verified in the earlier 13-probe batch; only **one** address increases the global unique total from 73 to **74**.
- **6 additional semantic C reconstructions**, with host-side [input and frame tests](../tests/test_nds_input_frame_semantics.c); **not binary matching**.
- **1000-target manifest:** 60 isolated Clang-exact, 6 additional semantic/host-tested, 934 still queued. No original CodeWarrior matches demonstrated by this research.
- `verify_batch_0001.py` still checks only its original 58 probes; run the input verifier separately. No Nintendo ROM, extracted assets, or ARM machine code is committed.

**Note:** The input snapshot model does not preserve the exact timing of repeated hardware register reads, and the frame polling model has a host-test iteration limit. They are analysis scaffolding, not a ready-to-port hardware abstraction or runnable PC game.
