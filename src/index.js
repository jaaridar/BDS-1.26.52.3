'use strict'

/**
 * OpenBDS public API.
 *
 *   const { createServer, loadConfig } = require('openbds')
 *   const server = createServer({ config: loadConfig({ configPath: 'server.properties' }) })
 *   await server.start()
 */

const { loadConfig, DEFAULTS, parseProperties, serializeProperties } = require('./config')
const { createLogger } = require('./logger')
const { OpenBDSServer } = require('./server')
const { PlayerSession } = require('./player')
const { BlockPalette, loadPalette } = require('./world/palette')
const { World } = require('./world/world')
const { createGenerator } = require('./world/generator')
const commands = require('./commands')
const spawn = require('./protocol/spawn')
const { ping } = require('./protocol/ping')

function createServer ({ config, logger } = {}) {
  return new OpenBDSServer({
    config: config ?? loadConfig(),
    logger
  })
}

module.exports = {
  createServer,
  loadConfig,
  DEFAULTS,
  parseProperties,
  serializeProperties,
  createLogger,
  OpenBDSServer,
  PlayerSession,
  BlockPalette,
  loadPalette,
  World,
  createGenerator,
  commands,
  spawn,
  ping
}
