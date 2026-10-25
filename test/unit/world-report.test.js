'use strict'

const test = require('node:test')
const assert = require('node:assert')
const fs = require('node:fs')
const os = require('node:os')
const path = require('node:path')

const { structuresNear, formatReport } = require('../../src/world/world-report')
const { PLACEMENTS } = require('../../src/world/structures-data')
const { explains, fitForSalt, loadObservations } = require('../../tools/worldgen-algo/fit-structures')
const { structureInCell } = require('../../src/world/structure-placement')

test('a report covers every known set and labels its status', () => {
  const report = structuresNear(1234, { radiusChunks: 32 })
  assert.strictEqual(report.seed, 1234)
  assert.strictEqual(report.structures.length, Object.keys(PLACEMENTS).length)
  for (const structure of report.structures) {
    assert.ok(structure.id.startsWith('minecraft:'), structure.id)
    assert.ok(structure.status, 'missing status')
    // Unconfirmed data must say so.
    if (structure.status === 'unconfirmed') assert.ok(structure.note, 'unconfirmed without a note')
  }
})

test('sets read from the pack are labelled as such', () => {
  const report = structuresNear(99, { radiusChunks: 16, only: ['trail_ruins', 'abandoned_camp'] })
  const statuses = report.structures.map((structure) => structure.status)
  assert.deepStrictEqual(statuses, ['from pack', 'from pack'])
})

test('strongholds are modelled, and the report says which ones are exact', () => {
  const report = structuresNear(7, { only: ['stronghold'], radiusChunks: 512 })
  const strongholds = report.structures[0]
  assert.strictEqual(strongholds.status, 'measured')
  assert.ok(strongholds.candidates.length > 0)
  // Every candidate carries the flag that separates a grid position from one
  // the generator relocated, so a caller is never told more than is known.
  for (const candidate of strongholds.candidates) {
    assert.strictEqual(typeof candidate.gated, 'boolean')
    assert.ok(candidate.distance <= 512 * 16)
  }
  assert.match(strongholds.note, /200-chunk cells/)
})

test('candidates are inside the requested radius and ordered by distance', () => {
  const report = structuresNear(5, { radiusChunks: 64, only: ['village'] })
  const candidates = report.structures[0].candidates
  assert.ok(candidates.length > 0)
  for (const candidate of candidates) assert.ok(candidate.distance <= 64 * 16)
  const distances = candidates.map((candidate) => candidate.distance)
  assert.deepStrictEqual(distances, [...distances].sort((a, b) => a - b))
})

test('the text report states what is not modelled', () => {
  const text = formatReport(structuresNear(1, { radiusChunks: 16, only: ['village'] }))
  assert.match(text, /not modelled yet/)
  assert.match(text, /biome/)
})

test('the fitter accepts the parameters that generated an observation', () => {
  const truth = { id: 'minecraft:test', spacing: 34, separation: 8, spreadType: 'linear', salt: 12345 }
  const start = structureInCell(truth, 42, 3, -2)
  const observation = { seed: 42, id: 'test', chunk: [start.chunkX, start.chunkZ] }
  assert.ok(explains(truth, observation, 8), 'truth should explain its own start')
  // A different salt must not explain it (assuming it moves the start).
  const wrong = { ...truth, salt: 999 }
  const wrongStart = structureInCell(wrong, 42, 3, -2)
  if (wrongStart.chunkX !== start.chunkX || wrongStart.chunkZ !== start.chunkZ) {
    assert.ok(!explains(wrong, observation, 8), 'wrong salt must not explain the start')
  }
})

test('the fitter recovers spacing and separation from synthetic observations', () => {
  const truth = { id: 'minecraft:test', spacing: 24, separation: 6, spreadType: 'linear', salt: 777 }
  const observations = [11, 12, 13].map((seed) => {
    const start = structureInCell(truth, seed, 2, 1)
    return { seed, id: 'test', chunk: [start.chunkX, start.chunkZ] }
  })
  const survivors = fitForSalt(
    { id: 'minecraft:test', salt: 777 },
    observations,
    { spacingMax: 40, separationMax: 12, radiusCells: 8 }
  )
  const found = survivors.find((s) => s.spacing === 24 && s.separation === 6 && s.spreadType === 'linear')
  assert.ok(found, `expected the true parameters among ${JSON.stringify(survivors)}`)
})

test('observations load from a capture directory, one per seed and structure', () => {
  const dir = fs.mkdtempSync(path.join(os.tmpdir(), 'fit-'))
  fs.writeFileSync(path.join(dir, 'structures.json'), JSON.stringify({
    seed: '5',
    results: [
      { id: 'village', resolvedId: 'minecraft:village', found: true, at: [152, null, 808] },
      { id: 'village', resolvedId: 'minecraft:village', found: true, at: [152, null, 808] },
      { id: 'oceanruin', found: false, at: null, raw: "Failed to execute 'locate'" }
    ]
  }))
  const observations = loadObservations([dir])
  assert.strictEqual(observations.length, 1, 'duplicates and failures must be dropped')
  assert.deepStrictEqual(observations[0].chunk, [9, 50])
  fs.rmSync(dir, { recursive: true, force: true })
})
