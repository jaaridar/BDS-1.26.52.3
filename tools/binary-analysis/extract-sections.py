"""Publish chosen ELF sections as raw files, with the map that makes them usable.

The server binary is 244 MiB and its release asset lives on a host that some
environments cannot reach, so the analysis has to be able to run anywhere the
repository is. Almost all of it is `.text`; the parts the placement work actually
reads are the data sections, which are about 20 MiB together. Writing those out
with their virtual addresses keeps every static scan -- strings, dword runs,
table shapes -- reproducible with nothing but a checkout.

    python3 tools/binary-analysis/extract-sections.py --binary bedrock_server \
        --out research/proprietary/bds-1.26.52.3/binary-sections
"""

import argparse
import hashlib
import json
import os
import struct


def elf_header(path):
    with open(path, "rb") as handle:
        header = handle.read(64)
    if header[:4] != b"\x7fELF" or header[4] != 2:
        raise SystemExit("only 64-bit ELF is handled")
    return {
        "shoff": struct.unpack_from("<Q", header, 0x28)[0],
        "shentsize": struct.unpack_from("<H", header, 0x3A)[0],
        "shnum": struct.unpack_from("<H", header, 0x3C)[0],
        "shstrndx": struct.unpack_from("<H", header, 0x3E)[0],
    }


def sections(path):
    header = elf_header(path)
    with open(path, "rb") as handle:
        handle.seek(header["shoff"] + header["shstrndx"] * header["shentsize"])
        entry = handle.read(header["shentsize"])
        name_offset, name_size = struct.unpack_from("<QQ", entry, 0x18)
        handle.seek(name_offset)
        strings = handle.read(name_size)
        out = []
        for index in range(header["shnum"]):
            handle.seek(header["shoff"] + index * header["shentsize"])
            entry = handle.read(header["shentsize"])
            start = struct.unpack_from("<I", entry, 0)[0]
            name = strings[start:strings.find(b"\0", start)].decode("latin-1")
            kind = struct.unpack_from("<I", entry, 4)[0]
            flags = struct.unpack_from("<Q", entry, 8)[0]
            addr = struct.unpack_from("<Q", entry, 0x10)[0]
            offset = struct.unpack_from("<Q", entry, 0x18)[0]
            size = struct.unpack_from("<Q", entry, 0x20)[0]
            out.append({"name": name, "type": kind, "flags": flags, "addr": addr,
                        "offset": offset, "size": size})
    return out


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--binary", required=True)
    parser.add_argument("--out", required=True)
    parser.add_argument("--sections", default=".rodata,.data.rel.ro,.data")
    args = parser.parse_args()

    wanted = [name.strip() for name in args.sections.split(",") if name.strip()]
    digest = hashlib.sha256()
    with open(args.binary, "rb") as handle:
        for block in iter(lambda: handle.read(1 << 22), b""):
            digest.update(block)

    os.makedirs(args.out, exist_ok=True)
    manifest = {"binary": os.path.basename(args.binary), "sha256": digest.hexdigest(),
                "bytes": os.path.getsize(args.binary), "sections": []}
    with open(args.binary, "rb") as handle:
        for section in sections(args.binary):
            if section["name"] not in wanted or not section["size"]:
                continue
            handle.seek(section["offset"])
            data = handle.read(section["size"])
            file_name = section["name"].lstrip(".").replace(".", "-") + ".bin"
            with open(os.path.join(args.out, file_name), "wb") as out:
                out.write(data)
            manifest["sections"].append({
                "name": section["name"],
                "file": file_name,
                "addr": section["addr"],
                "size": section["size"],
                "sha256": hashlib.sha256(data).hexdigest(),
            })
            print(f"{section['name']}: {section['size']} bytes -> {file_name} @ {section['addr']:#x}")
    with open(os.path.join(args.out, "manifest.json"), "w") as handle:
        json.dump(manifest, handle, indent=1)
    print(f"wrote {os.path.join(args.out, 'manifest.json')}")


if __name__ == "__main__":
    main()
