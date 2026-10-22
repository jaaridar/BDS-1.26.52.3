'use strict'

/**
 * Server-list ping (RakNet unconnected ping).
 * Used by tools/ping.js (ops health checks) and the test suite.
 */

const { ServerAdvertisement } = require('bedrock-protocol/src/server/advertisement')
const initRaknet = require('bedrock-protocol/src/rak')

/**
 * Ping a Bedrock server and return its advertisement.
 *
 * @param {object} opts
 * @param {string} opts.host
 * @param {number} opts.port
 * @param {number} [opts.timeout] ms
 * @param {string} [opts.backend] 'jsp-raknet' | 'raknet-native'
 * @returns {Promise<ServerAdvertisement & {raw: string}>}
 */
async function ping ({ host, port, timeout = 3000, backend = 'jsp-raknet' }) {
  const { RakClient, RakTimeout } = initRaknet(backend)
  const con = new RakClient({ host, port })
  try {
    const raw = await con.ping(timeout)
    const str = normalizePong(raw)
    const ad = new ServerAdvertisement().fromString(str)
    ad.raw = str
    return ad
  } finally {
    try { con.close() } catch {}
  }
}

/** Different raknet backends hand back the pong string in slightly different shapes. */
function normalizePong (raw) {
  if (typeof raw === 'string') return raw
  if (raw && typeof raw.extra === 'string') return raw.extra
  if (raw && raw.extra && Buffer.isBuffer(raw.extra)) return raw.extra.toString()
  if (Buffer.isBuffer(raw)) return raw.toString()
  if (raw && typeof raw.toString === 'function' && raw.toString !== Object.prototype.toString) {
    return raw.toString()
  }
  throw new Error(`unexpected ping response: ${typeof raw}`)
}

module.exports = { ping, normalizePong, RakTimeout: initRaknet('jsp-raknet').RakTimeout }
