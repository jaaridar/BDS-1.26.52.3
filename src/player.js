'use strict'

/**
 * Player session: drives one connected client through the spawn sequence and
 * keeps them in sync with the world. Wraps a bedrock-protocol `Player` (the
 * RakNet/encryption/login layer) and adds the game layer on top.
 *
 * Spawn sequence after the protocol-level `join` event:
 *   1. resource_packs_info  -> client: resource_pack_client_response
 *   2. resource_pack_stack  -> client: resource_pack_client_response
 *   3. start_game + registries + time/spawn/attributes + chunks
 *   4. play_status player_spawn
 *   5. client: set_local_player_as_initialized -> player is fully in
 */

const spawn = require('./protocol/spawn')
const { ClientStatus } = require('bedrock-protocol/src/connection')

let nextEntityId = 1n

class PlayerSession {
  /**
   * @param {object} server OpenBDSServer
   * @param {object} client  bedrock-protocol Player
   */
  constructor (server, client) {
    this.server = server
    this.client = client
    this.entityId = nextEntityId++
    // name/uuid/xuid are filled in once the login envelope is verified
    this.username = 'Connecting'
    this.uuid = '00000000-0000-0000-0000-000000000000'
    this.xuid = '0'
    this.address = formatAddress(client.connection?.address)
    this.gamemode = server.config.gamemode
    this.position = { ...server.world.spawn }
    this.rotation = { pitch: 0, yaw: 0 }
    this.authenticated = false
    this.spawned = false
    this.packState = 0 // 0 = awaiting first response, 1 = awaiting completion
    this.joinedAt = Date.now()

    this._bind()
  }

  get isOperator () {
    return this.server.isOperator(this)
  }

  _bind () {
    const c = this.client
    c.on('resource_pack_client_response', (pk) => this._onPackResponse(pk))
    c.on('request_chunk_radius', (pk) => this._onChunkRadius(pk))
    c.on('player_auth_input', (pk) => this._onAuthInput(pk))
    c.on('text', (pk) => this._onText(pk))
    c.on('command_request', (pk) => this._onCommandRequest(pk))
    c.on('set_local_player_as_initialized', () => this._onInitialized())
    c.on('interact', (pk) => this.server.logger.debug(`${this.username} interact`, pk?.action))
    c.on('player_action', (pk) => this.server.logger.debug(`${this.username} action`, pk?.action_type))
    c.on('move_player', (pk) => {
      if (pk?.position) this.position = { ...pk.position }
    })
    c.on('close', () => this._onClose())
    c.on('error', (err) => this.server.logger.warn(`player error (${this.username}):`, err?.message ?? err))
    c.on('loggingIn', () => this.server.logger.debug(`login envelope from ${this.address}`))
    c.on('login', ({ user, authentication }) => {
      if (user) {
        this.username = user.displayName ?? this.username
        this.uuid = user.identity ?? this.uuid
        this.xuid = String(user.XUID ?? this.xuid)
      }
      this.authenticated = authentication?.authenticated === true
      this.server.logger.info(
        `Login: ${this.username} (${this.uuid}) from ${this.address} ` +
        `[${authentication?.method ?? 'unknown'}${authentication?.authenticated ? '' : ', unverified'}]`
      )
    })
    c.on('join', () => this._onJoin())
  }

  /** Send a raw game packet */
  write (name, params) {
    if (this.client.status === ClientStatus.Disconnected) return
    try {
      this.client.write(name, params)
    } catch (err) {
      this.server.logger.warn(`failed to send ${name} to ${this.username}:`, err?.message ?? err)
    }
  }

  _onJoin () {
    this.server.logger.info(`Join: ${this.username} from ${this.address}`)
    this.server._registerPlayer(this)
    this.write('resource_packs_info', spawn.resourcePacksInfo())
  }

  _onPackResponse (pk) {
    const status = pk?.response_status
    this.server.logger.debug(`pack response from ${this.username}: ${status}`)
    if (status === 'refused') {
      this.kick('Resource packs were refused')
      return
    }
    if (this.packState === 0) {
      this.packState = 1
      this.write('resource_pack_stack', spawn.resourcePacksStack(this.server.config.gameVersion))
      // Some clients send 'completed' as the very first response - proceed
      // immediately in that case (the state machine stays idempotent).
      if (status === 'completed') this._startPlaying()
    } else if (status === 'completed' || status === 'have_all_packs') {
      this._startPlaying()
    }
  }

  _startPlaying () {
    if (this.startingPlay || this.spawned) return
    this.startingPlay = true
    const { config, world, palette } = this.server

    this.write('start_game', spawn.startGameParams({
      config, palette, world, player: this
    }))
    this.write('item_registry', spawn.itemRegistry())
    this.write('biome_definition_list', spawn.biomeDefinitionList())
    this.write('available_entity_identifiers', spawn.availableEntityIdentifiers())
    this.write('creative_content', spawn.creativeContent())
    this.write('set_time', spawn.setTime(world.time))
    this.write('set_spawn_position', spawn.setSpawnPosition(world.spawn))
    this.write('update_attributes', spawn.updateAttributes({ runtimeId: this.entityId }))
    this.write('set_entity_data', spawn.setEntityData({ runtimeId: this.entityId }))
    this.write('set_difficulty', spawn.difficulty(config))

    this._sendChunks()
    this.write('play_status', spawn.playStatus('player_spawn'))
  }

  _onChunkRadius (pk) {
    const requested = Number.isFinite(pk?.chunk_radius) ? pk.chunk_radius : this.server.config.viewDistance
    this.chunkRadius = Math.min(Math.max(requested, 1), this.server.config.viewDistance)
    this.write('chunk_radius_update', spawn.chunkRadiusUpdate(this.chunkRadius))
    this._sendChunks()
  }

  /** Send the spawn-area chunks around the player */
  _sendChunks () {
    const radius = this.chunkRadius ?? this.server.config.spawnRadiusChunks
    const cx = Math.floor(this.position.x) >> 4
    const cz = Math.floor(this.position.z) >> 4
    this.write('network_chunk_publisher_update', spawn.networkChunkPublisherUpdate(
      this.position,
      radius * 16
    ))
    for (let dx = -radius; dx <= radius; dx++) {
      for (let dz = -radius; dz <= radius; dz++) {
        const col = this.server.world.getColumn(cx + dx, cz + dz)
        this.write('level_chunk', {
          x: cx + dx,
          z: cz + dz,
          dimension: 0,
          sub_chunk_count: col.subChunkCount,
          highest_subchunk_count: null,
          cache_enabled: false,
          blobs: [],
          payload: col.payload
        })
      }
    }
  }

  _onAuthInput (pk) {
    if (!pk) return
    if (pk.position) this.position = { ...pk.position }
    if (typeof pk.pitch === 'number') this.rotation.pitch = pk.pitch
    if (typeof pk.yaw === 'number') this.rotation.yaw = pk.yaw
    // Movement relay to other players is handled server-side on tick.
  }

  _onText (pk) {
    if (!pk || pk.type !== 'chat') return
    const message = String(pk.message ?? '').slice(0, 512)
    if (!message) return
    if (message.startsWith('/')) {
      this.server.runCommand(message, { source: 'player', player: this })
      return
    }
    this.server.logger.info(`<${this.username}> ${message}`)
    this.server.broadcastPacket('text', spawn.textChat(this.username, message))
  }

  _onCommandRequest (pk) {
    const command = String(pk?.command ?? '').trim()
    if (!command) return
    this.server.runCommand(command, { source: 'player', player: this })
  }

  _onInitialized () {
    if (this.spawned) return
    this.spawned = true
    this.server.logger.info(`${this.username} spawned at ` +
      `${this.position.x.toFixed(1)}, ${this.position.y.toFixed(1)}, ${this.position.z.toFixed(1)}`)
    this.server.broadcast(`§e${this.username} joined the game`, { exclude: this })
    this.server.emit('playerSpawn', this)
  }

  _onClose () {
    this.server._unregisterPlayer(this)
  }

  /** Send a chat/system message to this player */
  sendMessage (text) {
    this.write('text', spawn.textRaw(text))
  }

  kick (reason = 'Kicked by an operator') {
    this.server.logger.info(`Kicking ${this.username}: ${reason}`)
    try {
      this.client.disconnect(String(reason))
    } catch {
      try { this.client.close('kick') } catch {}
    }
  }

  setGamemode (mode) {
    this.gamemode = mode
    this.write('set_player_game_type', { gamemode: mode })
    this.sendMessage(`Your game mode is now ${mode}.`)
  }

  teleport (pos) {
    this.position = { ...pos }
    this.write('move_player', spawn.movePlayer({
      runtimeId: this.entityId,
      position: pos,
      pitch: this.rotation.pitch,
      yaw: this.rotation.yaw,
      headYaw: this.rotation.yaw,
      mode: 'teleport',
      tick: BigInt(this.server.world.tick)
    }))
  }
}

/** RakNet backends hand us either a string or an InetAddress object */
function formatAddress (address) {
  if (!address) return '?'
  if (typeof address === 'string') return address
  return address.hash ?? `${address.address}:${address.port}`
}

module.exports = { PlayerSession, formatAddress }
