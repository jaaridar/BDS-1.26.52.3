#!/usr/bin/env node
'use strict'

/**
 * OpenBDS - open-source headless Minecraft: Bedrock dedicated server.
 *
 * Usage:
 *   openbds [--config server.properties] [--port N] [--host ADDR]
 *           [--online-mode] [--log-level info] [--palette flat] ...
 */

const path = require('path')

const { loadConfig, DEFAULTS } = require('../src/config')
const { createLogger } = require('../src/logger')
const { OpenBDSServer } = require('../src/server')
const { startConsole } = require('../src/console')

const HELP = `OpenBDS - open-source headless Minecraft: Bedrock dedicated server

Usage: openbds [options]

Options:
  --config <file>       server.properties to read (default: ./server.properties if present)
  --host <addr>         bind address (default: ${DEFAULTS.host})
  --port <n>            UDP port (default: ${DEFAULTS.serverPort})
  --online-mode         require Xbox/Microsoft authenticated logins
  --offline-mode        accept unauthenticated (self-signed) logins
  --mc-version <ver>    protocol data version to speak (default: ${DEFAULTS.protocolVersion})
  --game-version <ver>  version string advertised in the server list (default: ${DEFAULTS.gameVersion})
  --palette <name|json> block palette: air | flat | vanilla | <file.json> (default: ${DEFAULTS.palette})
  --generator <name>    world generator: flat | void (default: ${DEFAULTS.generator})
  --log-level <level>   debug | info | warn | error (default: ${DEFAULTS.logLevel})
  --raknet-backend <b>  auto | jsp-raknet | raknet-native (default: ${DEFAULTS.raknetBackend})
  --help                show this help
  --version             show the OpenBDS version

This server is MIT-licensed open-source software. It is not affiliated with
Mojang or Microsoft. See NOTICE for details about proprietary game data.`

function parseArgs (argv) {
  const out = {}
  for (let i = 0; i < argv.length; i++) {
    const arg = argv[i]
    const next = () => argv[++i]
    switch (arg) {
      case '--help': case '-h': out.help = true; break
      case '--version': case '-V': out.showVersion = true; break
      case '--config': out.configPath = next(); break
      case '--host': out.host = next(); break
      case '--port': out.serverPort = next(); break
      case '--online-mode': out.onlineMode = 'true'; break
      case '--offline-mode': out.onlineMode = 'false'; break
      case '--mc-version': out.protocolVersion = next(); break
      case '--game-version': out.gameVersion = next(); break
      case '--palette': out.palette = next(); break
      case '--generator': out.generator = next(); break
      case '--log-level': out.logLevel = next(); break
      case '--raknet-backend': out.raknetBackend = next(); break
      default:
        if (arg.startsWith('--')) {
          console.error(`Unknown option: ${arg}\n`)
          out.help = true
        }
    }
  }
  return out
}

async function main () {
  const args = parseArgs(process.argv.slice(2))
  if (args.help) {
    console.log(HELP)
    return 0
  }
  if (args.showVersion) {
    console.log(`OpenBDS ${require('../package.json').version}`)
    return 0
  }

  const configPath = args.configPath ??
    (require('fs').existsSync('server.properties') ? 'server.properties' : undefined)

  const { help, showVersion, configPath: _cp, ...overrides } = args
  const config = loadConfig({ configPath, argv: overrides })
  const logger = createLogger({
    level: config.logLevel,
    file: path.join('logs', 'openbds.log')
  })

  logger.info(`OpenBDS ${require('../package.json').version} starting`)
  logger.info(`Config: ${configPath ?? '(defaults)'} | palette=${config.palette} | generator=${config.generator} | online-mode=${config.onlineMode}`)

  const server = new OpenBDSServer({ config, logger })

  const onSignal = (sig) => {
    logger.info(`Received ${sig}, shutting down...`)
    server.stop('Server stopped').then(() => {
      logger.close()
      process.exit(0)
    })
  }
  process.on('SIGINT', () => onSignal('SIGINT'))
  process.on('SIGTERM', () => onSignal('SIGTERM'))

  const console_ = startConsole(server)

  await server.start()
  await new Promise((resolve) => server.once('stopped', resolve))
  console_.close()
  logger.close()
  return 0
}

main().then(
  (code) => process.exit(code ?? 0),
  (err) => {
    console.error(err?.stack ?? err)
    process.exit(1)
  }
)
