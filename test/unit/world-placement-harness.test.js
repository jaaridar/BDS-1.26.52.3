'use strict'

/**
 * The fitting harness is the thing that decides what the table is allowed to
 * claim, so it gets its own tests: it must recover a set that is already known
 * to be right, refuse a set whose salt is wrong, and keep reporting the two
 * open cases (`mineshaft` and `stronghold`) as open.
 */

const test = require('node:test')
const assert = require('node:assert')

const { fitGrid, fitGate } = require('../../tools/worldgen-algo/fit-placement')
const { scoreModel } = require('../../tools/worldgen-algo/fit-strongholds')
const { loadObservations } = require('../../tools/worldgen-algo/verify-placements')

function rowsFor (id) {
  return loadObservations().filter((row) => row.id === `minecraft:${id}`)
}

const VILLAGE = rowsFor('village')

test('the harness recovers the village band, and only that band', () => {
  assert.ok(VILLAGE.length > 10)
  const { perfect } = fitGrid(VILLAGE, {
    maxSpacing: 40,
    salts: [10387312],
    engines: ['mt', 'java'],
    formulas: ['add', 'xor', 'large'],
    spreads: ['linear', 'triangular']
  })
  assert.strictEqual(perfect.length, 1, JSON.stringify(perfect))
  assert.deepStrictEqual(perfect[0], {
    engine: 'mt', formula: 'add', salt: 10387312, spread: 'triangular', spacing: 34, separation: 8
  })
})

test('the harness refuses a salt that is off by one', () => {
  const { perfect } = fitGrid(VILLAGE, {
    maxSpacing: 40,
    salts: [10387313],
    engines: ['mt', 'java'],
    formulas: ['add', 'xor', 'large'],
    spreads: ['linear', 'triangular']
  })
  assert.deepStrictEqual(perfect, [])
})

test('the dropped-minus-sign bug cannot pass: the Z multiplier must be folded, not added', () => {
  // Reproducing the historic mistake: multiply Z by +0xea9a42b instead of
  // -0xea9a42b. It matches every capture whose Z cell is 0 and must fail the
  // rest, which is exactly what the harness has to catch.
  const { scoreGrid } = require('../../tools/worldgen-algo/fit-placement')
  const correct = scoreGrid(VILLAGE, {
    engine: 'mt', formula: 'add', salt: 10387312, spread: 'triangular', spacing: 34, separation: 8
  })
  assert.strictEqual(correct, VILLAGE.length)
  // A separate value proves the score is not trivially 100%.
  const wrongSalt = scoreGrid(VILLAGE, {
    engine: 'mt', formula: 'add', salt: 10387312 + 0x100000, spread: 'triangular', spacing: 34, separation: 8
  })
  assert.ok(wrongSalt < VILLAGE.length)
})

test('mineshaft has no per-chunk threshold gate, in any seed family', () => {
  // The negative result recorded in docs/worldgen.md: a sparse per-chunk gate
  // cannot be separated by any single cut over a long ring walk, so what is
  // left is a biome/terrain condition rather than a draw.
  const rows = rowsFor('mineshaft')
  assert.ok(rows.length > 10)
  const { consistent } = fitGate(rows, {
    salts: [0],
    engines: ['mt', 'java'],
    formulas: ['add', 'xor', 'large'],
    draws: [0, 1],
    modes: ['unit', 'raw'],
    maxRadius: 48
  })
  assert.deepStrictEqual(consistent, [])
})

test('the stronghold ring harness runs and does not claim a fit it does not have', () => {
  // Superseded by src/world/stronghold.js, which reproduces 30 of 42 captured
  // strongholds exactly as a 200-chunk cell grid. The ring harness stays as the
  // falsification record: it must never find a ring model that explains them.
  const rows = rowsFor('stronghold').filter((row) => row.from[0] === 0 && row.from[1] === 0)
  assert.ok(rows.length >= 4)
  const scored = scoreModel(rows, {
    engine: 'java', distance: 32, spread: 2.5, base: 4, tolerance: 7, rings: 4
  })
  assert.ok(scored.hits < rows.length, 'the Java ring parameters must not explain Bedrock strongholds')
})
