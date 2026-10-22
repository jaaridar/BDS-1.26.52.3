'use strict'

/**
 * OpenBDS configuration.
 *
 * Reads the classic Minecraft `server.properties` format (key=value lines,
 * `#` comments) used by the Bedrock Dedicated Server, layers environment
 * variables and CLI flags on top, and returns a typed, validated config.
 *
 * Precedence (lowest to highest):
 *   built-in defaults -> server.properties -> OPENBDS_* env -> CLI flags
 */

const fs = require('fs')
const path = require('path')

const GAMEMODES = new Set(['survival', 'creative', 'adventure', 'spectator'])
const DIFFICULTIES = new Set(['peaceful', 'easy', 'normal', 'hard'])
const PALETTES = new Set(['air', 'flat', 'terrain', 'vanilla'])
const GENERATORS = new Set(['flat', 'void', 'infinite'])
const RAKNET_BACKENDS = new Set(['auto', 'jsp-raknet', 'raknet-native'])
const LOG_LEVELS = new Set(['debug', 'info', 'warn', 'error'])

/** Defaults mirror the stock BDS server.properties values where possible. */
const DEFAULTS = {
  // BDS-compatible keys
  serverName: 'OpenBDS Server',
  gamemode: 'survival',
  forceGamemode: false,
  difficulty: 'easy',
  allowCheats: false,
  maxPlayers: 10,
  onlineMode: false,
  allowList: false,
  serverPort: 19132,
  serverPortV6: 19133,
  levelName: 'Bedrock level',
  levelSeed: '',
  viewDistance: 12,
  tickDistance: 4,
  playerIdleTimeout: 30,
  maxThreads: 8,
  compressionThreshold: 1,
  compressionAlgorithm: 'deflate',
  defaultPlayerPermissionLevel: 'member',
  texturepackRequired: false,
  // OpenBDS-specific keys (prefix: openbds-)
  gameVersion: '1.26.52.3', // advertised in the server-list ping
  protocolVersion: '1.26.51', // minecraft-data / bedrock-protocol version key
  palette: 'flat',
  generator: 'flat',
  raknetBackend: 'auto',
  logLevel: 'info',
  tickRateMs: 50,
  spawnRadiusChunks: 4,
  host: '0.0.0.0'
}

/**
 * Schema: camelCase key -> [properties key, parser, validator?]
 * Unknown keys in the file are kept in `raw` and ignored otherwise.
 */
const SCHEMA = {
  serverName: ['server-name', String],
  gamemode: ['gamemode', (v) => v.toLowerCase(), (v) => GAMEMODES.has(v) || `must be one of ${[...GAMEMODES].join(', ')}`],
  forceGamemode: ['force-gamemode', toBool],
  difficulty: ['difficulty', (v) => v.toLowerCase(), (v) => DIFFICULTIES.has(v) || `must be one of ${[...DIFFICULTIES].join(', ')}`],
  allowCheats: ['allow-cheats', toBool],
  maxPlayers: ['max-players', toInt, (v) => v > 0 || 'must be a positive integer'],
  onlineMode: ['online-mode', toBool],
  allowList: ['white-list', toBool],
  allowList2: ['allow-list', toBool],
  serverPort: ['server-port', toInt, (v) => (v > 0 && v < 65536) || 'must be a valid TCP/UDP port'],
  serverPortV6: ['server-portv6', toInt, (v) => (v > 0 && v < 65536) || 'must be a valid TCP/UDP port'],
  levelName: ['level-name', String],
  levelSeed: ['level-seed', String],
  viewDistance: ['view-distance', toInt, (v) => (v >= 1 && v <= 64) || 'must be between 1 and 64'],
  tickDistance: ['tick-distance', toInt, (v) => (v >= 1 && v <= 64) || 'must be between 1 and 64'],
  playerIdleTimeout: ['player-idle-timeout', toInt, (v) => v >= 0 || 'must be >= 0'],
  maxThreads: ['max-threads', toInt, (v) => v > 0 || 'must be a positive integer'],
  compressionThreshold: ['compression-threshold', toInt, (v) => v >= 0 || 'must be >= 0'],
  compressionAlgorithm: ['compression-algorithm', normalizeCompression, (v) => ['deflate', 'snappy', 'none'].includes(v) || 'must be zlib, snappy or none'],
  defaultPlayerPermissionLevel: ['default-player-permission-level', (v) => v.toLowerCase(), (v) => ['visitor', 'member', 'operator'].includes(v) || 'must be visitor, member or operator'],
  texturepackRequired: ['texturepack-required', toBool],
  gameVersion: ['openbds-game-version', String],
  protocolVersion: ['openbds-protocol-version', String],
  palette: ['openbds-palette', (v) => v.toLowerCase(), (v) => PALETTES.has(v) || path.isAbsolute(v) || v.endsWith('.json') || `must be one of ${[...PALETTES].join(', ')} or a path to a palette JSON file`],
  generator: ['openbds-generator', (v) => v.toLowerCase(), (v) => GENERATORS.has(v) || `must be one of ${[...GENERATORS].join(', ')}`],
  raknetBackend: ['openbds-raknet-backend', (v) => v.toLowerCase(), (v) => RAKNET_BACKENDS.has(v) || `must be one of ${[...RAKNET_BACKENDS].join(', ')}`],
  logLevel: ['openbds-log-level', (v) => v.toLowerCase(), (v) => LOG_LEVELS.has(v) || `must be one of ${[...LOG_LEVELS].join(', ')}`],
  tickRateMs: ['openbds-tick-rate-ms', toInt, (v) => v > 0 || 'must be a positive integer'],
  spawnRadiusChunks: ['openbds-spawn-radius-chunks', toInt, (v) => (v >= 0 && v <= 32) || 'must be between 0 and 32'],
  host: ['openbds-bind-host', String]
}

function toBool (v) {
  const s = String(v).trim().toLowerCase()
  if (['true', '1', 'yes', 'on'].includes(s)) return true
  if (['false', '0', 'no', 'off'].includes(s)) return false
  throw new Error(`cannot parse boolean from "${v}"`)
}

function toInt (v) {
  const n = Number.parseInt(String(v).trim(), 10)
  if (Number.isNaN(n)) throw new Error(`cannot parse integer from "${v}"`)
  return n
}

/** BDS calls it "zlib", the wire layer calls it "deflate" */
function normalizeCompression (v) {
  const s = String(v).trim().toLowerCase()
  return s === 'zlib' ? 'deflate' : s
}

/**
 * Parse server.properties text into a plain string map.
 * Lines starting with '#' and blank lines are ignored. Values may contain '='.
 */
function parseProperties (text) {
  const out = {}
  for (const rawLine of String(text).split(/\r?\n/)) {
    const line = rawLine.trim()
    if (!line || line.startsWith('#')) continue
    const eq = line.indexOf('=')
    if (eq <= 0) continue
    const key = line.slice(0, eq).trim()
    const value = line.slice(eq + 1).trim()
    out[key] = value
  }
  return out
}

/** Serialize a string map back to server.properties text. */
function serializeProperties (map, header = '') {
  const lines = []
  if (header) for (const l of header.split('\n')) lines.push(`# ${l}`.trimEnd())
  for (const [k, v] of Object.entries(map)) lines.push(`${k}=${v}`)
  return lines.join('\n') + '\n'
}

function applyLayer (config, source, origin, alias = {}) {
  const issues = []
  for (const [key, [propKey, parse, validate]] of Object.entries(SCHEMA)) {
    const lookup = alias[key] ?? propKey
    if (!(lookup in source)) continue
    let value
    try {
      value = parse(source[lookup])
    } catch (err) {
      issues.push(`${origin} ${lookup}: ${err.message}`)
      continue
    }
    if (validate) {
      const ok = validate(value)
      if (ok !== true) {
        issues.push(`${origin} ${lookup}: ${ok}`)
        continue
      }
    }
    config[key] = value
  }
  return issues
}

/**
 * Build the final typed config.
 *
 * @param {object} opts
 * @param {string} [opts.configPath]  path to a server.properties file (optional)
 * @param {object} [opts.env]         environment map (default: process.env)
 * @param {object} [opts.argv]        CLI overrides as camelCase config keys
 * @param {boolean} [opts.requireFile] fail if the config file is missing
 */
function loadConfig ({ configPath, env = process.env, argv = {}, requireFile = false } = {}) {
  const config = { ...DEFAULTS }
  const raw = {}
  const issues = []

  if (configPath) {
    const resolved = path.resolve(configPath)
    if (!fs.existsSync(resolved)) {
      if (requireFile) throw new Error(`config file not found: ${resolved}`)
    } else {
      const parsed = parseProperties(fs.readFileSync(resolved, 'utf8'))
      Object.assign(raw, parsed)
      // `allow-list` is the modern spelling of `white-list`
      issues.push(...applyLayer(config, parsed, resolved))
    }
  }

  // Environment: OPENBDS_SERVER_PORT -> serverPort, OPENBDS_ONLINE_MODE -> onlineMode ...
  const envSource = {}
  const envAlias = {}
  for (const key of Object.keys(SCHEMA)) {
    const envKey = 'OPENBDS_' + key.replace(/([A-Z])/g, '_$1').toUpperCase()
    if (envKey in env) {
      envSource[envKey] = env[envKey]
      envAlias[key] = envKey
    }
  }
  issues.push(...applyLayer(config, envSource, 'env', envAlias))

  // CLI: already-normalized camelCase keys
  const argvSource = {}
  const argvAlias = {}
  for (const key of Object.keys(SCHEMA)) {
    if (key in argv && argv[key] !== undefined) {
      argvSource[key] = argv[key]
      argvAlias[key] = key
    }
  }
  issues.push(...applyLayer(config, argvSource, 'cli', argvAlias))

  // allow-list and white-list both map in; prefer whichever the user set later
  if ('allowList2' in config) {
    config.allowList = config.allowList2
    delete config.allowList2
  }

  if (issues.length) {
    const err = new Error('Invalid configuration:\n  - ' + issues.join('\n  - '))
    err.issues = issues
    throw err
  }

  return Object.freeze({ ...config, raw })
}

/** Difficulty name -> network id */
function difficultyId (name) {
  return { peaceful: 0, easy: 1, normal: 2, hard: 3 }[name] ?? 1
}

/** Gamemode name -> network name used by the protocol ('survival' | 'creative' | ...) */
function networkGamemode (name) {
  return GAMEMODES.has(name) ? name : 'survival'
}

module.exports = {
  DEFAULTS,
  SCHEMA,
  parseProperties,
  serializeProperties,
  loadConfig,
  difficultyId,
  networkGamemode,
  GAMEMODES,
  DIFFICULTIES
}
