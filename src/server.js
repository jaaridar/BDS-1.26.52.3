'use strict'

/**
 * OpenBDSServer: wires config, world, protocol stack and player sessions
 * together and runs the game tick loop. Fully headless - no GUI, no display,
 * just sockets, stdin console and logs.
 */

const { EventEmitter } = require('events')
const bedrock = require('bedrock-protocol')

const { createLogger } = require('./logger')
const { resolveRaknetBackend } = require('./protocol/raknet')
const { loadPalette } = require('./world/palette')
const { createGenerator } = require('./world/generator')
const { World } = require('./world/world')
const { PlayerSession } = require('./player')
const { createDefaultCommands } = require('./commands')
const spawn = require('./protocol/spawn')

class OpenBDSServer extends EventEmitter {
  /**
   * @param {object} opts
   * @param {ReturnType<import('./config').loadConfig>} opts.config
   * @param {object} [opts.logger]
   */
  constructor ({ config, logger }) {
    super()
    this.config = config
    this.logger = logger ?? createLogger({ level: config.logLevel })
    this.players = new Map() // entityId -> PlayerSession
    this.running = false
    this.tps = 0
    this._tickSamples = []
    this._stopped = false

    this.palette = loadPalette(config.palette)
    const generator = createGenerator(this.palette, config.generator, { seed: config.levelSeed })
    if (config.generator === 'infinite' && this.palette.tryRuntimeId('minecraft:water', {}, -1) === -1) {
      this.logger.warn('generator "infinite" with a palette that has no water/ore/tree blocks: ' +
        'terrain will degrade (oceans become air). Use --palette terrain (or vanilla).')
    }
    this.world = new World({
      generator,
      palette: this.palette,
      levelName: config.levelName,
      seed: config.levelSeed,
      doDaylightCycle: true
    })

    this.commands = createDefaultCommands(() => this)

    const backend = resolveRaknetBackend(config.raknetBackend)
    this.raknetBackend = backend
    this.logger.info(`RakNet backend: ${backend}`)

    this.server = bedrock.createServer({
      host: config.host,
      port: config.serverPort,
      version: config.protocolVersion,
      offline: !config.onlineMode,
      maxPlayers: config.maxPlayers,
      motd: {
        motd: config.serverName,
        levelName: config.levelName,
        gamemode: config.gamemode,
        gamemodeId: config.gamemode === 'creative' ? 1 : 0
      },
      raknetBackend: backend,
      compressionAlgorithm: config.compressionAlgorithm === 'none' ? 'none' : config.compressionAlgorithm,
      compressionThreshold: config.compressionThreshold
    })

    // Keep the advertised version string cosmetic (e.g. "1.26.52.3") while
    // the protocol version stays pinned to the data we implement.
    this.server.advertisement.version = config.gameVersion
    this.server.advertisement.protocol = require('bedrock-protocol/src/options').Versions[config.protocolVersion]
    this.server.advertisement.playersMax = config.maxPlayers

    this.server.on('connect', (client) => {
      if (this.players.size >= config.maxPlayers) {
        client.disconnect('Server is full')
        return
      }
      // Work around a bedrock-protocol handshake quirk: with a very low
      // compression threshold (BDS ships 1) the library would compress the
      // `network_settings` batch before the client has compression enabled,
      // which breaks the connection. The value the client receives in
      // `network_settings` stays as configured - only our own send threshold
      // is clamped up, which is always protocol-legal.
      client.compressionThreshold = Math.max(client.compressionThreshold ?? 0, 512)
      new PlayerSession(this, client) // eslint-disable-line no-new
    })

    this.server.on('error', (err) => this.logger.error('server error:', err?.message ?? err))
    this.server.on('close', () => {
      if (!this._stopped) this.logger.warn('transport closed')
    })
  }

  /** Start ticking. The network listener is started by createServer(). */
  async start () {
    this.running = true
    this._tickTimer = setInterval(() => this._doTick(), this.config.tickRateMs)
    this.logger.info(
      `OpenBDS listening on ${this.config.host}:${this.config.serverPort} ` +
      `(game ${this.config.gameVersion}, protocol ${this.config.protocolVersion}, ` +
      `palette "${this.palette.size} blocks", generator "${this.world.generator.name}")`
    )
    this.emit('listening')
  }

  _doTick () {
    if (!this.running) return
    const now = Date.now()
    this.world.doTick()
    // TPS = ticks observed in the trailing one-second window
    this._tickSamples.push(now)
    while (this._tickSamples.length && now - this._tickSamples[0] > 1000) {
      this._tickSamples.shift()
    }
    this.tps = this._tickSamples.length

    if (this.world.tick % 100 === 0) this.broadcastTime()
    if (this.world.tick % 200 === 0) this._syncMovement()
    this.emit('tick', this.world.tick)
  }

  broadcastTime () {
    this.broadcastPacket('set_time', spawn.setTime(this.world.time))
  }

  _syncMovement () {
    // Relay each player's movement to everyone else. Single-player sessions
    // skip this entirely.
    const players = [...this.players.values()]
    if (players.length < 2) return
    for (const p of players) {
      if (!p.spawned) continue
      for (const other of players) {
        if (other === p || !other.spawned) continue
        other.write('move_player', spawn.movePlayer({
          runtimeId: p.entityId,
          position: p.position,
          pitch: p.rotation.pitch,
          yaw: p.rotation.yaw,
          headYaw: p.rotation.yaw,
          mode: 'normal',
          onGround: true,
          tick: BigInt(this.world.tick)
        }))
      }
    }
  }

  _registerPlayer (player) {
    this.players.set(player.entityId, player)
    this.emit('playerJoin', player)
    this.logger.info(`Players online: ${this.players.size}/${this.config.maxPlayers}`)
  }

  _unregisterPlayer (player) {
    if (!this.players.has(player.entityId)) return
    this.players.delete(player.entityId)
    this.logger.info(`${player.username} left the game`)
    this.broadcast(`§e${player.username} left the game`, { exclude: player })
    this.emit('playerLeave', player)
    this.emit('playerQuit', player) // alias
  }

  getPlayers () {
    return [...this.players.values()]
  }

  getPlayerByName (name) {
    const lower = String(name).toLowerCase()
    return this.getPlayers().find((p) => p.username.toLowerCase() === lower) ?? null
  }

  /** Permission check driven by the Mojang permissions.json + default level */
  isOperator (player) {
    if (!player) return false
    if (this.config.defaultPlayerPermissionLevel === 'operator') return true
    return this._ops.has(player.username.toLowerCase()) ||
      (player.xuid && player.xuid !== '0' && this._ops.has(player.xuid))
  }

  get _ops () {
    if (!this.__ops) {
      this.__ops = new Set()
      try {
        const fs = require('fs')
        const path = require('path')
        const file = path.resolve('permissions.json')
        if (fs.existsSync(file)) {
          const list = JSON.parse(fs.readFileSync(file, 'utf8'))
          for (const entry of Array.isArray(list) ? list : []) {
            const perm = (entry.permission ?? entry.type ?? '').toLowerCase()
            if (!['operator', 'op', 'admin', 'member+'].includes(perm)) continue
            if (entry.name) this.__ops.add(String(entry.name).toLowerCase())
            if (entry.xuid) this.__ops.add(String(entry.xuid))
          }
        }
      } catch (err) {
        this.logger.warn('could not read permissions.json:', err?.message ?? err)
      }
    }
    return this.__ops
  }

  /**
   * Broadcast a chat-style message.
   * @param {string} text
   * @param {{exclude?: object, silentConsole?: boolean}} [opts]
   */
  broadcast (text, { exclude, silentConsole = true } = {}) {
    for (const p of this.players.values()) {
      if (p === exclude || !p.spawned) continue
      p.sendMessage(text)
    }
    if (!silentConsole) this.logger.info(text)
  }

  /** Broadcast a raw packet to every spawned player */
  broadcastPacket (name, params) {
    for (const p of this.players.values()) {
      if (!p.spawned) continue
      p.write(name, params)
    }
  }

  /** Run a command from any source */
  runCommand (line, ctx) {
    return this.commands.dispatch(line, {
      server: this,
      reply: (text) => {
        if (ctx.player) ctx.player.sendMessage(text)
        else if (text) this.logger.info(String(text).replace(/\n/g, ' | '))
      },
      ...ctx
    })
  }

  setDifficulty (level) {
    this.config = { ...this.config, difficulty: level }
    this.broadcastPacket('set_difficulty', spawn.difficulty(this.config))
    this.logger.info(`Difficulty set to ${level}`)
  }

  /** Stop everything gracefully. */
  async stop (reason = 'Server stopped') {
    if (this._stopped) return
    this._stopped = true
    this.running = false
    clearInterval(this._tickTimer)
    this.logger.info('Stopping server...')
    for (const p of this.getPlayers()) {
      p.kick(reason)
    }
    // Give disconnect packets a moment to flush before tearing down the
    // UDP socket (RakNet closes it asynchronously).
    await new Promise((resolve) => setTimeout(resolve, 150))
    try {
      await this.server.close(reason)
    } catch (err) {
      this.logger.warn('error while closing transport:', err?.message ?? err)
    }
    // RakNet closes its UDP socket on a delayed timer; wait for in-flight
    // ACK/keepalive ticks to finish so teardown stays quiet.
    await new Promise((resolve) => setTimeout(resolve, 200))
    this.emit('stopped')
    this.logger.info('Server stopped.')
  }
}

module.exports = { OpenBDSServer }
