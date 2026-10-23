# Golden comparison summary

- golden set: `research/proprietary/bds-1.26.52.3/golden`
- candidate: `capture/golden-1-check`
- captures compared: 4
- total blocks: 393,216
- total mismatches: 149

# worldgen comparison — 1-c128_128

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,223
- mismatched: 81
- accuracy: 99.9176%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` | 50 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` | 7 |
| `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` | 5 |
| `minecraft:short_grass` | `minecraft:tall_grass{"upper_block_bit":0}` | 2 |
| `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":1}` | 2 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":24}` | 2 |
| `minecraft:glow_lichen{"multi_face_direction_bits":17}` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` | 1 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":1}` | 1 |
| `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":20}` | 1 |
| `minecraft:cave_vines{"growing_plant_age":23}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":17}` | 1 |
| `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":19}` | 1 |
| `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` | 1 |
| `minecraft:cave_vines{"growing_plant_age":20}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":18}` | 1 |
| `minecraft:cave_vines_body_with_berries{"growing_plant_age":0}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":23}` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":20}` | 1 |
| `minecraft:air` | `minecraft:cave_vines_body_with_berries{"growing_plant_age":0}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 61 | 227 | 29 |
| 62 | 239 | 17 |
| 60 | 242 | 14 |
| 59 | 249 | 7 |
| 58 | 251 | 5 |
| 18 | 254 | 2 |
| 12 | 255 | 1 |
| 13 | 255 | 1 |
| 21 | 255 | 1 |
| 22 | 255 | 1 |
| 25 | 255 | 1 |
| 26 | 255 | 1 |
| 57 | 255 | 1 |

- 22 block(s) matched an accepted variant of a block the server itself does not reproduce

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 10 | 12 | 9 | `minecraft:glow_lichen{"multi_face_direction_bits":17}` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` |
| 10 | 13 | 8 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":1}` |
| 2 | 18 | 0 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 2 | 18 | 1 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 0 | 21 | 4 | `minecraft:short_grass` | `minecraft:tall_grass{"upper_block_bit":0}` |
| 0 | 22 | 4 | `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":1}` |
| 0 | 25 | 7 | `minecraft:short_grass` | `minecraft:tall_grass{"upper_block_bit":0}` |
| 0 | 26 | 7 | `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":1}` |
| 13 | 57 | 0 | `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":20}` |
| 3 | 58 | 0 | `minecraft:cave_vines{"growing_plant_age":23}` | `minecraft:air` |
| 6 | 58 | 0 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":17}` |
| 13 | 58 | 0 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 8 | 58 | 2 | `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":19}` |
| 11 | 58 | 2 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":24}` |
| 3 | 59 | 0 | `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` |
| 6 | 59 | 0 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 12 | 59 | 0 | `minecraft:cave_vines{"growing_plant_age":20}` | `minecraft:air` |
| 13 | 59 | 0 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 8 | 59 | 2 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 11 | 59 | 2 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |


# worldgen comparison — 1-c128_129

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,303
- mismatched: 1
- accuracy: 99.9990%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":32}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 13 | 255 | 1 |

- 57 block(s) matched an accepted variant of a block the server itself does not reproduce

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 12 | 13 | 10 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":32}` |


# worldgen comparison — 1-c129_128

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,239
- mismatched: 65
- accuracy: 99.9339%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` | 24 |
| `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` | 13 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` | 5 |
| `minecraft:moss_block` | `minecraft:tuff` | 4 |
| `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` | 3 |
| `minecraft:cave_vines{"growing_plant_age":23}` | `minecraft:air` | 2 |
| `minecraft:tuff` | `minecraft:moss_block` | 2 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":22}` | 1 |
| `minecraft:cave_vines{"growing_plant_age":22}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":17}` | 1 |
| `minecraft:cave_vines{"growing_plant_age":17}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":20}` | 1 |
| `minecraft:cave_vines_head_with_berries{"growing_plant_age":21}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":19}` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":23}` | 1 |
| `minecraft:glow_lichen{"multi_face_direction_bits":18}` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` | 1 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":24}` | 1 |
| `minecraft:cave_vines{"growing_plant_age":19}` | `minecraft:air` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 60 | 237 | 19 |
| 59 | 243 | 13 |
| 58 | 246 | 10 |
| 57 | 249 | 7 |
| 61 | 249 | 7 |
| 56 | 251 | 5 |
| 55 | 253 | 3 |
| 54 | 255 | 1 |

- 52 block(s) matched an accepted variant of a block the server itself does not reproduce

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 13 | 54 | 1 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":22}` |
| 12 | 55 | 1 | `minecraft:cave_vines{"growing_plant_age":22}` | `minecraft:air` |
| 13 | 55 | 1 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 9 | 55 | 2 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":17}` |
| 12 | 56 | 1 | `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` |
| 13 | 56 | 1 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 8 | 56 | 2 | `minecraft:cave_vines{"growing_plant_age":17}` | `minecraft:air` |
| 9 | 56 | 2 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 12 | 56 | 2 | `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":20}` |
| 8 | 57 | 2 | `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` |
| 9 | 57 | 2 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 11 | 57 | 2 | `minecraft:cave_vines_head_with_berries{"growing_plant_age":21}` | `minecraft:air` |
| 12 | 57 | 2 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 12 | 57 | 3 | `minecraft:cave_vines{"growing_plant_age":23}` | `minecraft:air` |
| 13 | 57 | 4 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 14 | 57 | 4 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 5 | 58 | 0 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":19}` |
| 14 | 58 | 1 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 8 | 58 | 2 | `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` |
| 13 | 58 | 2 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |


# worldgen comparison — 1-c129_129

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,302
- mismatched: 2
- accuracy: 99.9980%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:glow_lichen{"multi_face_direction_bits":9}` | `minecraft:glow_lichen{"multi_face_direction_bits":17}` | 1 |
| `minecraft:glow_lichen{"multi_face_direction_bits":17}` | `minecraft:glow_lichen{"multi_face_direction_bits":24}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 17 | 255 | 1 |
| 18 | 255 | 1 |

- 5 block(s) matched an accepted variant of a block the server itself does not reproduce

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 8 | 17 | 11 | `minecraft:glow_lichen{"multi_face_direction_bits":9}` | `minecraft:glow_lichen{"multi_face_direction_bits":17}` |
| 8 | 18 | 10 | `minecraft:glow_lichen{"multi_face_direction_bits":17}` | `minecraft:glow_lichen{"multi_face_direction_bits":24}` |


