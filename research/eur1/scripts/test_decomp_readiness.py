import tempfile
import unittest
from pathlib import Path
from decomp_readiness import audit, group, inspect_source


class AuditTests(unittest.TestCase):
    def test_classification(self):
        self.assertEqual(group('src/Main/Game/Game.cpp'), 'startup_frame')
        self.assertEqual(group('src/Main/System/OverlayManager.cpp'), 'scene_overlay')
        self.assertEqual(group('src/001_SceneInit/Save/SaveManager_001.cpp'), 'saves')
        self.assertEqual(group('src/025_Title/TitleScreen.cpp'), 'title_ui')
        self.assertEqual(group('src/026_Train/code_02102924.cpp'), 'train')

    def test_explicit_boundaries(self):
        row = inspect_source('src/Main/Game/Game.cpp',
            '#include <nitro/os.h>\nREG_FRAME_COUNTER; CARD_ReadFlashAsync(); OS_DisableInterrupts(); // non-matching TODO\n')
        for marker in ('nitro_headers', 'ds_registers', 'backup_card',
                       'interrupts', 'manual_nonmatching', 'todo'):
            self.assertEqual(row['markers'][marker], 1)
        self.assertEqual(row['direct_boundary_sites'], 3)

    def test_scan_and_missing_core(self):
        with tempfile.TemporaryDirectory() as d:
            root = Path(d)
            f = root / 'src/Main/Game/Game.cpp'
            f.parent.mkdir(parents=True)
            f.write_text('void Game::Run() { REG_FRAME_COUNTER; }', encoding='utf-8')
            summary = audit(root)
            self.assertEqual(summary['summary']['cpp_files'], 1)
            self.assertEqual(summary['summary']['files_with_direct_boundaries'], 1)
            with self.assertRaises(ValueError):
                audit(root, verify_core=True)


if __name__ == '__main__':
    unittest.main()
