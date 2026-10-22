'use strict'

const test = require('node:test')
const assert = require('node:assert')

const { CommandDispatcher, createDefaultCommands } = require('../../src/commands')

function makeMockServer () {
  return {
    logger: { info () {}, warn () {}, debug () {}, error () {} },
    config: { difficulty: 'easy', maxPlayers: 10 },
    world: { time: 1234, tick: 42, chunksGenerated: 7 },
    tps: 19.8,
    broadcasts: [],
    broadcast (msg) { this.broadcasts.push(msg) },
    broadcastTime () { this.timeBroadcasts = (this.timeBroadcasts ?? 0) + 1 },
    getPlayers: () => [],
    getPlayerByName: () => null,
    setDifficulty (d) { this.config.difficulty = d },
    stop () { this.stopped = true; return Promise.resolve() }
  }
}

function dispatch (line, { source = 'console', player = null, server = makeMockServer() } = {}) {
  const replies = []
  const d = createDefaultCommands(() => server)
  const result = d.dispatch(line, {
    source,
    player,
    server,
    reply: (t) => replies.push(t)
  })
  return { result, replies, server }
}

test('unknown command is reported', () => {
  const { result, replies } = dispatch('nope')
  assert.strictEqual(result.ok, false)
  assert.strictEqual(result.unknown, true)
  assert.match(replies[0], /Unknown command/)
})

test('help lists commands', () => {
  const { replies } = dispatch('help')
  assert.match(replies[0], /Commands:/)
  assert.match(replies[0], /kick/)
  assert.match(replies[0], /status/)
})

test('list reports online players', () => {
  const { replies } = dispatch('list')
  assert.match(replies[0], /No players online/)
})

test('say broadcasts and requires operator', () => {
  const op = { isOperator: true, username: 'Op', sendMessage () {} }
  const { result, server } = dispatch('say hello world', { source: 'player', player: op })
  assert.strictEqual(result.ok, true)
  assert.deepStrictEqual(server.broadcasts, ['[Server] hello world'])

  const denied = dispatch('say hi', { source: 'player', player: { isOperator: false } })
  assert.strictEqual(denied.result.ok, false)
  assert.match(denied.replies[0], /permission/)
})

test('console source always passes permission checks', () => {
  const { result } = dispatch('say hello', { source: 'console' })
  assert.strictEqual(result.ok, true)
})

test('time query and set', () => {
  const q = dispatch('time query')
  assert.match(q.replies[0], /Time is 1234/)

  const s = dispatch('time set night', { source: 'console' })
  assert.match(s.replies[0], /Time set to 13000/)
  assert.strictEqual(s.server.world.time, 13000)
  assert.strictEqual(s.server.timeBroadcasts, 1)

  const bad = dispatch('time set banana')
  assert.match(bad.replies[0], /Usage/)
})

test('difficulty show and set', () => {
  const show = dispatch('difficulty')
  assert.match(show.replies[0], /easy/)
  const set = dispatch('difficulty hard')
  assert.match(set.replies[0], /hard/)
  assert.strictEqual(set.server.config.difficulty, 'hard')
})

test('kick requires an online player', () => {
  const missing = dispatch('kick Steve')
  assert.match(missing.replies[0], /Player not found/)

  const kicked = []
  const server = makeMockServer()
  server.getPlayerByName = () => ({ username: 'Steve', kick: (r) => kicked.push(r) })
  const ok = dispatch('kick Steve being rude', { server })
  assert.strictEqual(ok.result.ok, true)
  assert.deepStrictEqual(kicked, ['being rude'])
})

test('status and version produce text', () => {
  assert.match(dispatch('status').replies[0], /OpenBDS up/)
  assert.match(dispatch('version').replies[0], /OpenBDS \d+\.\d+\.\d+/)
})

test('dispatcher aliases and validation', () => {
  const d = new CommandDispatcher()
  assert.throws(() => d.register({ name: 'x' }), /invalid command/)
  d.register({ name: 'foo', aliases: ['f'], description: 'd', execute: () => 'ran' })
  assert.ok(d.get('FOO'))
  assert.ok(d.get('f'))
  const replies = []
  d.dispatch('/f', { reply: (t) => replies.push(t) })
  assert.deepStrictEqual(replies, ['ran'])
})
