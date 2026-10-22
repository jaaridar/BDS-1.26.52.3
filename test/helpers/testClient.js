'use strict'

/**
 * Minimal offline test client used by the integration tests.
 * Mirrors bedrock-protocol's createClient flow but pins the version and the
 * RakNet backend so tests never depend on optional native modules.
 */

const { Client } = require('bedrock-protocol/src/client')
const { resolveRaknetBackend } = require('../../src/protocol/raknet')

function onceWithTimeout (emitter, event, ms = 8000, filter = () => true) {
  return new Promise((resolve, reject) => {
    const timer = setTimeout(() => {
      emitter.off(event, onEvent)
      reject(new Error(`timed out waiting for "${event}" after ${ms}ms`))
    }, ms)
    function onEvent (...args) {
      if (!filter(...args)) return
      clearTimeout(timer)
      emitter.off(event, onEvent)
      resolve(args.length > 1 ? args : args[0])
    }
    emitter.on(event, onEvent)
  })
}

function connectTestClient ({ host, port, version, username = 'TestBot', backend }) {
  const client = new Client({
    host,
    port,
    version,
    username,
    offline: true,
    skipPing: true,
    connectTimeout: 8000,
    raknetBackend: backend ?? resolveRaknetBackend('auto'),
    useRaknetWorkers: false,
    autoInitPlayer: true,
    delayedInit: true,
    conLog: () => {}
  })

  const errors = []
  client.on('error', (err) => errors.push(err))

  client.once('connect_allowed', () => {
    client.connect()
    client.on('network_stack_latency', (packet) => {
      if (packet.needs_response) {
        client.queue('network_stack_latency', { timestamp: packet.timestamp, needs_response: false })
      }
    })
  })

  // Resource-pack negotiation, exactly like a real client
  client.once('resource_packs_info', () => {
    client.write('resource_pack_client_response', {
      response_status: 'have_all_packs',
      response_status_name: 'resourcepackshaveall',
      resourcepackids: []
    })
    client.once('resource_pack_stack', () => {
      client.write('resource_pack_client_response', {
        response_status: 'completed',
        response_status_name: 'resourcepackstackfinished',
        resourcepackids: []
      })
    })
    client.queue('client_cache_status', { enabled: false })
    setTimeout(() => {
      if (client.status !== 0) {
        client.queue('request_chunk_radius', { chunk_radius: 4, max_radius: 4 })
      }
    }, 200)
  })

  client.init()

  return {
    client,
    errors,
    /** Wait until the client is fully spawned in the world */
    waitSpawn: () => onceWithTimeout(client, 'spawn', 8000),
    waitEvent: (event, ms, filter) => onceWithTimeout(client, event, ms, filter),
    sendChat: (message) => client.queue('text', {
      needs_translation: false,
      category: 'authored',
      type: 'chat',
      source_name: username,
      message,
      xuid: '',
      platform_chat_id: '',
      has_filtered_message: false,
      filtered_message: null
    }),
    sendCommand: (command) => client.queue('command_request', {
      command,
      origin: {
        type: 'player',
        uuid: '00000000-0000-0000-0000-000000000001',
        request_id: '',
        player_entity_id: 0
      },
      internal: false,
      version: ''
    }),
    close: () => {
      try { client.close('test done') } catch {}
    }
  }
}

module.exports = { connectTestClient, onceWithTimeout }
