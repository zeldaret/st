# PR #127 Review Feedback Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Resolve all review feedback on zeldaret/st PR #127 while preserving or improving EUR and JP decompilation output.

**Architecture:** Work from an isolated `fileselect-pr` worktree. Apply deterministic cleanup/config changes first, then compile each uncertain source reconstruction independently and retain it only when the affected function or section does not regress. Finish with both regional checks, formatter verification, evidence-backed review replies, and a CI-watched push.

**Tech Stack:** C++98/MWCC ARM, Ninja, objdiff JSON reports, `jq`, pre-commit, GitHub pull-request review threads.

## Global Constraints

- Preserve or improve affected symbol and section matches; never accept a cleaner-looking reconstruction solely on reviewer preference.
- Evaluate uncertain suggestions independently so interactions cannot hide a regression.
- Keep EUR and JP overlay configuration equivalent where region layouts permit.
- Remove reviewer-identified noise: comments containing “the ROM”, decomp.me links, stale `non-matching` labels on matched functions, and fake padding explanations.
- Preserve the informative `SAVE_SLOT_OFFSET` pointer comment.
- Do not touch the original checkout's unrelated untracked tools or documents.
- Do not add planning documents to the PR's final diff.
- Export `TMPDIR=/home/sian/scratch-omp/main` before every build command.

## File Map

- `src/019_MainSelect/GameModeFileSelect.cpp`: restore internal linkage.
- `src/019_MainSelect/FileSelectSubScreen.cpp`: remove the fake explicit padding object.
- `src/019_MainSelect/FileSelectMain.cpp`: static-init ownership, typed animation calls, stack-local and copy experiments, helper ownership, comment cleanup.
- `src/019_MainSelect/FileSelectOptions.cpp`: copy experiments and comment cleanup.
- `src/019_MainSelect/FileSelectMicTest.cpp`: vector type experiment and comment cleanup.
- `src/019_MainSelect/019_UnkSubStruct9.cpp`: loop and typed-list experiments, comment cleanup.
- `src/019_MainSelect/019_SaveManager.cpp`: stale-link/comment cleanup and zero-temp removal.
- `include/FileSelect/FileSelect.hpp`: static initializer restoration experiment.
- `include/FileSelect/FileSelectMain.hpp`: transition-helper type experiment.
- `include/Unknown/Common.hpp`: transition-helper specialization experiment.
- `include/Animation/CellAnimObject.hpp`: correct method signature and animation-position member declaration.
- `include/math.hpp`: shared inline vector arithmetic helper.
- `config/{eur,jp}/arm9/overlays/ov019/{delinks,symbols}.txt`: complete markers, corrected symbols, locality, and string sizes.
- `config/{eur,jp}/arm9/overlays/ov001/relocs.txt`: remove six false string-padding relocations per region.

---

### Task 1: Isolated workspace and regional baselines

**Files:**
- Read: `docs/superpowers/specs/2026-08-09-pr-127-review-feedback-design.md`
- Read: `build/eur/report.json`
- Generated: `build/jp/report.json`

**Interfaces:**
- Consumes: branch `fileselect-pr` at the committed design/plan state.
- Produces: an isolated worktree and baseline function/section percentages used by every later acceptance gate.

- [ ] **Step 1: Create the isolated worktree**

Invoke `superpowers:using-git-worktrees`, create a worktree for branch `fileselect-pr`, and operate only there. Confirm the original checkout's untracked `tools/` and `docs/superpowers/` files remain outside the worktree.

- [ ] **Step 2: Build both baselines**

Run:

```bash
export TMPDIR=/home/sian/scratch-omp/main
ninja arm9_eur report_eur check_eur
ninja arm9_jp report_jp check_jp
```

Expected: both `check_eur` and `check_jp` exit 0 and `build/{eur,jp}/report.json` exist.

- [ ] **Step 3: Record the EUR acceptance values**

Run:

```bash
jq -r '.units[] | select(.name | test("019_MainSelect/(GameModeFileSelect|FileSelectMain|FileSelectOptions|FileSelectMicTest|FileSelectSubScreen|019_UnkSubStruct9|019_SaveManager)")) | .name as $u | .functions[] | select(.name | test("(C1Ev|vfunc_08|020c63dc|020c92dc|020c9b28|020ca87c|020ce4dc|020ceaac|020cbc0c|020d1b14)")) | [$u,.name,(.fuzzy_match_percent // 100)] | @tsv' build/eur/report.json
```

Expected key baselines:

```text
GameModeFileSelect::vfunc_08                 100.00000
FileSelectMain::FileSelectMain               99.67532
FileSelectMain::func_ov019_020c63dc           96.97338
FileSelectMain::vfunc_08                     100.00000
FileSelectMain::func_ov019_020c92dc          100.00000
UnkSubStruct9::func_ov019_020cbc0c             70.34091
UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce4dc 93.87500
FileSelectMicTest::FileSelectMicTest         100.00000
FileSelectMicTest::func_ov019_020ceaac         94.87500
SaveFile::func_ov019_020d1b14               100.00000
```

- [ ] **Step 4: Record affected section baselines**

Run:

```bash
jq -r '.units[] | select(.name | test("019_MainSelect/(GameModeFileSelect|FileSelectMain|FileSelectMicTest|FileSelectSubScreen)")) | .name as $u | .sections[] | [$u,.name,(.fuzzy_match_percent // 100),.size] | @tsv' build/eur/report.json
```

Expected: GameModeFileSelect all sections 100%; FileSelectMain `.data`, `.init`, `.rodata`, `.ctor`, and `.bss` 100%; FileSelectMicTest `.data`, `.init`, and `.ctor` 100%.

### Task 2: Restore linkage and synchronize base config

**Files:**
- Modify: `src/019_MainSelect/GameModeFileSelect.cpp:15`
- Modify: `config/eur/arm9/overlays/ov019/delinks.txt`
- Modify: `config/jp/arm9/overlays/ov019/delinks.txt`
- Modify: `config/eur/arm9/overlays/ov019/symbols.txt`
- Modify: `config/jp/arm9/overlays/ov019/symbols.txt`

**Interfaces:**
- Consumes: region-specific addresses already present in each config.
- Produces: equivalent EUR/JP ownership and locality metadata.

- [ ] **Step 1: Restore static linkage**

Replace the declaration with:

```cpp
static const UnkStruct_ov019_020d1d80 data_ov019_020d1d80(0x00020001);
```

- [ ] **Step 2: Sync complete markers and corrected function names**

In both regional `delinks.txt` files, add `complete` to `GameModeFileSelect.cpp` and `019_SaveManager.cpp`.

In both regional `symbols.txt` files:

```text
func_ov019_020c63dc -> _ZN14FileSelectMain19func_ov019_020c63dcEv
_ZN25UnkSystem1_ov019_Derived3C2Ev -> _ZN25UnkSystem1_ov019_Derived3C1Ev
```

Keep each region's existing address and size. Remove the PR's `local` override from `__sinit_GameModeFileSelect.cpp` and `.p__sinit_GameModeFileSelect.cpp`; static source linkage must produce the correct locality itself.

- [ ] **Step 3: Sync the six FileSelectMain anonymous strings to JP**

Replace the JP entries at the six corresponding addresses with:

```text
@2440 kind:data(byte[21]) addr:0x020d3924 local
@2441 kind:data(byte[4])  addr:0x020d393c local
@2442 kind:data(byte[12]) addr:0x020d3940 local
@2443 kind:data(byte[13]) addr:0x020d394c local
@2444 kind:data(byte[12]) addr:0x020d395c local
@2445 kind:data(byte[18]) addr:0x020d3968 local
```

- [ ] **Step 4: Verify both regional configs**

Run:

```bash
export TMPDIR=/home/sian/scratch-omp/main
ninja arm9_eur report_eur check_eur
ninja arm9_jp report_jp check_jp
```

Expected: both checks exit 0; GameModeFileSelect remains 100% in both reports; no previously exact function breaks.

- [ ] **Step 5: Commit the accepted linkage/config fix**

```bash
git add src/019_MainSelect/GameModeFileSelect.cpp config/eur/arm9/overlays/ov019 config/jp/arm9/overlays/ov019
git commit -m "FileSelect: sync overlay 19 config across regions"
```

### Task 3: Remove the fake string-padding object and relocations

**Files:**
- Modify: `src/019_MainSelect/FileSelectSubScreen.cpp:19-23`
- Modify: `config/eur/arm9/overlays/ov019/symbols.txt:324-326`
- Modify: `config/jp/arm9/overlays/ov019/symbols.txt:323-329`
- Modify: `config/eur/arm9/overlays/ov001/relocs.txt:2337-2347`
- Modify: `config/jp/arm9/overlays/ov001/relocs.txt:2341-2352`

**Interfaces:**
- Consumes: compiler string literal `"Screen/Bg/Tape_a.bin"` including its NUL terminator.
- Produces: compiler-owned alignment padding with no fake source symbol or cross-overlay relocation.

- [ ] **Step 1: Remove the explicit padding definition**

Delete exactly:

```cpp
// Exported to overlay ov001 (see ov001 relocs -> 0x020d22ea); the ROM places it
// in .data between the Tape_a and Tape_b string literals.
#pragma explicit_zero_data on
u16 data_ov019_020d22ea = 0;
#pragma explicit_zero_data reset
```

- [ ] **Step 2: Size every anonymous string symbol**

Replace the EUR string block with:

```text
@3993 kind:data(byte[21]) addr:0x020d22d4 local
@3994 kind:data(byte[21]) addr:0x020d22ec local
@3995 kind:data(byte[21]) addr:0x020d2304 local
@3996 kind:data(byte[21]) addr:0x020d231c local
@3997 kind:data(byte[21]) addr:0x020d2334 local
@3998 kind:data(byte[4])  addr:0x020d234c local
@3999 kind:data(byte[4])  addr:0x020d2350 local
@4000 kind:data(byte[4])  addr:0x020d2354 local
@4001 kind:data(byte[4])  addr:0x020d2358 local
@4002 kind:data(byte[4])  addr:0x020d235c local
@4003 kind:data(byte[11]) addr:0x020d2360 local
@4004 kind:data(byte[11]) addr:0x020d236c local
@4005 kind:data(byte[11]) addr:0x020d2378 local
@4006 kind:data(byte[11]) addr:0x020d2384 local
@4007 kind:data(byte[11]) addr:0x020d2390 local
@4008 kind:data(byte[20]) addr:0x020d239c local
@4009 kind:data(byte[4])  addr:0x020d23b0 local
@4010 kind:data(byte[10]) addr:0x020d23b4 local
@4011 kind:data(byte[9])  addr:0x020d23c0 local
@4012 kind:data(byte[9])  addr:0x020d23cc local
```

Replace the JP string block, including the spurious symbols at `0x020d3b2a` and `0x020d3b2c`, with:

```text
@3993 kind:data(byte[21]) addr:0x020d3af4 local
@3994 kind:data(byte[21]) addr:0x020d3b0c local
@3995 kind:data(byte[21]) addr:0x020d3b24 local
@3996 kind:data(byte[21]) addr:0x020d3b3c local
@3997 kind:data(byte[21]) addr:0x020d3b54 local
@3998 kind:data(byte[4])  addr:0x020d3b6c local
@3999 kind:data(byte[4])  addr:0x020d3b70 local
@4000 kind:data(byte[4])  addr:0x020d3b74 local
@4001 kind:data(byte[4])  addr:0x020d3b78 local
@4002 kind:data(byte[4])  addr:0x020d3b7c local
@4003 kind:data(byte[11]) addr:0x020d3b80 local
@4004 kind:data(byte[11]) addr:0x020d3b8c local
@4005 kind:data(byte[11]) addr:0x020d3b98 local
@4006 kind:data(byte[11]) addr:0x020d3ba4 local
@4007 kind:data(byte[11]) addr:0x020d3bb0 local
@4008 kind:data(byte[20]) addr:0x020d3bbc local
@4009 kind:data(byte[4])  addr:0x020d3bd0 local
@4010 kind:data(byte[10]) addr:0x020d3bd4 local
@4011 kind:data(byte[9])  addr:0x020d3be0 local
@4012 kind:data(byte[9])  addr:0x020d3bec local
```

- [ ] **Step 3: Remove false relocs**

Delete the six EUR `ov001/relocs.txt` loads targeting `0x020d22ea` and the six JP loads targeting `0x020d3b2a`. Do not remove neighboring overlay-1 or overlay-25 relocations.

- [ ] **Step 4: Verify data placement**

Run:

```bash
export TMPDIR=/home/sian/scratch-omp/main
ninja arm9_eur report_eur check_eur
ninja arm9_jp report_jp check_jp
jq -r '.units[] | select(.name=="src/019_MainSelect/FileSelectSubScreen") | .sections[] | select(.name==".data") | [.fuzzy_match_percent,.size] | @tsv' build/eur/report.json build/jp/report.json
```

Expected: both checks exit 0; the explicit symbol is absent; FileSelectSubScreen `.data` does not regress from its regional baseline.

- [ ] **Step 5: Commit the padding correction**

```bash
git add src/019_MainSelect/FileSelectSubScreen.cpp config/eur/arm9/overlays/ov001/relocs.txt config/jp/arm9/overlays/ov001/relocs.txt config/eur/arm9/overlays/ov019/symbols.txt config/jp/arm9/overlays/ov019/symbols.txt
git commit -m "FileSelect: remove fake string padding symbol"
```

### Task 4: Remove review-identified comment noise and zero temp

**Files:**
- Modify: `src/019_MainSelect/019_SaveManager.cpp`
- Modify: `src/019_MainSelect/019_UnkSubStruct9.cpp`
- Modify: `src/019_MainSelect/FileSelectMain.cpp`
- Modify: `src/019_MainSelect/FileSelectMicTest.cpp`
- Modify: `src/019_MainSelect/FileSelectOptions.cpp`

**Interfaces:**
- Consumes: existing matching implementations.
- Produces: unchanged code generation with concise source commentary.

- [ ] **Step 1: Remove requested comments**

Remove all added comments containing `ROM`, all `https://decomp.me/` comments in `019_SaveManager.cpp`, and all stale `// non-matching` comments in `019_SaveManager.cpp`. Also remove the reviewer-identified loop-counter/regalloc comment in `FileSelectOptions.cpp`. Preserve `include/Save/SaveManager.hpp`'s `SAVE_SLOT_OFFSET` pointer rationale.

- [ ] **Step 2: Remove `zero` from `SaveFile::func_ov019_020d1b14`**

Use literal zero in all three places:

```cpp
for (int i = 0; i < TreasureType_Max; i++) {
    pSVar3->mTreasureData[0].unk_3C[i] = TreasureType_None;
}

_MI_CpuFill(0, slots[param1].mUnk_2500, sizeof(SaveFile_00000_2500_Data));
```

Delete `int zero = 0;`.

- [ ] **Step 3: Verify generated code is unchanged**

Run:

```bash
export TMPDIR=/home/sian/scratch-omp/main
ninja arm9_eur report_eur check_eur
jq -r '.units[] | select(.name=="src/019_MainSelect/019_SaveManager") | .functions[] | select(.name=="_ZN8SaveFile19func_ov019_020d1b14Ei") | (.fuzzy_match_percent // 100)' build/eur/report.json
```

Expected: check exits 0 and the function remains 100%.

- [ ] **Step 4: Commit the cleanup**

```bash
git add src/019_MainSelect/019_SaveManager.cpp src/019_MainSelect/019_UnkSubStruct9.cpp src/019_MainSelect/FileSelectMain.cpp src/019_MainSelect/FileSelectMicTest.cpp src/019_MainSelect/FileSelectOptions.cpp
git commit -m "FileSelect: trim decompilation commentary"
```

### Task 5: Verify FileSelectMicTest vector type

**Files:**
- Modify: `src/019_MainSelect/FileSelectMicTest.cpp:16-46`

**Interfaces:**
- Consumes: `Vec2s` from `include/math.hpp`.
- Produces: the simplest faithful data declaration; falls back to the POD type only with measured evidence.

- [ ] **Step 1: Test `Vec2s` directly**

Delete `Vec2sPod` and change the three vector fields:

```cpp
struct UnkStruct_ov019_020d2248 {
    u16 mUnk_00;
    Vec2s mUnk_02;
    Vec2s mUnk_06;
    Vec2s mUnk_0A;
    s16 mUnk_0E;
    Vec2s mUnk_10;
};
```

Keep the existing data initializer and initializer helper otherwise unchanged.

- [ ] **Step 2: Measure `.data`, `.init`, and constructor output**

Run:

```bash
export TMPDIR=/home/sian/scratch-omp/main
ninja arm9_eur report_eur check_eur
jq -r '.units[] | select(.name=="src/019_MainSelect/FileSelectMicTest") | (.sections[] | select(.name==".data" or .name==".init") | [.name,(.fuzzy_match_percent // 100),.size]), (.functions[] | select(.name=="_ZN17FileSelectMicTestC1Ev") | [.name,(.fuzzy_match_percent // 100),.size]) | @tsv' build/eur/report.json
```

Expected acceptance: `.data`, `.init`, and the constructor all remain 100%. If any regress, restore `Vec2sPod` and record the exact changed section/function percentage for the review reply.

- [ ] **Step 3: Commit only an accepted simplification**

```bash
git add src/019_MainSelect/FileSelectMicTest.cpp
git commit -m "FileSelect: use Vec2s in mic-test data"
```

Skip this commit if the experiment is rejected.

### Task 6: Restore static initialization to its owning type

**Files:**
- Modify: `include/FileSelect/FileSelect.hpp:164-180`
- Modify: `src/019_MainSelect/FileSelectMain.cpp:23-78`

**Interfaces:**
- Consumes: `UnkStruct_ov019_020d1e70` and `UnkStruct_ov019_020d24c0` globals.
- Produces: ownership-correct static initialization with FileSelectMain `.data` and `.init` still 100%.

- [ ] **Step 1: Restore the `UnkStruct_ov019_020d1e70` constructor**

Restore the constructor body removed by the PR, containing the existing assignments currently embedded in `UnkStruct_ov019_020d24c0` after its four own `mUnk_00`/`mUnk_04` assignments.

- [ ] **Step 2: Reduce and reorder the globals**

Reduce `UnkStruct_ov019_020d24c0` to:

```cpp
UnkStruct_ov019_020d24c0(s16 x1, s16 y1, s16 x2, s16 y2) {
    this->mUnk_04.x = x2;
    this->mUnk_04.y = y2;
    this->mUnk_00.x = x1;
    this->mUnk_00.y = y1;
}
```

Then declare the owner before the dependent object:

```cpp
#pragma explicit_zero_data on
UnkStruct_ov019_020d1e70 data_ov019_020d1e70 = {0};
#pragma explicit_zero_data reset

UnkStruct_ov019_020d24c0 data_ov019_020d24c0(-0x100, 0, 0x100, 0);
```

If `{0}` fails under MWCC, use `{}` as the second candidate; do not retain both experiments together without measuring each.

- [ ] **Step 3: Measure static-init ownership**

Run:

```bash
export TMPDIR=/home/sian/scratch-omp/main
ninja arm9_eur report_eur check_eur
jq -r '.units[] | select(.name=="src/019_MainSelect/FileSelectMain") | .sections[] | select(.name==".data" or .name==".init") | [.name,(.fuzzy_match_percent // 100),.size] | @tsv' build/eur/report.json
```

Expected acceptance: `.data` remains 100% at size 784 and `.init` remains 100% at size 168. Otherwise restore the current combined initializer and prepare the measured pushback.

- [ ] **Step 4: Commit only the accepted ownership fix**

```bash
git add include/FileSelect/FileSelect.hpp src/019_MainSelect/FileSelectMain.cpp
git commit -m "FileSelect: restore static init ownership"
```

Skip this commit if rejected.

### Task 7: Replace the mangled animation extern with the class API

**Files:**
- Modify: `include/Animation/CellAnimObject.hpp:35-37`
- Modify: `src/019_MainSelect/FileSelectMain.cpp:13-19,295-303`

**Interfaces:**
- Consumes: ABI symbol `_ZN14CellAnimObject19func_ov000_02060950Ev` with three call arguments beyond `this`.
- Produces: typed source calls without a hand-written mangled declaration.

- [ ] **Step 1: Correct the class declaration**

Replace the no-argument declaration with:

```cpp
void func_ov000_02060950(s16 param1, unk32 param2, unk32 param3);
```

Delete the mangled `extern "C"` declaration from FileSelectMain.

- [ ] **Step 2: Use ordinary member calls**

Replace the two calls with:

```cpp
this->mUnk_1144.func_ov000_02060950(0x8B, 0, 6);
this->mUnk_155C.func_ov000_02060950(0x8B, 2, 5);
```

Keep the existing `Vec2s_CopyAdd` and `.coords` assignments.

- [ ] **Step 3: Verify every callsite and constructor output**

Run LSP references for `CellAnimObject::func_ov000_02060950`, update every reported callsite to the corrected signature, then run:

```bash
export TMPDIR=/home/sian/scratch-omp/main
ninja arm9_eur report_eur check_eur
jq -r '.units[] | select(.name=="src/019_MainSelect/FileSelectMain") | .functions[] | select(.name=="_ZN14FileSelectMainC1Ev") | .fuzzy_match_percent' build/eur/report.json
```

Expected: check exits 0 and constructor remains at least 99.67532%.

- [ ] **Step 4: Commit the API correction**

```bash
git add include/Animation/CellAnimObject.hpp src/019_MainSelect/FileSelectMain.cpp
git commit -m "FileSelect: call CellAnimObject method directly"
```

### Task 8: Evaluate copy forms and frame grouping

**Files:**
- Modify: `src/019_MainSelect/FileSelectMain.cpp:339-649,741-775`
- Modify: `src/019_MainSelect/FileSelectOptions.cpp:802-825`

**Interfaces:**
- Consumes: `Vec2s::coords` whole-object copy semantics.
- Produces: the least artificial form that preserves each affected function's baseline.

- [ ] **Step 1: Test ordinary copy in FileSelectMain**

Replace:

```cpp
((volatile Vec2s *) &sp24)->coords = ((volatile Vec2s *) &temp)->coords;
```

with:

```cpp
sp24.coords = temp.coords;
```

Build/report EUR. Accept only if the enclosing function remains 100%; otherwise restore the volatile form and record both percentages.

- [ ] **Step 2: Test whole-vector copy in FileSelectOptions**

Replace the two halfword assignments with:

```cpp
((Vec2s *) &ptr->mUnk_140)->coords = local_2c.coords;
```

Build/report EUR. Accept only if `_ZN30UnkStruct_ov019_020d24c8_2C_2419func_ov019_020ce4dcEv` remains at least 93.87500%; otherwise restore the two assignments and record both percentages.

- [ ] **Step 3: Test ungrouped frame locals**

In `FileSelectMain::func_ov019_020c63dc`, delete the opening `struct {` and closing `} frame;` lines so the enclosed declarations become ordinary function locals in the same order. Replace every `frame.member` expression in the function with `member`; do not reorder, rename, add, or remove a local in this experiment.

Build/report EUR. Accept only if `_ZN14FileSelectMain19func_ov019_020c63dcEv` remains at least 96.97338%; otherwise restore the aggregate exactly.

- [ ] **Step 4: Commit accepted copy/grouping simplifications**

```bash
git add src/019_MainSelect/FileSelectMain.cpp src/019_MainSelect/FileSelectOptions.cpp
git commit -m "FileSelect: simplify vector copies"
```

Commit only files whose experiment passed; skip the commit if none passed.

### Task 9: Evaluate transition-helper specialization

**Files:**
- Modify: `include/Unknown/Common.hpp:171-214`
- Modify: `include/FileSelect/FileSelectMain.hpp:89`
- Modify: `src/019_MainSelect/FileSelectMain.cpp:1593-1650`

**Interfaces:**
- Consumes: `UnkSubStruct1_Methods::UpdateLogic()` and the 0x20-byte `UnkSubStruct1_Base` layout.
- Produces: an inline-capable concrete type without changing `FileSelectMain` layout.

- [ ] **Step 1: Add the size-preserving specialization**

After `UnkSubStruct1`, add:

```cpp
class UnkSubStruct2 : public UnkSubStruct1_Base {
public:
    void Subprocess1_UnkValueSets() {
        this->mUnk_10 = this->mUnk_18;
    }

    void Subprocess2_UnkValueSets() {
        this->mUnk_10 = this->mUnk_14;
    }

    UnkSubStruct1_Methods;
};
```

Change the member to:

```cpp
/* 002C */ UnkSubStruct2 mUnk_002C;
```

- [ ] **Step 2: Replace the expanded logic with the inline**

Replace the manually expanded transition-update block in `FileSelectMain::vfunc_08` with:

```cpp
this->mUnk_002C.UpdateLogic();
G2_ChangeBlendAlpha(this->mUnk_002C.func_0201eaa0(), 16);
```

- [ ] **Step 3: Verify layout and code generation**

Run:

```bash
export TMPDIR=/home/sian/scratch-omp/main
ninja arm9_eur report_eur check_eur
jq -r '.units[] | select(.name=="src/019_MainSelect/FileSelectMain") | .functions[] | select(.name=="_ZN14FileSelectMain8vfunc_08EP5InputP12TouchControl") | (.fuzzy_match_percent // 100)' build/eur/report.json
```

Expected acceptance: check exits 0 and `vfunc_08` remains 100%. If it regresses, test `UnkSubStruct1` as the member exactly once; retain that alternative only at 100%. If both regress, restore `UnkSubStruct1_Base` and the expanded logic.

- [ ] **Step 4: Commit only an exact specialization**

```bash
git add include/Unknown/Common.hpp include/FileSelect/FileSelectMain.hpp src/019_MainSelect/FileSelectMain.cpp
git commit -m "FileSelect: reuse transition update inline"
```

Skip if neither type remains exact.

### Task 10: Move reusable helpers to their owning headers

**Files:**
- Modify: `include/math.hpp:99-120`
- Modify: `include/Animation/CellAnimObject.hpp`
- Modify: `include/Unknown/Common.hpp`
- Modify: `src/019_MainSelect/FileSelectMain.cpp:1778-1806`

**Interfaces:**
- Consumes: `Vec2s`, `UnkSystem2_UnkSubSystem1_Derived2`, `UnkSystem2_UnkSubSystem9`, and `UnkStruct_ov019_020d24c8_28_258`.
- Produces: `Vec2s_OffsetSub(const Vec2s *, const Vec2s *, const Vec2s *, Vec2s *)` in `math.hpp` and `CellAnimObject::UpdatePosition(UnkSystem2_UnkSubSystem1_Derived2 *, UnkSystem2_UnkSubSystem9 *, const UnkStruct_ov019_020d24c8_28_258 &)` as an inline member.

- [ ] **Step 1: Move the vector helper unchanged**

Add to `math.hpp` after `Vec2s_Sub`:

```cpp
static inline void Vec2s_OffsetSub(const Vec2s *a, const Vec2s *b, const Vec2s *c, Vec2s *dst) {
    s16 y = a->y + b->y;
    s16 x = a->x + b->x;
    x -= c->x;
    y -= c->y;
    dst->x = x;
    dst->y = y;
}
```

Delete the local copy from FileSelectMain.

- [ ] **Step 2: Declare the animation member**

Forward-declare the three parameter types before `CellAnimObject`, then add:

```cpp
void UpdatePosition(UnkSystem2_UnkSubSystem1_Derived2 *button,
                    UnkSystem2_UnkSubSystem9 *slider,
                    const UnkStruct_ov019_020d24c8_28_258 &offset);
```

After the three types are complete in `Common.hpp`, define the method inline using the existing `UpdateCellAnimPos` body, replacing `cellAnim->mUnk_5C` with `this->mUnk_5C`.

- [ ] **Step 3: Replace all local-helper calls**

Use:

```cpp
this->mUnk_1144.UpdatePosition(&this->mUnk_0DA4, &this->mUnk_1078, local_30);
this->mUnk_155C.UpdatePosition(&this->mUnk_11BC, &this->mUnk_1490, local_48);
```

Apply the same receiver conversion to the four other existing `UpdateCellAnimPos` calls in FileSelectMain, then delete the free helper.

- [ ] **Step 4: Verify all affected exact functions**

Run:

```bash
export TMPDIR=/home/sian/scratch-omp/main
ninja arm9_eur report_eur check_eur
jq -r '.units[] | select(.name=="src/019_MainSelect/FileSelectMain") | .functions[] | select(.name | test("020c92dc|020c9b28|020ca87c")) | [.name,(.fuzzy_match_percent // 100)] | @tsv' build/eur/report.json
```

Expected: every listed function remains 100%. Restore only the member move if it changes output; the math helper may remain if it is output-identical.

- [ ] **Step 5: Commit accepted ownership moves**

```bash
git add include/math.hpp include/Animation/CellAnimObject.hpp include/Unknown/Common.hpp src/019_MainSelect/FileSelectMain.cpp
git commit -m "FileSelect: move helpers to owning types"
```

### Task 11: Use natural loop and list pointer adjustment

**Files:**
- Modify: `src/019_MainSelect/019_UnkSubStruct9.cpp:27-45,186-252`

**Interfaces:**
- Consumes: `GameModeManagerBase_104_0C`'s `LinkList` base and `UnkSystem2_UnkSubSystem1_Derived1`'s `LinkListNode` base.
- Produces: compiler-performed base adjustments and a source-level `for` loop where output permits.

- [ ] **Step 1: Test the typed Append expression**

Replace the cast arithmetic with:

```cpp
((GameModeManagerBase_104_0C *) param1.param1)->Append(&this->mUnk_004);
```

Build/report the constructor. Accept only if `_ZN13UnkSubStruct9C1E13stack_struct1` remains 100%; otherwise restore the existing expression and record the percentage.

- [ ] **Step 2: Test the for-loop form**

Replace:

```cpp
u32 i = 0;
do {
```

with:

```cpp
for (u32 i = 0; i < (uVar6 >> 2); i++) {
```

Then delete the loop body's final `i++;` and replace:

```cpp
} while (i < (uVar6 >> 2));
```

with:

```cpp
}
```

Build/report EUR. Accept only if `func_ov019_020cbc0c` remains at least 70.34091%; otherwise restore the do/while.

- [ ] **Step 3: Commit accepted natural forms**

```bash
git add src/019_MainSelect/019_UnkSubStruct9.cpp
git commit -m "FileSelect: use typed list and loop expressions"
```

Skip if both experiments regress.

### Task 12: Format and verify the complete branch

**Files:**
- Modify: any tracked file changed by repository hooks.
- Remove before final PR diff: `docs/superpowers/specs/2026-08-09-pr-127-review-feedback-design.md`
- Remove before final PR diff: `docs/superpowers/plans/2026-08-09-pr-127-review-feedback.md`

**Interfaces:**
- Consumes: all accepted review fixes.
- Produces: a clean, region-complete branch with no planning artifacts in the PR diff.

- [ ] **Step 1: Run formatting**

Run:

```bash
pre-commit run --all-files
```

Expected: hooks pass. If a formatter changes tracked files, rerun until the command exits 0.

- [ ] **Step 2: Run full regional verification**

Run:

```bash
export TMPDIR=/home/sian/scratch-omp/main
ninja arm9_eur report_eur check_eur
ninja arm9_jp report_jp check_jp
```

Expected: all six targets exit 0; no 100% baseline listed in Task 1 regresses; accepted fuzzy functions meet or exceed their stated thresholds.

- [ ] **Step 3: Remove planning artifacts from the PR diff**

Delete the spec and this plan from the isolated branch, then commit all formatter and cleanup changes:

```bash
git add -u
git commit -m "FileSelect: address PR review feedback"
```

Expected: the final diff against `upstream/main` contains no file under `docs/superpowers/`.

### Task 13: Review, push, respond, and watch CI

**Files:**
- Review: final diff against `upstream/main`.

**Interfaces:**
- Consumes: verified local commits and recorded accepted/rejected measurements.
- Produces: updated PR #127, one technical reply per thread, and passing CI.

- [ ] **Step 1: Perform final code review**

Invoke `superpowers:requesting-code-review`. Check for missed callsites, unintentional region asymmetry, stale comments, and regressions. Apply only confirmed findings and rerun Task 12 verification after any code change.

- [ ] **Step 2: Push the verified branch**

Use the GitHub PR push operation for PR #127/branch `fileselect-pr`.

Expected: remote head advances to the verified local commit.

- [ ] **Step 3: Reply in each inline thread**

For accepted suggestions, state the concrete change and pushed commit. For rejected suggestions, state the affected symbol/section and before/after percentage. Reply through each review comment's reply endpoint, not as top-level PR comments.

- [ ] **Step 4: Watch CI**

Use the GitHub Actions watch operation for the pushed head.

Expected: all PR checks pass. If a check fails, inspect its saved logs, fix the root cause, rerun Task 12, push, and watch again.
