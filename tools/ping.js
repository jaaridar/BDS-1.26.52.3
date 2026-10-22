#!/usr/bin/env node
'use strict'

/**
 * Headless server status probe.
 *
 *   node tools/ping.js [host] [port]
 *
 * Prints the server-list advertisement as JSON and exits 0 on success,
 * 1 when the server does not answer. Suitable for health checks:
 *
 *   HEALTHCHECK CMD node tools/ping.js 127.0.0.1 19132
 */

const { ping } = require('../src/protocol/ping')

async function main () {
  const host = process.argv[2] ?? '127.0.0.1'
  const port = Number.parseInt(process.argv[3] ?? '19132', 10)
  try {
    const ad = await ping({ host, port, timeout: 5000 })
    console.log(JSON.stringify({
      host,
      port,
      motd: ad.motd,
      version: ad.version,
      protocol: ad.protocol,
      playersOnline: ad.playersOnline,
      playersMax: ad.playersMax,
      levelName: ad.levelName,
      gamemode: ad.gamemode,
      serverId: ad.serverId
    }, null, 2))
    return 0
  } catch (err) {
    console.error(`ping failed: ${err.message}`)
    return 1
  }
}

main().then((code) => process.exit(code))
