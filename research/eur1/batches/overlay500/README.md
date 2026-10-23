# Spirit Tracks EUR Rev 1 — 500 additional ARM9 C reconstructions

**500 distinct ARM9 overlay functions** beyond the earlier 100-function overlay-0 batch. They cover **40 overlays** and reproduce **3188 bytes** of code, when compiled as one independent Clang ARMv5TE object with a function section per routine.

| Verification and classification | Count |
| --- | ---: |
| Distinct new C function bodies | **500** |
| Non-empty reconstructed functions | **211** |
| Empty / no-op `BX LR` function bodies | **289** |
| Exact Clang ARMv5TE matching instruction spans | **500** |
| Existing upstream symbol spans | **396** |
| Heuristic ARM BL-target entries (not yet verified in symbol table) | **104** |
| Original CodeWarrior matching verified for this batch | **0 (not run)** |
| Integrated in original Nintendo DS game build | **0** |

**Important:** the small/empty functions are genuine C bodies, but empty slots are not substantial gameplay logic. A standalone Clang exact result is **not** a CodeWarrior or integrated objdiff result. ABI, correct C++ ownership, source-level semantics and linked relocations remain to be verified. The user requested decompilation only; **no PC runtime is started**.

## Locally reproduce the exact instruction checks (from your own dumped ROM)

```powershell
cd C:\st
python research/eur1/scripts/analyze_nds.py extract/baserom_st_eur1.nds --output local_audit
python research/eur1/batches/overlay500/verify_500.py --working-code local_audit/working_code
```

This requires Clang with ARMv5TE, Python 3.11+ and your own ROM **Europe Rev 1 BKIP** (reference SHA-1 `dcb221a89acb894503a461c2c7d4cfdad9a06b68`). The verifier loads each relevant locally decoded `overlay_NNN.bin`, checks SHA-1 against the original image, compiles the research source with `-ffunction-sections`, then requires each resulting `.text.<function>` section to have exactly the same bytes as the original overlay span.

The manifest includes **addresses, sizes, types, original code hashes and validation status only**, not original ROM/overlay byte data. This makes it reproducible without distributing copyrighted binaries.

## CodeWarrior follow-up

The original project uses CodeWarrior ARM `dsi/1.2p1`, `-O4,p`, `-proc arm946e`. The previously studied **100 overlay-0 functions** achieved 98/100 matching under isolated CodeWarrior compilation. **This new batch is NOT yet CodeWarrior-tested**. Its signatures are provisional and functions exist only under `research/`, so the official DS build and matching report are unaffected. Any inferred BL-target entries require source-symbol and ownership verification before they can be integrated.

Current objective remains decompilation; PC-native port work will come later.
