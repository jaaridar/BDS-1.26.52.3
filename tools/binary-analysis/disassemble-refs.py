"""Disassemble the code around every site that references a structure name.

The decompiler is not the fastest way to answer "what numbers does this code put
in the record?" -- the answer is in the instruction stream. This reads the raw
slices published by extract-sections.py (no binary, no objdump: Capstone is a
pure Python wheel, so the same code runs anywhere) and:

  * prints a window of instructions around every reference site, with
    RIP-relative targets resolved to the string they point at;
  * optionally lists every instruction that loads a constant in a given range,
    which is how a compiled-in salt is found without guessing at one.

    pip install capstone
    python3 tools/binary-analysis/extract-sections.py --binary bedrock_server \\
        --out research/proprietary/bds-1.26.52.3/binary-sections \\
        --ranges 0x4e20000:0x5060000
    python3 tools/binary-analysis/disassemble-refs.py \\
        --manifest research/proprietary/bds-1.26.52.3/binary-sections/manifest.json \\
        --scan research/proprietary/bds-1.26.52.3/structures/scan-refs/scan.json \\
        --out research/proprietary/bds-1.26.52.3/structures/disasm-refs
"""

import argparse
import json
import os
import re
import sys

try:
    import capstone
except ImportError:  # pragma: no cover - the message is the point
    sys.exit('capstone is required: pip install capstone')


class Slices:
    """Address lookup over the published section files."""

    def __init__(self, manifest_path):
        with open(manifest_path, 'r', encoding='utf-8') as handle:
            manifest = json.load(handle)
        root = os.path.dirname(os.path.abspath(manifest_path))
        self.parts = []
        for section in manifest['sections']:
            size = section['size']
            self.parts.append({
                'name': section['name'],
                'base': section['addr'],
                'size': size,
                'path': os.path.join(root, section['file']),
                'executable': bool(section.get('executable')),
            })
        self.parts.sort(key=lambda part: part['base'])
        self.cache = {}

    def part_for(self, address):
        for part in self.parts:
            if part['base'] <= address < part['base'] + part['size']:
                return part
        return None

    def data(self, part):
        if part['path'] not in self.cache:
            with open(part['path'], 'rb') as handle:
                self.cache[part['path']] = handle.read()
        return self.cache[part['path']]

    def read(self, address, length):
        part = self.part_for(address)
        if part is None:
            return None
        offset = address - part['base']
        if offset + length > part['size']:
            return None
        return self.data(part)[offset:offset + length]

    def cstring(self, address, limit=160):
        raw = self.read(address, limit)
        if raw is None:
            return None
        end = raw.find(b'\x00')
        if end >= 0:
            raw = raw[:end]
        try:
            text = raw.decode('utf-8')
        except UnicodeDecodeError:
            return None
        if not text or any(ord(ch) < 0x20 and ch != '\t' for ch in text):
            return None
        return text

    def executable_parts(self):
        return [part for part in self.parts if part['executable']]


def sweep(slices, part, engine):
    """Linear sweep of one executable slice -> list of (address, text, insn)."""
    blob = slices.data(part)
    out = []
    for insn in engine.disasm(blob, part['base']):
        out.append(insn)
    return out


NUMBER = re.compile(r'0x[0-9a-f]+')


def annotate(slices, insn):
    """Resolve a RIP-relative operand to the string it addresses."""
    notes = []
    op = insn.op_str
    if 'rip' in op:
        for token in NUMBER.findall(op):
            displacement = int(token, 16)
            target = insn.address + insn.size + displacement
            label = slices.cstring(target)
            if label:
                notes.append(f'{target:#x} {label!r}')
    return notes


def fmt(slices, insn, mark=False):
    notes = annotate(slices, insn)
    prefix = '>>' if mark else '  '
    line = f'{prefix} {insn.address:#010x}  {insn.mnemonic:<8} {insn.op_str}'
    if notes:
        line += '   ; ' + ' | '.join(notes)
    return line


def parse_args(argv):
    args = argparse.ArgumentParser(description=__doc__)
    args.add_argument('--manifest', required=True)
    args.add_argument('--scan', default=None,
                      help='scan-binary.py --ranges output (reference sites)')
    args.add_argument('--out', required=True)
    args.add_argument('--window', type=int, default=40, help='instructions either side')
    args.add_argument('--group', type=lambda s: int(s, 0), default=0x2000,
                      help='sites closer than this share one file')
    args.add_argument('--immediates', default=None,
                      help='also list instructions with an immediate in LO:HI, e.g. 1000000:2147483648')
    args.add_argument('--immediate-limit', type=int, default=400)
    return args.parse_args(argv)


def main(argv):
    args = parse_args(argv)
    slices = Slices(args.manifest)
    engine = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)
    engine.detail = False

    listing = {}
    for part in slices.executable_parts():
        insns = sweep(slices, part, engine)
        print(f'swept {part["name"]} {part["base"]:#x}..{part["base"] + part["size"]:#x}: '
              f'{len(insns)} instructions')
        for index, insn in enumerate(insns):
            listing[insn.address] = index
        part['insns'] = insns

    os.makedirs(args.out, exist_ok=True)
    log = [f'# manifest {args.manifest}', f'# executable parts {len(slices.executable_parts())}']

    def part_with(address):
        for part in slices.executable_parts():
            if part['base'] <= address < part['base'] + part['size']:
                return part
        return None

    if args.scan:
        with open(args.scan, 'r', encoding='utf-8') as handle:
            scan = json.load(handle)
        sites = {}
        for target, refs in scan['refs'].items():
            for ref in refs:
                if ref.get('section') == '.text':
                    sites.setdefault(ref['site'], set()).add(target)
        ordered = sorted(sites)
        log.append(f'# reference sites {len(ordered)}')
        groups = []
        for site in ordered:
            if groups and site - groups[-1][-1] <= args.group:
                groups[-1].append(site)
            else:
                groups.append([site])
        summary = ['# Disassembly around structure-name references', '']
        written = 0
        for group in groups:
            part = part_with(group[0])
            if part is None:
                log.append(f'# site {group[0]:#x} is outside the published slices')
                continue
            insns = part['insns']
            first = listing.get(group[0])
            if first is None:
                # The site is not an instruction boundary in a linear sweep; use
                # the nearest instruction that starts before it.
                first = 0
                for index, insn in enumerate(insns):
                    if insn.address <= group[0]:
                        first = index
                    else:
                        break
            start = max(0, first - args.window)
            stop = min(len(insns), first + args.window)
            lines = [f'# {part["name"]} sites {len(group)} window {insns[start].address:#x}..'
                     f'{insns[stop - 1].address:#x}', '']
            for site in group:
                for target in sorted(sites[site]):
                    address = int(target, 16)
                    label = slices.cstring(address)
                    lines.append(f'#   {site:#x} references {address:#x} {label!r}')
            lines.append('')
            lines.extend(fmt(slices, insn) for insn in insns[start:stop])
            name = f'disasm-{insns[start].address:x}.txt'
            with open(os.path.join(args.out, name), 'w', encoding='utf-8') as handle:
                handle.write('\n'.join(lines) + '\n')
            summary.append(f'- `{name}` {insns[start].address:#x}..{insns[stop - 1].address:#x} '
                           f'({len(group)} sites)')
            written += 1
        with open(os.path.join(args.out, 'summary.md'), 'w', encoding='utf-8') as handle:
            handle.write('\n'.join(summary + [''] + log) + '\n')
        print(f'windows written: {written}')

    if args.immediates:
        low, high = (int(value, 0) for value in args.immediates.split(':'))
        found = []
        for part in slices.executable_parts():
            for insn in part['insns']:
                tokens = NUMBER.findall(insn.op_str)
                if 'rip' in insn.op_str:
                    # The displacement of a RIP-relative operand is not a
                    # constant in the sense meant here.
                    tokens = tokens[1:]
                if any(low <= int(token, 16) < high for token in tokens):
                    found.append(fmt(slices, insn))
                if len(found) >= args.immediate_limit:
                    break
            if len(found) >= args.immediate_limit:
                break
        with open(os.path.join(args.out, 'immediates.txt'), 'w', encoding='utf-8') as handle:
            handle.write('\n'.join(found) + '\n')
        print(f'immediate hits: {len(found)}')
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
