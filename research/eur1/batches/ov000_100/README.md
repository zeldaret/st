# Spirit Tracks — 100 ARM9 overlay 0 functions reconstructed in C

This is a **100-function actual C translation batch**. All 100 have C bodies and were compiled **together** with Clang ARMv5TE, each into an independent section, and verified byte-for-byte against a locally decompressed user-supplied **EUR Rev 1** overlay. Total matching machine instructions: **916 bytes**. The functions cover pointer and array accessors, fixed memory writes, setters, simple arithmetic, and constant returns; **no empty functions** were selected.

This does **not** establish original CodeWarrior compiler matching, platform integration, gameplay, or a playable PC port. The C function signatures and class ownership should be rechecked before upstream integration. The upstream contribution policy for AI-assisted decompilation must be respected.

## Verify on the original ROM

On your Windows PC, first extract your own verified ROM (SHA1 `dcb221a89acb894503a461c2c7d4cfdad9a06b68`):

```powershell
python research/eur1/scripts/analyze_nds.py extract/baserom_st_eur1.nds --output local_audit
python research/eur1/batches/ov000_100/verify_ov000_100.py --overlay0 local_audit/working_code/overlay_000.bin
```

Requires Clang with ARMv5TE target plus `llvm-objcopy`. The overlay is never committed to GitHub. `manifest_100.json` carries only symbolic addresses, sizes, categories and hashes.

The next task for native portability is to map these routines to their actual C++ classes and integrate **tested** logic into the correct DS modules; isolated exact-code snippets alone do not produce a PC build.