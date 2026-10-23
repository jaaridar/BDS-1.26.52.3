# Golden comparison summary

- golden set: `research/proprietary/bds-1.26.52.3/golden`
- candidate: `capture/golden-1-check`
- captures compared: 4
- total blocks: 393,216
- total mismatches: 51

# worldgen comparison — 1-c128_128

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,296
- mismatched: 8
- accuracy: 99.9919%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` | 2 |
| `minecraft:short_grass` | `minecraft:tall_grass{"upper_block_bit":0}` | 2 |
| `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":1}` | 2 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` | 1 |
| `minecraft:glow_lichen{"multi_face_direction_bits":17}` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 12 | 254 | 2 |
| 18 | 254 | 2 |
| 21 | 255 | 1 |
| 22 | 255 | 1 |
| 25 | 255 | 1 |
| 26 | 255 | 1 |

- 22 block(s) matched an accepted variant of a block the server itself does not reproduce

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 11 | 12 | 8 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` |
| 10 | 12 | 9 | `minecraft:glow_lichen{"multi_face_direction_bits":17}` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` |
| 2 | 18 | 0 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 2 | 18 | 1 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 0 | 21 | 4 | `minecraft:short_grass` | `minecraft:tall_grass{"upper_block_bit":0}` |
| 0 | 22 | 4 | `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":1}` |
| 0 | 25 | 7 | `minecraft:short_grass` | `minecraft:tall_grass{"upper_block_bit":0}` |
| 0 | 26 | 7 | `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":1}` |


# worldgen comparison — 1-c128_129

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,285
- mismatched: 19
- accuracy: 99.9807%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` | 7 |
| `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` | 5 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` | 3 |
| `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":22}` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":25}` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":19}` | 1 |
| `minecraft:cave_vines{"growing_plant_age":19}` | `minecraft:cave_vines{"growing_plant_age":0}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 63 | 250 | 6 |
| 64 | 252 | 4 |
| 61 | 253 | 3 |
| 62 | 253 | 3 |
| 58 | 255 | 1 |
| 59 | 255 | 1 |
| 60 | 255 | 1 |

- 61 block(s) matched an accepted variant of a block the server itself does not reproduce

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
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
| 1 | 63 | 8 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 3 | 63 | 8 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 0 | 63 | 9 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 4 | 63 | 14 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 1 | 64 | 12 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 0 | 64 | 13 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 3 | 64 | 13 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 3 | 64 | 14 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |


# worldgen comparison — 1-c129_128

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,284
- mismatched: 20
- accuracy: 99.9797%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` | 11 |
| `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":1}` | 3 |
| `minecraft:moss_carpet` | `minecraft:tall_grass{"upper_block_bit":0}` | 2 |
| `minecraft:moss_carpet` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` | 1 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` | 1 |
| `minecraft:short_grass` | `minecraft:tall_grass{"upper_block_bit":0}` | 1 |
| `minecraft:glow_lichen{"multi_face_direction_bits":18}` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 37 | 251 | 5 |
| 36 | 252 | 4 |
| 38 | 252 | 4 |
| 33 | 254 | 2 |
| 34 | 254 | 2 |
| 35 | 255 | 1 |
| 39 | 255 | 1 |
| 59 | 255 | 1 |

- 52 block(s) matched an accepted variant of a block the server itself does not reproduce

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 8 | 33 | 3 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 9 | 33 | 4 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 9 | 34 | 3 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 10 | 34 | 4 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 10 | 35 | 2 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 11 | 36 | 0 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 10 | 36 | 1 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 12 | 36 | 9 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 12 | 36 | 10 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 11 | 37 | 0 | `minecraft:moss_carpet` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` |
| 9 | 37 | 1 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 10 | 37 | 1 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` |
| 13 | 37 | 2 | `minecraft:moss_carpet` | `minecraft:tall_grass{"upper_block_bit":0}` |
| 12 | 37 | 6 | `minecraft:moss_carpet` | `minecraft:tall_grass{"upper_block_bit":0}` |
| 10 | 38 | 0 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 13 | 38 | 2 | `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":1}` |
| 12 | 38 | 6 | `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":1}` |
| 13 | 38 | 8 | `minecraft:short_grass` | `minecraft:tall_grass{"upper_block_bit":0}` |
| 13 | 39 | 8 | `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":1}` |
| 1 | 59 | 0 | `minecraft:glow_lichen{"multi_face_direction_bits":18}` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` |


# worldgen comparison — 1-c129_129

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,300
- mismatched: 4
- accuracy: 99.9959%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` | 2 |
| `minecraft:glow_lichen{"multi_face_direction_bits":8}` | `minecraft:glow_lichen{"multi_face_direction_bits":24}` | 1 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":2}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 17 | 255 | 1 |
| 18 | 255 | 1 |
| 19 | 255 | 1 |
| 56 | 255 | 1 |

- 79 block(s) matched an accepted variant of a block the server itself does not reproduce

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 8 | 17 | 11 | `minecraft:glow_lichen{"multi_face_direction_bits":8}` | `minecraft:glow_lichen{"multi_face_direction_bits":24}` |
| 8 | 18 | 10 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` |
| 8 | 19 | 10 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` |
| 13 | 56 | 15 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":2}` |


