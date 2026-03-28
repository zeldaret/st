#!/usr/bin/env python

import copy

from pathlib import Path
from dataclasses import dataclass, field
from typing import Optional


INDENT = " " * 4
SECTION_NAMES = [
    "text",
    "exception",
    "exceptix",
    "init",
    "rodata",
    "ctor",
    "data",
    "bss",
]


@dataclass
class Section:
    name: str
    start: str = "0x00000000"
    end: str = "0x00000000"
    attributes: tuple[str] = field(default_factory=tuple)

    def is_used(self):
        return int(self.start, base=16) > 0

    def has_attributes(self):
        return len(self.attributes) > 0

    def to_txt(self):
        extras = "\n"

        if self.has_attributes():
            extras = f" {' '.join(attr for attr in self.attributes)}\n"

        return INDENT + f"{self.name:11} start:{self.start} end:{self.end}" + extras


class Sections:
    def __init__(self):
        self.text = Section(".text")
        self.exception = Section(".exception")
        self.exceptix = Section(".exceptix")
        self.init = Section(".init")
        self.rodata = Section(".rodata")
        self.ctor = Section(".ctor")
        self.data = Section(".data")
        self.bss = Section(".bss")

    def get_hash_key(self):
        return (
            self.text,
            self.exception,
            self.exceptix,
            self.init,
            self.rodata,
            self.ctor,
            self.data,
            self.bss
        )

    def to_txt(self):
        data = ""

        for name in SECTION_NAMES:
            section: Optional[Section] = getattr(self, name)
            assert section is not None

            if section.is_used():
                data += section.to_txt()

        assert len(data) > 0
        return data


@dataclass
class Delink:
    filename: str
    sections: Sections
    completed: bool

    def to_txt(self):
        completed = (INDENT + "complete\n") if self.completed else ""
        return f"{self.filename}:\n{completed}" + self.sections.to_txt()


class Delinks:
    def __init__(self, file: Path):
        self.header = ""

        # filename: sections
        self.entries: list[Delink] = []

        assert file.exists()

        with file.open("r") as f:
            filedata = f.readlines() + [""]

        first_file = False
        cur_delink: Optional[Delink] = None
        for original_line in filedata:
            line = original_line.strip()

            if cur_delink is not None:
                if original_line not in {"", "\n"}:
                    if "complete" in line:
                        cur_delink.completed = True
                    else:
                        split = list(dict.fromkeys(line.split(" ")).keys())
                        split.remove("")

                        section: Section = getattr(cur_delink.sections, split[0].removeprefix("."))
                        section.start = split[1].removeprefix("start:")
                        section.end = split[2].removeprefix("end:")

                        if len(split) > 3:
                            section.attributes = tuple(split[3:])
                else:
                    self.entries.append(cur_delink)
                    cur_delink = None
            elif line.endswith(".c:") or line.endswith(".cpp:"):
                cur_delink = Delink(line.removesuffix(":"), Sections(), False)

                if not first_file:
                    first_file = True

            if not first_file:
                self.header += original_line

    def to_txt(self):
        return self.header + "\n".join(delink.to_txt() for delink in self.entries)

    def sort(self):
        sorted_entries: list[Delink] = []

        def get_section_map(section_name: str):
            section_map = {}

            for delink in self.entries:
                self_section: Optional[Section] = getattr(delink.sections, section_name)
                assert self_section is not None

                if self_section.is_used():
                    section_map[int(self_section.start, 16)] = delink

            return dict(sorted(section_map.items()))

        def sort_section(section_name: str):
            section_map = get_section_map(section_name)

            if section_name == "text":
                sorted_entries.extend(list(section_map.values()))
            else:
                index = None

                for delink in section_map.values():
                    if delink in sorted_entries:
                        index = sorted_entries.index(delink) + 1
                    elif index is not None:
                        sorted_entries.insert(index, delink)
                        index += 1
                    else:
                        sorted_entries.append(delink)

        for name in SECTION_NAMES:
            sort_section(name)

        assert len(self.entries) == len(sorted_entries)
        self.entries.clear()
        self.entries = copy.copy(sorted_entries)


def main():
    config_path = Path("config").resolve()
    assert config_path.exists()

    for delinks_path in config_path.rglob("delinks.txt"):
        delinks = Delinks(delinks_path)
        delinks.sort()
        delinks_path.write_text(delinks.to_txt())


if __name__ == "__main__":
    main()
