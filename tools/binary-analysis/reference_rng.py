#!/usr/bin/env python3
"""Reference implementation of the random-number primitives recovered from BDS.

Everything here is a direct transliteration of Ghidra pseudocode from
``bedrock_server`` 1.26.52.3 (see ``research/proprietary/bds-1.26.52.3/ANALYSIS.md``
and the ``pseudocode/`` evidence).  It is a *decode of the binary*, not a copy of
any Mojang source file, and it exists so that the recovered constants can be
exercised, compared and unit tested before anybody reimplements terrain.

It is not wired into the OpenBDS build.

Addresses in the docstrings are Ghidra addresses (link address + 0x100000).

Example:
    python3 tools/binary-analysis/reference_rng.py --self-test
"""

from __future__ import annotations

import argparse

MASK64 = (1 << 64) - 1
MASK32 = (1 << 32) - 1
MASK48 = (1 << 48) - 1

# ---------------------------------------------------------------------------
# Constants, exactly as they appear in the decompiled code
# ---------------------------------------------------------------------------

MT19937_MULT = 0x6C078965          # init_genrand multiplier (1812433253)
MMIX_MULT = 0x5851F42D4C957F2D     # 529bef0: Knuth LCG multiplier
MMIX_INCR = 0x14057B7EF767814F     # 529bef0: Knuth LCG increment
SPLITMIX_A = 0xBF58476D1CE4E5B9    # 52f3680: printed as -0x40a7b892e31b1a47
SPLITMIX_B = 0x94D049BB133111EB    # 52f3680: printed as -0x6b2fb644ecceee15
GOLDEN = 0x9E3779B97F4A7C15        # RandomSupport.GOLDEN_RATIO_64
SILVER = 0x6A09E667F3BCC909        # RandomSupport.SILVER_RATIO_64
JAVA_MULT = 0x5DEECE66D            # java.util.Random
JAVA_ADD = 0xB

CHUNK_SEED_X = 0x14609048          # 527ab30: x * 0x14609048 + z * 0x7ebe2d5
CHUNK_SEED_Z = 0x7EBE2D5

GETSEED_X = 0x2FC20F               # 3129871
GETSEED_Z = 0x6EBFFF5              # 116129781
GETSEED_MIX = 0x285B825            # 42317861
GETSEED_ADD = 0xB
GETSEED_SHIFT = 16

STRUCT_SALT_A = 0x1EF1565BD5       # 132897987541, d2d2570
STRUCT_SALT_B = 0x4F9939F508       # 341873128712, d2d2570


def _s32(value: int) -> int:
    value &= MASK32
    return value - (1 << 32) if value & 0x80000000 else value


def _s64(value: int) -> int:
    value &= MASK64
    return value - (1 << 64) if value & (1 << 63) else value


def _rotl64(value: int, count: int) -> int:
    value &= MASK64
    count &= 63
    return ((value << count) | (value >> (64 - count))) & MASK64


# ---------------------------------------------------------------------------
# Core::Random::XoroshiroRandom  (0x49ca710 and friends)
# ---------------------------------------------------------------------------


class XoroshiroRandom:
    """xoroshiro128++ as recovered from ``XoroshiroRandom::vslot2``.

    Object layout is ``[vptr][s0 @ +8][s1 @ +0x10][gaussian @ +0x18][flag]``.
    """

    def __init__(self, s0: int = GOLDEN, s1: int = SILVER) -> None:
        self.s0 = s0 & MASK64
        self.s1 = s1 & MASK64
        self._gaussian: float | None = None

    # -- raw generators ----------------------------------------------------
    def next_long(self) -> int:
        """0x49ca710 / 0x49ca8b0: ``rotl(s0 + s1, 17) + s0``."""
        s0, s1 = self.s0, self.s1
        total = (s0 + s1) & MASK64
        s1 ^= s0
        self.s0 = ((s1 << 21) ^ _rotl64(s0, 49) ^ s1) & MASK64
        self.s1 = _rotl64(s1, 28)
        return (_rotl64(total, 17) + s0) & MASK64

    def next_int(self) -> int:
        """0x49ca710: the low 32 bits of :meth:`next_long`."""
        return self.next_long() & MASK32

    def next_int_bound(self, bound: int) -> int:
        """0x49ca750: Lemire multiply-and-reject, ``product >> 32``.

        The pseudocode casts the low half of ``nextLong()`` to ``uint`` (not
        ``int``) before the widening multiply, so the 32-bit output is
        zero-extended; the rejection test is ``(uint)product < 2**32 % bound``
        and the result is the high word of the 64-bit product.
        """
        if bound <= 0:
            raise ValueError("bound must be positive")
        threshold = ((1 << 32) - bound) % bound
        while True:
            low = self.next_long() & MASK32
            product = low * bound
            if (product & MASK32) >= threshold:
                return product >> 32

    def next_double(self) -> float:
        """0x49ca8b0: ``(nextLong() >> 11) * 2**-53``."""
        return (self.next_long() >> 11) * (2.0 ** -53)

    def next_gaussian(self) -> float:
        """0x49ca900: Marsaglia polar method with one cached spare."""
        import math

        if self._gaussian is not None:
            value, self._gaussian = self._gaussian, None
            return value
        while True:
            v1 = self.next_double() * 2.0 - 1.0
            v2 = self.next_double() * 2.0 - 1.0
            s = v1 * v1 + v2 * v2
            if 0.0 < s < 1.0:
                multiplier = math.sqrt(-2.0 * math.log(s) / s)
                self._gaussian = v2 * multiplier
                return v1 * multiplier

    def skip(self, count: int) -> None:
        """0x49caa60: two-way unrolled skip."""
        while count >= 2:
            self.next_long()
            self.next_long()
            count -= 2
        if count:
            self.next_long()

    def fork_positional(self) -> "XoroshiroRandom":
        """0x495b6e0: child state = (next_long(), next_long())."""
        return XoroshiroRandom(self.next_long(), self.next_long())


# ---------------------------------------------------------------------------
# XoroshiroPositionalRandomFactory  (0x49cc570)
# ---------------------------------------------------------------------------


def get_seed_2d(x: int, z: int, *, sign_extend_x: bool = True) -> int:
    """Minecraft ``Mth.getSeed(x, 0, z)``, as called by the factory.

    ``XoroshiroPositionalRandomFactory_v2`` renders the x term as
    ``(long)(uVar6 * 0x2fc20f00000000 ^ uVar6) >> 0x20`` rather than the plain
    ``(long)(x * 3129871)`` that the Java formula implies; the two agree for all
    non-negative x but differ in the top bits for negative x (see the open
    question in ANALYSIS.md §8).  ``sign_extend_x`` selects which reading is
    used; the default follows the z term, which the pseudocode does show
    sign-extended, and therefore matches ``java.util.Random``-era Minecraft.

    Result is an unsigned 64-bit value (the pseudocode's ``>> 0x10`` on the
    signed product).
    """
    if sign_extend_x:
        term_x = _s32(x * GETSEED_X) & MASK64
    else:
        term_x = ((x * GETSEED_X) & MASK32)
    term_z = (_s32(z) * GETSEED_Z) & MASK64
    value = (term_x ^ term_z) & MASK64
    value = ((value * GETSEED_MIX + GETSEED_ADD) * value) & MASK64
    # ``(long)... >> 0x10`` is an arithmetic shift.
    return (_s64(value) >> GETSEED_SHIFT) & MASK64


def get_seed_3d(x: int, y: int, z: int) -> int:
    """``br::worldgen::processors::Rule::vslot2`` variant (3-D).

    ``uVar7 = (long)*(int*)(p+4) ^ (long)(int)p[1] * 0x6ebfff5 ^ (long)(int)*p * 0x2fc20f``
    """
    value = (_s32(z) & MASK64) ^ ((_s32(y) * GETSEED_Z) & MASK64)
    value ^= (_s32(x) * GETSEED_X) & MASK64
    value = ((value * GETSEED_MIX + GETSEED_ADD) * value) & MASK64
    return (_s64(value) >> GETSEED_SHIFT) & MASK64


def for_position(factory_s0: int, factory_s1: int, x: int, z: int) -> XoroshiroRandom:
    """``XoroshiroPositionalRandomFactory::vslot2``: mix a position into a stream."""
    s0 = get_seed_2d(x, z) ^ (factory_s0 & MASK64)
    if s0 == 0 and factory_s1 == 0:
        return XoroshiroRandom(GOLDEN, SILVER)
    return XoroshiroRandom(s0, factory_s1)


# ---------------------------------------------------------------------------
# std::mt19937 (per-chunk and per-feature randomness)
# ---------------------------------------------------------------------------


def chunk_seed(chunk_x: int, chunk_z: int) -> int:
    """``OverworldGenerator::vslot15``: 32-bit chunk seed."""
    return (_s32(chunk_x) * CHUNK_SEED_X + _s32(chunk_z) * CHUNK_SEED_Z) & MASK32


def mt19937_state(seed: int) -> list[int]:
    """MT19937 ``init_genrand`` exactly as the binary unrolls it.

    The decompiled loop stores 624 words starting at ``+8`` and terminates with
    ``mti = 624`` at ``+0x9cc``; the two-way unrolling is preserved here so the
    arithmetic can be compared instruction-for-instruction.
    """
    seed &= MASK32
    state = [seed]
    index = 1
    while index < 624:
        previous = state[index - 1]
        state.append((((previous >> 30) ^ previous) * MT19937_MULT + index) & MASK32)
        index += 1
    return state


def mt19937_temper(value: int) -> int:
    """Standard MT19937 output tempering (the ``>> 11``/``<< 7``/``<< 15``/``>> 18``)."""
    value &= MASK32
    value ^= value >> 11
    value ^= (value << 7) & 0x9D2C5680
    value ^= (value << 15) & 0xEFC60000
    value ^= value >> 18
    return value & MASK32


# ---------------------------------------------------------------------------
# br::worldgen::WorldGenRandom  (0xd2d59a0 etc.)
# ---------------------------------------------------------------------------


class WorldGenRandom:
    """``java.util.Random`` as implemented by ``br::worldgen::WorldGenRandom``."""

    def __init__(self, seed: int = 0) -> None:
        self.seed = (seed ^ JAVA_MULT) & MASK48

    def next_bits(self, bits: int) -> int:
        self.seed = (self.seed * JAVA_MULT + JAVA_ADD) & MASK48
        return (self.seed >> (48 - bits)) & ((1 << bits) - 1)

    def next_int(self) -> int:
        """Java returns a signed ``int``; so does the binary."""
        return _s32(self.next_bits(32))

    def next_int_bound(self, bound: int) -> int:
        if bound <= 0:
            raise ValueError("bound must be positive")
        if bound & (bound - 1) == 0:
            return (bound * self.next_bits(31)) >> 31
        while True:
            bits = self.next_bits(31)
            value = bits % bound
            if bits - value + (bound - 1) >= 0:
                return value

    def next_double(self) -> float:
        return ((self.next_bits(26) << 27) + self.next_bits(27)) * (2.0 ** -53)


def structure_seed(grid_x: int, grid_z: int, structure_salt: int, set_salt: int) -> int:
    """``d2d2570``: seed for one spaced-structure grid cell."""
    raw = (grid_x * STRUCT_SALT_A + grid_z * STRUCT_SALT_B + structure_salt + set_salt) & MASK64
    return raw ^ JAVA_MULT


# ---------------------------------------------------------------------------
# splitmix64 seed mixing  (0x52f3680, NoiseGradientSurfaceBuilder)
# ---------------------------------------------------------------------------


def splitmix64(value: int) -> int:
    value = (value + GOLDEN) & MASK64
    value = ((value >> 30) ^ value) * SPLITMIX_A & MASK64
    value = ((value >> 27) ^ value) * SPLITMIX_B & MASK64
    return (value >> 31) ^ value


def surface_builder_stream(seed: int) -> XoroshiroRandom:
    """Two splitmix64 rounds at offsets 0 and GOLDEN, then a child xoroshiro."""
    base = (seed ^ SILVER) & MASK64
    s1 = splitmix64(base - GOLDEN)          # pseudocode: uVar7 without the +GOLDEN
    s0 = splitmix64(base)                   # pseudocode: uVar7 + GOLDEN
    if s0 == 0 and s1 == 0:
        return XoroshiroRandom(GOLDEN, SILVER)
    return XoroshiroRandom(s0, s1)


def noise_node_seed(node_index: int, salt: int) -> int:
    """``529bef0``: three Knuth-LCG rounds seeded by the node index."""
    value = ((node_index * MMIX_MULT + MMIX_INCR) * node_index + salt) & MASK64
    value = ((value * MMIX_MULT + MMIX_INCR) * value + salt) & MASK64
    return ((value * MMIX_MULT + MMIX_INCR) * value + salt) & MASK64


# ---------------------------------------------------------------------------
# Self-test
# ---------------------------------------------------------------------------


def _self_test() -> int:
    failures = 0

    def check(label: str, got, want) -> None:
        nonlocal failures
        if got != want:
            failures += 1
            print(f"FAIL {label}: got {got!r}, want {want!r}")
        else:
            print(f"ok   {label}")

    # xoroshiro128++ reference vector: known state -> known output.
    rng = XoroshiroRandom(0x123456789ABCDEF0, 0x0FEDCBA987654321)
    first = rng.next_long()
    # Recompute independently, right to left, from the published algorithm.
    s0, s1 = 0x123456789ABCDEF0, 0x0FEDCBA987654321
    want = (_rotl64((s0 + s1) & MASK64, 17) + s0) & MASK64
    check("xoroshiro128++ output", first, want)

    # The generator must be a bijection: 10k draws must not repeat.
    rng = XoroshiroRandom(1, 2)
    seen = {rng.next_long() for _ in range(10000)}
    check("xoroshiro128++ no repeats", len(seen), 10000)

    # Lemire bounded ints stay in range.
    rng = XoroshiroRandom(7, 11)
    check("bounded ints", all(0 <= rng.next_int_bound(37) < 37 for _ in range(2000)), True)

    # doubles in [0, 1).
    rng = XoroshiroRandom(3, 5)
    check("doubles", all(0.0 <= rng.next_double() < 1.0 for _ in range(2000)), True)

    # gaussians: mean ~0, sd ~1 over 20k draws.
    import math

    rng = XoroshiroRandom(0xDEADBEEF, 0xFEEDFACE)
    values = [rng.next_gaussian() for _ in range(20000)]
    mean = sum(values) / len(values)
    sd = math.sqrt(sum((v - mean) ** 2 for v in values) / len(values))
    check("gaussian mean", abs(mean) < 0.03, True)
    check("gaussian sd", abs(sd - 1.0) < 0.03, True)

    # fork_positional consumes exactly two outputs.
    a = XoroshiroRandom(9, 13)
    b = XoroshiroRandom(9, 13)
    child, expected = a.fork_positional(), (b.next_long(), b.next_long())
    check("fork state", (child.s0, child.s1), expected)

    # getSeed: matches Java's Mth.getSeed for a few points (x,y,z xored in).
    check("getSeed(0,0)", get_seed_2d(0, 0), 0)
    # For non-negative coordinates the decompiled x term and Java's agree.
    check("getSeed agrees with Java for x>=0",
          all(get_seed_2d(x, z) == get_seed_2d(x, z, sign_extend_x=False)
              for x in range(0, 64) for z in range(0, 64)), True)
    check("getSeed(1,0) java value", _s64(get_seed_2d(1, 0)) >> 0, 133076631897947)

    # Positional streams are deterministic and reproduce for the same position.
    check("positional determinism", for_position(123, 456, 7, -9).next_long(),
          for_position(123, 456, 7, -9).next_long())

    # mt19937: init_genrand(5489) is the canonical reference seed.
    state = mt19937_state(5489)
    check("mt19937 state size", len(state), 624)
    # Reference vector: init_genrand(5489) -> mt[1] == 0x4d98ee96.
    check("mt19937 state[1]", state[1], 0x4D98EE96)
    check("mt19937 state[2]", state[2],
          (((0x4D98EE96 >> 30) ^ 0x4D98EE96) * MT19937_MULT + 2) & MASK32)
    check("mt19937 temper(0)", mt19937_temper(0), 0)

    # worldgen random == java.util.Random for the documented seed 42.
    check("WorldGenRandom(42).nextInt", WorldGenRandom(42).next_int(), -1170105035)

    # chunk seed: 0,0 -> 0; and it is 32-bit wrapped.
    check("chunk seed 0,0", chunk_seed(0, 0), 0)
    check("chunk seed 1,0", chunk_seed(1, 0), CHUNK_SEED_X)
    check("chunk seed wraps", chunk_seed(0x10000, 0), (0x10000 * CHUNK_SEED_X) & MASK32)

    # splitmix64 reference vectors (seed 0 -> 0xe220a8397b1dcdaf).
    check("splitmix64(0)", splitmix64(0), 0xE220A8397B1DCDAF)

    print("FAILURES:", failures)
    return 1 if failures else 0


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--self-test", action="store_true")
    args = ap.parse_args()
    if args.self_test:
        return _self_test()
    ap.print_help()
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
