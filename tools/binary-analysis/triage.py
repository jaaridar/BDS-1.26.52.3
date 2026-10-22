#!/usr/bin/env python3
"""Static triage of the official (proprietary) Bedrock Dedicated Server binary.

This tool never executes the target.  It parses the ELF image, recovers the
Itanium C++ RTTI graph (typeinfo -> vtable -> slots) from ``.rela.dyn``,
linear-sweeps ``.text`` with Capstone to find which functions reference
world-generation strings, ranks candidate functions and writes a bounded set
of text reports plus a ``targets.tsv`` manifest for the Ghidra decompile stage.

Provenance: output written by this tool is mechanically derived from Mojang's
proprietary binary.  It is research evidence, not MIT-licensed OpenBDS source;
see research/proprietary/README.md and docs/licensing.md.

Typical use (on a machine that has the real LFS object materialised)::

    python3 tools/binary-analysis/triage.py bedrock_server OUTDIR \
        --expected-sha256 0a49...

Dependencies: pyelftools, capstone.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import os
import re
import struct
import sys
import time

try:
    from elftools.elf.elffile import ELFFile
    from elftools.elf.relocation import RelocationSection
except ImportError:  # pragma: no cover - dependency guard
    sys.stderr.write("error: pyelftools is required (pip install pyelftools)\n")
    raise

try:
    import capstone
    from capstone import x86
except ImportError:  # pragma: no cover - dependency guard
    sys.stderr.write("error: capstone is required (pip install capstone)\n")
    raise


# --------------------------------------------------------------------------
# World-generation vocabulary
# --------------------------------------------------------------------------

# Class-name tokens that carry world-generation signal, with weights.  The
# tokens are matched case-insensitively against the identifier tokens of the
# (mangled) RTTI name.
CLASS_TOKEN_WEIGHTS = {
    "worldgenerator": 40,
    "worldgen": 30,
    "biomesource": 40,
    "biome": 12,
    "overworldgenerator": 45,
    "multinoise": 35,
    "noisechunk": 30,
    "chunkgenerator": 35,
    "generator": 6,
    "noise": 8,
    "perlin": 12,
    "simplex": 10,
    "normalnoise": 18,
    "improvednoise": 18,
    "xoroshiro": 18,
    "mersenne": 8,
    "random": 2,
    "density": 10,
    "aquifer": 20,
    "surfacebuilder": 24,
    "surface": 6,
    "carver": 18,
    "feature": 6,
    "featureregistry": 16,
    "structure": 8,
    "jigsaw": 20,
    "templatepool": 18,
    "processorlist": 14,
    "placement": 12,
    "ore": 4,
    "terrain": 14,
    "heightmap": 14,
    "climate": 12,
    "cave": 8,
    "tree": 3,
    "levelchunk": 8,
    "chunk": 5,
    "dimension": 10,
    "seed": 4,
    "molang": 3,
    "spawn": 3,
    "villager": 2,
    "sculk": 8,
    "worldgenrandom": 18,
    "worldgenanonym": 10,
    "structureaccess": 12,
    "heightprovider": 12,
    "chunklocalnoisecache": 22,
    "noisecache": 14,
    "worldgenmultinoise": 20,
    "climate": 12,
    "surfacematerial": 10,
    "aquifer": 20,
}

# Substrings of printable strings that mark a code path as world-generation
# related.  Matched case-insensitively.
WORLDGEN_STRING_PATTERNS = [
    "worldgen", "world_gen", "world generation", "chunkgenerator",
    "chunk generator", "biomesource", "biome source", "biome_source",
    "noise_settings", "noisesettings", "minecraft:overworld",
    "minecraft:noise", "multinoise", "density", "aquifer",
    "surface_builder", "surfacebuilder", "surface builder",
    "overworld_generation_rules", "climate", "continentalness",
    "erosion", "weirdness", "humidity", "temperature",
    "feature_rules", "feature rules", "placed_feature", "feature_type",
    "jigsaw", "template_pool", "processor_list", "structure_set",
    "structure placement", "structureplacement", "random_spread",
    "scattered_feature", "heightmap", "height_map", "terrain",
    "perlin", "simplex", "improvednoise", "normalnoise", "xoroshiro",
    "biome registry", "biomes.brarchive", "mojang-biomes.json",
    "minecraft:biome", "subchunk_biomedata", "biomedata",
    "carver", "cave", "ore_feature", "tree_feature",
    "aggregate_feature", "search_feature", "sequence_feature",
    "weighted_random_feature", "random_feature",
]

# Strings/classes that specifically belong to the noise-based overworld
# pipeline.  Used for the "algorithm-core" report.
CORE_PATTERNS = [
    "multinoise", "biomesource3d", "vanillaoverworldbiomesource",
    "xoroshirorandom", "normalnoise", "improvednoise", "perlin",
    "density", "aquifer", "surfacebuilder", "overworldgenerator",
    "chunklocalnoisecache", "fillbiomes", "overworld_generation_rules",
    "climate", "continentalness",
]

IDENT_TOKEN = re.compile(r"[A-Za-z_][A-Za-z0-9_]*")
MANGLE_PREFIX = re.compile(rb"(\d{1,3})")


# --------------------------------------------------------------------------
# Small helpers
# --------------------------------------------------------------------------

def log(message: str) -> None:
    sys.stderr.write("[triage] %s\n" % message)
    sys.stderr.flush()


def u32(data: bytes, offset: int) -> int:
    return struct.unpack_from("<I", data, offset)[0]


def u64(data: bytes, offset: int) -> int:
    return struct.unpack_from("<Q", data, offset)[0]


def i32(data: bytes, offset: int) -> int:
    return struct.unpack_from("<i", data, offset)[0]


def align_up(value: int, alignment: int) -> int:
    return (value + alignment - 1) // alignment * alignment


# --------------------------------------------------------------------------
# ELF model
# --------------------------------------------------------------------------

class Binary:
    def __init__(self, path: str):
        self.path = path
        self.file_size = os.path.getsize(path)
        self.handle = open(path, "rb")
        self.elf = ELFFile(self.handle)
        self.data = self._load()

        self.sections = {}
        for section in self.elf.iter_sections():
            name = section.name
            if not name or section["sh_type"] == "SHT_NOBITS":
                self.sections[name] = {
                    "name": name, "addr": int(section["sh_addr"]),
                    "size": int(section["sh_size"]), "offset": 0,
                    "flags": int(section["sh_flags"]),
                    "type": section["sh_type"], "nobits": True,
                }
                continue
            self.sections[name] = {
                "name": name,
                "addr": int(section["sh_addr"]),
                "size": int(section["sh_size"]),
                "offset": int(section["sh_offset"]),
                "flags": int(section["sh_flags"]),
                "type": section["sh_type"],
                "nobits": False,
            }

        self.exec_ranges = []
        self.data_ranges = []
        for meta in self.sections.values():
            if meta["size"] == 0:
                continue
            if meta["flags"] & 0x4:  # SHF_EXECINSTR
                self.exec_ranges.append((meta["addr"], meta["addr"] + meta["size"]))
            if meta["flags"] & 0x2:  # SHF_ALLOC
                self.data_ranges.append((meta["addr"], meta["addr"] + meta["size"]))
        self.exec_ranges.sort()
        self.data_ranges.sort()

        # File-backed address ranges for raw-byte reads.
        self.ranges = sorted(
            (m["addr"], m["addr"] + m["size"], m["offset"])
            for m in self.sections.values()
            if not m["nobits"] and m["size"] > 0
        )

    def _load(self) -> bytes:
        self.handle.seek(0)
        return self.handle.read()

    # -- address helpers ---------------------------------------------------
    def read(self, address: int, size: int) -> bytes:
        for start, end, offset in self.ranges:
            if start <= address and address + size <= end:
                begin = offset + (address - start)
                return self.data[begin:begin + size]
        raise ValueError("unmapped read at 0x%x" % address)

    def qword(self, address: int) -> int:
        return struct.unpack("<Q", self.read(address, 8))[0]

    def dword(self, address: int) -> int:
        return struct.unpack("<I", self.read(address, 4))[0]

    def cstring(self, address: int, limit: int = 512) -> bytes:
        out = bytearray()
        for index in range(limit):
            try:
                byte = self.read(address + index, 1)
            except ValueError:
                break
            if byte == b"\x00":
                break
            out += byte
        return bytes(out)

    def in_exec(self, address: int) -> bool:
        for start, end in self.exec_ranges:
            if start <= address < end:
                return True
        return False

    def section_of(self, address: int):
        for meta in self.sections.values():
            if meta["size"] and meta["addr"] <= address < meta["addr"] + meta["size"]:
                return meta
        return None

    # -- relocations -------------------------------------------------------
    def load_relr(self, relocations: dict) -> int:
        """Decode DT_RELR packed relative relocations into the pointer map."""
        meta = self.sections.get(".relr.dyn")
        if not meta or meta["nobits"] or meta["size"] == 0:
            return 0
        entries = meta["size"] // 8
        reserved = 0
        where = 0
        added = 0
        for index in range(entries):
            entry = self.qword(meta["addr"] + index * 8)
            if entry & 1 == 0:
                where = entry
                relocations[where] = self.qword(where)
                added += 1
                reserved = 63
                where += 8
                continue
            bits = entry >> 1
            for bit in range(63):
                if reserved == 0:
                    break
                if bits & (1 << bit):
                    address = where + bit * 8
                    relocations[address] = self.qword(address)
                    added += 1
                reserved -= 1
            where += 63 * 8
        return added

    def scan_raw_pointers(self, relocations: dict) -> int:
        """Augment the pointer map by scanning data sections for absolute words.

        Non-PIE or partly prelinked images store pointer values inline instead
        of in relocation addends; this keeps RTTI recovery working there too.
        """
        added = 0
        for section_name in (".data.rel.ro", ".data", ".got", ".got.plt"):
            meta = self.sections.get(section_name)
            if not meta or meta["nobits"] or meta["size"] < 8:
                continue
            blob = self.data[meta["offset"]:meta["offset"] + meta["size"]]
            base = meta["addr"]
            usable = len(blob) - (len(blob) % 8)
            for index in range(0, usable, 8):
                address = base + index
                if address in relocations:
                    continue
                value = struct.unpack_from("<Q", blob, index)[0]
                if value == 0:
                    continue
                if self.in_exec(value) or self.section_of(value) is not None:
                    relocations[address] = value
                    added += 1
        return added

    def load_relocations(self):
        """Return (pointer_at, target) for every known pointer in data."""
        relocations = {}
        section = self.elf.get_section_by_name(".rela.dyn")
        if section is None:
            log("no .rela.dyn; using raw pointer scanning")
        for relocation in section.iter_relocations():
            offset = int(relocation["r_offset"])
            addend = relocation["r_addend"]
            if addend is None:
                try:
                    addend = self.qword(offset)
                except ValueError:
                    continue
            relocations[offset] = int(addend) & 0xFFFFFFFFFFFFFFFF
        packed = self.load_relr(relocations)
        if packed:
            log("decoded %d packed RELR relocations" % packed)
        if len(relocations) < 4096:
            added = self.scan_raw_pointers(relocations)
            log("augmented pointer map with %d raw pointers" % added)
        return relocations


# --------------------------------------------------------------------------
# Function boundaries from .eh_frame_hdr
# --------------------------------------------------------------------------

def eh_frame_function_starts(binary: Binary):
    """Return the sorted list of FDE initial locations (function entries)."""
    meta = binary.sections.get(".eh_frame_hdr")
    if not meta or meta["nobits"]:
        return []
    header = binary.read(meta["addr"], min(meta["size"], 64))
    version = header[0]
    eh_ptr_enc = header[1]
    count_enc = header[2]
    table_enc = header[3]
    if version != 1 or count_enc != 0x03:
        log("unexpected .eh_frame_hdr encodings v=%d ptr=%#x count=%#x table=%#x"
            % (version, eh_ptr_enc, count_enc, table_enc))
        return []
    count = u32(header, 8)
    if table_enc != 0x3B:  # DW_EH_PE_datarel | DW_EH_PE_sdata4
        log("unexpected .eh_frame_hdr table encoding %#x" % table_enc)
        return []
    entry_size = 8
    if 12 + count * entry_size > meta["size"]:
        log("eh_frame_hdr table larger than section; clamping")
        count = max(0, (meta["size"] - 12) // entry_size)
    table = binary.read(meta["addr"] + 12, count * entry_size)
    starts = []
    for index in range(count):
        value = i32(table, index * entry_size)
        location = (meta["addr"] + value) & 0xFFFFFFFFFFFFFFFF
        if location:
            starts.append(location)
    starts = sorted(set(starts))
    return starts


# --------------------------------------------------------------------------
# RTTI recovery (Itanium C++ ABI)
# --------------------------------------------------------------------------

class TypeInfo:
    __slots__ = ("name_addr", "mangled", "tokens", "typeinfo_addr", "vtables")

    def __init__(self, name_addr, mangled, typeinfo_addr):
        self.name_addr = name_addr
        self.mangled = mangled
        self.tokens = [t for t in IDENT_TOKEN.findall(mangled)]
        self.typeinfo_addr = typeinfo_addr
        self.vtables = []

    @property
    def pretty(self) -> str:
        return demangle_ish(self.mangled)


def demangle_ish(mangled: str) -> str:
    """Small Itanium-ish name prettifier (no full demangler available)."""
    nested = mangled.startswith("N") and mangled.endswith("E")
    body = mangled[1:-1] if nested else mangled
    parts = []
    index = 0
    while index < len(body):
        match = re.match(r"(\d+)", body[index:])
        if match:
            length = int(match.group(1))
            index += len(match.group(1))
            parts.append(body[index:index + length])
            index += length
            continue
        if body[index] == "I":
            # template argument list: keep identifiers, drop the markers
            index += 1
            continue
        token = IDENT_TOKEN.match(body, index)
        if token:
            parts.append(token.group())
            index = token.end()
            continue
        index += 1
    cleaned = [p for p in parts if p and not p.isdigit()]
    return "::".join(cleaned) or mangled


def scan_rtti_names(binary: Binary, limit: int = 400_000):
    """Find length-prefixed, NUL-terminated identifier strings in read-only data."""
    names = {}
    for section_name in (".rodata", ".data.rel.ro", ".data"):
        meta = binary.sections.get(section_name)
        if not meta or meta["nobits"] or meta["size"] == 0:
            continue
        blob = binary.data[meta["offset"]:meta["offset"] + meta["size"]]
        start_addr = meta["addr"]
        position = 0
        size = len(blob)
        while position < size:
            byte = blob[position]
            if byte == 0x4E:  # 'N': possible nested class name
                parsed = parse_nested_name(blob, position)
                if parsed:
                    nested, end = parsed
                    if blob[end] == 0 and 4 <= len(nested) <= 400:
                        names[start_addr + position] = nested
                        if len(names) >= limit:
                            return names
                        position = end + 1
                        continue
            if 0x30 <= byte <= 0x39:  # digit: possible length prefix
                match = MANGLE_PREFIX.match(blob, position)
                if match:
                    length = int(match.group(1))
                    begin = position + len(match.group(1))
                    end = begin + length
                    if 2 <= length <= 200 and end < size and blob[end] == 0:
                        candidate = blob[begin:end]
                        if is_mangled_identifier(candidate):
                            names[start_addr + position] = candidate.decode("ascii")
                            if len(names) >= limit:
                                return names
                            position = end + 1
                            continue
            position += 1
    return names


def parse_nested_name(blob: bytes, position: int):
    """Parse an Itanium nested name (``N6bedrock11BiomeSourceE``) at position."""
    if blob[position:position + 1] != b"N":
        return None
    index = position + 1
    segments = []
    size = len(blob)
    while index < size:
        byte = blob[index]
        if byte == 0x45:  # 'E' - end of nested name
            if not segments:
                return None
            return "N" + "".join(segments) + "E", index + 1
        if 0x30 <= byte <= 0x39:
            match = re.match(rb"(\d{1,3})", blob[index:index + 4])
            if not match:
                return None
            length = int(match.group(1))
            begin = index + len(match.group(1))
            end = begin + length
            if length < 1 or length > 80 or end >= size:
                return None
            segment = blob[begin:end]
            if not all((0x30 <= c <= 0x39) or (0x41 <= c <= 0x5A) or
                       (0x61 <= c <= 0x7A) or c == 0x5F for c in segment):
                return None
            segments.append(match.group(1).decode() + segment.decode())
            index = end
            continue
        # template / substitution markers: I ... E, S_, S0_, etc.
        if byte in b"ISDCVKJ":
            index += 1
            continue
        if chr(byte).isdigit():
            index += 1
            continue
        if byte == 0x5F or 0x30 <= byte <= 0x39 or (0x41 <= byte <= 0x5A) or (0x61 <= byte <= 0x7A):
            index += 1
            continue
        return None
    return None


def is_mangled_identifier(raw: bytes) -> bool:
    if not raw:
        return False
    # Itanium mangled names use letters, digits, '_' and nested markers.
    allowed = b"_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"
    if any(byte not in allowed for byte in raw):
        return False
    letters = sum(1 for byte in raw if chr(byte).isalpha())
    if letters < 2:
        return False
    # Must start with a length prefix when nested, or a plain digit run already
    # consumed by the caller.  Reject pure numbers and hex-looking noise.
    if raw.isdigit():
        return False
    return True


_RTTI_NAME_CACHE = {}


def rtti_names(binary: Binary):
    key = binary.path
    if key not in _RTTI_NAME_CACHE:
        log("scanning RTTI name strings...")
        _RTTI_NAME_CACHE[key] = scan_rtti_names(binary)
    return _RTTI_NAME_CACHE[key]


def recover_rtti(binary: Binary, relocations: dict):
    names = rtti_names(binary)
    log("found %d candidate RTTI name strings" % len(names))

    # name string address -> typeinfo address (typeinfo = {vptr, &name})
    typeinfos = {}
    for pointer_at, target in relocations.items():
        if target in names:
            typeinfo_addr = (pointer_at - 8) & 0xFFFFFFFFFFFFFFFF
            section = binary.section_of(typeinfo_addr)
            if section is None:
                continue
            typeinfos[typeinfo_addr] = names[target]

    log("recovered %d typeinfo structures" % len(typeinfos))
    result = {}
    for typeinfo_addr, mangled in typeinfos.items():
        result[typeinfo_addr] = TypeInfo(
            name_addr=None, mangled=mangled, typeinfo_addr=typeinfo_addr
        )

    # vtable = [offset_to_top][&typeinfo][slot0][slot1]...
    # A zero offset_to_top carries no relocation of its own, so validate the
    # first slot from the relocation table when present and from raw bytes
    # otherwise.
    for pointer_at, target in relocations.items():
        info = result.get(target)
        if info is None:
            continue
        table_base = (pointer_at - 8) & 0xFFFFFFFFFFFFFFFF
        value = relocations.get(table_base)
        if value is None:
            try:
                value = struct.unpack("<q", binary.read(table_base, 8))[0]
            except ValueError:
                value = None
        if value is not None and not (-0x100000 <= value <= 0x100000):
            continue
        if table_base not in info.vtables:
            info.vtables.append(table_base)
    return result


def vtable_slots(binary: Binary, relocations: dict, table_base: int, limit: int = 128):
    """Return [(slot_index, function_address)] for one vtable."""

    slots = []
    address = table_base + 16  # skip offset_to_top and typeinfo pointer
    for index in range(limit):
        target = relocations.get(address)
        if target is None:
            break
        if not binary.in_exec(target):
            break
        slots.append((index, target))
        address += 8
    return slots


# --------------------------------------------------------------------------
# Code scanning
# --------------------------------------------------------------------------

def build_engine(binary: Binary):
    engine = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)
    engine.detail = True
    engine.skipdata = True
    return engine


RIP_REF = re.compile(r"\[rip ([+-]) (0x[0-9a-f]+)\]")


def sweep_text(binary: Binary, interesting: dict, function_starts):
    """Linear sweep .text collecting RIP-relative references to interesting data.

    Uses the lite disassembler and parses the Intel-syntax ``[rip + 0x..]``
    operand text, which keeps the sweep fast enough for very large images.
    """
    engine = build_engine(binary)
    text = binary.sections[".text"]
    start = text["addr"]
    end = start + text["size"]
    chunk = 4 << 20
    references = {}
    owner = {}
    starts = function_starts or [start]

    import bisect

    position = start
    total = 0
    while position < end:
        block_end = min(end, position + chunk)
        try:
            blob = binary.read(position, block_end - position)
        except ValueError:
            break
        next_position = block_end
        for address, size, mnemonic, op_str in engine.disasm_lite(blob, position):
            total += 1
            if address + size > block_end:
                next_position = address
                break
            if not op_str or "rip" not in op_str:
                continue
            match = RIP_REF.search(op_str)
            if not match:
                continue
            try:
                displacement = int(match.group(2), 16)
            except ValueError:
                continue
            if match.group(1) == "-":
                displacement = -displacement
            target = address + size + displacement
            if target not in interesting:
                continue
            bucket = references.get(target)
            if bucket is None:
                bucket = references[target] = []
            if len(bucket) < 4096:
                bucket.append(address)
            index = bisect.bisect_right(starts, address) - 1
            if index >= 0:
                owner[address] = starts[index]
        position = next_position
    return references, owner, total


def build_call_edges(binary: Binary, function_starts, wanted_functions, owners):
    """Find callers/callees for a bounded set of functions."""
    engine = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)
    engine.detail = False
    engine.skipdata = True

    import bisect

    text = binary.sections[".text"]
    start = text["addr"]
    end = start + text["size"]
    chunk = 4 << 20
    edges_out = {}
    edges_in = {}
    position = start
    starts = function_starts
    while position < end:
        block_end = min(end, position + chunk)
        try:
            blob = binary.read(position, block_end - position)
        except ValueError:
            break
        next_position = block_end
        for address, size, mnemonic, op_str in engine.disasm_lite(blob, position):
            if address + size > block_end:
                next_position = address
                break
            if mnemonic != "call":
                continue
            if not op_str.startswith("0x"):
                continue
            try:
                target = int(op_str, 16)
            except ValueError:
                continue
            if not binary.in_exec(target):
                continue
            index = bisect.bisect_right(starts, address) - 1
            caller = starts[index] if index >= 0 else 0
            if caller in wanted_functions:
                edges_out.setdefault(caller, set()).add(target)
            if target in wanted_functions:
                edges_in.setdefault(target, set()).add(caller)
                owners.setdefault(target, set()).add(caller)
        position = next_position
    return edges_out, edges_in


# --------------------------------------------------------------------------
# Ranking
# --------------------------------------------------------------------------

def class_score(tokens) -> int:
    lowered = [token.lower() for token in tokens]
    score = 0
    # The binary keeps a newer world-generation subsystem in its own namespace.
    if lowered and lowered[0] == "br" and "worldgen" in lowered:
        score += 25
    for token in lowered:
        weight = CLASS_TOKEN_WEIGHTS.get(token)
        if weight:
            score += weight
    joined = "".join(lowered)
    for token, weight in CLASS_TOKEN_WEIGHTS.items():
        if token in joined and token not in lowered:
            score += weight // 2
    return score


def string_is_worldgen(text: str) -> bool:
    lowered = text.lower()
    return any(pattern in lowered for pattern in WORLDGEN_STRING_PATTERNS)


def is_core(text: str) -> bool:
    lowered = text.lower()
    return any(pattern in lowered for pattern in CORE_PATTERNS)


# --------------------------------------------------------------------------
# Main
# --------------------------------------------------------------------------

def main(argv=None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("binary")
    parser.add_argument("outdir")
    parser.add_argument("--expected-sha256", default=None)
    parser.add_argument("--max-string-xrefs", type=int, default=40000)
    parser.add_argument("--max-targets", type=int, default=400)
    parser.add_argument("--skip-sweep", action="store_true")
    parser.add_argument(
        "--extra-targets", default=None,
        help="TSV of address<TAB>score<TAB>label to prioritise (round-2 seeds)")
    parser.add_argument(
        "--extra-pattern", action="append", default=[],
        help="additional case-insensitive string pattern (harness self-test)")
    args = parser.parse_args(argv)

    started = time.time()
    os.makedirs(args.outdir, exist_ok=True)

    log("hashing %s" % args.binary)
    digest = hashlib.sha256()
    with open(args.binary, "rb") as handle:
        for block in iter(lambda: handle.read(1 << 22), b""):
            digest.update(block)
    sha256 = digest.hexdigest()

    binary = Binary(args.binary)
    log("loaded ELF: %d bytes, %d sections" % (binary.file_size, len(binary.sections)))

    identity = {
        "binary": os.path.basename(args.binary),
        "sha256": sha256,
        "expected_sha256": args.expected_sha256,
        "expected_digest_matched": (
            args.expected_sha256 is None or args.expected_sha256 == sha256
        ),
        "size": binary.file_size,
        "elf_type": binary.elf["e_type"],
        "machine": binary.elf["e_machine"],
        "build_id": None,
        "comment": None,
        "debuglink": None,
        "needed": [],
        "load_base": None,
        "text_vaddr": None,
    }
    load_bases = [int(segment["p_vaddr"]) for segment in binary.elf.iter_segments()
                  if segment["p_type"] == "PT_LOAD"]
    if load_bases:
        identity["load_base"] = min(load_bases)
    if ".text" in binary.sections:
        identity["text_vaddr"] = binary.sections[".text"]["addr"]
    notes = binary.sections.get(".note.gnu.build-id")
    if notes and not notes["nobits"]:
        raw = binary.read(notes["addr"], notes["size"])
        identity["build_id"] = raw[16:].hex()
    comment = binary.sections.get(".comment")
    if comment and not comment["nobits"]:
        identity["comment"] = binary.read(comment["addr"], comment["size"]).decode(
            "utf-8", "replace").strip("\x00\n ")
    debuglink = binary.sections.get(".gnu_debuglink")
    if debuglink and not debuglink["nobits"]:
        identity["debuglink"] = binary.read(
            debuglink["addr"], debuglink["size"]).split(b"\x00")[0].decode(
                "utf-8", "replace")
    dynamic = binary.elf.get_section_by_name(".dynamic")
    if dynamic is not None:
        for tag in dynamic.iter_tags():
            if tag.entry["d_tag"] == "DT_NEEDED":
                identity["needed"].append(tag.needed)

    with open(os.path.join(args.outdir, "identity.json"), "w") as handle:
        json.dump(identity, handle, indent=2, sort_keys=True)

    with open(os.path.join(args.outdir, "sections.txt"), "w") as handle:
        handle.write("name\taddr\tsize\tflags\n")
        for meta in sorted(binary.sections.values(), key=lambda m: m["addr"]):
            if meta["size"] == 0:
                continue
            handle.write("%s\t0x%x\t0x%x\t%#x\n" % (
                meta["name"], meta["addr"], meta["size"], meta["flags"]))

    # ---- function boundaries ---------------------------------------------
    log("reading .eh_frame_hdr function table...")
    starts = eh_frame_function_starts(binary)
    log("FDE function starts: %d" % len(starts))
    sizes = []
    for index, address in enumerate(starts):
        if index + 1 < len(starts):
            size = starts[index + 1] - address
        else:
            size = 16
        sizes.append(min(max(size, 1), 1 << 20))
    function_size = dict(zip(starts, sizes))
    with open(os.path.join(args.outdir, "functions.txt"), "w") as handle:
        handle.write("fde_function_starts\t%d\n" % len(starts))
        handle.write("text_bytes\t0x%x\n" % binary.sections[".text"]["size"])
        handle.write("mean_bytes_per_function\t%.1f\n" % (
            binary.sections[".text"]["size"] / max(1, len(starts))))
        handle.write("first\t0x%x\nlast\t0x%x\n" % (starts[0], starts[-1]))

    # ---- relocations + RTTI ---------------------------------------------
    log("reading .rela.dyn relocations...")
    relocations = binary.load_relocations()
    log("%d relocations" % len(relocations))
    code_pointers = {at: target for at, target in relocations.items()
                     if binary.in_exec(target)}

    typeinfos = recover_rtti(binary, relocations)
    log("recovered %d C++ classes with RTTI" % len(typeinfos))

    class_rows = []
    worldgen_slots = []
    for info in typeinfos.values():
        score = class_score(info.tokens)
        pretty = info.pretty
        slots_total = 0
        for table_base in info.vtables:
            slots = vtable_slots(binary, relocations, table_base)
            slots_total += len(slots)
            if score >= 8:
                for index, target in slots:
                    worldgen_slots.append((pretty, info.mangled, table_base, index, target))
        class_rows.append((score, pretty, info.mangled, info.typeinfo_addr,
                           len(info.vtables), slots_total))

    class_rows.sort(reverse=True)
    with open(os.path.join(args.outdir, "classes.tsv"), "w") as handle:
        handle.write("score\tclass\tmangled\ttypeinfo\tvtables\tslots\n")
        for score, pretty, mangled, typeinfo_addr, vtables, slots_total in class_rows:
            handle.write("%d\t%s\t%s\t0x%x\t%d\t%d\n" % (
                score, pretty, mangled, typeinfo_addr, vtables, slots_total))

    with open(os.path.join(args.outdir, "interesting-classes.tsv"), "w") as handle:
        handle.write("score\tclass\tmangled\ttypeinfo\tvtables\tslots\n")
        for row in class_rows:
            if row[0] >= 8:
                handle.write("%d\t%s\t%s\t0x%x\t%d\t%d\n" % row)

    worldgen_slots.sort(key=lambda row: (row[0], row[3]))
    with open(os.path.join(args.outdir, "worldgen-vtables.tsv"), "w") as handle:
        handle.write("class\tmangled\tvtable\tslot\tfunction\tsize\n")
        for pretty, mangled, table_base, index, target in worldgen_slots:
            handle.write("%s\t%s\t0x%x\t%d\t0x%x\t%d\n" % (
                pretty, mangled, table_base, index, target,
                function_size.get(target, 0)))

    # ---- interesting strings --------------------------------------------
    log("collecting world-generation strings...")
    interesting_strings = {}
    patterns = WORLDGEN_STRING_PATTERNS + [p.lower() for p in args.extra_pattern]
    for section_name in (".rodata", ".data.rel.ro", ".data"):
        meta = binary.sections.get(section_name)
        if not meta or meta["nobits"] or meta["size"] == 0:
            continue
        blob = binary.data[meta["offset"]:meta["offset"] + meta["size"]]
        base = meta["addr"]
        for match in re.finditer(rb"[\x20-\x7e]{6,400}", blob):
            text = match.group().decode("ascii", "replace")
            lowered = text.lower()
            if any(pattern in lowered for pattern in patterns):
                interesting_strings[base + match.start()] = text

    for name_addr, mangled in rtti_names(binary).items():
        if class_score(IDENT_TOKEN.findall(mangled)) >= 8:
            interesting_strings.setdefault(name_addr, mangled)

    log("interesting strings: %d" % len(interesting_strings))

    # ---- xref sweep ------------------------------------------------------
    references = {}
    owner = {}
    instructions = 0
    if not args.skip_sweep:
        log("linear-sweeping .text with Capstone (this is the slow part)...")
        references, owner, instructions = sweep_text(binary, interesting_strings, starts)
        log("swept %d instructions, %d referenced strings" % (
            instructions, len(references)))

    with open(os.path.join(args.outdir, "string-xrefs.tsv"), "w") as handle:
        handle.write("string\tstring_addr\treferenced_by\n")
        rows = sorted(references.items(), key=lambda item: -len(item[1]))
        for index, (target, addrs) in enumerate(rows):
            if index >= args.max_string_xrefs:
                break
            owners = sorted({owner.get(a, 0) for a in addrs} - {0})
            handle.write("%s\t0x%x\t%s\n" % (
                interesting_strings[target], target,
                ",".join("0x%x" % a for a in owners[:32])))

    # ---- candidate ranking ----------------------------------------------
    log("ranking candidate functions...")
    scores = {}
    reasons = {}

    def bump(function, amount, reason):
        if not function:
            return
        scores[function] = scores.get(function, 0) + amount
        reasons.setdefault(function, set()).add(reason)

    core_slots = 0
    for pretty, mangled, table_base, index, target in worldgen_slots:
        weight = class_score(IDENT_TOKEN.findall(mangled))
        if is_core(pretty):
            core_slots += 1
            bump(target, 120 + weight // 2, "core-vtable:%s#%d" % (pretty, index))
        else:
            bump(target, 12 + weight // 4, "vtable:%s#%d" % (pretty, index))
    log("core world-gen vtable slots: %d" % core_slots)

    for target, addrs in references.items():
        text = interesting_strings[target]
        weight = 60 if is_core(text) else 20
        for address in addrs:
            function = owner.get(address)
            if function:
                bump(function, weight, "string:%s" % text[:60])

    seeds = {function for function, score in scores.items() if score >= 100}
    log("seeds: %d" % len(seeds))

    edges_out, edges_in = ({}, {})
    if seeds and not args.skip_sweep:
        log("building call edges around seeds...")
        edges_out, edges_in = build_call_edges(binary, starts, seeds, {})
        for function, callees in edges_out.items():
            for callee in callees:
                # Do not let huge generic helpers (allocators, logging, ...)
                # crowd out the focused world-generation functions.
                if function_size.get(callee, 0) > 60000:
                    continue
                bump(callee, 6, "callee-of:0x%x" % function)
        for function, callers in edges_in.items():
            for caller in callers:
                if function_size.get(caller, 0) > 120000:
                    continue
                bump(caller, 4, "caller-of-seed")

    with open(os.path.join(args.outdir, "callgraph-worldgen.tsv"), "w") as handle:
        handle.write("function\tcallees\tcallers\n")
        for function in sorted(edges_out.keys() | edges_in.keys()):
            handle.write("0x%x\t%s\t%s\n" % (
                function,
                ",".join("0x%x" % c for c in sorted(edges_out.get(function, ()))),
                ",".join("0x%x" % c for c in sorted(edges_in.get(function, ()))),
            ))

    extra_count = 0
    if args.extra_targets and os.path.isfile(args.extra_targets):
        with open(args.extra_targets) as handle:
            for line in handle:
                fields = line.rstrip("\n").split("\t")
                if len(fields) < 2 or fields[0].startswith("address"):
                    continue
                try:
                    function = int(fields[0], 0)
                    score = int(fields[1])
                except ValueError:
                    continue
                label = fields[2] if len(fields) > 2 else "round-2-seed"
                bump(function, score, label)
                extra_count += 1
        log("merged %d externally supplied targets" % extra_count)

    ranked = sorted(scores.items(), key=lambda item: -item[1])
    with open(os.path.join(args.outdir, "candidates.tsv"), "w") as handle:
        handle.write("rank\tscore\tfunction\tsize\treasons\n")
        for rank, (function, score) in enumerate(ranked, 1):
            handle.write("%d\t%d\t0x%x\t%d\t%s\n" % (
                rank, score, function, function_size.get(function, 0),
                ";".join(sorted(reasons.get(function, ()))[:8])))

    targets = [row for row in ranked if row[1] >= 8][: args.max_targets]
    with open(os.path.join(args.outdir, "targets.tsv"), "w") as handle:
        handle.write("address\tsize\tscore\tlabel\n")
        for function, score in targets:
            label = sorted(reasons.get(function, ("unknown",)))[0]
            handle.write("0x%x\t%d\t%d\t%s\n" % (
                function, function_size.get(function, 0), score, label))

    # ---- summary ---------------------------------------------------------
    core_classes = [row for row in class_rows if is_core(row[1]) or row[0] >= 40]
    with open(os.path.join(args.outdir, "summary.md"), "w") as handle:
        handle.write("# Static triage summary\n\n")
        handle.write("Generated: `%s`\n\n" % time.strftime("%Y-%m-%dT%H:%M:%SZ", time.gmtime()))
        handle.write("## Identity\n\n")
        handle.write("- SHA-256: `%s` (expected match: %s)\n" % (
            sha256, identity["expected_digest_matched"]))
        handle.write("- Size: %d bytes\n" % binary.file_size)
        handle.write("- Build ID: `%s`\n" % identity["build_id"])
        handle.write("- Compiler: `%s`\n" % identity["comment"])
        handle.write("- Debug link: `%s`\n\n" % identity["debuglink"])
        handle.write("## Structure\n\n")
        handle.write("- FDE function starts: %d\n" % len(starts))
        handle.write("- .text bytes: 0x%x\n" % binary.sections[".text"]["size"])
        handle.write("- Relocations: %d\n" % len(relocations))
        handle.write("- Code pointers in data: %d\n" % len(code_pointers))
        handle.write("- C++ classes via RTTI: %d\n" % len(typeinfos))
        handle.write("- World-gen vtable slots: %d\n" % len(worldgen_slots))
        handle.write("- Interesting strings: %d\n" % len(interesting_strings))
        handle.write("- Instructions swept: %d\n" % instructions)
        handle.write("- Strings with code refs: %d\n\n" % len(references))
        handle.write("## Top world-generation classes\n\n")
        handle.write("| score | class | vtables | slots |\n|---|---|---|---|\n")
        for score, pretty, mangled, typeinfo_addr, vtables, slots_total in core_classes[:80]:
            handle.write("| %d | `%s` | %d | %d |\n" % (
                score, pretty, vtables, slots_total))
        handle.write("\n## Top candidate functions\n\n")
        handle.write("| rank | score | address | size | reasons |\n|---|---|---|---|---|\n")
        for rank, (function, score) in enumerate(ranked[:60], 1):
            handle.write("| %d | %d | `0x%x` | %d | %s |\n" % (
                rank, score, function, function_size.get(function, 0),
                ";".join(sorted(reasons.get(function, ()))[:3])))
        handle.write("\nElapsed: %.1fs\n" % (time.time() - started))

    log("wrote reports to %s in %.1fs" % (args.outdir, time.time() - started))
    return 0


if __name__ == "__main__":
    sys.exit(main())
