# Static triage summary

Generated: `2026-10-22T15:23:27Z`

## Identity

- SHA-256: `fa13efc1ae32b078c77c5eab15e6f5436216e706e60da97cd9366331536d65d9` (expected match: True)
- Size: 14640 bytes
- Build ID: `52ea51041dccc23ba58a50860ed990547b066f1a`
- Compiler: `GCC: (Ubuntu 13.3.0-6ubuntu2~24.04.1) 13.3.0`
- Debug link: `None`

## Structure

- FDE function starts: 52
- .text bytes: 0x9da
- Relocations: 61
- Code pointers in data: 28
- C++ classes via RTTI: 8
- World-gen vtable slots: 17
- Interesting strings: 14
- Instructions swept: 687
- Strings with code refs: 5

## Top world-generation classes

| score | class | vtables | slots |
|---|---|---|---|
| 81 | `fixture_worldgen::OverworldGeneratorMultinoise` | 1 | 3 |
| 41 | `fixture_worldgen::VanillaOverworldBiomeSource` | 1 | 4 |
| 41 | `fixture_worldgen::BiomeSource` | 1 | 0 |
| 40 | `fixture_worldgen::WorldGenerator` | 1 | 0 |
| 30 | `fixture_worldgen::OverworldSurfaceBuilder` | 1 | 4 |
| 28 | `fixture_worldgen::NormalNoise` | 1 | 3 |
| 28 | `fixture_worldgen::ImprovedNoise` | 1 | 3 |

## Top candidate functions

| rank | score | address | size | reasons |
|---|---|---|---|---|
| 1 | 367 | `0x1678` | 239 | caller-of-callee;caller-of-seed;core-vtable:fixture_worldgen::OverworldGeneratorMultinoise#2 |
| 2 | 188 | `0x1510` | 106 | callee-of:0x157a;callee2-of:0x157a;caller-of-callee |
| 3 | 183 | `0x157a` | 254 | callee-of:0x1678;caller-of-callee;caller-of-seed |
| 4 | 176 | `0x14ce` | 66 | callee-of:0x1510;callee2-of:0x1510;caller-of-callee |
| 5 | 165 | `0x14a4` | 23 | caller-of-callee;core-vtable:fixture_worldgen::OverworldGeneratorMultinoise#1 |
| 6 | 160 | `0x143e` | 6 | core-vtable:fixture_worldgen::OverworldGeneratorMultinoise#0 |
| 7 | 150 | `0x178c` | 92 | caller-of-callee;core-vtable:fixture_worldgen::VanillaOverworldBiomeSource#3 |
| 8 | 145 | `0x148c` | 24 | caller-of-callee;core-vtable:fixture_worldgen::VanillaOverworldBiomeSource#1 |
| 9 | 140 | `0x1444` | 24 | caller-of-callee;core-vtable:fixture_worldgen::OverworldSurfaceBuilder#1 |
| 10 | 140 | `0x1438` | 6 | core-vtable:fixture_worldgen::VanillaOverworldBiomeSource#0 |
| 11 | 139 | `0x145c` | 24 | caller-of-callee;core-vtable:fixture_worldgen::ImprovedNoise#1 |
| 12 | 139 | `0x1474` | 24 | caller-of-callee;core-vtable:fixture_worldgen::NormalNoise#1 |
| 13 | 135 | `0x1416` | 6 | core-vtable:fixture_worldgen::OverworldSurfaceBuilder#0 |
| 14 | 135 | `0x141c` | 6 | core-vtable:fixture_worldgen::OverworldSurfaceBuilder#2 |
| 15 | 135 | `0x1422` | 10 | core-vtable:fixture_worldgen::OverworldSurfaceBuilder#3 |
| 16 | 134 | `0x142c` | 6 | core-vtable:fixture_worldgen::ImprovedNoise#0 |
| 17 | 134 | `0x1432` | 6 | core-vtable:fixture_worldgen::NormalNoise#0 |
| 18 | 130 | `0x1130` | 0 | callee-of:0x1444;callee-of:0x145c;callee-of:0x1474 |
| 19 | 46 | `0x1249` | 413 | caller-of-callee;caller-of-seed |
| 20 | 37 | `0x14bb` | 19 | callee-of:0x14ce;callee2-of:0x14ce |
| 21 | 26 | `0x10d0` | 144 | callee-of:0x1678 |
| 22 | 26 | `0x13e6` | 48 | callee-of:0x1678 |
| 23 | 26 | `0x1780` | 12 | callee-of:0x178c |
| 24 | 26 | `0x1770` | 16 | callee-of:0x178c |
| 25 | 11 | `0x1110` | 0 | callee2-of:0x14bb |
| 26 | 5 | `0x18fe` | 30 | caller-of-callee |

Elapsed: 0.0s
