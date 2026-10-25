"""Find a table of placement parameters by looking for its shape.

Every earlier scan looked for values: salts that Java uses, salts that a pack
states, two small numbers and a large one inside 64 bytes. All of them assume the
record contains a salt. `d2d2c60` shows that half the resolvers take no salt at
all -- their record is just a spacing, a separation and a spread type -- so a
scan that requires a large number cannot see those records however far it looks.

This scan does not look for values at all. It looks for a *table*: a run of
records at a constant stride whose fields keep the same shape. A hardcoded list
of structure sets is exactly that, and a run of six or more is not something
random bytes do often.

Nothing here interprets the record. It reports where the runs are, what stride
they use, which field offsets hold small numbers, and the numbers themselves, so
the interpretation can be checked against the captures afterwards.

    python3 tools/binary-analysis/scan-placement-tables.py --binary bedrock_server \
        --out research/proprietary/bds-1.26.52.3/structures/scan-tables
"""

import argparse
import json
import os
import struct

SECTIONS = (".rodata", ".data.rel.ro", ".data", ".data.rel.ro.local")

# A record shape worth reporting: this many consecutive records, each with a
# spacing, a separation and a spread type in the same three fields.
MIN_RUN = 6
MAX_SMALL = 128


def elf_sections(path):
    """Section name -> (file offset, size), read from the section headers."""
    with open(path, "rb") as handle:
        header = handle.read(64)
        if header[:4] != b"\x7fELF":
            raise SystemExit("not an ELF file")
        is64 = header[4] == 2
        if not is64:
            raise SystemExit("only 64-bit ELF is handled")
        e_shoff = struct.unpack_from("<Q", header, 0x28)[0]
        e_shentsize = struct.unpack_from("<H", header, 0x3A)[0]
        e_shnum = struct.unpack_from("<H", header, 0x3C)[0]
        e_shstrndx = struct.unpack_from("<H", header, 0x3E)[0]
        handle.seek(e_shoff + e_shstrndx * e_shentsize)
        strtab_header = handle.read(e_shentsize)
        str_offset = struct.unpack_from("<Q", strtab_header, 0x18)[0]
        str_size = struct.unpack_from("<Q", strtab_header, 0x20)[0]
        handle.seek(str_offset)
        strings = handle.read(str_size)
        sections = {}
        for index in range(e_shnum):
            handle.seek(e_shoff + index * e_shentsize)
            entry = handle.read(e_shentsize)
            name_offset = struct.unpack_from("<I", entry, 0)[0]
            name = strings[name_offset:strings.find(b"\0", name_offset)].decode("latin-1")
            offset = struct.unpack_from("<Q", entry, 0x18)[0]
            size = struct.unpack_from("<Q", entry, 0x20)[0]
            addr = struct.unpack_from("<Q", entry, 0x10)[0]
            sections[name] = {"offset": offset, "size": size, "addr": addr}
        return sections


def looks_like_record(data, at, stride):
    """(spacing, separation, spread type) in a 12-byte window at `at`."""
    if at + 12 > len(data):
        return None
    spacing, separation, kind = struct.unpack_from("<iii", data, at)
    if not (1 <= spacing <= MAX_SMALL):
        return None
    if not (0 <= separation < spacing):
        return None
    if kind not in (0, 1, 2):
        return None
    return {"spacing": spacing, "separation": separation, "type": kind}


def scan_section(name, data, base_addr):
    runs = []
    for stride in (12, 16, 20, 24, 28, 32, 40, 48, 56, 64):
        for field in range(0, stride - 12 + 1, 4):
            at = field
            while at + 12 <= len(data):
                record = looks_like_record(data, at, stride)
                if record is None:
                    at += 4
                    continue
                # Extend while the shape holds.
                records = []
                cursor = at
                while cursor + 12 <= len(data):
                    current = looks_like_record(data, cursor, stride)
                    if current is None:
                        break
                    records.append(current)
                    cursor += stride
                if len(records) >= MIN_RUN:
                    runs.append({
                        "section": name,
                        "stride": stride,
                        "field": field,
                        "offset": base_addr + at,
                        "count": len(records),
                        "records": records,
                    })
                at = max(cursor, at + 4)
    return runs


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--binary", required=True)
    parser.add_argument("--out", required=True)
    parser.add_argument("--min-run", type=int, default=MIN_RUN)
    args = parser.parse_args()

    global MIN_RUN
    MIN_RUN = args.min_run

    sections = elf_sections(args.binary)
    with open(args.binary, "rb") as handle:
        blob = handle.read()

    report = {"binary": os.path.basename(args.binary), "binary_bytes": len(blob), "runs": []}
    for name in SECTIONS:
        section = sections.get(name)
        if not section or not section["size"]:
            continue
        data = blob[section["offset"]:section["offset"] + section["size"]]
        runs = scan_section(name, data, section["addr"])
        report["runs"].extend(runs)
        print(f"{name}: {len(runs)} runs")

    report["runs"].sort(key=lambda run: -run["count"])
    os.makedirs(args.out, exist_ok=True)
    with open(os.path.join(args.out, "scan.json"), "w") as handle:
        json.dump(report, handle, indent=1)

    for run in report["runs"][:20]:
        sample = ", ".join(f"{r['spacing']}/{r['separation']}/{r['type']}" for r in run["records"][:8])
        print(f"{run['section']} @{run['offset']:#x} stride {run['stride']} field {run['field']} "
              f"count {run['count']}: {sample}")
    print(f"wrote {os.path.join(args.out, 'scan.json')}")


if __name__ == "__main__":
    main()
