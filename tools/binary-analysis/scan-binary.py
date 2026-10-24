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

# The Ghidra project images the ELF at base 0x100000, so evidence addresses are
# file offset + this constant. Both are reported: `offset` for slicing the file,
# `ghidra` for cross-referencing the decompilation evidence.
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


def elf_vaddr(sections, offset):
    """Map a file offset to the address the program actually uses.

    For .rodata the two coincide; for .text the section is page aligned, so the
    address is offset + 0x1000. Getting this wrong makes every reference lookup
    miss, which is exactly what happened before."""
    for section in sections:
        if section["offset"] <= offset < section["offset"] + section["size"]:
            return section["addr"] + (offset - section["offset"])
    return offset


def section_for(sections, offset):
    for section in sections:
        if section["offset"] <= offset < section["offset"] + section["size"]:
            return section["name"], bool(section["flags"] & 0x4)
    return "?", False


def executable_ranges(sections):
    return [(s["offset"], s["size"], s["addr"], s["name"]) for s in sections
            if s["flags"] & 0x4 and s["size"] > 0]


def scan_strings(path, literals, sections):
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
                "elf_vaddr": elf_vaddr(sections, at),
                "ghidra": at + IMAGE_BASE_NOTE,
                "elf_vaddr": elf_vaddr(sections, at),
                "section": section_for(sections, at)[0],
                "context": data[max(0, at - 24):at + 96].decode("latin-1"),
            })
            start = at + 1
            if len([h for h in hits if h["literal"] == needle.decode("utf-8", "replace")]) >= 40:
                break
    return hits


def scan_values(path, values, sections, window=96):
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
                "ghidra": at + IMAGE_BASE_NOTE,
                "elf_vaddr": elf_vaddr(sections, at),
                "section": section_for(sections, at)[0],
                "executable": section_for(sections, at)[1],
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


def scan_imm_stores(path, sections):
    """Collect `mov dword ptr [reg+disp32], imm32` stores in executable code.

    Placement parameters are written into a structure object by its constructor,
    so the numbers appear as store immediates with a small field offset. Reading
    them out by hand is what turns "the salt is somewhere in .text" into an
    ordered record layout.
    """
    stores = []
    with open(path, "rb") as handle:
        for offset, size, addr, name in executable_ranges(sections):
            handle.seek(offset)
            block = handle.read(size)
            for i in range(len(block) - 10):
                if block[i] != 0xC7:
                    continue
                modrm = block[i + 1]
                # mod=10 (disp32), reg=000 (/0 -> a plain dword store)
                if (modrm & 0xC0) != 0x80 or (modrm & 0x38) != 0x00:
                    continue
                disp = struct.unpack_from("<i", block, i + 2)[0]
                imm = struct.unpack_from("<I", block, i + 6)[0]
                stores.append({
                    "offset": i + offset,
                    "ghidra": i + offset + IMAGE_BASE_NOTE,
                    "disp": disp,
                    "imm": imm,
                    "imm_signed": struct.unpack("<i", struct.pack("<I", imm))[0],
                })
    return stores


def cluster_stores(stores, max_gap=256):
    """Group stores that are close together: one constructor writes one record."""
    clusters = []
    current = []
    for store in stores:
        if current and store["offset"] - current[-1]["offset"] > max_gap:
            clusters.append(current)
            current = []
        current.append(store)
    if current:
        clusters.append(current)
    return clusters



def scan_data_records(path, sections, window=64, max_records=50000):
    """Find record-shaped dword runs in the read-only data sections.

    A structure set's placement is three numbers next to each other: a spacing,
    a separation and a salt. If the engine keeps them in a static table rather
    than building them with stores, they are in `.rodata` or `.data.rel.ro` as
    aligned dwords, not in code. The scanner therefore does not interpret: it
    reports every place where two small integers sit within `window` bytes of a
    large one, and lets the oracle decide which of those tuples is real.
    """
    def is_small(value):
        return 1 <= value <= 128

    def is_large(value):
        return 1000 <= value <= 0x7FFFFFFF

    records = []
    wanted = {".rodata", ".data.rel.ro", ".data", ".text"}
    seen = set()
    with open(path, "rb") as handle:
        for section in sections:
            if section["name"] not in wanted or section["size"] < 64:
                continue
            handle.seek(section["offset"])
            block = handle.read(section["size"])
            limit = len(block) - window - 4
            aligned = 0
            while aligned <= limit:
                value = struct.unpack_from("<i", block, aligned)[0]
                if not is_small(value):
                    aligned += 4
                    continue
                # a small integer starts a candidate: look ahead for a second
                # small one and a large one, in either order
                smalls = [(aligned, value)]
                large = None
                for ahead in range(aligned + 4, aligned + window + 1, 4):
                    other = struct.unpack_from("<i", block, ahead)[0]
                    if is_small(other) and len(smalls) < 3:
                        smalls.append((ahead, other))
                    elif is_large(other) and large is None:
                        large = (ahead, other)
                    if len(smalls) >= 2 and large is not None:
                        break
                if len(smalls) >= 2 and large is not None:
                    for i in range(len(smalls)):
                        for j in range(len(smalls)):
                            if i == j:
                                continue
                            spacing = smalls[i][1]
                            separation = smalls[j][1]
                            if separation >= spacing:
                                continue
                            key = (spacing, separation, large[1])
                            if key in seen:
                                continue
                            seen.add(key)
                            records.append({
                                "spacing": spacing,
                                "separation": separation,
                                "salt": large[1],
                                "section": section["name"],
                                "ghidra": section["offset"] + smalls[i][0] + IMAGE_BASE_NOTE,
                                "offset": section["offset"] + smalls[i][0],
                            })
                            if len(records) >= max_records:
                                return records
                aligned += 4
    return records


def function_start(path, sections, site, window=0x8000):
    """Guess the start of the function containing `site`.

    Ghidra is run without analysis, so it does not know function boundaries and
    would decompile a reference site as a fragment. This binary is not compiled
    with CET, so the usual `endbr64` marker is absent; instead we use the layout
    the linker leaves behind: a function ends with `ret` (or a near return)
    followed by at least two bytes of padding (0xcc / 0x90), and the next
    function starts right after the padding.
    """
    low = None
    for section in sections:
        if section["offset"] <= site < section["offset"] + section["size"]:
            low = max(section["offset"], site - window)
            break
    if low is None:
        return None
    with open(path, "rb") as handle:
        handle.seek(low)
        block = handle.read(site - low)
    if len(block) < 8:
        return None
    # Walk backwards: find a return, then skip padding, and check that the byte
    # after it looks like an instruction (not another byte of padding).
    for i in range(len(block) - 1, 8, -1):
        byte = block[i - 1]
        ends_function = byte == 0xC3 or (byte == 0xC2)
        if not ends_function:
            continue
        j = i
        while j < len(block) and block[j] in (0xCC, 0x90):
            j += 1
        if j - i < 2:
            continue
        if j >= len(block):
            return None
        return section_vaddr(sections, low + j)
    return None


def section_vaddr(sections, offset):
    for section in sections:
        if section["offset"] <= offset < section["offset"] + section["size"]:
            return section["addr"] + (offset - section["offset"])
    return offset


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--binary", required=True)
    parser.add_argument("--out", required=True, help="output directory")
    parser.add_argument("--strings-file", help="file with one literal per line")
    parser.add_argument("--values", help="comma separated integers")
    parser.add_argument("--refs", help="comma separated virtual addresses")
    parser.add_argument("--ranges", action="store_true", help="also report the ELF layout")
    parser.add_argument("--imm-stores", action="store_true",
                        help="dump dword store immediates in .text (record layouts)")
    parser.add_argument("--function-starts", action="store_true",
                        help="map each ref site to a likely function start")
    parser.add_argument("--data-records", action="store_true",
                        help="scan read-only data for spacing/separation/salt tuples")
    parser.add_argument("--salty", type=int, default=1000000,
                        help="with --imm-stores, minimum immediate treated as a possible salt")
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

    if args.data_records:
        records = scan_data_records(args.binary, sections)
        report["data_records"] = records
        print(f"data records: {len(records)}")

    if args.strings_file:
        literals = [line.strip() for line in open(args.strings_file) if line.strip()]
        report["strings"] = scan_strings(args.binary, literals, sections)

    if args.values:
        values = [int(part, 0) for part in args.values.split(",") if part.strip()]
        report["values"] = scan_values(args.binary, values, sections)

    if args.refs:
        targets = [int(part, 0) for part in args.refs.split(",") if part.strip()]
        report["refs"] = scan_refs(args.binary, targets, executable_ranges(sections))

    if args.function_starts:
        sites = set()
        for entries in report.get("refs", {}).values():
            for entry in entries:
                sites.add(entry["site"])
        starts = {}
        for site in sorted(sites):
            start = function_start(args.binary, sections, site)
            starts[hex(site)] = None if start is None else hex(start)
        report["function_starts"] = starts
        resolved = sum(1 for value in starts.values() if value)
        print(f"reference sites: {len(starts)}, mapped to a function start: {resolved}")

    if args.imm_stores:
        stores = scan_imm_stores(args.binary, sections)
        report["imm_stores"] = len(stores)
        # A placement constructor writes small field offsets; keep the clusters
        # that contain at least one salt-sized immediate.
        interesting = []
        for cluster in cluster_stores(stores):
            salty = [s for s in cluster if s["imm"] >= args.salty]
            if not salty:
                continue
            interesting.append({
                "start": cluster[0]["ghidra"],
                "end": cluster[-1]["ghidra"],
                "stores": cluster,
            })
        report["imm_clusters"] = interesting

    out_path = os.path.join(args.out, "scan.json")
    with open(out_path, "w") as handle:
        json.dump(report, handle, indent=2)

    # A compact human summary lands next to the JSON, because the sandbox reads
    # committed files, not logs.
    summary = []
    if "strings" in report:
        summary.append(f"string hits: {len(report['strings'])}")
        for hit in report["strings"][:40]:
            summary.append(f"  {hit['literal']!r} at elf 0x{hit['elf_vaddr']:x} "
                           f"(ghidra 0x{hit['ghidra']:x}, {hit['section']})")
    if "values" in report:
        summary.append(f"value hits: {len(report['values'])}")
        for hit in report["values"][:60]:
            summary.append(
                f"  0x{hit['value']:08x} at ghidra 0x{hit['ghidra']:x} "
                f"({hit['section']}{', code' if hit['executable'] else ''}) "
                f"after={hit['after_i32'][:6]}"
            )
    if "imm_clusters" in report:
        summary.append(f"dword stores in code: {report['imm_stores']}, "
                       f"clusters containing a salt-sized immediate: {len(report['imm_clusters'])}")
        for cluster in report["imm_clusters"][:20]:
            rendered = " ".join(
                f"[{s['disp']:#x}]={s['imm_signed']}" for s in cluster["stores"]
            )
            summary.append(f"  cluster 0x{cluster['start']:x}..0x{cluster['end']:x}: {rendered}")
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
