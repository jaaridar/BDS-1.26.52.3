#!/usr/bin/env python3
"""Locate structure-placement data inside the proprietary server binary.

The worldgen report established that structure placement is the Java-style
spaced-structure resolver, but the per-structure numbers (spacing, separation,
salt, spread type) are compiled in, not shipped as data files: the behaviour
packs only carry `trail_ruins` and `abandoned_camp`.

This tool answers three questions about the binary without running it:

  strings  where do the structure identifiers live?
  values   where do candidate numeric constants appear as immediates, and what
           is stored around them? (a placement record is a small run of ints)
  refs     which instructions reference a given address? (RIP-relative lea,
           computed from the instruction stream, no analysis needed)

Everything is reported as (file offset, virtual address, bytes), with the
ELF base taken from the program headers so the numbers line up with the Ghidra
evidence, where vaddr = file offset + 0x100000.

Usage:
  scan-binary.py --binary bedrock_server --strings-file names.txt --out report
  scan-binary.py --binary bedrock_server --values 10387312,10387319 --out report
  scan-binary.py --binary bedrock_server --refs 0x1a2b3c4,0x1a2b3d0 --out report
"""

import argparse
import json
import os
import struct
import sys

IMAGE_BASE_NOTE = 0x100000


def read_sections(path):
    """Minimal ELF64 parser: section headers as (name, offset, size, addr, flags)."""
    with open(path, "rb") as handle:
        header = handle.read(64)
        if header[:4] != b"\x7fELF" or header[4] != 2:
            raise SystemExit("not an ELF64 file")
        shoff = struct.unpack_from("<Q", header, 0x28)[0]
        shentsize = struct.unpack_from("<H", header, 0x3A)[0]
        shnum = struct.unpack_from("<H", header, 0x3C)[0]
        shstrndx = struct.unpack_from("<H", header, 0x3E)[0]
        handle.seek(shoff)
        raw = handle.read(shentsize * shnum)
        sections = []
        for i in range(shnum):
            base = i * shentsize
            name_off, sh_type = struct.unpack_from("<II", raw, base)
            flags, addr, offset, size = struct.unpack_from("<QQQQ", raw, base + 8)
            sections.append(
                {"name_off": name_off, "type": sh_type, "flags": flags,
                 "addr": addr, "offset": offset, "size": size}
            )
        # Resolve names.
        strtab = sections[shstrndx]
        handle.seek(strtab["offset"])
        names = handle.read(strtab["size"])
        for section in sections:
            end = names.find(b"\x00", section["name_off"])
            section["name"] = names[section["name_off"]:end].decode("utf-8", "replace")
        return sections


def executable_ranges(sections):
    return [(s["offset"], s["size"], s["addr"], s["name"]) for s in sections
            if s["flags"] & 0x4 and s["size"] > 0]


def scan_strings(path, literals):
    data = open(path, "rb").read()
    hits = []
    for literal in literals:
        needle = literal.encode() if isinstance(literal, str) else literal
        start = 0
        while True:
            at = data.find(needle, start)
            if at < 0:
                break
            hits.append({
                "literal": needle.decode("utf-8", "replace"),
                "offset": at,
                "vaddr": at + IMAGE_BASE_NOTE,
                "context": data[max(0, at - 24):at + 96].decode("latin-1"),
            })
            start = at + 1
            if len([h for h in hits if h["literal"] == needle.decode("utf-8", "replace")]) >= 40:
                break
    return hits


def scan_values(path, values, window=96):
    data = open(path, "rb").read()
    hits = []
    for value in values:
        packed = struct.pack("<I", value & 0xFFFFFFFF)
        start = 0
        while True:
            at = data.find(packed, start)
            if at < 0:
                break
            before = data[max(0, at - window):at]
            after = data[at + 4:at + 4 + window]
            hits.append({
                "value": value,
                "offset": at,
                "vaddr": at + IMAGE_BASE_NOTE,
                "before_hex": before.hex(),
                "after_hex": after.hex(),
                # Interpret both sides as little-endian int32s: a placement
                # record is a short run of small integers plus one large salt.
                "before_i32": list(struct.unpack(f"<{len(before)//4}i", before[:len(before)//4*4])),
                "after_i32": list(struct.unpack(f"<{len(after)//4}i", after[:len(after)//4*4])),
            })
            start = at + 1
    return hits


def scan_refs(path, targets, ranges, limit=200):
    """Find RIP-relative accesses whose computed address is one of `targets`.

    Handles the two encodings that matter for data references in position
    independent code: `lea r64, [rip+d32]` (REX.W 8D) and `mov r32/r64, [rip+d32]`
    (8B /r with mod=00, rm=101). Both are single instructions, so the target is
    simply the address after the instruction plus the displacement.
    """
    wanted = set(targets)
    found = {}
    with open(path, "rb") as handle:
        for offset, size, addr, name in ranges:
            handle.seek(offset)
            block = handle.read(size)
            length = len(block)
            for i in range(length - 7):
                opcode = block[i]
                rex = block[i - 1] if i > 0 else 0
                # lea with REX.W prefix, or bare lea
                is_lea = opcode == 0x8D and (rex & 0xF8) == 0x48
                is_mov = opcode == 0x8B and (rex & 0x40) == 0x40
                if not (is_lea or is_mov):
                    continue
                modrm = block[i + 1]
                if (modrm & 0xC7) != 0x05:  # mod=00, rm=101 -> RIP-relative
                    continue
                disp = struct.unpack_from("<i", block, i + 2)[0]
                insn_end = addr + i + 6
                target = insn_end + disp
                if target not in wanted:
                    continue
                site = addr + i - 1
                entry = found.setdefault(target, [])
                if len(entry) < limit:
                    entry.append({"site": site, "section": name})
    return {hex(k): v for k, v in found.items()}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--binary", required=True)
    parser.add_argument("--out", required=True, help="output directory")
    parser.add_argument("--strings-file", help="file with one literal per line")
    parser.add_argument("--values", help="comma separated integers")
    parser.add_argument("--refs", help="comma separated virtual addresses")
    parser.add_argument("--ranges", action="store_true", help="also report the ELF layout")
    args = parser.parse_args()

    os.makedirs(args.out, exist_ok=True)
    sections = read_sections(args.binary)
    report = {
        "binary_bytes": os.path.getsize(args.binary),
        "sections": [{"name": s["name"], "offset": s["offset"], "size": s["size"],
                      "addr": s["addr"], "executable": bool(s["flags"] & 0x4)}
                     for s in sections if s["size"] > 0],
    }
    if args.ranges:
        report["executable_ranges"] = executable_ranges(sections)

    if args.strings_file:
        literals = [line.strip() for line in open(args.strings_file) if line.strip()]
        report["strings"] = scan_strings(args.binary, literals)

    if args.values:
        values = [int(part, 0) for part in args.values.split(",") if part.strip()]
        report["values"] = scan_values(args.binary, values)

    if args.refs:
        targets = [int(part, 0) for part in args.refs.split(",") if part.strip()]
        report["refs"] = scan_refs(args.binary, targets, executable_ranges(sections))

    out_path = os.path.join(args.out, "scan.json")
    with open(out_path, "w") as handle:
        json.dump(report, handle, indent=2)

    # A compact human summary lands next to the JSON, because the sandbox reads
    # committed files, not logs.
    summary = []
    if "strings" in report:
        summary.append(f"string hits: {len(report['strings'])}")
        for hit in report["strings"][:40]:
            summary.append(f"  {hit['literal']!r} at vaddr 0x{hit['vaddr']:x}")
    if "values" in report:
        summary.append(f"value hits: {len(report['values'])}")
        for hit in report["values"][:60]:
            summary.append(
                f"  0x{hit['value']:08x} at vaddr 0x{hit['vaddr']:x} "
                f"after={hit['after_i32'][:6]}"
            )
    if "refs" in report:
        summary.append(f"referenced targets: {len(report['refs'])}")
        for target, sites in list(report["refs"].items())[:40]:
            summary.append(f"  {target}: {[hex(s['site']) for s in sites[:6]]}")
    with open(os.path.join(args.out, "summary.txt"), "w") as handle:
        handle.write("\n".join(summary) + "\n")
    print("\n".join(summary))
    print(f"wrote {out_path}")


if __name__ == "__main__":
    sys.exit(main())
