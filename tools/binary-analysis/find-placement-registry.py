#!/usr/bin/env python3
"""Recover the structure placement registry from the static sections.

The server builds one placement record per structure set, and every set knows its
identifier, so the identifier's string pointer has to sit somewhere in reach of the
record's numbers. .data.rel.ro is where the static tables live and .rodata is where
the names live, so both are already recoverable without running anything.

The record layout was measured from a live dump (salt at +0, `spacing << 16 |
separation` at +4, spread type at +8), so a table entry can be read straight out of
the file if the surrounding words hold a pointer to a namespaced name.

    python3 tools/binary-analysis/find-placement-registry.py
    python3 tools/binary-analysis/find-placement-registry.py --json out.json
"""

from __future__ import annotations

import argparse
import json
import os
import re
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
SECTIONS = os.path.join(HERE, '..', '..', 'research', 'proprietary',
                        'bds-1.26.52.3', 'binary-sections')

NAME = re.compile(rb'^minecraft:[a-z0-9_]+$')

# Spacing and separation live in one dword. The bounds are wide enough for every
# candidate band we have measured and narrow enough to keep random integers out.
MIN_SPACING, MAX_SPACING = 2, 512


def load(name: str) -> tuple[int, bytes]:
    manifest = json.load(open(os.path.join(SECTIONS, 'manifest.json')))
    for section in manifest['sections']:
        if section['file'] == name:
            return section['addr'], open(os.path.join(SECTIONS, name), 'rb').read()
    raise SystemExit(f'{name} is not in the manifest')


def strings(addr: int, blob: bytes):
    out = {}
    for match in re.finditer(rb'minecraft:[a-z0-9_]+', blob):
        text = match.group(0)
        if NAME.match(text):
            out.setdefault(text.decode(), []).append(addr + match.start())
    return out


def decode_dword(value: int):
    """(spacing, separation) if the dword is a plausible packed pair."""
    spacing, separation = value >> 16, value & 0xFFFF
    if not MIN_SPACING <= spacing <= MAX_SPACING:
        return None
    if separation >= spacing:
        return None
    return spacing, separation


def scan(rodata_addr, rodata, rela_addr, rela):
    names = strings(rodata_addr, rodata)
    wanted = {}
    for name, addrs in names.items():
        for address in addrs:
            wanted[address] = name
    print(f'{len(names)} namespaced strings in .rodata, {len(wanted)} addresses')

    findings = []
    for offset in range(0, len(rela) - 8, 8):
        pointer = struct.unpack_from('<Q', rela, offset)[0]
        name = wanted.get(pointer)
        if not name:
            continue
        address = rela_addr + offset
        for base in range(offset - 64, offset + 24, 4):
            if base < 0 or base + 12 > len(rela):
                continue
            salt, packed, kind = struct.unpack_from('<Iii', rela, base)
            pair = None if kind not in (0, 1) else decode_dword(packed & 0xFFFFFFFF)
            if not pair:
                continue
            findings.append({
                'name': name,
                'salt': salt if salt < 2 ** 31 else salt - 2 ** 32,
                'spacing': pair[0],
                'separation': pair[1],
                'spread': ['linear', 'triangular'][kind],
                'record': address - (0xFFFFFFFF & base) + base,  # base in file terms
                'name_pointer_at': address,
                'delta': base + 12 - offset,
            })
    return findings


def main(argv):
    parser = argparse.ArgumentParser()
    parser.add_argument('--json', default=None)
    args = parser.parse_args(argv)

    rodata_addr, rodata = load('rodata.bin')
    rela_addr, rela = load('data-rel-ro.bin')
    findings = scan(rodata_addr, rodata, rela_addr, rela)

    seen = set()
    for row in findings:
        key = (row['name'], row['salt'], row['spacing'], row['separation'], row['spread'])
        if key in seen:
            continue
        seen.add(key)
        print(f"  {row['name']:<34} salt {row['salt']:>11} "
              f"{row['spacing']:>4}/{row['separation']:<4} {row['spread']:<10} "
              f"delta {row['delta']:+5}")
    if not findings:
        print('no packed pair near a namespaced name pointer')
    if args.json:
        json.dump(findings, open(args.json, 'w'), indent=1)
        print(f'wrote {args.json}')
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
