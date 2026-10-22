'use strict'

const test = require('node:test')
const assert = require('node:assert')
const fs = require('fs')
const os = require('os')
const path = require('path')

const { BlockPalette, loadPalette, toNbtCompound } = require('../../src/world/palette')

test('flat palette has air at runtime id 0', () => {
  const palette = BlockPalette.flat()
  assert.strictEqual(palette.runtimeId('minecraft:air'), 0)
  assert.strictEqual(palette.runtimeId('minecraft:bedrock'), 1)
  assert.strictEqual(palette.size, 5)
})

test('runtimeId matches block states', () => {
  const palette = new BlockPalette([
    { name: 'minecraft:air', states: {} },
    { name: 'minecraft:grass_block', states: { snowy: false } },
    { name: 'minecraft:grass_block', states: { snowy: true } }
  ])
  assert.strictEqual(palette.runtimeId('minecraft:grass_block', { snowy: false }), 1)
  assert.strictEqual(palette.runtimeId('minecraft:grass_block', { snowy: true }), 2)
  assert.throws(() => palette.runtimeId('minecraft:stone'), /not in palette/)
  assert.strictEqual(palette.tryRuntimeId('minecraft:stone', {}, 99), 99)
})

test('toBlockProperties emits NBT compounds', () => {
  const palette = BlockPalette.flat()
  const props = palette.toBlockProperties()
  assert.strictEqual(props.length, palette.size)
  assert.strictEqual(props[0].name, 'minecraft:air')
  assert.strictEqual(props[0].state.type, 'compound')
  assert.strictEqual(props[4].state.value['minecraft:infiniburn_bit'].type, 'byte')
})

test('toNbtCompound converts primitives', () => {
  const nbt = toNbtCompound({ s: 'x', i: 3, f: 1.5, b: true, nested: { k: 'v' } })
  assert.strictEqual(nbt.type, 'compound')
  assert.deepStrictEqual(nbt.value.s, { type: 'string', value: 'x' })
  assert.deepStrictEqual(nbt.value.i, { type: 'int', value: 3 })
  assert.deepStrictEqual(nbt.value.f, { type: 'float', value: 1.5 })
  assert.deepStrictEqual(nbt.value.b, { type: 'byte', value: 1 })
  assert.strictEqual(nbt.value.nested.type, 'compound')
})

test('JSON round-trip and file loading', () => {
  const palette = BlockPalette.flat()
  const copy = BlockPalette.fromJSON(JSON.parse(JSON.stringify(palette.toJSON())))
  assert.deepStrictEqual(copy.blocks, palette.blocks)

  const dir = fs.mkdtempSync(path.join(os.tmpdir(), 'openbds-palette-'))
  const file = path.join(dir, 'palette.json')
  fs.writeFileSync(file, JSON.stringify(palette.toJSON()))
  const loaded = loadPalette(file)
  assert.strictEqual(loaded.size, palette.size)

  assert.strictEqual(loadPalette('air').size, 1)
  assert.strictEqual(loadPalette('flat').size, 5)
})

test('rejects garbage entries', () => {
  assert.throws(() => new BlockPalette([]), /at least one block/)
  assert.throws(() => new BlockPalette([{ name: 'air' }]), /minecraft:air/)
})
