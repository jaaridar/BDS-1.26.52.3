#!/usr/bin/env python3
"""Create a bounded, static inventory of an ELF binary.

This tool never executes the target. It is intentionally generic: generated
reports are observations from the caller-supplied binary and carry that
binary's licensing restrictions.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import os
import re
import shutil
import subprocess
import sys
from datetime import datetime, timezone
from pathlib import Path
from typing import Iterable

LFS_MAGIC = b"version https://git-lfs.github.com/spec/v1\n"
WORLDGEN_RE = re.compile(
    r"(?:worldgen|levelgen|world.?generator|chunk.?generator|overworld|nether.?generator|"
    r"end.?generator|biome|terrain|density|noise|perlin|simplex|aquifer|cavif|ore.?vein|"
    r"surface.?builder|feature|structure|jigsaw|carver|voronoi|climate|spline|xoroshiro|"
    r"positional.?random|random.?seed)",
    re.IGNORECASE,
)
PRIORITY_RE = re.compile(
    r"(?:OverworldGenerator(?:Multinoise|2d)?|OverworldNoises3d|LegacyBlendedNoise|"
    r"ImprovedNoise|PerlinNoise|PerlinSimplexNoise|SimplexNoise|NormalNoiseImpl|"
    r"MultiOctaveNoiseImpl|Aquifer|Cavifier|NoodleCavifier|OreVeinifier|"
    r"OverworldBiomeBuilder|BiomeSource|BlendedMultiNoiseBiomeProvider|TerrainShaper|"
    r"DensityFunctionWorldGenerator|NoiseCellInterpolator|XoroshiroPositionalRandomFactory)::",
)
TEXT_SYMBOL_TYPES = frozenset("TtWw")


def sha256_file(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def require_tool(name: str) -> str:
    resolved = shutil.which(name)
    if not resolved:
        raise RuntimeError(f"required tool not found on PATH: {name}")
    return resolved


def run_to_file(
    args: list[str],
    output: Path,
    *,
    allow_failure: bool = False,
    max_bytes: int | None = None,
) -> int:
    process = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    assert process.stdout is not None
    written = 0
    truncated = False
    with output.open("wb") as stream:
        while True:
            chunk = process.stdout.read(64 * 1024)
            if not chunk:
                break
            if max_bytes is not None and written + len(chunk) > max_bytes:
                remaining = max(0, max_bytes - written)
                stream.write(chunk[:remaining])
                stream.write(b"\n[output truncated by inventory.py]\n")
                written += remaining
                truncated = True
                process.terminate()
                break
            stream.write(chunk)
            written += len(chunk)
    if truncated:
        try:
            process.wait(timeout=5)
        except subprocess.TimeoutExpired:
            process.kill()
            process.wait()
    else:
        process.wait()
    if process.returncode and not (allow_failure or truncated):
        raise RuntimeError(
            f"command failed with exit {process.returncode}: {' '.join(args)}; "
            f"see {output}"
        )
    return process.returncode


def read_elf_type(path: Path) -> str:
    completed = subprocess.run(
        ["readelf", "-h", str(path)],
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        check=False,
    )
    if completed.returncode:
        raise RuntimeError(f"readelf rejected target:\n{completed.stdout}")
    if "ELF" not in completed.stdout:
        raise RuntimeError("target is not an ELF binary")
    return completed.stdout


def iter_nm(path: Path, *, dynamic: bool) -> Iterable[tuple[str, str, str]]:
    args = ["nm", "--defined-only", "--demangle", "--print-size", "--format=posix"]
    if dynamic:
        args.insert(1, "--dynamic")
    args.append(str(path))
    process = subprocess.Popen(
        args,
        text=True,
        encoding="utf-8",
        errors="replace",
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
    )
    assert process.stdout is not None
    for line in process.stdout:
        # POSIX nm format is: name type value size. Demangled C++ names contain
        # spaces, so split from the right.
        fields = line.rstrip("\n").rsplit(maxsplit=3)
        if len(fields) != 4:
            continue
        name, symbol_type, address, size = fields
        yield address, symbol_type, size + "\t" + name
    stderr = process.stderr.read() if process.stderr else ""
    return_code = process.wait()
    if return_code and "no symbols" not in stderr.lower():
        raise RuntimeError(f"nm failed with exit {return_code}: {stderr.strip()}")


def collect_symbols(path: Path, output_dir: Path, has_symtab: bool) -> dict[str, int | bool]:
    sources = [("dynamic", True)]
    if has_symtab:
        sources.append(("all", False))

    worldgen_path = output_dir / "worldgen-symbols.tsv"
    priority_path = output_dir / "priority-functions.tsv"
    seen_worldgen: set[tuple[str, str]] = set()
    seen_priority: set[tuple[str, str]] = set()
    total = 0
    text = 0
    worldgen = 0
    priority = 0
    worldgen_bytes = 0
    priority_bytes = 0
    worldgen_truncated = False
    priority_truncated = False
    worldgen_limit = 32 * 1024 * 1024
    priority_limit = 16 * 1024 * 1024

    with worldgen_path.open("w", encoding="utf-8") as worldgen_out, priority_path.open(
        "w", encoding="utf-8"
    ) as priority_out:
        header = "source\taddress\ttype\tsize_hex\tdemangled_name\n"
        worldgen_out.write(header)
        priority_out.write(header)
        worldgen_bytes = len(header.encode())
        priority_bytes = worldgen_bytes
        for source, dynamic in sources:
            for address, symbol_type, size_and_name in iter_nm(path, dynamic=dynamic):
                total += 1
                size, name = size_and_name.split("\t", 1)
                if symbol_type in TEXT_SYMBOL_TYPES:
                    text += 1
                if WORLDGEN_RE.search(name):
                    key = (address, name)
                    if key not in seen_worldgen:
                        seen_worldgen.add(key)
                        line = f"{source}\t{address}\t{symbol_type}\t{size}\t{name}\n"
                        line_size = len(line.encode("utf-8", errors="replace"))
                        if worldgen_bytes + line_size <= worldgen_limit:
                            worldgen_out.write(line)
                            worldgen_bytes += line_size
                        else:
                            worldgen_truncated = True
                        worldgen += 1
                if symbol_type in TEXT_SYMBOL_TYPES and PRIORITY_RE.search(name):
                    key = (address, name)
                    if key not in seen_priority:
                        seen_priority.add(key)
                        line = f"{source}\t{address}\t{symbol_type}\t{size}\t{name}\n"
                        line_size = len(line.encode("utf-8", errors="replace"))
                        if priority_bytes + line_size <= priority_limit:
                            priority_out.write(line)
                            priority_bytes += line_size
                        else:
                            priority_truncated = True
                        priority += 1
    return {
        "symbols_scanned": total,
        "text_symbols_scanned": text,
        "worldgen_symbols": worldgen,
        "worldgen_symbols_truncated": worldgen_truncated,
        "priority_functions": priority,
        "priority_functions_truncated": priority_truncated,
    }


def collect_strings(path: Path, output: Path, max_matches: int, max_bytes: int) -> dict[str, int | bool]:
    process = subprocess.Popen(
        ["strings", "-a", "-n", "6", str(path)],
        text=True,
        encoding="utf-8",
        errors="replace",
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
    )
    assert process.stdout is not None
    count = 0
    bytes_written = 0
    truncated = False
    with output.open("w", encoding="utf-8") as stream:
        for line in process.stdout:
            if not WORLDGEN_RE.search(line):
                continue
            encoded_size = len(line.encode("utf-8", errors="replace"))
            if count >= max_matches or bytes_written + encoded_size > max_bytes:
                truncated = True
                process.terminate()
                break
            stream.write(line)
            count += 1
            bytes_written += encoded_size
    _, stderr = process.communicate()
    if process.returncode not in (0, -15) and not truncated:
        raise RuntimeError(f"strings failed with exit {process.returncode}: {stderr.strip()}")
    return {
        "matching_strings": count,
        "matching_string_bytes": bytes_written,
        "strings_truncated": truncated,
    }


def parse_needed(dynamic_text: str) -> list[str]:
    return re.findall(r"Shared library: \[([^]]+)]", dynamic_text)


def build_summary(metadata: dict[str, object]) -> str:
    return f"""# Official BDS binary: static inventory

> **Provenance and licensing:** This report is mechanically derived from the
> proprietary `bedrock_server` identified below. It is research evidence, not
> MIT-licensed OpenBDS source, and must not be copied into the clean-room engine.
> The inventory tool did not execute the target.

Generated: `{metadata['generated_at']}`

## Identity

- SHA-256: `{metadata['sha256']}`
- Size: `{metadata['size']} bytes`
- Expected digest matched: `{metadata['expected_digest_matched']}`
- ELF symbol table present: `{metadata['has_symtab']}`

## World-generation discovery

- Symbols scanned: `{metadata['symbols_scanned']}`
- Text symbols scanned: `{metadata['text_symbols_scanned']}`
- World-generation-related symbols: `{metadata['worldgen_symbols']}`
- World-generation symbol report truncated: `{metadata['worldgen_symbols_truncated']}`
- Priority world-generation functions: `{metadata['priority_functions']}`
- Priority function report truncated: `{metadata['priority_functions_truncated']}`
- Matching printable strings retained: `{metadata['matching_strings']}`
- String report truncated: `{metadata['strings_truncated']}`

The primary next-step input is `priority-functions.tsv`. `worldgen-symbols.tsv`
is the broader symbol inventory. Addresses are static ELF virtual addresses, not
runtime ASLR addresses.

## Dynamic dependencies

{os.linesep.join(f'- `{item}`' for item in metadata['needed_libraries']) or '- None reported'}

## Evidence files

- `elf-header.txt`, `program-headers.txt`, `section-headers.txt`
- `dynamic-section.txt`, `notes.txt`, `debug-link.txt`, `relocations-summary.txt`
- `priority-functions.tsv`, `worldgen-symbols.tsv`, `worldgen-strings.txt`
- `metadata.json`

Decompiler output is not original source. Any later pseudocode must retain the
same proprietary-evidence boundary and should be independently validated by
black-box tests before informing a clean-room implementation.
"""


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("binary", type=Path)
    parser.add_argument("output_dir", type=Path)
    parser.add_argument("--expected-sha256")
    parser.add_argument("--max-string-matches", type=int, default=200_000)
    parser.add_argument("--max-string-bytes", type=int, default=16 * 1024 * 1024)
    args = parser.parse_args()

    for tool in ("readelf", "nm", "strings"):
        require_tool(tool)

    target = args.binary.resolve()
    if not target.is_file():
        raise RuntimeError(f"binary does not exist or is not a regular file: {target}")
    with target.open("rb") as stream:
        prefix = stream.read(len(LFS_MAGIC))
    if prefix == LFS_MAGIC:
        raise RuntimeError(
            "target is a Git LFS pointer, not the binary; fetch LFS objects before analysis"
        )

    digest = sha256_file(target)
    if args.expected_sha256 and digest.lower() != args.expected_sha256.lower():
        raise RuntimeError(
            f"SHA-256 mismatch: expected {args.expected_sha256.lower()}, observed {digest.lower()}"
        )

    output_dir = args.output_dir.resolve()
    output_dir.mkdir(parents=True, exist_ok=True)

    header = read_elf_type(target)
    (output_dir / "elf-header.txt").write_text(header, encoding="utf-8")
    run_to_file(["readelf", "-W", "-l", str(target)], output_dir / "program-headers.txt")
    run_to_file(["readelf", "-W", "-S", str(target)], output_dir / "section-headers.txt")
    run_to_file(["readelf", "-W", "-d", str(target)], output_dir / "dynamic-section.txt")
    run_to_file(["readelf", "-W", "-n", str(target)], output_dir / "notes.txt", allow_failure=True)
    run_to_file(
        ["readelf", "--string-dump=.gnu_debuglink", str(target)],
        output_dir / "debug-link.txt",
        allow_failure=True,
    )
    run_to_file(
        ["readelf", "-W", "-r", "--use-dynamic", str(target)],
        output_dir / "relocations-summary.txt",
        allow_failure=True,
        max_bytes=8 * 1024 * 1024,
    )

    section_text = (output_dir / "section-headers.txt").read_text(
        encoding="utf-8", errors="replace"
    )
    dynamic_text = (output_dir / "dynamic-section.txt").read_text(
        encoding="utf-8", errors="replace"
    )
    has_symtab = bool(re.search(r"\] \.symtab\s", section_text))
    symbol_counts = collect_symbols(target, output_dir, has_symtab)
    string_counts = collect_strings(
        target,
        output_dir / "worldgen-strings.txt",
        args.max_string_matches,
        args.max_string_bytes,
    )

    metadata: dict[str, object] = {
        "schema_version": 1,
        "generated_at": datetime.now(timezone.utc).isoformat(),
        "binary_name": target.name,
        "size": target.stat().st_size,
        "sha256": digest,
        "expected_sha256": args.expected_sha256,
        "expected_digest_matched": not args.expected_sha256
        or digest.lower() == args.expected_sha256.lower(),
        "has_symtab": has_symtab,
        "needed_libraries": parse_needed(dynamic_text),
        **symbol_counts,
        **string_counts,
    }
    (output_dir / "metadata.json").write_text(
        json.dumps(metadata, indent=2, sort_keys=True) + "\n", encoding="utf-8"
    )
    (output_dir / "README.md").write_text(build_summary(metadata), encoding="utf-8")
    print(json.dumps(metadata, indent=2, sort_keys=True))
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except (OSError, RuntimeError, ValueError) as exc:
        print(f"inventory: {exc}", file=sys.stderr)
        raise SystemExit(1)
