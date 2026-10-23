# Golden comparison summary

- golden set: `research/proprietary/bds-1.26.52.3/golden`
- candidate: `capture/golden-1-recheck`
- captures compared: 3
- total blocks: 294,912
- total mismatches: 7

# worldgen comparison — 1-c0_0

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,301
- mismatched: 3
- accuracy: 99.9969%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:glow_lichen{"multi_face_direction_bits":4}` | `minecraft:air` | 2 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":4}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 56 | 254 | 2 |
| 28 | 255 | 1 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 6 | 28 | 13 | `minecraft:glow_lichen{"multi_face_direction_bits":4}` | `minecraft:air` |
| 8 | 56 | 11 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":4}` |
| 7 | 56 | 12 | `minecraft:glow_lichen{"multi_face_direction_bits":4}` | `minecraft:air` |


# worldgen comparison — 1-c0_1

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,302
- mismatched: 2
- accuracy: 99.9980%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:glow_lichen{"multi_face_direction_bits":2}` | `minecraft:air` | 1 |
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 54 | 255 | 1 |
| 55 | 255 | 1 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 2 | 54 | 4 | `minecraft:glow_lichen{"multi_face_direction_bits":2}` | `minecraft:air` |
| 3 | 55 | 3 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":8}` |


# worldgen comparison — 1-c1_1

- volume: `16 x 384 x 16` = 98,304 blocks
- matched: 98,302
- mismatched: 2
- accuracy: 99.9980%

## Most common disagreements

| expected (BDS) | got (candidate) | blocks |
|---|---|---|
| `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":2}` | 1 |
| `minecraft:glow_lichen{"multi_face_direction_bits":2}` | `minecraft:air` | 1 |

## Worst layers

| y | matched | mismatched |
|---|---|---|
| 36 | 255 | 1 |
| 37 | 255 | 1 |

## First mismatches

| x | y | z | expected | got |
|---|---|---|---|---|
| 8 | 36 | 2 | `minecraft:air` | `minecraft:glow_lichen{"multi_face_direction_bits":2}` |
| 8 | 37 | 3 | `minecraft:glow_lichen{"multi_face_direction_bits":2}` | `minecraft:air` |


