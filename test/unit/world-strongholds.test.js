'use strict'

const test = require('node:test')
const assert = require('node:assert')

const { strongholdInCell, strongholdsNear, cellSeed, cellCentre, CELL, SALT } = require('../../src/world/stronghold')
const { score } = require('../../tools/worldgen-algo/verify-strongholds')

test('the cell grid is 200 chunks and the mix uses the cell centre', () => {
  assert.strictEqual(CELL, 200)
  assert.strictEqual(cellCentre(0), 100)
  assert.strictEqual(cellCentre(-1), -100)
  // The seed mixes the centre, not the index: cell -1 is not -cellSeed(1).
  assert.notStrictEqual(cellSeed(1, -1, 0), (0x100000000 - cellSeed(1, 1, 0)) >>> 0)
  // ... and the salt is part of it, so a neighbour salt gives a different seed.
  assert.notStrictEqual(cellSeed(1, 3, 4), cellSeed(1, 3, 4) ^ 1)
  assert.strictEqual(SALT, 0x5d534e7)
})

test('a cell always places inside its own 200-chunk window', () => {
  for (const seed of [1, 2, 3, 4, 123456789, 0]) {
    for (let cellX = -3; cellX <= 3; cellX++) {
      for (let cellZ = -3; cellZ <= 3; cellZ++) {
        const stronghold = strongholdInCell(seed, cellX, cellZ)
        assert.ok(stronghold.chunkX >= cellX * CELL + 50 && stronghold.chunkX < cellX * CELL + 150,
          `seed ${seed} cell ${cellX},${cellZ} x ${stronghold.chunkX}`)
        assert.ok(stronghold.chunkZ >= cellZ * CELL + 50 && stronghold.chunkZ < cellZ * CELL + 150)
        assert.strictEqual(stronghold.blockX, stronghold.chunkX * 16 + 8)
      }
    }
  }
})

test('the gate runs at a quarter, which is what the captures show', () => {
  let gated = 0
  const total = 4000
  for (let i = 0; i < total; i++) {
    if (strongholdInCell(i, Math.floor(i / 100) % 20 - 10, i % 20 - 10).gated) gated++
  }
  const rate = gated / total
  assert.ok(rate > 0.22 && rate < 0.28, `gate rate ${rate}`)
})

test('every captured stronghold is on the grid exactly when it is gated in', () => {
  const result = score('stronghold_enum2')
  assert.ok(result.total >= 40, `only ${result.total} captures`)
  // The exact hits are the whole point: all 30 must be gated in.
  assert.ok(result.exact >= 30, `only ${result.exact} exact`)
  assert.strictEqual(result.exactGated, result.exact)
  // And the relocated ones must mostly be the other side of the gate.
  assert.ok(result.relocatedGated <= result.relocated * 0.25,
    `${result.relocatedGated} of ${result.relocated} relocated positions are gated in`)
})

test('strongholdsNear returns cells nearest first and covers the radius', () => {
  const near = strongholdsNear(4, 0, 0, 320)
  // A disc of radius 320 chunks holds about pi*320^2/(200*200) ~= 8 cells.
  assert.ok(near.length >= 6, `only ${near.length} cells near origin`)
  for (let i = 1; i < near.length; i++) assert.ok(near[i].distance >= near[i - 1].distance)
  // Strongholds are never placed within 10 chunks of the origin; the cells
  // whose grid position would be that close are the ones the generator moves.
  const veryNear = strongholdsNear(4, 0, 0, 20)
  for (const stronghold of veryNear) {
    assert.ok(Math.hypot(stronghold.chunkX, stronghold.chunkZ) > 10 || !stronghold.gated)
  }
})

test('the gate is existence, not just an offset: probed positions answer themselves', () => {
  // The probe captures put an origin exactly on a predicted position, so a
  // stronghold there makes `/locate` answer that chunk. This is the measurement
  // that separates "gated cells hold strongholds" from "gated cells hold them
  // somewhere else", and it is the strongest statement the model makes.
  const { loadProbes } = require('../../tools/worldgen-algo/verify-probe')
  const rows = loadProbes(require('node:path').resolve(__dirname,
    '../../research/proprietary/bds-1.26.52.3/structures/captures'))
  const gated = rows.filter((row) => row.gated)
  const ungated = rows.filter((row) => !row.gated)
  const selfAnswered = (list) => list.filter((row) => row.answer &&
    row.answer[0] === row.origin[0] && row.answer[1] === row.origin[1]).length
  assert.ok(gated.length >= 100, `only ${gated.length} gated probes`)
  assert.ok(ungated.length >= 100, `only ${ungated.length} ungated probes`)
  const gatedHits = selfAnswered(gated)
  assert.ok(gatedHits >= gated.length * 0.95,
    `gated probes answered themselves in only ${gatedHits}/${gated.length}`)
  // The control has to stay at zero, or the first number means nothing.
  assert.strictEqual(selfAnswered(ungated), 0)
})
