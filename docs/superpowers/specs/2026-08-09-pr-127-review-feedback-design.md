# PR #127 Review Feedback Design

## Goal

Resolve every review comment on zeldaret/st PR #127 without losing correct EUR or JP decompilation output. Apply technically sound suggestions, reject regressions with measured evidence, and leave the pull request formatted and CI-clean.

## Constraints

- Preserve or improve affected symbol and section matches; never accept a cleaner-looking reconstruction solely on reviewer preference.
- Evaluate uncertain suggestions independently so interactions cannot hide a regression.
- Keep EUR and JP overlay configuration equivalent where region layouts permit.
- Remove reviewer-identified noise: comments containing “the ROM”, decomp.me links, stale `non-matching` labels on matched functions, and fake padding explanations.
- Preserve the informative `SAVE_SLOT_OFFSET` pointer comment.
- Do not touch the current checkout's unrelated untracked tools or documents.
- Do not add planning documents to the PR's final diff.

## Approach

Use an isolated worktree from `fileselect-pr`. Capture EUR and JP baselines before editing. Apply mechanical changes first, then evaluate each reconstruction suggestion one at a time. After each uncertain change, rebuild the smallest affected target and compare the affected symbol or section with the baseline. Retain only non-regressing changes.

## Mechanical Changes

1. Restore `data_ov019_020d1d80` to internal `static` linkage and update symbol locality/config accordingly.
2. Remove the explicit `data_ov019_020d22ea` padding object and the six false overlay-1 relocations in each region.
3. Give anonymous string symbols their measured byte sizes and synchronize corresponding JP symbol/config changes.
4. Remove the requested explanatory comments, decomp.me links, and stale matching labels.
5. Replace the unnecessary zero temporary in `SaveFile::func_ov019_020d1b14` with literal zero uses.
6. Run the repository formatter after code changes.

## Experimental Changes

Evaluate these independently against generated output:

- Replace `Vec2sPod` with `Vec2s` in FileSelectMicTest data.
- Restore static initialization to `UnkStruct_ov019_020d1e70`, invert declaration order if necessary, and reduce `UnkStruct_ov019_020d24c0` to its own initialization.
- Replace the mangled `CellAnimObject` extern with the correct class method declaration and call syntax.
- Test whether `func_ov019_020c63dc` needs one aggregate for all frame locals or only a smaller grouped subset.
- Test ordinary `.coords` copies in place of volatile and per-halfword copies.
- Test the proposed concrete transition-helper type and reuse of `UpdateLogic` in `FileSelectMain::vfunc_08`.
- Move the vector arithmetic helper to `math.hpp` and the animation-position helper to `CellAnimObject` when doing so preserves inlining and output.
- Express the `UnkSubStruct9` do/while as a for loop.
- Search existing typed list/container patterns and remove the pointer-arithmetic cast only if a faithful typed expression reproduces the same adjustment.

A rejected experiment is restored immediately and documented for an evidence-backed review reply.

## Verification

- Build and compare every affected EUR symbol or section after its isolated experiment.
- Build and compare corresponding JP output after synchronized config changes.
- Run `pre-commit run --all-files`.
- Run the repository's EUR and JP build, report, and check targets.
- Push the review commit to `fileselect-pr` only after local verification, then watch PR CI.

## Review Responses

Reply to each thread with either the concrete fix or the measured reason a suggestion was not retained. Do not use performative acknowledgments. Resolve threads only after the pushed commit contains the stated result.
