# Golden comparison summary

- golden set: `research/proprietary/bds-1.26.52.3/golden`
- candidate: `capture/golden-1-check`
- captures compared: 4
- total blocks: 393,216
- total mismatches: 142

# worldgen comparison — 1-c128_128

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,303
- mismatched: 1
- accuracy: 99.9990%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":1}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 13 | 255 | 1 |

- 2 block(s) matched an accepted variant of a block the server itself does not reproduce

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 10 | 13 | 8 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":1}` |


# worldgen comparison — 1-c128_129

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,289
- mismatched: 15
- accuracy: 99.9847%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` | 7 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` | 3 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":32}` | 1 |
| `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":22}` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":25}` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":19}` | 1 |
| `minecraft:cave_vines{"growing_plant_age":19}` | `minecraft:cave_vines{"growing_plant_age":0}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 61 | 253 | 3 |
| 62 | 253 | 3 |
| 63 | 253 | 3 |
| 64 | 254 | 2 |
| 12 | 255 | 1 |
| 58 | 255 | 1 |
| 59 | 255 | 1 |
| 60 | 255 | 1 |

- 21 block(s) matched an accepted variant of a block the server itself does not reproduce

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 12 | 12 | 9 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":32}` |
| 1 | 58 | 14 | `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":22}` |
| 1 | 59 | 14 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 1 | 60 | 14 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 2 | 61 | 7 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":25}` |
| 1 | 61 | 13 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":19}` |
| 1 | 61 | 14 | `minecraft:cave_vines{"growing_plant_age":19}` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 1 | 62 | 10 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 3 | 62 | 10 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 1 | 62 | 13 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 2 | 63 | 6 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 3 | 63 | 7 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 0 | 63 | 9 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 0 | 64 | 13 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 3 | 64 | 14 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |


# worldgen comparison — 1-c129_128

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,281
- mismatched: 23
- accuracy: 99.9766%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:short_grass` | `minecraft:moss_carpet` | 3 |
| `minecraft:moss_carpet` | `minecraft:short_grass` | 2 |
| `minecraft:air` | `minecraft:short_grass` | 2 |
| `minecraft:short_grass` | `minecraft:air` | 2 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":2}` | 2 |
| `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` | 1 |
| `minecraft:moss_carpet` | `minecraft:azalea` | 1 |
| `minecraft:tall_grass{"upper_block_bit":0}` | `minecraft:moss_carpet` | 1 |
| `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` | 1 |
| `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":0}` | 1 |
| `minecraft:tall_grass{"upper_block_bit":1}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":17}` | 1 |
| `minecraft:glow_lichen{"multi_face_direction_bits":16}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":1}` | 1 |
| `minecraft:air` | `minecraft:azalea` | 1 |
| `minecraft:azalea` | `minecraft:short_grass` | 1 |
| `minecraft:glow_lichen{"multi_face_direction_bits":16}` | `minecraft:glow_lichen{"multi_face_direction_bits":2}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 37 | 247 | 9 |
| 36 | 251 | 5 |
| 35 | 252 | 4 |
| 59 | 253 | 3 |
| 34 | 255 | 1 |
| 38 | 255 | 1 |

- 5 block(s) matched an accepted variant of a block the server itself does not reproduce

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 9 | 34 | 4 | `minecraft:short_grass` | `minecraft:moss_carpet` |
| 9 | 35 | 2 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 9 | 35 | 3 | `minecraft:moss_carpet` | `minecraft:azalea` |
| 10 | 35 | 3 | `minecraft:tall_grass{"upper_block_bit":0}` | `minecraft:moss_carpet` |
| 10 | 35 | 4 | `minecraft:moss_carpet` | `minecraft:short_grass` |
| 10 | 36 | 1 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 9 | 36 | 2 | `minecraft:air` | `minecraft:short_grass` |
| 10 | 36 | 2 | `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":0}` |
| 10 | 36 | 3 | `minecraft:tall_grass{"upper_block_bit":1}` | `minecraft:air` |
| 11 | 36 | 5 | `minecraft:short_grass` | `minecraft:moss_carpet` |
| 10 | 37 | 1 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":17}` |
| 9 | 37 | 2 | `minecraft:glow_lichen{"multi_face_direction_bits":16}` | `minecraft:air` |
| 10 | 37 | 2 | `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":1}` |
| 13 | 37 | 3 | `minecraft:air` | `minecraft:short_grass` |
| 14 | 37 | 3 | `minecraft:air` | `minecraft:azalea` |
| 13 | 37 | 4 | `minecraft:short_grass` | `minecraft:air` |
| 14 | 37 | 4 | `minecraft:azalea` | `minecraft:short_grass` |
| 12 | 37 | 9 | `minecraft:short_grass` | `minecraft:moss_carpet` |
| 12 | 37 | 10 | `minecraft:moss_carpet` | `minecraft:short_grass` |
| 15 | 38 | 4 | `minecraft:short_grass` | `minecraft:air` |


# worldgen comparison — 1-c129_129

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,201
- mismatched: 103
- accuracy: 99.8952%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` | 22 |
| `minecraft:moss_carpet` | `minecraft:short_grass` | 7 |
| `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` | 6 |
| `minecraft:clay` | `minecraft:water{"liquid_depth":0}` | 6 |
| `minecraft:short_grass` | `minecraft:air` | 5 |
| `minecraft:moss_block` | `minecraft:clay` | 4 |
| `minecraft:air` | `minecraft:moss_carpet` | 3 |
| `minecraft:moss_block` | `minecraft:water{"liquid_depth":0}` | 3 |
| `minecraft:short_grass` | `minecraft:moss_carpet` | 3 |
| `minecraft:tall_grass{"upper_block_bit":1}` | `minecraft:air` | 3 |
| `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":1}` | 3 |
| `minecraft:clay` | `minecraft:tuff` | 2 |
| `minecraft:clay` | `minecraft:moss_block` | 2 |
| `minecraft:air` | `minecraft:flowering_azalea` | 2 |
| `minecraft:small_dripleaf_block{"minecraft:cardinal_direction":"south","upper_block_bit":0}` | `minecraft:air` | 2 |
| `minecraft:small_dripleaf_block{"minecraft:cardinal_direction":"south","upper_block_bit":1}` | `minecraft:air` | 2 |
| `minecraft:tall_grass{"upper_block_bit":0}` | `minecraft:short_grass` | 2 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":2}` | 2 |
| `minecraft:glow_lichen{"multi_face_direction_bits":16}` | `minecraft:glow_lichen{"multi_face_direction_bits":9}` | 1 |
| `minecraft:glow_lichen{"multi_face_direction_bits":8}` | `minecraft:glow_lichen{"multi_face_direction_bits":9}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 36 | 236 | 20 |
| 37 | 240 | 16 |
| 35 | 242 | 14 |
| 34 | 244 | 12 |
| 31 | 247 | 9 |
| 33 | 247 | 9 |
| 32 | 250 | 6 |
| 29 | 253 | 3 |
| 30 | 253 | 3 |
| 28 | 254 | 2 |
| 38 | 254 | 2 |
| 17 | 255 | 1 |
| 18 | 255 | 1 |
| 26 | 255 | 1 |
| 27 | 255 | 1 |

- 8 block(s) matched an accepted variant of a block the server itself does not reproduce

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 8 | 17 | 11 | `minecraft:glow_lichen{"multi_face_direction_bits":16}` | `minecraft:glow_lichen{"multi_face_direction_bits":9}` |
| 7 | 18 | 11 | `minecraft:glow_lichen{"multi_face_direction_bits":8}` | `minecraft:glow_lichen{"multi_face_direction_bits":9}` |
| 3 | 26 | 7 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 3 | 27 | 9 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 3 | 28 | 9 | `minecraft:clay` | `minecraft:tuff` |
| 5 | 28 | 10 | `minecraft:clay` | `minecraft:tuff` |
| 4 | 29 | 4 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 6 | 29 | 7 | `minecraft:tuff` | `minecraft:clay` |
| 3 | 29 | 9 | `minecraft:clay` | `minecraft:moss_block` |
| 3 | 30 | 9 | `minecraft:air` | `minecraft:azalea` |
| 2 | 30 | 11 | `minecraft:air` | `minecraft:moss_carpet` |
| 1 | 30 | 12 | `minecraft:air` | `minecraft:flowering_azalea` |
| 11 | 31 | 7 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 12 | 31 | 8 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 11 | 31 | 9 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 3 | 31 | 11 | `minecraft:air` | `minecraft:moss_carpet` |
| 12 | 31 | 11 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 2 | 31 | 14 | `minecraft:air` | `minecraft:flowering_azalea` |
| 11 | 31 | 14 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 4 | 31 | 15 | `minecraft:big_dripleaf{"big_dripleaf_head":0,"big_dripleaf_tilt":"none","minecraft:cardinal_direction":"east"}` | `minecraft:water{"liquid_depth":0}` |


