# Cubiomes as the reference for Java's placement

Cubiomes ([Cubitect/cubiomes](https://github.com/Cubitect/cubiomes), MIT) is a C
implementation of Minecraft: Java Edition world generation. Its `finders.c` holds
the exact structure-placement arithmetic and the per-structure parameter table,
so it is the reference this repository checks Bedrock against instead of
re-deriving Java's numbers from memory.

Nothing from Cubiomes is copied into `src/`. What is copied here is the *table*,
with its source named, so a reader can check every number against the upstream
file:

| structure | salt | spacing (`regionSize`) | span (`chunkRange`) | separation | spread |
|---|---|---|---|---|---|
| village | 10387312 | 34 | 26 | 8 | linear |
| pillager_outpost | 165745296 | 32 | 24 | 8 | linear |
| monument | 10387313 | 32 | 27 | 5 | triangular |
| mansion | 10387319 | 80 | 60 | 20 | triangular |
| ocean_ruin | 14357621 | 20 | 12 | 8 | linear |
| shipwreck | 165745295 | 24 | 20 | 4 | linear |
| ruined_portal | 34222645 | 40 | 25 | 15 | linear |
| ancient_city | 20083232 | 24 | 16 | 8 | linear |
| trial_chambers | 94251327 | 34 | 22 | 12 | linear |
| trail_ruins | 83469867 | 34 | 26 | 8 | linear |
| desert_pyramid | 14357617 | 32 | 24 | 8 | linear |
| jungle_temple | 14357619 | 32 | 24 | 8 | linear |
| swamp_hut / witch_hut | 14357620 | 32 | 24 | 8 | linear |
| igloo | 14357618 | 32 | 24 | 8 | linear |
| buried_treasure | 10387320 | 1 | 1 | 0 | per-chunk frequency |
| mineshaft | 0 | 1 | 1 | 0 | per-chunk frequency |

Two details in Cubiomes that matter for reading our numbers:

- it stores the *span* (`chunkRange` = `spacing - separation`), not the
  separation, so a Bedrock record read as `(spacing, separation)` has to be
  converted before it can be compared;
- `getFeatureChunkInRegion` and `getLargeStructureChunkInRegion` are the two
  resolvers, uniform and triangular, and they differ only in how many draws are
  averaged. The seeded mix is the same in both:
  `(cellZ*132897987541 + cellX*341873128712 + seed + salt) ^ 0x5deece66d`, which
  is exactly what the disassembly of `d2d2570` in the Bedrock binary does.

## What the comparison says

`tools/worldgen-algo/compare-cubiomes.js` runs the table above against every
captured `locate structure` answer and reports, per set, how far the reported
chunk is from the nearest placement chunk over a +/-2 cell neighbourhood:

| set | captures | exact | within 1 chunk | median distance | verdict |
|---|---|---|---|---|---|
| trail_ruins | 35 | 9 | 35 | 1 | matches Java |
| trial_chambers | 24 | 4 | 24 | 1 | matches Java |
| village | 35 | 1 | 1 | 11 | its own parameters |
| pillager_outpost | 19 | 0 | 0 | 12 | its own parameters |
| monument | 22 | 0 | 0 | 7 | its own parameters |
| mansion | 13 | 0 | 0 | 21 | its own parameters |
| shipwreck | 24 | 0 | 0 | 10 | its own parameters |
| ruined_portal | 24 | 0 | 0 | 15 | its own parameters |
| ancient_city | 24 | 0 | 0 | 8 | its own parameters |

The two that match are the control and the finding:

- `trail_ruins` ships its placement in the vanilla pack (spacing 34, separation
  8, salt 83469867), and the pack's numbers are Java's numbers, so a match here
  proves the *pipeline* (seed, cell, mix, draws, chunk) is right.
- `trial_chambers` is **not** in any pack — its set is built inside the binary —
  and its captures still land on Java's cells 24 times out of 24 with Java's
  salt. So at least one compiled-in set uses the Java parameters verbatim.
- The other seven do not. Their median distance is what a random position would
  give for that grid size (a 34-chunk grid gives ~11), so this is not a small
  offset or an anchoring convention: those sets are placed with numbers that are
  not Java's, and they have to be measured from Bedrock.

Because the mix is confirmed, the remaining unknown for those seven is the triple
`(spacing, separation, salt)`. `tools/worldgen-algo/solve-salt.c` sweeps the salt
exhaustively (2^32 values, ~5 s per span on two cores) and has so far found
nothing for `village` at spacing 34 with spans 22..28, nor for `ancient_city` at
spacing 24 with spans 19..25. That is what moves the work to reading the values
the server actually built (`tools/worldgen-algo/dump-memory.js`).
