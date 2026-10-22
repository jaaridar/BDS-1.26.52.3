'use strict'

/**
 * End-to-end test: boots a real OpenBDS server on an ephemeral UDP port and
 * connects a real protocol client to it over loopback. Verifies:
 *   - the RakNet server-list ping returns our advertisement
 *   - a client can log in (offline mode), complete the spawn sequence and
 *     reach the "spawned" state
 *   - chat round-trips through the server to all players
 *   - slash commands run through the command dispatcher and answer in chat
 *   - the server shuts down cleanly
 */

const test = require('node:test')
const assert = require('node:assert')

const { loadConfig } = require('../../src/config')
const { createLogger } = require('../../src/logger')
const { OpenBDSServer } = require('../../src/server')
const { ping } = require('../../src/protocol/ping')
const { connectTestClient, onceWithTimeout } = require('../helpers/testClient')

const PORT = 20000 + Math.floor(Math.random() * 20000)

// The pure-JS RakNet layer can fire a stray UDP send while its socket is
// closing during teardown. Ignore exactly that, fail on anything else.
function ignoreSocketTeardownRace (err) {
  if (err?.code === 'ERR_SOCKET_DGRAM_NOT_RUNNING') {
    if (process.env.OPENBDS_DEBUG_TEARDOWN) console.error('TEARDOWN RACE:\n', err.stack)
    return
  }
  throw err
}
process.on('uncaughtException', ignoreSocketTeardownRace)
process.on('unhandledRejection', ignoreSocketTeardownRace)

function bootServer () {
  const config = loadConfig({
    env: {},
    argv: {
      serverPort: String(PORT),
      host: '127.0.0.1',
      logLevel: 'error',
      palette: 'flat',
      generator: 'flat',
      onlineMode: 'false',
      spawnRadiusChunks: '1',
      viewDistance: '4'
    }
  })
  const logger = createLogger({ level: 'error', stdout: { write () {} }, stderr: { write () {} } })
  return new OpenBDSServer({ config, logger })
}

test('openbds end-to-end: ping, join, chat, commands, shutdown', async (t) => {
  const server = bootServer()
  const events = { joins: 0, spawns: 0, leaves: 0 }
  server.on('playerJoin', () => events.joins++)
  server.on('playerSpawn', () => events.spawns++)
  server.on('playerLeave', () => events.leaves++)

  await server.start()
  t.after(async () => {
    await server.stop('test over')
  })

  // --- 1. server-list ping ---
  const ad = await ping({ host: '127.0.0.1', port: PORT, timeout: 5000 })
  assert.strictEqual(ad.motd, server.config.serverName)
  assert.strictEqual(ad.playersMax, server.config.maxPlayers)
  assert.strictEqual(ad.playersOnline, 0)
  assert.strictEqual(ad.version, server.config.gameVersion)
  assert.ok(ad.protocol, 'advertises a protocol number')

  // --- 2. client joins and spawns ---
  const bot = connectTestClient({
    host: '127.0.0.1',
    port: PORT,
    version: server.config.protocolVersion
  })
  t.after(() => bot.close())

  await bot.waitSpawn()
  // the client's spawn event races the initialized packet over the wire;
  // wait for the server to confirm before asserting
  await onceWithTimeout(server, 'playerSpawn', 5000)
  assert.strictEqual(events.joins, 1)
  assert.strictEqual(events.spawns, 1)
  assert.strictEqual(server.getPlayers().length, 1)

  const player = server.getPlayers()[0]
  assert.strictEqual(player.username, 'TestBot')
  assert.strictEqual(player.spawned, true)
  assert.ok(player.entityId > 0n)

  // The client must have parsed our start_game (it stores it for entity ids)
  assert.strictEqual(bot.client.entityId, player.entityId)

  // --- 3. chat round-trip ---
  const chatMessage = `hello open source ${Date.now()}`
  const chatWait = bot.waitEvent('text', 8000, (pk) => pk.type === 'chat' && pk.message === chatMessage)
  bot.sendChat(chatMessage)
  const chat = await chatWait
  assert.strictEqual(chat.source_name, 'TestBot')

  // --- 4. slash command -> dispatcher -> chat reply ---
  const cmdWait = bot.waitEvent('text', 8000, (pk) => pk.type === 'raw' && /Online/.test(pk.message))
  bot.sendCommand('/list')
  const reply = await cmdWait
  assert.match(reply.message, /TestBot/)

  // --- 5. second chat still works after chunks and time sync ---
  const again = `still alive ${Date.now()}`
  const againWait = bot.waitEvent('text', 8000, (pk) => pk.type === 'chat' && pk.message === again)
  bot.sendChat(again)
  await againWait

  // no protocol-level errors on the client
  assert.deepStrictEqual(bot.errors.map((e) => e.message), [], 'client saw no errors')

  bot.close()
  await onceWithTimeout(server, 'playerLeave', 5000).catch(() => {})
})

test('ping fails fast on a dead port', async () => {
  await assert.rejects(
    () => ping({ host: '127.0.0.1', port: PORT + 1, timeout: 1500 }),
    /timed out|Timed out|Ping/
  )
})
