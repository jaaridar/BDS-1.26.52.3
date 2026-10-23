# Golden comparison summary

- golden set: `research/proprietary/bds-1.26.52.3/golden`
- candidate: `capture/golden-1-recheck`
- captures compared: 2
- total blocks: 196,608
- total mismatches: 118

# worldgen comparison — 1-c128_128

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,275
- mismatched: 29
- accuracy: 99.9705%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:tall_grass{"upper_block_bit":1}` | `minecraft:air` | 4 |
| `minecraft:short_grass` | `minecraft:air` | 3 |
| `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` | 2 |
| `minecraft:air` | `minecraft:short_grass` | 2 |
| `minecraft:tall_grass{"upper_block_bit":0}` | `minecraft:short_grass` | 2 |
| `minecraft:moss_carpet` | `minecraft:air` | 2 |
| `minecraft:moss_carpet` | `minecraft:short_grass` | 2 |
| `minecraft:short_grass` | `minecraft:tall_grass{"upper_block_bit":0}` | 2 |
| `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":1}` | 2 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` | 1 |
| `minecraft:glow_lichen{"multi_face_direction_bits":17}` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` | 1 |
| `minecraft:tall_grass{"upper_block_bit":0}` | `minecraft:azalea` | 1 |
| `minecraft:air` | `minecraft:moss_carpet` | 1 |
| `minecraft:tall_grass{"upper_block_bit":0}` | `minecraft:air` | 1 |
| `minecraft:short_grass` | `minecraft:moss_carpet` | 1 |
| `minecraft:azalea` | `minecraft:air` | 1 |
| `minecraft:flowering_azalea` | `minecraft:moss_carpet` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 20 | 245 | 11 |
| 19 | 250 | 6 |
| 12 | 254 | 2 |
| 18 | 254 | 2 |
| 21 | 254 | 2 |
| 25 | 254 | 2 |
| 26 | 254 | 2 |
| 22 | 255 | 1 |
| 24 | 255 | 1 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 11 | 12 | 8 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` |
| 10 | 12 | 9 | `minecraft:glow_lichen{"multi_face_direction_bits":17}` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` |
| 2 | 18 | 0 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 2 | 18 | 1 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 1 | 19 | 0 | `minecraft:tall_grass{"upper_block_bit":0}` | `minecraft:azalea` |
| 0 | 19 | 1 | `minecraft:air` | `minecraft:moss_carpet` |
| 1 | 19 | 1 | `minecraft:air` | `minecraft:short_grass` |
| 2 | 19 | 1 | `minecraft:tall_grass{"upper_block_bit":0}` | `minecraft:air` |
| 0 | 19 | 2 | `minecraft:tall_grass{"upper_block_bit":0}` | `minecraft:short_grass` |
| 1 | 19 | 2 | `minecraft:short_grass` | `minecraft:moss_carpet` |
| 1 | 20 | 0 | `minecraft:tall_grass{"upper_block_bit":1}` | `minecraft:air` |
| 2 | 20 | 1 | `minecraft:tall_grass{"upper_block_bit":1}` | `minecraft:air` |
| 4 | 20 | 1 | `minecraft:moss_carpet` | `minecraft:air` |
| 0 | 20 | 2 | `minecraft:tall_grass{"upper_block_bit":1}` | `minecraft:air` |
| 3 | 20 | 2 | `minecraft:azalea` | `minecraft:air` |
| 0 | 20 | 3 | `minecraft:short_grass` | `minecraft:air` |
| 1 | 20 | 3 | `minecraft:flowering_azalea` | `minecraft:moss_carpet` |
| 3 | 20 | 3 | `minecraft:short_grass` | `minecraft:air` |
| 4 | 20 | 3 | `minecraft:moss_carpet` | `minecraft:air` |
| 2 | 20 | 4 | `minecraft:short_grass` | `minecraft:air` |


# worldgen comparison — 1-c128_130

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,215
- mismatched: 89
- accuracy: 99.9095%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` | 31 |
| `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` | 11 |
| `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` | 9 |
| `minecraft:tuff` | `minecraft:moss_block` | 9 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` | 6 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":25}` | 2 |
| `minecraft:air` | `minecraft:cave_vines_body_with_berries{"growing_plant_age":0}` | 2 |
| `minecraft:cave_vines{"growing_plant_age":22}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":22}` | 1 |
| `minecraft:glow_lichen{"multi_face_direction_bits":8}` | `minecraft:glow_lichen{"multi_face_direction_bits":2}` | 1 |
| `minecraft:cave_vines_head_with_berries{"growing_plant_age":17}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":19}` | 1 |
| `minecraft:cave_vines{"growing_plant_age":20}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":20}` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":19}` | 1 |
| `minecraft:cave_vines_head_with_berries{"growing_plant_age":24}` | `minecraft:air` | 1 |
| `minecraft:cave_vines{"growing_plant_age":23}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":17}` | 1 |
| `minecraft:moss_block` | `minecraft:tuff` | 1 |
| `minecraft:cave_vines{"growing_plant_age":25}` | `minecraft:air` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 61 | 239 | 17 |
| 62 | 239 | 17 |
| 60 | 246 | 10 |
| 63 | 248 | 8 |
| 66 | 249 | 7 |
| 64 | 251 | 5 |
| 65 | 251 | 5 |
| 59 | 252 | 4 |
| 57 | 253 | 3 |
| 58 | 253 | 3 |
| 30 | 254 | 2 |
| 36 | 254 | 2 |
| 84 | 254 | 2 |
| 31 | 255 | 1 |
| 38 | 255 | 1 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 13 | 30 | 13 | `minecraft:cave_vines{"growing_plant_age":22}` | `minecraft:air` |
| 14 | 30 | 13 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":22}` |
| 13 | 31 | 13 | `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` |
| 8 | 36 | 15 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 9 | 36 | 15 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 15 | 38 | 3 | `minecraft:glow_lichen{"multi_face_direction_bits":8}` | `minecraft:glow_lichen{"multi_face_direction_bits":2}` |
| 3 | 57 | 4 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 1 | 57 | 10 | `minecraft:cave_vines_head_with_berries{"growing_plant_age":17}` | `minecraft:air` |
| 4 | 57 | 14 | `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":19}` |
| 1 | 58 | 10 | `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` |
| 2 | 58 | 11 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":25}` |
| 4 | 58 | 14 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 1 | 59 | 10 | `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` |
| 2 | 59 | 11 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 4 | 59 | 14 | `minecraft:air` | `minecraft:cave_vines_body_with_berries{"growing_plant_age":0}` |
| 4 | 59 | 15 | `minecraft:cave_vines{"growing_plant_age":20}` | `minecraft:air` |
| 1 | 60 | 10 | `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` |
| 2 | 60 | 11 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 2 | 60 | 12 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 1 | 60 | 13 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":20}` |


