'use strict'

/**
 * Spawn-sequence packet builders.
 *
 * Field names and shapes come from the Bedrock protocol definitions for the
 * version this server speaks (see `openbds-protocol-version`). Every builder
 * is exercised against the real serializer in test/unit/spawn.test.js, so a
 * protocol-data mismatch fails the test suite instead of a live client.
 */

const crypto = require('crypto')
const { difficultyId, networkGamemode } = require('../config')

const ZERO_UUID = '00000000-0000-0000-0000-000000000000'
const { toNbtCompound } = require('../world/palette')

function resourcePacksInfo () {
  return {
    must_accept: false,
    has_addons: false,
    has_scripts: false,
    disable_vibrant_visuals: false,
    world_template: { uuid: ZERO_UUID, version: '' },
    texture_packs: []
  }
}

function resourcePacksStack (gameVersion) {
  return {
    must_accept: false,
    resource_packs: [],
    game_version: gameVersion,
    experiments: { experiments: [], experiments_previously_used: false },
    experiments_previously_used: false,
    has_editor_packs: false
  }
}

/**
 * The big one. Values are sane defaults for a fresh survival world; the
 * palette is the block palette this session negotiated in `block_properties`.
 */
function startGameParams ({ config, palette, world, player }) {
  const gamemode = networkGamemode(config.gamemode)
  return {
    entity_id: player.entityId,
    runtime_entity_id: player.entityId,
    player_gamemode: gamemode,
    player_position: {
      x: world.spawn.x + 0.5,
      y: world.spawn.y,
      z: world.spawn.z + 0.5
    },
    rotation: { pitch: 0, yaw: 0 },
    seed: world.seed,
    biome_type: 0,
    biome_name: 'plains',
    dimension: 'overworld',
    generator: 1,
    world_gamemode: gamemode,
    hardcore: false,
    difficulty: difficultyId(config.difficulty),
    spawn_position: {
      x: world.spawn.x,
      y: world.spawn.y,
      z: world.spawn.z
    },
    achievements_disabled: true,
    editor_world_type: 'not_editor',
    created_in_editor: false,
    exported_from_editor: false,
    day_cycle_stop_time: config.allowCheats ? 0 : world.time,
    edu_offer: 0,
    edu_features_enabled: false,
    edu_product_uuid: '',
    rain_level: 0,
    lightning_level: 0,
    has_confirmed_platform_locked_content: false,
    is_multiplayer: true,
    broadcast_to_lan: true,
    xbox_live_broadcast_mode: 0,
    platform_broadcast_mode: 0,
    enable_commands: config.allowCheats,
    is_texturepacks_required: config.texturepackRequired,
    gamerules: [
      { name: 'naturalRegeneration', editable: true, type: 'bool', value: true },
      { name: 'doDaylightCycle', editable: true, type: 'bool', value: world.doDaylightCycle },
      { name: 'doWeatherCycle', editable: true, type: 'bool', value: false },
      { name: 'keepInventory', editable: true, type: 'bool', value: false },
      { name: 'showCoordinates', editable: true, type: 'bool', value: true },
      { name: 'randomTickSpeed', editable: true, type: 'int', value: 0 },
      { name: 'spawnRadius', editable: true, type: 'int', value: 1 },
      { name: 'showDaysPlayed', editable: true, type: 'bool', value: false }
    ],
    experiments: { experiments: [], experiments_previously_used: false },
    experiments_previously_used: false,
    bonus_chest: false,
    map_enabled: false,
    permission_level: config.defaultPlayerPermissionLevel === 'operator' ? 'operator' : 'member',
    server_chunk_tick_range: config.tickDistance,
    has_locked_behavior_pack: false,
    has_locked_resource_pack: false,
    is_from_locked_world_template: false,
    msa_gamertags_only: false,
    is_from_world_template: false,
    is_world_template_option_locked: false,
    only_spawn_v1_villagers: false,
    persona_disabled: false,
    custom_skins_disabled: false,
    emote_chat_muted: false,
    game_version: config.gameVersion,
    limited_world_width: 0,
    limited_world_length: 0,
    is_new_nether: true,
    edu_resource_uri: { button_name: '', link_uri: '' },
    experimental_gameplay_override: false,
    chat_restriction_level: 'none',
    disable_player_interactions: false,
    server_editor_connection_policy: 0,
    allow_anonymous_block_drops_in_editor_worlds: false,
    level_id: '',
    world_name: world.levelName,
    premium_world_template_id: '',
    is_trial: false,
    rewind_history_size: 0,
    server_authoritative_block_breaking: true,
    current_tick: BigInt(world.tick),
    enchantment_seed: Number(crypto.randomBytes(4).readUInt32LE(0) & 0x7fffffff),
    block_properties: palette.toBlockProperties(),
    multiplayer_correlation_id: '',
    server_authoritative_inventory: true,
    engine: `OpenBDS/${require('../../package.json').version}`,
    property_data: toNbtCompound({}),
    block_pallette_checksum: 0n,
    world_template_id: ZERO_UUID,
    client_side_generation: false,
    block_network_ids_are_hashes: false,
    server_controlled_sound: false,
    has_server_join_info: false,
    server_identifier: '',
    scenario_identifier: '',
    world_identifier: '',
    owner_identifier: ''
  }
}

/** Empty item registry - clients accept an empty list and use fallbacks. */
function itemRegistry () {
  return { itemstates: [] }
}

function biomeDefinitionList () {
  return { biome_definitions: [], string_list: [] }
}

/** Entity identifier registry (NBT list of id strings) */
function availableEntityIdentifiers () {
  return {
    nbt: {
      name: '',
      type: 'compound',
      value: {
        idlist: { type: 'list', value: { type: 'compound', value: [] } }
      }
    }
  }
}

function creativeContent () {
  return { groups: [], items: [] }
}

function setTime (time) {
  return { time: time | 0 }
}

function setSpawnPosition (pos) {
  return {
    spawn_type: 'world',
    player_position: { x: pos.x | 0, y: pos.y | 0, z: pos.z | 0 },
    dimension: 0,
    world_position: { x: pos.x | 0, y: pos.y | 0, z: pos.z | 0 }
  }
}

function networkChunkPublisherUpdate (pos, radiusBlocks) {
  return {
    coordinates: { x: pos.x | 0, y: pos.y | 0, z: pos.z | 0 },
    radius: radiusBlocks | 0,
    saved_chunks: []
  }
}

function chunkRadiusUpdate (radius) {
  return { chunk_radius: radius | 0 }
}

function updateAttributes ({ runtimeId, health = 20, hunger = 20, movement = 0.1 }) {
  return {
    runtime_entity_id: runtimeId,
    attributes: [
      {
        min: 0, max: 20, current: health,
        default_min: 0, default_max: 20, default: 20,
        name: 'minecraft:health', modifiers: []
      },
      {
        min: 0, max: 20, current: hunger,
        default_min: 0, default_max: 20, default: 20,
        name: 'minecraft:player.hunger', modifiers: []
      },
      {
        min: 0, max: 1, current: movement,
        default_min: 0, default_max: 1, default: 0.1,
        name: 'minecraft:movement', modifiers: []
      }
    ],
    tick: 0n
  }
}

function setEntityData ({ runtimeId }) {
  return {
    runtime_entity_id: runtimeId,
    metadata: [],
    properties: { ints: [], floats: [] },
    tick: 0n
  }
}

function setHealth (health) {
  return { health: health | 0 }
}

function textRaw (message) {
  return {
    needs_translation: false,
    category: 'message_only',
    type: 'raw',
    message: String(message),
    xuid: '',
    platform_chat_id: '',
    has_filtered_message: false,
    filtered_message: null
  }
}

function textSystem (message) {
  return { ...textRaw(message), type: 'system' }
}

function textChat (sourceName, message) {
  return {
    needs_translation: false,
    category: 'authored',
    type: 'chat',
    source_name: String(sourceName),
    message: String(message),
    xuid: '',
    platform_chat_id: '',
    has_filtered_message: false,
    filtered_message: null
  }
}

/** Zeroed but structurally valid skin (used until real skins are forwarded). */
function minimalSkin () {
  const image = { width: 0, height: 0, data: Buffer.alloc(0) }
  return {
    skin_id: '',
    play_fab_id: '',
    skin_resource_pack: '',
    skin_data: image,
    animations: [],
    cape_data: image,
    geometry_data: '',
    geometry_data_version: '',
    animation_data: '',
    cape_id: '',
    full_skin_id: '',
    arm_size: 'wide',
    skin_color: 0,
    personal_pieces: [],
    piece_tint_colors: [],
    premium: false,
    persona: false,
    cape_on_classic: false,
    primary_user: true,
    overriding_player_appearance: false,
    trusted: '',
    profile_hash: ''
  }
}

/**
 * `player_list` add record. Skins are zeroed placeholders for now; forwarding
 * the real skin from the login chain is on the roadmap. The server only sends
 * player list records when `openbds-player-list` is enabled.
 */
function playerListAdd ({ uuid, username, entityId, xuid = '0' }) {
  return {
    records: [{
      type: 'add',
      legacy_type: 0,
      uuid,
      entity_unique_id: BigInt(entityId),
      username,
      xbox_user_id: String(xuid),
      platform_chat_id: '',
      build_platform: -1,
      skin_data: minimalSkin(),
      is_teacher: false,
      is_host: false,
      is_subclient: false,
      player_color: -1
    }]
  }
}

function playerListRemove ({ uuid }) {
  return {
    records: [{
      type: 'remove',
      legacy_type: 0,
      uuid
    }]
  }
}

function movePlayer ({ runtimeId, position, pitch = 0, yaw = 0, headYaw = 0, mode = 'normal', onGround = true, tick = 0n }) {
  return {
    runtime_id: Number(runtimeId),
    position: { x: position.x, y: position.y, z: position.z },
    pitch, yaw, head_yaw: headYaw,
    mode,
    on_ground: onGround,
    ridden_runtime_id: 0,
    tick
  }
}

function respawn (position, runtimeId) {
  return {
    position: { x: position.x, y: position.y, z: position.z },
    state: 1, // 0 = searching for spawn, 1 = server ready, 2 = player ready
    runtime_entity_id: runtimeId
  }
}

function playStatus (status) {
  return { status }
}

function difficulty (config) {
  return { difficulty: difficultyId(config.difficulty) }
}

module.exports = {
  resourcePacksInfo,
  resourcePacksStack,
  startGameParams,
  itemRegistry,
  biomeDefinitionList,
  availableEntityIdentifiers,
  creativeContent,
  setTime,
  setSpawnPosition,
  networkChunkPublisherUpdate,
  chunkRadiusUpdate,
  updateAttributes,
  setEntityData,
  setHealth,
  textRaw,
  textSystem,
  textChat,
  playerListAdd,
  playerListRemove,
  movePlayer,
  respawn,
  playStatus,
  difficulty
}
