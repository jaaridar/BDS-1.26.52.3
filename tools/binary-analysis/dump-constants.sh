#!/usr/bin/env bash
# Read the constants a decompiled function references, straight from the ELF.
#
# The decompiler prints `_DAT_014e3240` and expects the reader to know what is
# there. This does that mechanically, on the runner where the binary exists:
# section headers first (so a virtual address can be mapped to a file offset
# without assuming they are equal), then the bytes at every address the
# stronghold analysis names, decoded as int32 and float.
#
#   bash tools/binary-analysis/dump-constants.sh bedrock_server out.txt
set -euo pipefail

BINARY=${1:-bedrock_server}
OUT=${2:-/dev/stdout}
{
  echo "# sections: name, vaddr, file offset, size"
  readelf --wide --sections "$BINARY" |
    awk '$1 ~ /^\[ *[0-9]+\]$/ || $1 ~ /^\[[0-9]+\]$/ {printf "%-24s %s %s %s\n", $2, $4, $5, $6}'
  echo

  echo "# addresses the stronghold / placement analysis names"
  for addr in \
    0x14e3240 0x14e3c80 0x14e9190 0x14e9194 0x14e4220 0x14e8740 \
    0x14e1770 0x14e1774 0x14e1778 0x14e177c 0x14e0d30 0x14e3c88 \
    0x14e9198 0x14e919c 0x1198630 0x119872c 0x1198534 0x1198348 \
    0x1198bd8 0x1198b38 0x14f0898 0xf778a04
  do
    echo "== $addr"
    python3 - "$BINARY" "$addr" <<'PY'
import struct, sys
binary, addr = sys.argv[1], int(sys.argv[2], 0)
data = open(binary, 'rb').read()
# Map a virtual address through the ELF program headers: the only correct way,
# and the reason this script exists (vaddr == file offset is an assumption, not
# a fact).
import subprocess, re
ph = subprocess.run(['readelf', '--wide', '--program-headers', binary],
                    capture_output=True, text=True).stdout
offset = None
for line in ph.splitlines():
    parts = line.split()
    if len(parts) >= 6 and parts[0] == 'LOAD':
        p_offset, p_vaddr, p_filesz = int(parts[1], 16), int(parts[2], 16), int(parts[4], 16)
        if p_vaddr <= addr < p_vaddr + p_filesz:
            offset = p_offset + (addr - p_vaddr)
            break
if offset is None:
    print('  not inside a LOAD segment')
    sys.exit(0)
raw = data[offset:offset + 16]
print('  file offset 0x%x' % offset)
print('  hex', raw.hex())
for i in range(0, 16, 4):
    chunk = raw[i:i + 4]
    if len(chunk) < 4:
        break
    as_int = struct.unpack('<i', chunk)[0]
    as_uint = struct.unpack('<I', chunk)[0]
    as_float = struct.unpack('<f', chunk)[0]
    print('  +%d  int32 %-12d uint32 0x%-10x float %.9g' % (i, as_int, as_uint, as_float))
PY
    echo
  done

  echo "# disassembly of the stronghold functions"
  objdump --no-show-raw-insn -d --start-address=0x4f9efc0 --stop-address=0x4f9f2d0 "$BINARY" || true
  echo
  objdump --no-show-raw-insn -d --start-address=0x4f9f720 --stop-address=0x4fa01a0 "$BINARY" || true
  echo
  objdump --no-show-raw-insn -d --start-address=0x4fa01a0 --stop-address=0x4fa0d00 "$BINARY" || true
} > "$OUT" 2>&1
