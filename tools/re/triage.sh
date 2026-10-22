#!/usr/bin/env bash
# Generic binary triage with binutils (file/readelf/nm/objdump/strings
# counts). Used in this repo ONLY to prove the pipeline on our own sample:
#   gcc -O2 -o /tmp/noise_sample tools/re/sample/noise_sample.c -lm
#   tools/re/triage.sh /tmp/noise_sample /tmp/triage-out
#
# Output always goes to a directory you choose OUTSIDE version control
# (or under the gitignored re-output/). Never point this at a proprietary
# binary and commit the result - see tools/re/README.md.
set -euo pipefail

TARGET="${1:-}"
OUT_DIR="${2:-}"

[ -n "$TARGET" ] && [ -f "$TARGET" ] || { echo "usage: tools/re/triage.sh <binary> <output-dir-outside-git>" >&2; exit 2; }
[ -n "$OUT_DIR" ] || { echo "usage: tools/re/triage.sh <binary> <output-dir-outside-git>" >&2; exit 2; }

case "$OUT_DIR" in
  *tools/re/sample*|*src/*|*docs/*) echo "refusing: output dir looks tracked: $OUT_DIR" >&2; exit 3 ;;
esac

if head -c 64 "$TARGET" | grep -q "git-lfs.github.com"; then
  echo "refusing: $TARGET is a Git LFS pointer, not a binary" >&2
  exit 3
fi

mkdir -p "$OUT_DIR"

{
  echo "== file =="
  file "$TARGET" 2>/dev/null || echo "(no 'file' command)"
  echo
  echo "== readelf -h (header) =="
  readelf -h "$TARGET" | head -n 30
  echo
  echo "== sections (name/size) =="
  readelf -S "$TARGET" | grep -E "Name|\.text|\.rodata|\.data|\.bss|\.symtab" || true
} > "$OUT_DIR/summary.txt"

nm -C --defined-only "$TARGET" > "$OUT_DIR/symbols.txt" 2>/dev/null || \
  echo "(no symbol table - stripped binary)" > "$OUT_DIR/symbols.txt"

objdump -d --no-show-raw-insn "$TARGET" > "$OUT_DIR/disassembly.txt"

{
  echo "symbols: $(grep -c . "$OUT_DIR/symbols.txt" || true)"
  echo "instructions (approx): $(grep -cE '^[[:space:]]+[0-9a-f]+:' "$OUT_DIR/disassembly.txt" || true)"
  echo "printable strings (>=6, count only - strings themselves are not"
  echo "dumped here because for proprietary targets they are content):"
  strings -n 6 "$TARGET" | wc -l
} >> "$OUT_DIR/summary.txt"

cat "$OUT_DIR/summary.txt"
echo
echo "Wrote: $OUT_DIR/{summary,symbols,disassembly}.txt"
