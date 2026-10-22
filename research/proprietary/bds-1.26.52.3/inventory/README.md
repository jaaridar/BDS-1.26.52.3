# Official BDS binary: static inventory

> **Provenance and licensing:** This report is mechanically derived from the
> proprietary `bedrock_server` identified below. It is research evidence, not
> MIT-licensed OpenBDS source, and must not be copied into the clean-room engine.
> The inventory tool did not execute the target.

Generated: `2026-10-22T21:03:56.154741+00:00`

## Identity

- SHA-256: `0a490c711d4a2ce075debcd979e8862b7eaba008373f9970f0edbb67f98f9207`
- Size: `256133808 bytes`
- Expected digest matched: `True`
- ELF symbol table present: `False`

## World-generation discovery

- Symbols scanned: `0`
- Text symbols scanned: `0`
- World-generation-related symbols: `0`
- World-generation symbol report truncated: `False`
- Priority world-generation functions: `0`
- Priority function report truncated: `False`
- Matching printable strings retained: `8977`
- String report truncated: `False`

The primary next-step input is `priority-functions.tsv`. `worldgen-symbols.tsv`
is the broader symbol inventory. Addresses are static ELF virtual addresses, not
runtime ASLR addresses.

## Dynamic dependencies

- `libpthread.so.0`
- `libdl.so.2`
- `libm.so.6`
- `libgcc_s.so.1`
- `libc.so.6`
- `ld-linux-x86-64.so.2`
- `librt.so.1`

## Evidence files

- `elf-header.txt`, `program-headers.txt`, `section-headers.txt`
- `dynamic-section.txt`, `notes.txt`, `debug-link.txt`, `relocations-summary.txt`
- `priority-functions.tsv`, `worldgen-symbols.tsv`, `worldgen-strings.txt`
- `metadata.json`

Decompiler output is not original source. Any later pseudocode must retain the
same proprietary-evidence boundary and should be independently validated by
black-box tests before informing a clean-room implementation.
