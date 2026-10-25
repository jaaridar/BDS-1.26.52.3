#!/usr/bin/env bash
# Find the stronghold ring code by its only unique constant, then read the
# numbers it uses.
#
# The decompiler's function boundaries and its `_DAT_xxxxxxx` names do not line
# up with this ELF (the named addresses hold strings, and nothing in the
# published function range references them), so the code is located here by
# content instead: `0x5d534e7` is the salt in the stronghold seed mix and appears
# nowhere else, and the ring formula multiplies by 200 and adds 50.
#
#   bash tools/binary-analysis/dump-constants.sh bedrock_server out.txt
set -euo pipefail

BINARY=${1:-bedrock_server}
OUT=${2:-/dev/stdout}
WORK=$(mktemp -d)
trap 'rm -rf "$WORK"' EXIT

objdump -d --no-show-raw-insn "$BINARY" > "$WORK/text.asm" 2>/dev/null || true
echo "disassembled $(wc -l < "$WORK/text.asm") lines" >&2

{
  echo "# where the stronghold salt 0x5d534e7 appears"
  grep -n "0x5d534e7" "$WORK/text.asm" | head -40 || true
  echo

  echo "# every sighting of 200 (0xc8) as an immediate, with context: the ring cell size"
  grep -nE 'imul +\$0xc8|\$0xc8,' "$WORK/text.asm" | head -40 || true
  echo

  # Windows around each salt sighting: the seed mix and the draws live there.
  for line in $(grep -n "0x5d534e7" "$WORK/text.asm" | cut -d: -f1 | head -6); do
    start=$((line - 60))
    [ "$start" -lt 1 ] && start=1
    end=$((line + 120))
    echo "===== window around line $line"
    sed -n "${start},${end}p" "$WORK/text.asm"
    echo
  done

  echo "# references to the float sine table the ring walk indexes (0xf778a04)"
  grep -n "f778a04" "$WORK/text.asm" | head -20 || true
  echo

  for line in $(grep -n "f778a04" "$WORK/text.asm" | cut -d: -f1 | head -3); do
    start=$((line - 120))
    [ "$start" -lt 1 ] && start=1
    echo "===== sine-table window around line $line"
    sed -n "${start},$((line + 220))p" "$WORK/text.asm"
    echo
  done

  echo "# callers of the 200/100 placement predicate (identifies which set owns it)"
  grep -nE "call +4e9f[0-9a-f]{3}" "$WORK/text.asm" | head -20 || true
  echo

  echo "# full disassembly of the stronghold placement/relocation routine (4e9efc0..4ea0200)"
  python3 - "$WORK/text.asm" <<'PYADDR'
import re, sys
lo, hi = 0x4e9ef00, 0x4ea0200
pat = re.compile(r'^\s*([0-9a-f]+):')
for line in open(sys.argv[1], errors='replace'):
    m = pat.match(line)
    if not m:
        continue
    v = int(m.group(1), 16)
    if lo <= v <= hi:
        sys.stdout.write(line)
PYADDR
  echo

  echo "# callers of the relocation routine (who asks for strongholds)"
  grep -nE "call +(4e9efc0|4e9f[a-f][0-9a-f]{2})" "$WORK/text.asm" | head -30 || true
  echo

  echo "# who places strongholds: callers of the feature and of the start constructor"
  grep -nE "call +(4ea01a0|4e9efc0|4e9f720|4fa3cb0|4fa4790|4fa4b20)" "$WORK/text.asm" | head -40 || true
  echo

  for line in $(grep -nE "call +(4ea01a0|4fa3cb0)" "$WORK/text.asm" | cut -d: -f1 | head -2); do
    start=$((line - 150))
    [ "$start" -lt 1 ] && start=1
    echo "===== caller window around line $line"
    sed -n "${start},$((line + 120))p" "$WORK/text.asm"
    echo
  done

  echo "# village-side code that mentions a stronghold constant"
  grep -n "0x5d534e7\|0x5d534e8" "$WORK/text.asm" | head -20 || true
  echo

  echo "# .rodata looks like a trig table at its start; print the first 256 floats"
  python3 - "$BINARY" <<'PY'
import struct, subprocess, sys
binary = sys.argv[1]
ph = subprocess.run(['readelf', '--wide', '--program-headers', binary],
                    capture_output=True, text=True).stdout
data = open(binary, 'rb').read()
sections = subprocess.run(['readelf', '--wide', '--sections', binary],
                          capture_output=True, text=True).stdout
for line in sections.splitlines():
    if '.rodata' in line and 'PROGBITS' in line:
        parts = line.split()
        vaddr = int(parts[4], 16)
        off = int(parts[5], 16)
        size = int(parts[6], 16)
        floats = struct.unpack('<64f', data[off:off + 256])
        print('rodata vaddr 0x%x offset 0x%x size 0x%x' % (vaddr, off, size))
        for i in range(0, 64, 4):
            print('  +0x%03x' % (i * 4), ' '.join('%.9g' % f for f in floats[i:i + 4]))
        break
PY
} > "$OUT" 2>&1
