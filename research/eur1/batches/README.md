# Spirit Tracks EUR Rev 1 — batch 0001 (1,000 symbolized ARM9 functions)

This batch is an **incremental reverse-engineering work queue**, not a claim
that all 1,000 functions were reconstructed.

## Counts as of 2026-10-23

| Category | Count |
| --- | ---: |
| Named functions in the batch | **1,000** |
| ARM mode | 870 |
| Thumb mode | 130 |
| Provisional C with **verified isolated Clang ARMv5TE byte equality** | **58** |
| Remaining unvalidated functions in batch | **942** |
| Target original machine-code bytes exactly reproduced in these 58 routines | **356** |
| Newly verified distinct functions relative to the prior 28 independent Clang probes | **45** |
| Distinct isolated Clang-exact functions across both previous batches and this one | **73** |
| Newly proven **CodeWarrior** matching functions | **0** |

The 1,000 were chosen from the `config/eur1/arm9/symbols.txt` catalog:
non-SDK/main-game functions at or above `0x02012000`, ranked by increasing
known function size and then sorted by address. This prioritizes tractable
functions while retaining complete official symbols and module-specific sizes.

Only 58 functions passed real compilation/byte comparison. **A catalog
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
ARM9 image. It validates only the 58 functions marked
`isolated_clang_armv5te_byte_exact`, leaving the other 942 queued.

Do not add this C directly to the upstream game build. First resolve the
original C++ signature and layout, compile with the correct CodeWarrior target
toolchain and flags, inspect object comparison, then integrate a readable
version without regressions.

No proprietary ROM, original assets, copyrighted machine-code dump, or BIOS
files are included in this repository.
