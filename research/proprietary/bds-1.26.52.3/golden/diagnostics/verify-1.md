# Golden comparison summary

- golden set: `research/proprietary/bds-1.26.52.3/golden`
- candidate: `capture/golden-1-recheck`
- captures compared: 2
- total blocks: 196,608
- total mismatches: 59

# worldgen comparison — 1-c128_128

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,302
- mismatched: 2
- accuracy: 99.9980%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:glow_lichen{"multi_face_direction_bits":17}` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` | 1 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":1}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 12 | 255 | 1 |
| 13 | 255 | 1 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 10 | 12 | 9 | `minecraft:glow_lichen{"multi_face_direction_bits":17}` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` |
| 10 | 13 | 8 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":1}` |


# worldgen comparison — 1-c128_130

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,247
- mismatched: 57
- accuracy: 99.9420%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` | 15 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` | 10 |
| `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` | 8 |
| `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` | 5 |
| `minecraft:air` | `minecraft:cave_vines_body_with_berries{"growing_plant_age":0}` | 2 |
| `minecraft:tuff` | `minecraft:moss_block` | 2 |
| `minecraft:glow_lichen{"multi_face_direction_bits":2}` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` | 1 |
| `minecraft:cave_vines_head_with_berries{"growing_plant_age":17}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":17}` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":19}` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":25}` | 1 |
| `minecraft:cave_vines_head_with_berries{"growing_plant_age":24}` | `minecraft:air` | 1 |
| `minecraft:cave_vines{"growing_plant_age":23}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":24}` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":23}` | 1 |
| `minecraft:cave_vines{"growing_plant_age":25}` | `minecraft:air` | 1 |
| `minecraft:moss_block` | `minecraft:stone` | 1 |
| `minecraft:glow_lichen{"multi_face_direction_bits":8}` | `minecraft:water{"liquid_depth":0}` | 1 |
| `minecraft:water{"liquid_depth":0}` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` | 1 |
| `minecraft:water{"liquid_depth":0}` | `minecraft:glow_lichen{"multi_face_direction_bits":32}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 64 | 245 | 11 |
| 63 | 246 | 10 |
| 62 | 248 | 8 |
| 61 | 250 | 6 |
| 65 | 251 | 5 |
| 66 | 251 | 5 |
| 60 | 253 | 3 |
| 59 | 254 | 2 |
| 84 | 254 | 2 |
| 85 | 254 | 2 |
| 38 | 255 | 1 |
| 57 | 255 | 1 |
| 58 | 255 | 1 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 15 | 38 | 3 | `minecraft:glow_lichen{"multi_face_direction_bits":2}` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` |
| 1 | 57 | 10 | `minecraft:cave_vines_head_with_berries{"growing_plant_age":17}` | `minecraft:air` |
| 1 | 58 | 10 | `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` |
| 0 | 59 | 7 | `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":17}` |
| 1 | 59 | 10 | `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` |
| 3 | 60 | 1 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":19}` |
| 0 | 60 | 7 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 1 | 60 | 10 | `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` |
| 2 | 61 | 1 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":25}` |
| 3 | 61 | 1 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 3 | 61 | 3 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 0 | 61 | 7 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 2 | 61 | 8 | `minecraft:cave_vines_head_with_berries{"growing_plant_age":24}` | `minecraft:air` |
| 1 | 61 | 10 | `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` |
| 2 | 62 | 1 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 3 | 62 | 1 | `minecraft:air` | `minecraft:cave_vines_body_with_berries{"growing_plant_age":0}` |
| 2 | 62 | 2 | `minecraft:cave_vines{"growing_plant_age":23}` | `minecraft:air` |
| 1 | 62 | 3 | `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":24}` |
| 0 | 62 | 7 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 2 | 62 | 8 | `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` |


