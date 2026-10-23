#!/usr/bin/env python3
"""Audit decompilation boundaries relevant to a future native port.

This is metadata-only source inspection: no ROM, assets, or binaries are read.
Occurrences do NOT prove incomplete or complete decompilation.
Python >=3.10, no third-party packages.
"""
from __future__ import annotations

import argparse
import json
import re
from collections import Counter
from pathlib import Path

CORE = (
    'src/Main/Main.cpp',
    'src/Main/Game/Game.cpp',
    'src/Main/System/OverlayManager.cpp',
    'src/025_Title/TitleScreen.cpp',
    'src/025_Title/GameModeTitleScreen.cpp',
    'src/001_SceneInit/Save/SaveManager_001.cpp',
)

# Nitro SDK includes are not necessarily hardware calls.
MARKERS = {
    'ds_registers': re.compile(r'\b(?:REG|HW)_[A-Z][A-Z0-9_]*\b'),
    'graphics': re.compile(r'\b(?:GX|G2|G3|G3X|NNS_G2D|NNS_G3D)_[A-Za-z0-9_]+\b'),
    'overlay_fs': re.compile(r'\bFS_(?:LoadOverlay|UnloadOverlay|OpenFile|ReadFile|SeekFile|CloseFile)\b'),
    'backup_card': re.compile(r'\bCARD_[A-Za-z0-9_]+\b'),
    'interrupts': re.compile(r'\bOS_(?:DisableInterrupts|RestoreInterrupts|WaitVBlankIntr|SetIrqFunction)\b'),
    'input': re.compile(r'\b(?:PAD_[A-Za-z0-9_]+|TouchControl|TouchFlag_[A-Za-z0-9_]+)\b'),
    'audio': re.compile(r'\b(?:NNS_Snd[A-Za-z0-9_]*|SND_[A-Za-z0-9_]+)\b'),
    'nitro_headers': re.compile(r'#\s*include\s*<nitro/[^>]+>'),
    'manual_nonmatching': re.compile(r'(?i)\bnon[- ]matching\b|fake match'),
    'todo': re.compile(r'\b(?:TODO|FIXME)\b'),
}

PRIORITIES = {
    'startup_frame': 'P0', 'scene_overlay': 'P0', 'title_ui': 'P0',
    'saves': 'P0', 'input_touch': 'P0', 'train': 'P1', 'player': 'P1',
    'world': 'P1', 'graphics_audio': 'P1', 'other_gameplay': 'P2'
}


def group(path: str) -> str:
    p = path.lower()
    if p in ('src/main/main.cpp', 'src/main/game/game.cpp') or p.startswith('src/018_startup/'):
        return 'startup_frame'
    if 'overlaymanager' in p or p.startswith('src/001_sceneinit/') and '/save/' not in p:
        return 'scene_overlay'
    if '/save/' in p or 'savemanager' in p or 'savefile' in p:
        return 'saves'
    if '/input' in p or '/touch' in p or 'touchcontrol' in p:
        return 'input_touch'
    if p.startswith('src/025_title/') or p.startswith('src/019_mainselect/'):
        return 'title_ui'
    if p.startswith('src/026_train/') or '/train/' in p or 'train' in Path(p).name:
        return 'train'
    if '/player/' in p or p.startswith('src/093_playersub/') or p.startswith('src/096_playerzelda/'):
        return 'player'
    if any(s in p for s in ('/render', '/graphics', '/sound', '/audio', '/particle')):
        return 'graphics_audio'
    if any(s in p for s in ('/field', '/land', '/dgn', '/dungeon', '/map', '/castle', '/village', '/tower')):
        return 'world'
    return 'other_gameplay'


def inspect_source(rel_path: str, source: str) -> dict:
    found = {key: len(pattern.findall(source)) for key, pattern in MARKERS.items()}
    return {
        'path': rel_path,
        'subsystem': group(rel_path),
        'priority': PRIORITIES[group(rel_path)],
        'lines': source.count('\n') + (0 if not source or source.endswith('\n') else 1),
        'markers': {k: v for k, v in found.items() if v},
        'direct_boundary_sites': sum(found[k] for k in (
            'ds_registers', 'graphics', 'overlay_fs', 'backup_card', 'interrupts', 'input', 'audio')),
        'note': 'Automated lexical indicators only; no matching/compilation status inferred.'
    }


def audit(root: Path, verify_core: bool = False) -> dict:
    src = root / 'src'
    if not src.is_dir():
        raise ValueError(f'Missing C++ source directory: {src}')
    if verify_core:
        missing = [p for p in CORE if not (root / p).is_file()]
        if missing:
            raise ValueError(f'Missing core decompilation source: {", ".join(missing)}')
    paths = sorted(src.rglob('*.cpp'))
    files = [inspect_source(p.relative_to(root).as_posix(),
                            p.read_text(encoding='utf-8', errors='replace')) for p in paths]
    summaries = {}
    for name in PRIORITIES:
        items = [f for f in files if f['subsystem'] == name]
        marks = Counter()
        for f in items:
            marks.update(f['markers'])
        summaries[name] = {
            'priority': PRIORITIES[name], 'source_files': len(items),
            'files_with_direct_boundaries': sum(f['direct_boundary_sites'] > 0 for f in items),
            'marker_totals': dict(sorted(marks.items()))
        }
    return {
        'schema': 1,
        'purpose': 'Preparation for eventual native port, not an implementation of one',
        'disclaimer': 'Metadata inventory only. Symbolized != decompiled; lexical hits != functional correctness; not a byte-match measurement.',
        'summary': {
            'cpp_files': len(files),
            'files_with_direct_boundaries': sum(f['direct_boundary_sites'] > 0 for f in files),
            'files_with_explicit_nonmatching_notes': sum(bool(f['markers'].get('manual_nonmatching')) for f in files),
            'files_with_todo_notes': sum(bool(f['markers'].get('todo')) for f in files),
        },
        'subsystems': summaries,
        'files': files,
    }


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[3])
    p.add_argument('--out', type=Path, help='Write report JSON to this file')
    p.add_argument('--verify-core', action='store_true', help='Fail if key decomp modules are absent')
    a = p.parse_args()
    result = audit(a.root.resolve(), a.verify_core)
    if a.out:
        a.out.parent.mkdir(parents=True, exist_ok=True)
        a.out.write_text(json.dumps(result, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(result['summary'], indent=2))
    for name, row in result['subsystems'].items():
        if row['source_files']:
            print(f"{row['priority']} {name}: {row['source_files']} source files, {row['files_with_direct_boundaries']} with boundary references")
    return 0


if __name__ == '__main__':
    try:
        raise SystemExit(main())
    except (ValueError, OSError) as exc:
        print(f'ERROR: {exc}')
        raise SystemExit(1)
