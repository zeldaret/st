# Spirit Tracks EUR Rev 1 — batch 4: 1,000 byte-exact ARM9 **C candidate code spans**

**Critical distinction:** this is **not proof that 1,000 complete independent game functions have been decompiled**. All 1,000 code spans were reconstructed as separate C bodies and byte-verified against original ROM data, but function entrypoint evidence is incomplete for 677 spans. Some may be return branches **inside larger original functions**. No original CodeWarrior match or DS C++ integration was demonstrated.

## Audited counts

| Metric | Count |
| --- | ---: |
| Candidate C bodies | **1,000** |
| Clang ARMv5TE byte-identical isolated `.text` sections | **1,000/1,000** |
| Original instruction bytes reproduced | **7,412** |
| ARM9 overlays represented | **89** |
| Starts in known repository upstream symbol maps | **63** |
| Additional starts referenced as local function pointers | **260** |
| Starts immediately after `BX LR` (not independently confirmed) | **358** |
| Additional possible short exit blocks (not confirmed starts) | **319** |
| CodeWarrior byte-matching checks for this batch | **0** |
| Functions integrated into the Nintendo DS build | **0** |

**Meaning:** the first two evidence categories have stronger indications of a genuine original function boundary (**323 addresses**), but a pointer reference is not definitive proof of independent source ownership. The other **677** entries are explicitly speculative and should **never be added to decompilation progress counters** until boundaries are individually established. Do not interpret this output as 1,000 gameplay functions or 1,000 original C++ implementations.

## Files

- `candidate_reconstructions_1000.c`: independent C source snippet for each code span; names identify overlay and original address
- `manifest_candidates_1000.json`: overlay, address, original span SHA-256, evidence/confidence classification, target compiler status
- `verify_candidates_1000.py`: reproduces the exact Clang ARMv5TE machine-byte equality using the locally decoded original ARM9 overlays

## Reproduction with your local EUR Rev 1 ROM

Extract and decompress the overlays using the existing EUR1 research extraction workflow. The `working_code` folder must contain files `overlay_000.bin` through `overlay_113.bin` as needed. On Windows with LLVM Clang ARM target available, from the repository root:

```powershell
python research/eur1/batches/overlay_candidates_1000/verify_candidates_1000.py --working-code "C:\path\to\working_code"
```

The script checks each input overlay's SHA-1 against recorded values, verifies 1,000 distinct overlay/address pairs, compiles all C snippets with `--target=armv5te-none-eabi -march=armv5te -marm -O2 -ffunction-sections`, rejects relocation-bearing function code and byte-compares every emitted section against the original ROM. It checks each original function span's SHA-256 and fails on any mismatch.

Locally verified outcome: `PASS 1000/1000 C machine-code spans, 7412 original ARM bytes, 89 overlays`.

## What must happen before real matching

1. Resolve original symbol/function boundaries, especially the **677** low-confidence spans. Many may be code blocks, not independent functions.
2. Recover C++ owning translation unit, method signatures and data layouts.
3. Recompile with the game's CodeWarrior ARM `dsi/1.2p1` and use `objdiff` to check the real module mapping.
4. Integrate only confirmed functions in the correct original source units, then rerun `ninja ... check_eur1` and monitor `changes_eur1`.

No Nintendo ROM, overlay binary, texture, original assembly dump, or proprietary compiler binary is shipped in these files. No native PC port was started.
