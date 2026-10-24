'use strict'

const test = require('node:test')
const assert = require('node:assert')

const { loadBiomeData, DEFAULT_PACKS, parseBiome, readPack } = require('../../src/world/biomes-data')

test('the packs yield a substantial biome set', () => {
  const data = loadBiomeData(DEFAULT_PACKS)
  assert.ok(data.biomes.size >= 50, `only ${data.biomes.size} biomes`)
  assert.ok(data.withClimate >= 10, `only ${data.withClimate} climate rules`)
})

test('climate points sit in the range the router samples', () => {
  const data = loadBiomeData(DEFAULT_PACKS)
  for (const biome of data.biomes.values()) {
    if (!biome.climatePoint) continue
    const point = biome.climatePoint
    for (const axis of ['temperature', 'humidity', 'altitude', 'weirdness']) {
      assert.ok(Number.isFinite(point[axis]), `${biome.id} ${axis}`)
      assert.ok(point[axis] >= -2 && point[axis] <= 2, `${biome.id} ${axis}=${point[axis]}`)
    }
    assert.ok(point.weight >= 0 && point.weight <= 1, `${biome.id} weight=${point.weight}`)
  }
})

test('later packs override earlier ones instead of duplicating', () => {
  const data = loadBiomeData(DEFAULT_PACKS)
  assert.strictEqual(new Set(data.order).size, data.order.length, 'duplicate ids in order')
  assert.strictEqual(data.order.length, data.biomes.size)
})

test('surface builders carry the materials the surface rule needs', () => {
  const data = loadBiomeData(DEFAULT_PACKS)
  const desert = data.biomes.get('minecraft:desert')
  assert.ok(desert, 'desert missing')
  assert.strictEqual(desert.surface.topMaterial, 'minecraft:sand')
  assert.strictEqual(desert.surface.midMaterial, 'minecraft:sand')
  assert.strictEqual(desert.surface.type, 'minecraft:overworld')
  assert.strictEqual(desert.height.noiseType, 'lowlands')
  assert.strictEqual(desert.climatePoint.temperature, 0.4)
})

test('parsing ignores documents that are not biomes', () => {
  assert.strictEqual(parseBiome({}), null)
  assert.strictEqual(parseBiome({ 'minecraft:biome': { description: {} } }), null)
})

test('a pack without a biome archive yields nothing rather than throwing', () => {
  assert.deepStrictEqual(readPack('behavior_packs/does-not-exist'), [])
})
