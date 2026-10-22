'use strict'

const test = require('node:test')
const assert = require('node:assert')
const fs = require('fs')
const os = require('os')
const path = require('path')

const {
  loadConfig, parseProperties, serializeProperties, DEFAULTS, difficultyId
} = require('../../src/config')

test('parseProperties skips comments and blank lines', () => {
  const map = parseProperties([
    '# comment',
    '',
    'server-name=My World',
    'max-players=20',
    'level-seed=abc=def',
    'malformed line without equals',
    '  spaced-key  =  spaced value  '
  ].join('\n'))
  assert.deepStrictEqual(map, {
    'server-name': 'My World',
    'max-players': '20',
    'level-seed': 'abc=def',
    'spaced-key': 'spaced value'
  })
})

test('serializeProperties round-trips', () => {
  const map = { 'server-name': 'X', 'max-players': '5' }
  const text = serializeProperties(map, 'header line')
  const parsed = parseProperties(text)
  assert.deepStrictEqual(parsed, map)
  assert.ok(text.includes('# header line'))
})

test('defaults are used without a file', () => {
  const config = loadConfig({ env: {} })
  assert.strictEqual(config.serverName, DEFAULTS.serverName)
  assert.strictEqual(config.serverPort, 19132)
  assert.strictEqual(config.onlineMode, false)
})

test('file values override defaults', () => {
  const dir = fs.mkdtempSync(path.join(os.tmpdir(), 'openbds-config-'))
  const file = path.join(dir, 'server.properties')
  fs.writeFileSync(file, 'server-name=FromFile\nmax-players=3\nallow-cheats=true\n')
  const config = loadConfig({ configPath: file, env: {} })
  assert.strictEqual(config.serverName, 'FromFile')
  assert.strictEqual(config.maxPlayers, 3)
  assert.strictEqual(config.allowCheats, true)
})

test('env overrides file, cli overrides env', () => {
  const dir = fs.mkdtempSync(path.join(os.tmpdir(), 'openbds-config-'))
  const file = path.join(dir, 'server.properties')
  fs.writeFileSync(file, 'server-port=1111\n')
  const config = loadConfig({
    configPath: file,
    env: { OPENBDS_SERVER_PORT: '2222', OPENBDS_ONLINE_MODE: 'true' },
    argv: { serverPort: '3333' }
  })
  assert.strictEqual(config.serverPort, 3333)
  assert.strictEqual(config.onlineMode, true)
})

test('rejects invalid values with a helpful error', () => {
  assert.throws(
    () => loadConfig({ env: {}, argv: { maxPlayers: '-3' } }),
    /Invalid configuration/
  )
  assert.throws(
    () => loadConfig({ env: {}, argv: { gamemode: 'creativee' } }),
    /Invalid configuration/
  )
  assert.throws(
    () => loadConfig({ env: {}, argv: { difficulty: 'brutal' } }),
    /Invalid configuration/
  )
})

test('unknown keys in the file are preserved in raw', () => {
  const dir = fs.mkdtempSync(path.join(os.tmpdir(), 'openbds-config-'))
  const file = path.join(dir, 'server.properties')
  fs.writeFileSync(file, 'some-future-key=hello\n')
  const config = loadConfig({ configPath: file, env: {} })
  assert.strictEqual(config.raw['some-future-key'], 'hello')
})

test('difficultyId maps names to network ids', () => {
  assert.strictEqual(difficultyId('peaceful'), 0)
  assert.strictEqual(difficultyId('easy'), 1)
  assert.strictEqual(difficultyId('normal'), 2)
  assert.strictEqual(difficultyId('hard'), 3)
})
