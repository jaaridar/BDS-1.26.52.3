'use strict'

/**
 * Validates every spawn-sequence packet against the real protocol
 * serializer for the configured game version. If a field name or type is
 * wrong, serialization throws here instead of against a live client.
 */

const test = require('node:test')
const assert = require('node:assert')

const { createSerializer, createDeserializer } = require('bedrock-protocol/src/transforms/serializer')
const spawn = require('../../src/protocol/spawn')
const { loadConfig } = require('../../src/config')
const { BlockPalette } = require('../../src/world/palette')
const { World } = require('../../src/world/world')
const { createGenerator } = require('../../src/world/generator')

const config = loadConfig({ env: {} })
const serializer = createSerializer(config.protocolVersion)
const deserializer = createDeserializer(config.protocolVersion)
const palette = BlockPalette.flat()
const world = new World({
  generator: createGenerator(palette, 'flat'),
  palette,
  levelName: 'Test World',
  seed: 42
})
const player = { entityId: 1n }

function mustSerialize (name, params) {
  const buf = serializer.createPacketBuffer({ name, params })
  assert.ok(Buffer.isBuffer(buf) && buf.length > 0, `${name} produced a buffer`)
  // Round-trip through the deserializer: serializing an UNKNOWN packet name
  // silently produces garbage, so this is what actually catches typos.
  const back = deserializer.parsePacketBuffer(buf)
  assert.strictEqual(back.data.name, name, `packet name "${name}" exists in the protocol`)
  return buf
}

test('start_game serializes against the real schema', () => {
  const params = spawn.startGameParams({ config, palette, world, player })
  mustSerialize('start_game', params)
  assert.strictEqual(params.engine, params.engine)
  assert.ok(params.engine.startsWith('OpenBDS/'))
  assert.strictEqual(params.block_properties.length, palette.size)
  assert.strictEqual(params.game_version, config.gameVersion)
})

test('resource pack handshake packets serialize', () => {
  mustSerialize('resource_packs_info', spawn.resourcePacksInfo())
  mustSerialize('resource_pack_stack', spawn.resourcePacksStack(config.gameVersion))
})

test('registry packets serialize', () => {
  mustSerialize('item_registry', spawn.itemRegistry())
  mustSerialize('biome_definition_list', spawn.biomeDefinitionList())
  mustSerialize('available_entity_identifiers', spawn.availableEntityIdentifiers())
  mustSerialize('creative_content', spawn.creativeContent())
})

test('world state packets serialize', () => {
  mustSerialize('set_time', spawn.setTime(6000))
  mustSerialize('set_spawn_position', spawn.setSpawnPosition(world.spawn))
  mustSerialize('network_chunk_publisher_update', spawn.networkChunkPublisherUpdate(world.spawn, 64))
  mustSerialize('chunk_radius_update', spawn.chunkRadiusUpdate(8))
  mustSerialize('set_difficulty', spawn.difficulty(config))
  mustSerialize('play_status', spawn.playStatus('player_spawn'))
  mustSerialize('play_status', spawn.playStatus('login_success'))
})

test('entity packets serialize', () => {
  mustSerialize('update_attributes', spawn.updateAttributes({ runtimeId: player.entityId }))
  mustSerialize('set_entity_data', spawn.setEntityData({ runtimeId: player.entityId }))
  mustSerialize('set_health', spawn.setHealth(20))
  mustSerialize('move_player', spawn.movePlayer({
    runtimeId: player.entityId,
    position: world.spawn
  }))
  mustSerialize('respawn', spawn.respawn(world.spawn, player.entityId))
})

test('chat packets serialize', () => {
  mustSerialize('text', spawn.textRaw('hello'))
  mustSerialize('text', spawn.textSystem('system'))
  mustSerialize('text', spawn.textChat('Steve', 'hi'))
})

test('player list records serialize', () => {
  mustSerialize('player_list', spawn.playerListAdd({
    uuid: '00000000-0000-0000-0000-000000000001',
    username: 'Steve',
    entityId: player.entityId
  }))
  mustSerialize('player_list', spawn.playerListRemove({
    uuid: '00000000-0000-0000-0000-000000000001'
  }))
})

test('level_chunk payload params serialize', () => {
  const { encodeColumn } = require('../../src/world/chunk')
  const { payload, subChunkCount } = encodeColumn({ subChunks: [] })
  mustSerialize('level_chunk', {
    x: 0,
    z: 0,
    dimension: 0,
    sub_chunk_count: subChunkCount,
    highest_subchunk_count: null,
    cache_enabled: false,
    blobs: [],
    payload
  })
})
