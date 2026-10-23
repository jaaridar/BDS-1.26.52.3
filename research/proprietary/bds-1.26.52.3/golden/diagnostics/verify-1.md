# Golden comparison summary

- golden set: `research/proprietary/bds-1.26.52.3/golden`
- candidate: `capture/golden-1-recheck`
- captures compared: 13
- total blocks: 1,277,952
- total mismatches: 1,046

# worldgen comparison — 1-c128_128

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,229
- mismatched: 75
- accuracy: 99.9237%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` | 50 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` | 7 |
| `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` | 3 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":24}` | 2 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` | 1 |
| `minecraft:glow_lichen{"multi_face_direction_bits":17}` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` | 1 |
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
| 12 | 254 | 2 |
| 57 | 255 | 1 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 11 | 12 | 8 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` |
| 10 | 12 | 9 | `minecraft:glow_lichen{"multi_face_direction_bits":17}` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` |
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
| 13 | 59 | 3 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":18}` |
| 3 | 60 | 0 | `minecraft:cave_vines_body_with_berries{"growing_plant_age":0}` | `minecraft:air` |
| 10 | 60 | 1 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 11 | 60 | 1 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 13 | 60 | 1 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 15 | 60 | 1 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |


# worldgen comparison — 1-c128_130

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,299
- mismatched: 5
- accuracy: 99.9949%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:glow_lichen{"multi_face_direction_bits":2}` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` | 1 |
| `minecraft:water{"liquid_depth":0}` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` | 1 |
| `minecraft:glow_lichen{"multi_face_direction_bits":32}` | `minecraft:water{"liquid_depth":0}` | 1 |
| `minecraft:glow_lichen{"multi_face_direction_bits":8}` | `minecraft:water{"liquid_depth":0}` | 1 |
| `minecraft:water{"liquid_depth":0}` | `minecraft:glow_lichen{"multi_face_direction_bits":32}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 84 | 254 | 2 |
| 85 | 254 | 2 |
| 38 | 255 | 1 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 15 | 38 | 3 | `minecraft:glow_lichen{"multi_face_direction_bits":2}` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` |
| 11 | 84 | 1 | `minecraft:water{"liquid_depth":0}` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` |
| 15 | 84 | 7 | `minecraft:glow_lichen{"multi_face_direction_bits":32}` | `minecraft:water{"liquid_depth":0}` |
| 11 | 85 | 2 | `minecraft:glow_lichen{"multi_face_direction_bits":8}` | `minecraft:water{"liquid_depth":0}` |
| 15 | 85 | 8 | `minecraft:water{"liquid_depth":0}` | `minecraft:glow_lichen{"multi_face_direction_bits":32}` |


# worldgen comparison — 1-c126_127

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,304
- mismatched: 0
- accuracy: 100.0000%

**Result: exact match — every compared block agrees.**

# worldgen comparison — 1-c126_131

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 97,919
- mismatched: 385
- accuracy: 99.6084%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` | 85 |
| `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` | 40 |
| `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` | 36 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` | 31 |
| `minecraft:moss_block` | `minecraft:tuff` | 29 |
| `minecraft:tuff` | `minecraft:moss_block` | 28 |
| `minecraft:air` | `minecraft:short_grass` | 11 |
| `minecraft:cave_vines_body_with_berries{"growing_plant_age":0}` | `minecraft:air` | 8 |
| `minecraft:cave_vines{"growing_plant_age":25}` | `minecraft:air` | 7 |
| `minecraft:cave_vines{"growing_plant_age":20}` | `minecraft:air` | 7 |
| `minecraft:air` | `minecraft:moss_carpet` | 6 |
| `minecraft:air` | `minecraft:cave_vines_body_with_berries{"growing_plant_age":0}` | 6 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":24}` | 5 |
| `minecraft:cave_vines{"growing_plant_age":17}` | `minecraft:air` | 5 |
| `minecraft:cave_vines{"growing_plant_age":21}` | `minecraft:air` | 5 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":21}` | 5 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":20}` | 4 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":17}` | 4 |
| `minecraft:cave_vines{"growing_plant_age":22}` | `minecraft:air` | 4 |
| `minecraft:cave_vines_head_with_berries{"growing_plant_age":21}` | `minecraft:air` | 3 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 23 | 226 | 30 |
| 34 | 230 | 26 |
| 36 | 230 | 26 |
| 57 | 231 | 25 |
| 35 | 232 | 24 |
| 24 | 236 | 20 |
| 59 | 238 | 18 |
| 33 | 239 | 17 |
| 38 | 241 | 15 |
| 56 | 241 | 15 |
| 58 | 242 | 14 |
| 37 | 243 | 13 |
| 60 | 244 | 12 |
| 22 | 245 | 11 |
| 41 | 245 | 11 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 15 | 20 | 12 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 15 | 21 | 12 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 6 | 22 | 9 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 7 | 22 | 9 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 8 | 22 | 9 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 6 | 22 | 10 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 7 | 22 | 10 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 8 | 22 | 10 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 7 | 22 | 11 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 8 | 22 | 11 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 7 | 22 | 12 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 8 | 22 | 12 | `minecraft:tuff` | `minecraft:moss_block` |
| 15 | 22 | 12 | `minecraft:clay` | `minecraft:tuff` |
| 6 | 23 | 9 | `minecraft:air` | `minecraft:short_grass` |
| 7 | 23 | 9 | `minecraft:air` | `minecraft:short_grass` |
| 8 | 23 | 9 | `minecraft:air` | `minecraft:moss_carpet` |
| 6 | 23 | 10 | `minecraft:air` | `minecraft:moss_carpet` |
| 8 | 23 | 10 | `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":0}` |
| 6 | 23 | 11 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 8 | 23 | 11 | `minecraft:air` | `minecraft:short_grass` |


# worldgen comparison — 1-c126_132

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,271
- mismatched: 33
- accuracy: 99.9664%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` | 11 |
| `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` | 5 |
| `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` | 4 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` | 3 |
| `minecraft:cave_vines{"growing_plant_age":24}` | `minecraft:air` | 2 |
| `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":17}` | 1 |
| `minecraft:cave_vines_head_with_berries{"growing_plant_age":18}` | `minecraft:air` | 1 |
| `minecraft:cave_vines{"growing_plant_age":21}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":18}` | 1 |
| `minecraft:cave_vines{"growing_plant_age":20}` | `minecraft:air` | 1 |
| `minecraft:cave_vines{"growing_plant_age":23}` | `minecraft:air` | 1 |
| `minecraft:cave_vines_body_with_berries{"growing_plant_age":0}` | `minecraft:air` | 1 |
| `minecraft:glow_lichen{"multi_face_direction_bits":16}` | `minecraft:glow_lichen{"multi_face_direction_bits":2}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 34 | 246 | 10 |
| 32 | 250 | 6 |
| 35 | 250 | 6 |
| 33 | 251 | 5 |
| 36 | 253 | 3 |
| 31 | 255 | 1 |
| 37 | 255 | 1 |
| 41 | 255 | 1 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 9 | 31 | 0 | `minecraft:air` | `minecraft:cave_vines_head_with_berries{"growing_plant_age":17}` |
| 9 | 32 | 0 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 5 | 32 | 1 | `minecraft:cave_vines_head_with_berries{"growing_plant_age":18}` | `minecraft:air` |
| 6 | 32 | 1 | `minecraft:cave_vines{"growing_plant_age":21}` | `minecraft:air` |
| 8 | 32 | 1 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":18}` |
| 12 | 32 | 1 | `minecraft:cave_vines{"growing_plant_age":24}` | `minecraft:air` |
| 6 | 32 | 4 | `minecraft:cave_vines{"growing_plant_age":20}` | `minecraft:air` |
| 9 | 33 | 0 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 12 | 33 | 0 | `minecraft:cave_vines{"growing_plant_age":23}` | `minecraft:air` |
| 8 | 33 | 1 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` |
| 12 | 33 | 1 | `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` |
| 13 | 33 | 2 | `minecraft:cave_vines{"growing_plant_age":24}` | `minecraft:air` |
| 6 | 34 | 0 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 12 | 34 | 0 | `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` |
| 6 | 34 | 1 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 7 | 34 | 1 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 12 | 34 | 1 | `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` |
| 5 | 34 | 2 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 6 | 34 | 2 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` |
| 13 | 34 | 2 | `minecraft:cave_vines_body_with_berries{"growing_plant_age":0}` | `minecraft:air` |


# worldgen comparison — 1-c127_131

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,176
- mismatched: 128
- accuracy: 99.8698%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` | 26 |
| `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` | 11 |
| `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` | 11 |
| `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` | 8 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` | 6 |
| `minecraft:cave_vines_body_with_berries{"growing_plant_age":0}` | `minecraft:air` | 5 |
| `minecraft:cave_vines{"growing_plant_age":23}` | `minecraft:air` | 4 |
| `minecraft:cave_vines{"growing_plant_age":22}` | `minecraft:air` | 3 |
| `minecraft:big_dripleaf{"big_dripleaf_head":1,"big_dripleaf_tilt":"none","minecraft:cardinal_direction":"south"}` | `minecraft:water{"liquid_depth":0}` | 2 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":32}` | 2 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":24}` | 2 |
| `minecraft:cave_vines{"growing_plant_age":24}` | `minecraft:air` | 2 |
| `minecraft:cave_vines{"growing_plant_age":17}` | `minecraft:air` | 2 |
| `minecraft:glow_lichen{"multi_face_direction_bits":2}` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` | 2 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":23}` | 2 |
| `minecraft:air` | `minecraft:cave_vines_body_with_berries{"growing_plant_age":0}` | 2 |
| `minecraft:glow_lichen{"multi_face_direction_bits":2}` | `minecraft:air` | 2 |
| `minecraft:water{"liquid_depth":0}` | `minecraft:glow_lichen{"multi_face_direction_bits":2}` | 2 |
| `minecraft:glow_lichen{"multi_face_direction_bits":2}` | `minecraft:water{"liquid_depth":0}` | 2 |
| `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` | 2 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 37 | 245 | 11 |
| 63 | 248 | 8 |
| 22 | 249 | 7 |
| 64 | 249 | 7 |
| 19 | 250 | 6 |
| 21 | 250 | 6 |
| 62 | 250 | 6 |
| 36 | 251 | 5 |
| 38 | 251 | 5 |
| 43 | 251 | 5 |
| 20 | 252 | 4 |
| 42 | 252 | 4 |
| 57 | 252 | 4 |
| 23 | 253 | 3 |
| 41 | 253 | 3 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 8 | 18 | 9 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 9 | 18 | 10 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 9 | 19 | 2 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 9 | 19 | 3 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 9 | 19 | 5 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 8 | 19 | 9 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 9 | 19 | 10 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 10 | 19 | 10 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 8 | 20 | 9 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 9 | 20 | 10 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 10 | 20 | 10 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 10 | 20 | 11 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 0 | 21 | 4 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 8 | 21 | 9 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:water{"liquid_depth":0}` |
| 9 | 21 | 10 | `minecraft:water{"liquid_depth":0}` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 10 | 21 | 10 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 10 | 21 | 11 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 0 | 21 | 12 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 9 | 22 | 4 | `minecraft:water{"liquid_depth":0}` | `minecraft:big_dripleaf{"big_dripleaf_head":1,"big_dripleaf_tilt":"none","minecraft:cardinal_direction":"south"}` |
| 9 | 22 | 5 | `minecraft:big_dripleaf{"big_dripleaf_head":1,"big_dripleaf_tilt":"none","minecraft:cardinal_direction":"south"}` | `minecraft:water{"liquid_depth":0}` |


# worldgen comparison — 1-c128_129

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,302
- mismatched: 2
- accuracy: 99.9980%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:glow_lichen{"multi_face_direction_bits":32}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":1}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 12 | 255 | 1 |
| 14 | 255 | 1 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 12 | 12 | 9 | `minecraft:glow_lichen{"multi_face_direction_bits":32}` | `minecraft:air` |
| 13 | 14 | 9 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":1}` |


# worldgen comparison — 1-c128_131

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,301
- mismatched: 3
- accuracy: 99.9969%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:glow_lichen{"multi_face_direction_bits":2}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":4}` | 1 |
| `minecraft:water{"liquid_depth":0}` | `minecraft:glow_lichen{"multi_face_direction_bits":1}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 55 | 255 | 1 |
| 56 | 255 | 1 |
| 72 | 255 | 1 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 14 | 55 | 9 | `minecraft:glow_lichen{"multi_face_direction_bits":2}` | `minecraft:air` |
| 14 | 56 | 7 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":4}` |
| 5 | 72 | 15 | `minecraft:water{"liquid_depth":0}` | `minecraft:glow_lichen{"multi_face_direction_bits":1}` |


# worldgen comparison — 1-c129_128

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,218
- mismatched: 86
- accuracy: 99.9125%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:moss_block` | 25 |
| `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` | 14 |
| `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":0}` | 5 |
| `minecraft:moss_block` | `minecraft:tuff` | 4 |
| `minecraft:cave_vines{"growing_plant_age":0}` | `minecraft:air` | 3 |
| `minecraft:short_grass` | `minecraft:moss_carpet` | 2 |
| `minecraft:short_grass` | `minecraft:air` | 2 |
| `minecraft:moss_carpet` | `minecraft:short_grass` | 2 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` | 2 |
| `minecraft:air` | `minecraft:short_grass` | 2 |
| `minecraft:cave_vines{"growing_plant_age":23}` | `minecraft:air` | 2 |
| `minecraft:tuff` | `minecraft:moss_block` | 2 |
| `minecraft:moss_carpet` | `minecraft:azalea` | 1 |
| `minecraft:azalea` | `minecraft:short_grass` | 1 |
| `minecraft:moss_carpet` | `minecraft:tall_grass{"upper_block_bit":0}` | 1 |
| `minecraft:tall_grass{"upper_block_bit":0}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":1}` | 1 |
| `minecraft:glow_lichen{"multi_face_direction_bits":24}` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` | 1 |
| `minecraft:tall_grass{"upper_block_bit":1}` | `minecraft:air` | 1 |
| `minecraft:azalea` | `minecraft:air` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 60 | 237 | 19 |
| 59 | 242 | 14 |
| 58 | 246 | 10 |
| 37 | 247 | 9 |
| 61 | 248 | 8 |
| 57 | 249 | 7 |
| 56 | 251 | 5 |
| 35 | 252 | 4 |
| 36 | 252 | 4 |
| 55 | 253 | 3 |
| 34 | 255 | 1 |
| 38 | 255 | 1 |
| 54 | 255 | 1 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 9 | 34 | 4 | `minecraft:moss_carpet` | `minecraft:azalea` |
| 9 | 35 | 2 | `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 9 | 35 | 3 | `minecraft:azalea` | `minecraft:short_grass` |
| 10 | 35 | 3 | `minecraft:moss_carpet` | `minecraft:tall_grass{"upper_block_bit":0}` |
| 10 | 35 | 4 | `minecraft:short_grass` | `minecraft:moss_carpet` |
| 9 | 36 | 2 | `minecraft:short_grass` | `minecraft:air` |
| 10 | 36 | 2 | `minecraft:tall_grass{"upper_block_bit":0}` | `minecraft:air` |
| 10 | 36 | 3 | `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":1}` |
| 11 | 36 | 5 | `minecraft:moss_carpet` | `minecraft:short_grass` |
| 10 | 37 | 1 | `minecraft:glow_lichen{"multi_face_direction_bits":24}` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` |
| 9 | 37 | 2 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":16}` |
| 10 | 37 | 2 | `minecraft:tall_grass{"upper_block_bit":1}` | `minecraft:air` |
| 13 | 37 | 3 | `minecraft:short_grass` | `minecraft:air` |
| 14 | 37 | 3 | `minecraft:azalea` | `minecraft:air` |
| 13 | 37 | 4 | `minecraft:air` | `minecraft:short_grass` |
| 14 | 37 | 4 | `minecraft:short_grass` | `minecraft:azalea` |
| 12 | 37 | 9 | `minecraft:moss_carpet` | `minecraft:short_grass` |
| 12 | 37 | 10 | `minecraft:short_grass` | `minecraft:moss_carpet` |
| 15 | 38 | 4 | `minecraft:air` | `minecraft:short_grass` |
| 13 | 54 | 1 | `minecraft:air` | `minecraft:cave_vines{"growing_plant_age":22}` |


# worldgen comparison — 1-c129_129

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,198
- mismatched: 106
- accuracy: 99.8922%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` | 22 |
| `minecraft:short_grass` | `minecraft:moss_carpet` | 7 |
| `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` | 6 |
| `minecraft:water{"liquid_depth":0}` | `minecraft:clay` | 6 |
| `minecraft:air` | `minecraft:short_grass` | 5 |
| `minecraft:clay` | `minecraft:moss_block` | 4 |
| `minecraft:moss_carpet` | `minecraft:air` | 3 |
| `minecraft:water{"liquid_depth":0}` | `minecraft:moss_block` | 3 |
| `minecraft:moss_carpet` | `minecraft:short_grass` | 3 |
| `minecraft:air` | `minecraft:tall_grass{"upper_block_bit":1}` | 3 |
| `minecraft:tall_grass{"upper_block_bit":1}` | `minecraft:air` | 3 |
| `minecraft:glow_lichen{"multi_face_direction_bits":16}` | `minecraft:air` | 2 |
| `minecraft:tuff` | `minecraft:clay` | 2 |
| `minecraft:moss_block` | `minecraft:clay` | 2 |
| `minecraft:flowering_azalea` | `minecraft:air` | 2 |
| `minecraft:air` | `minecraft:small_dripleaf_block{"minecraft:cardinal_direction":"south","upper_block_bit":0}` | 2 |
| `minecraft:air` | `minecraft:small_dripleaf_block{"minecraft:cardinal_direction":"south","upper_block_bit":1}` | 2 |
| `minecraft:short_grass` | `minecraft:tall_grass{"upper_block_bit":0}` | 2 |
| `minecraft:glow_lichen{"multi_face_direction_bits":9}` | `minecraft:glow_lichen{"multi_face_direction_bits":24}` | 1 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":4}` | 1 |

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
| 18 | 254 | 2 |
| 19 | 254 | 2 |
| 28 | 254 | 2 |
| 38 | 254 | 2 |
| 59 | 254 | 2 |
| 17 | 255 | 1 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 8 | 17 | 11 | `minecraft:glow_lichen{"multi_face_direction_bits":9}` | `minecraft:glow_lichen{"multi_face_direction_bits":24}` |
| 8 | 18 | 10 | `minecraft:glow_lichen{"multi_face_direction_bits":16}` | `minecraft:air` |
| 8 | 18 | 12 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":4}` |
| 8 | 19 | 10 | `minecraft:glow_lichen{"multi_face_direction_bits":16}` | `minecraft:air` |
| 8 | 19 | 12 | `minecraft:vine{"vine_direction_bits":1}` | `minecraft:glow_lichen{"multi_face_direction_bits":4}` |
| 3 | 26 | 7 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 3 | 27 | 9 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 3 | 28 | 9 | `minecraft:tuff` | `minecraft:clay` |
| 5 | 28 | 10 | `minecraft:tuff` | `minecraft:clay` |
| 4 | 29 | 4 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 6 | 29 | 7 | `minecraft:clay` | `minecraft:tuff` |
| 3 | 29 | 9 | `minecraft:moss_block` | `minecraft:clay` |
| 3 | 30 | 9 | `minecraft:azalea` | `minecraft:air` |
| 2 | 30 | 11 | `minecraft:moss_carpet` | `minecraft:air` |
| 1 | 30 | 12 | `minecraft:flowering_azalea` | `minecraft:air` |
| 11 | 31 | 7 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 12 | 31 | 8 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 11 | 31 | 9 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 3 | 31 | 11 | `minecraft:moss_carpet` | `minecraft:air` |
| 12 | 31 | 11 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |


# worldgen comparison — 1-c130_126

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,302
- mismatched: 2
- accuracy: 99.9980%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":4}` | 1 |
| `minecraft:glow_lichen{"multi_face_direction_bits":4}` | `minecraft:air` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 25 | 255 | 1 |
| 26 | 255 | 1 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 5 | 25 | 6 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":4}` |
| 6 | 26 | 6 | `minecraft:glow_lichen{"multi_face_direction_bits":4}` | `minecraft:air` |


# worldgen comparison — 1-c131_126

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,304
- mismatched: 0
- accuracy: 100.0000%

**Result: exact match — every compared block agrees.**

# worldgen comparison — 1-c131_130

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,083
- mismatched: 221
- accuracy: 99.7752%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` | 48 |
| `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` | 45 |
| `minecraft:moss_block` | `minecraft:deepslate{"pillar_axis":"y"}` | 11 |
| `minecraft:moss_carpet` | `minecraft:air` | 7 |
| `minecraft:short_grass` | `minecraft:air` | 7 |
| `minecraft:lava{"liquid_depth":6}` | `minecraft:air` | 7 |
| `minecraft:lava{"liquid_depth":4}` | `minecraft:air` | 6 |
| `minecraft:water{"liquid_depth":0}` | `minecraft:moss_block` | 5 |
| `minecraft:air` | `minecraft:short_grass` | 5 |
| `minecraft:clay` | `minecraft:moss_block` | 4 |
| `minecraft:short_grass` | `minecraft:moss_carpet` | 4 |
| `minecraft:tuff` | `minecraft:clay` | 3 |
| `minecraft:moss_block` | `minecraft:water{"liquid_depth":0}` | 3 |
| `minecraft:moss_block` | `minecraft:clay` | 3 |
| `minecraft:stone` | `minecraft:water{"liquid_depth":0}` | 3 |
| `minecraft:tall_grass{"upper_block_bit":1}` | `minecraft:air` | 3 |
| `minecraft:lava{"liquid_depth":2}` | `minecraft:air` | 3 |
| `minecraft:water{"liquid_depth":0}` | `minecraft:small_dripleaf_block{"minecraft:cardinal_direction":"north","upper_block_bit":0}` | 2 |
| `minecraft:big_dripleaf{"big_dripleaf_head":1,"big_dripleaf_tilt":"none","minecraft:cardinal_direction":"north"}` | `minecraft:water{"liquid_depth":0}` | 2 |
| `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:water{"liquid_depth":0}` | 2 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 38 | 202 | 54 |
| 37 | 215 | 41 |
| 36 | 222 | 34 |
| 35 | 226 | 30 |
| 33 | 231 | 25 |
| 34 | 234 | 22 |
| 39 | 249 | 7 |
| 32 | 253 | 3 |
| 57 | 254 | 2 |
| 31 | 255 | 1 |
| 40 | 255 | 1 |
| 41 | 255 | 1 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 10 | 31 | 9 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 10 | 32 | 4 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 11 | 32 | 4 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 11 | 32 | 5 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 6 | 33 | 0 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 7 | 33 | 0 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 5 | 33 | 1 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 7 | 33 | 1 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 8 | 33 | 1 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 6 | 33 | 2 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 7 | 33 | 2 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 10 | 33 | 2 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 8 | 33 | 3 | `minecraft:deepslate{"pillar_axis":"y"}` | `minecraft:clay` |
| 9 | 33 | 3 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 11 | 33 | 3 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 3 | 33 | 4 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 5 | 33 | 4 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 6 | 33 | 4 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 4 | 33 | 5 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |
| 5 | 33 | 5 | `minecraft:clay` | `minecraft:deepslate{"pillar_axis":"y"}` |


