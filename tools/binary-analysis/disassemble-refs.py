#!/usr/bin/env python3
"""Disassemble the code around every site that references a structure name.

The decompiler is not the fastest way to answer "what numbers does this code
put in the record?" -- the answer is in the instruction stream, and `objdump`
reads that in milliseconds. This walks the reference table produced by
scan-binary.py, groups the sites into spans, and disassembles each span with
enough padding to cover the enclosing function's prologue.

Output is one text file per span plus a summary. Each file starts with the
strings whose references fall inside it, so a reader does not have to hold the
reference table in their head while reading assembly.

    python3 tools/binary-analysis/disassemble-refs.py \
        --scan research/proprietary/bds-1.26.52.3/structures/scan-refs/scan.json \
        --binary bedrock_server \
        --out research/proprietary/bds-1.26.52.3/structures/disasm-refs
"""

import argparse
import json
import os
import subprocess
import sys

DEFAULT_GAP = 0x4000
DEFAULT_PAD = 0x800
DEFAULT_MAX_SPAN = 0x40000


def parse_args(argv):
    args = argparse.ArgumentParser(description=__doc__)
    args.add_argument('--scan', required=True, help='scan-binary.py --ranges output')
    args.add_argument('--binary', required=True)
    args.add_argument('--out', required=True)
    args.add_argument('--gap', type=lambda s: int(s, 0), default=DEFAULT_GAP,
                      help='merge sites closer than this (default 0x4000)')
    args.add_argument('--pad', type=lambda s: int(s, 0), default=DEFAULT_PAD,
                      help='bytes of context on each side (default 0x800)')
    args.add_argument('--max-span', type=lambda s: int(s, 0), default=DEFAULT_MAX_SPAN)
    args.add_argument('--objdump', default='objdump')
    return args.parse_args(argv)


def load_sites(scan):
    """(site, [strings that reference it]) for every executable reference."""
    table = {}
    for target, refs in scan['refs'].items():
        for ref in refs:
            if ref.get('section') not in ('.text', '.init', '.plt'):
                continue
            table.setdefault(ref['site'], set()).add(target)
    return table


def cluster(sites, gap):
    out = []
    for site in sorted(sites):
        if out and site - out[-1][-1] <= gap:
            out[-1].append(site)
        else:
            out.append([site])
    return out


def main(argv):
    args = parse_args(argv)
    with open(args.scan, 'r', encoding='utf-8') as handle:
        scan = json.load(handle)
    table = load_sites(scan)
    if not table:
        print('no executable references in the scan', file=sys.stderr)
        return 1
    os.makedirs(args.out, exist_ok=True)

    # The strings themselves, so a dump can say what it is looking at.
    names = {}
    try:
        binary = open(args.binary, 'rb')
    except OSError as error:
        print(f'cannot read {args.binary}: {error}', file=sys.stderr)
        return 1

    def read_cstring(address, limit=120):
        binary.seek(address)
        raw = binary.read(limit)
        end = raw.find(b'\x00')
        if end >= 0:
            raw = raw[:end]
        return raw.decode('utf-8', 'replace')

    summary = ['# Disassembly around structure-name references', '',
               f'sites: {len(table)}', '']
    written = 0
    for group in cluster(table, args.gap):
        start = max(0, group[0] - args.pad)
        stop = min(group[-1] + args.pad, group[0] + args.max_span)
        if stop <= start:
            continue
        try:
            dump = subprocess.run(
                [args.objdump, '-d', '--no-show-raw-insn',
                 f'--start-address=0x{start:x}', f'--stop-address=0x{stop:x}',
                 args.binary],
                check=True, capture_output=True, text=True).stdout
        except (OSError, subprocess.CalledProcessError) as error:
            print(f'objdump failed for 0x{start:x}: {error}', file=sys.stderr)
            continue
        lines = [f'# span 0x{start:x}..0x{stop:x}  sites {len(group)}', '']
        for site in group:
            for target in sorted(table[site]):
                address = int(target, 16)
                label = read_cstring(address) if address < os.path.getsize(args.binary) else ''
                lines.append(f'#   0x{site:x} references 0x{address:x} {label!r}')
        lines.append('')
        body = '\n'.join(lines) + dump
        path = os.path.join(args.out, f'disasm-{start:x}.txt')
        with open(path, 'w', encoding='utf-8') as handle:
            handle.write(body)
        written += 1
        summary.append(f'- `disasm-{start:x}.txt` 0x{start:x}..0x{stop:x} '
                       f'({stop - start} bytes, {len(group)} sites)')
        print(f'wrote {path} ({stop - start} bytes, {len(group)} sites)')

    with open(os.path.join(args.out, 'summary.md'), 'w', encoding='utf-8') as handle:
        handle.write('\n'.join(summary) + '\n')
    print(f'spans written: {written}')
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
