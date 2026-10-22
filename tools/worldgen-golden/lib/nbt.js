'use strict';
// Minimal little-endian NBT codec (Bedrock flavour).
//
// Bedrock NBT differs from Java NBT in two ways that matter here:
//   * all numeric payloads are little-endian;
//   * string lengths are unsigned LEB128 varints, not a big-endian u16.
//
// Because the second point is the usual source of silently-wrong parsers, this
// module auto-detects the string-length encoding: it parses with varints first
// and only falls back to a u16 prefix if the varint pass fails structural
// validation. The chosen mode is reported so a capture can record it (see
// tools/worldgen-golden/README.md, "format findings").
//
// No dependencies: runs on a bare Node 22.

const TAG = {
  END: 0,
  BYTE: 1,
  SHORT: 2,
  INT: 3,
  LONG: 4,
  FLOAT: 5,
  DOUBLE: 6,
  BYTE_ARRAY: 7,
  STRING: 8,
  LIST: 9,
  COMPOUND: 10,
  INT_ARRAY: 11,
  LONG_ARRAY: 12,
};

class Reader {
  constructor(buffer) {
    this.buf = buffer;
    this.pos = 0;
    this.stringMode = 'varint';
  }

  eof() {
    return this.pos >= this.buf.length;
  }

  need(n) {
    if (this.pos + n > this.buf.length) {
      throw new RangeError(`truncated NBT at ${this.pos}: need ${n}, have ${this.buf.length - this.pos}`);
    }
  }

  u8() {
    this.need(1);
    return this.buf.readUInt8(this.pos++);
  }

  i8() {
    this.need(1);
    return this.buf.readInt8(this.pos++);
  }

  i16() {
    this.need(2);
    const v = this.buf.readInt16LE(this.pos);
    this.pos += 2;
    return v;
  }

  i32() {
    this.need(4);
    const v = this.buf.readInt32LE(this.pos);
    this.pos += 4;
    return v;
  }

  i64() {
    this.need(8);
    const v = this.buf.readBigInt64LE(this.pos);
    this.pos += 8;
    return v;
  }

  f32() {
    this.need(4);
    const v = this.buf.readFloatLE(this.pos);
    this.pos += 4;
    return v;
  }

  f64() {
    this.need(8);
    const v = this.buf.readDoubleLE(this.pos);
    this.pos += 8;
    return v;
  }

  varint() {
    let result = 0;
    let shift = 0;
    for (let i = 0; i < 5; i++) {
      const byte = this.u8();
      result |= (byte & 0x7f) << shift;
      if ((byte & 0x80) === 0) return result >>> 0;
      shift += 7;
    }
    throw new RangeError(`varint too long at ${this.pos}`);
  }

  string() {
    let length;
    if (this.stringMode === 'varint') {
      length = this.varint();
    } else {
      this.need(2);
      length = this.buf.readUInt16LE(this.pos);
      this.pos += 2;
    }
    if (length > 1 << 20) {
      throw new RangeError(`implausible string length ${length} at ${this.pos}`);
    }
    this.need(length);
    const value = this.buf.toString('utf8', this.pos, this.pos + length);
    this.pos += length;
    return value;
  }

  payload(type) {
    switch (type) {
      case TAG.BYTE: return this.i8();
      case TAG.SHORT: return this.i16();
      case TAG.INT: return this.i32();
      case TAG.LONG: return this.i64();
      case TAG.FLOAT: return this.f32();
      case TAG.DOUBLE: return this.f64();
      case TAG.BYTE_ARRAY: {
        const n = this.i32();
        this.need(n);
        const out = Buffer.from(this.buf.subarray(this.pos, this.pos + n));
        this.pos += n;
        return out;
      }
      case TAG.STRING: return this.string();
      case TAG.LIST: return this.list();
      case TAG.COMPOUND: return this.compound();
      case TAG.INT_ARRAY: {
        const n = this.i32();
        const out = new Array(n);
        for (let i = 0; i < n; i++) out[i] = this.i32();
        return out;
      }
      case TAG.LONG_ARRAY: {
        const n = this.i32();
        const out = new Array(n);
        for (let i = 0; i < n; i++) out[i] = this.i64();
        return out;
      }
      default:
        throw new Error(`unknown NBT tag type ${type} at ${this.pos}`);
    }
  }

  list() {
    const elementType = this.u8();
    const n = this.i32();
    if (n < 0 || n > 1 << 24) {
      throw new RangeError(`implausible list length ${n} at ${this.pos}`);
    }
    const out = new Array(n);
    for (let i = 0; i < n; i++) out[i] = this.payload(elementType);
    return out;
  }

  compound() {
    const out = {};
    for (;;) {
      const type = this.u8();
      if (type === TAG.END) return out;
      const name = this.string();
      out[name] = this.payload(type);
    }
  }
}

class Writer {
  constructor() {
    this.chunks = [];
  }

  push(buffer) {
    this.chunks.push(buffer);
  }

  u8(v) {
    this.push(Buffer.from([v & 0xff]));
  }

  i16(v) {
    const b = Buffer.alloc(2);
    b.writeInt16LE(v);
    this.push(b);
  }

  i32(v) {
    const b = Buffer.alloc(4);
    b.writeInt32LE(v);
    this.push(b);
  }

  i64(v) {
    const b = Buffer.alloc(8);
    b.writeBigInt64LE(BigInt(v));
    this.push(b);
  }

  varint(v) {
    const bytes = [];
    let value = v >>> 0;
    do {
      let byte = value & 0x7f;
      value >>>= 7;
      if (value) byte |= 0x80;
      bytes.push(byte);
    } while (value);
    this.push(Buffer.from(bytes));
  }

  string(v) {
    const b = Buffer.from(v, 'utf8');
    this.varint(b.length);
    this.push(b);
  }

  tag(type, name, encode) {
    this.u8(type);
    this.string(name);
    encode(this);
  }

  toBuffer() {
    return Buffer.concat(this.chunks);
  }
}

function parseRoot(buffer, { stringMode = 'auto' } = {}) {
  const modes = stringMode === 'auto' ? ['varint', 'u16'] : [stringMode];
  let lastError = null;
  for (const mode of modes) {
    const reader = new Reader(buffer);
    reader.stringMode = mode;
    try {
      const type = reader.u8();
      if (type !== TAG.COMPOUND) throw new Error(`root is tag ${type}, expected compound`);
      const name = reader.string();
      const value = reader.compound();
      // A valid Bedrock NBT file is consumed exactly; trailing bytes mean we
      // picked the wrong string encoding and should try the next one.
      if (reader.pos !== buffer.length && reader.pos + 1 !== buffer.length) {
        throw new Error(`trailing ${buffer.length - reader.pos} byte(s)`);
      }
      return { value, name, stringMode: mode, bytesConsumed: reader.pos };
    } catch (error) {
      lastError = error;
    }
  }
  throw new Error(`could not parse NBT (${lastError && lastError.message})`);
}

function tagOf(value) {
  if (typeof value === 'string') return TAG.STRING;
  if (typeof value === 'boolean') return TAG.BYTE;
  if (typeof value === 'bigint') return TAG.LONG;
  if (typeof value === 'number') {
    if (Number.isInteger(value) && value >= -2147483648 && value <= 2147483647) return TAG.INT;
    return TAG.DOUBLE;
  }
  if (Buffer.isBuffer(value)) return TAG.BYTE_ARRAY;
  if (Array.isArray(value)) {
    if (value.length === 0) return TAG.LIST; // empty list: element type omitted on write
    return TAG.LIST;
  }
  if (value && typeof value === 'object') return TAG.COMPOUND;
  throw new Error(`cannot encode value ${String(value)}`);
}

function listElementType(list) {
  if (list.length === 0) return TAG.END;
  // Every element must share a type; NBT lists are homogeneous.
  const types = new Set(list.map(tagOf));
  if (types.size === 1) return [...types][0];
  throw new Error(`heterogeneous list: ${[...types].join(',')}`);
}

function encodePayload(w, type, value) {
  switch (type) {
    case TAG.BYTE: {
      const b = Buffer.alloc(1);
      b.writeInt8(value === true ? 1 : value === false ? 0 : value);
      w.push(b);
      return;
    }
    case TAG.SHORT: w.i16(value); return;
    case TAG.INT: w.i32(value); return;
    case TAG.LONG: w.i64(value); return;
    case TAG.FLOAT: {
      const b = Buffer.alloc(4);
      b.writeFloatLE(value);
      w.push(b);
      return;
    }
    case TAG.DOUBLE: {
      const b = Buffer.alloc(8);
      b.writeDoubleLE(value);
      w.push(b);
      return;
    }
    case TAG.BYTE_ARRAY: {
      w.i32(value.length);
      w.push(value);
      return;
    }
    case TAG.STRING: w.string(value); return;
    case TAG.LIST: {
      const elementType = listElementType(value);
      w.u8(elementType);
      w.i32(value.length);
      for (const item of value) encodePayload(w, elementType, item);
      return;
    }
    case TAG.COMPOUND: {
      for (const [key, entry] of Object.entries(value)) {
        if (entry === undefined || entry === null) continue;
        const type = tagOf(entry);
        w.u8(type);
        w.string(key);
        encodePayload(w, type, entry);
      }
      w.u8(TAG.END);
      return;
    }
    case TAG.INT_ARRAY: {
      w.i32(value.length);
      for (const item of value) w.i32(item);
      return;
    }
    case TAG.LONG_ARRAY: {
      w.i32(value.length);
      for (const item of value) w.i64(item);
      return;
    }
    default:
      throw new Error(`cannot encode tag type ${type}`);
  }
}

function writeRoot(value, name = '') {
  const w = new Writer();
  w.u8(TAG.COMPOUND);
  w.string(name);
  encodePayload(w, TAG.COMPOUND, value);
  return w.toBuffer();
}

module.exports = { TAG, Reader, Writer, parseRoot, writeRoot };
