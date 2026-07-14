import struct
import yaml

from pathlib import Path
from dataclasses import dataclass, field


@dataclass
class CourseRoomEntry:
    roomIndex: int
    mapPaintIndex: int
    unk_02: int
    unk_03: int

    def to_yaml(self):
        return {
            f"room_index_{self.roomIndex}": {
                "mapPaintIndex": self.mapPaintIndex,
                "unk_02": f"0x{self.unk_02:02X}",
                "unk_03": f"0x{self.unk_03:02X}",
            }
        }


@dataclass
class CourseEntry:
    size: int
    name: str
    unk_10: int
    numRooms: int
    unk_15: int
    titleCardMsgIndex: int
    saveCourseIndex: int
    unk_18: int
    unk_19: int
    unk_1A: int
    unk_1B: int
    unk_1C: int
    unk_1D: int
    unk_1E: int
    unk_1F: int
    defaultMapPaintIndex: int
    roomEntries: list[CourseRoomEntry] = field(default_factory=list)

    def to_yaml(self):
        room_data = {}

        for room in self.roomEntries:
            room_data.update(room.to_yaml())

        return {
            self.name: {
                "unk_10": f"0x{self.unk_10:02X}",
                "numRooms": self.numRooms,
                "unk_15": f"0x{self.unk_15:02X}",
                "titleCardMsgIndex": self.titleCardMsgIndex,
                "saveCourseIndex": self.saveCourseIndex,
                "unk_18": f"0x{self.unk_18:02X}",
                "unk_19": f"0x{self.unk_19:02X}",
                "unk_1A": f"0x{self.unk_1A:02X}",
                "unk_1B": f"0x{self.unk_1B:02X}",
                "unk_1C": f"0x{self.unk_1C:02X}",
                "unk_1D": f"0x{self.unk_1D:02X}",
                "unk_1E": f"0x{self.unk_1E:02X}",
                "unk_1F": f"0x{self.unk_1F:02X}",
                "defaultMapPaintIndex": self.defaultMapPaintIndex,
                "roomEntries": room_data,
            }
        }


def get_entries():
    course_entries: list[CourseEntry] = []

    clb_path = Path("extract/eur/files/Course/courselist.clb").resolve()
    assert clb_path.exists()
    clb_data = clb_path.read_bytes()

    magic, unk_04, unk_08, unk_0C = struct.unpack("<4sIII", clb_data[0x00:0x10])
    start = 0x10

    for _ in range(unk_08):
        new_entry = CourseEntry(*struct.unpack("<I16sI13B3x", clb_data[start:start + 0x04 + 0x24]))

        if isinstance(new_entry.name, bytes):
            new_entry.name = new_entry.name.decode("utf-8").replace("\x00", "")

        room_start = start + 0x04 + 0x24
        for _ in range(new_entry.numRooms):
            new_entry.roomEntries.append(CourseRoomEntry(*struct.unpack("<4B", clb_data[room_start:room_start + 0x04])))
            room_start += 0x04

        course_entries.append(new_entry)
        start += new_entry.size

    return course_entries


if __name__ == "__main__":
    yaml_data = {}

    for entry in get_entries():
        yaml_data.update(entry.to_yaml())

    with Path("course.yaml").open("w") as file:
        yaml.safe_dump(yaml_data, file, sort_keys=False)
