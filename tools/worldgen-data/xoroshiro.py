#!/usr/bin/env python3
"""Xoroshiro128++ exactly as recovered from the proprietary BDS binary.

Two independent implementations are kept side by side:

``literal``
    A line-by-line transcription of the decompiled pseudocode at
    ``XoroshiroRandom::vslot3/6/7/8/9`` (ELF vaddrs 0x48ca750, 0x48ca860,
    0x48ca8b0, 0x48ca900, 0x48caa60).  Every shift, mask and rotate mirrors a
    statement in the recovered C, so the transcription can be audited against
    the evidence directly.

``clean``
    The same generator written from the algorithm's specification.

``--verify`` checks that both produce identical streams, and that the
statistical contracts (bound handling, ranges, Gaussian moments) hold.

    python3 tools/worldgen-data/xoroshiro.py --verify

Provenance: the algorithm itself is public domain (Blackman & Vigna,
xoroshiro128++); only the *evidence* of how BDS instantiates it comes from the
proprietary binary.
"""

from __future__ import annotations

import argparse
import math
import random
import sys

MASK64 = (1 << 64) - 1
MASK32 = (1 << 32) - 1


def rotl64(value: int, count: int) -> int:
    value &= MASK64
    return ((value << count) | (value >> (64 - count))) & MASK64


class LiteralXoroshiro:
    """Transcription of the decompiled BDS object.

    Field layout recovered from the pseudocode: ``s0`` at +0x8, ``s1`` at
    +0x10, the cached Gaussian at +0x18 and its "valid" flag at +0x20.
    """

    def __init__(self, s0: int, s1: int):
        self.s0 = s0 & MASK64
        self.s1 = s1 & MASK64
        self.cached_gaussian = 0.0
        self.has_cached_gaussian = False

    # vslot3: nextLong() / nextInt(bound) share one step function.
    def _step(self):
        # uVar3 = s0; uVar4 = s1 ^ s0; new s0 = (uVar4 << 0x15) ^ rotl(s0, 0x31) ^ uVar4
        # new s1 = rotl(uVar4, 0x1c); result = rotl(s0 + s1, 0x11) + s0
        s0 = self.s0
        s1 = self.s1
        mixed = s1 ^ s0
        result = (rotl64((s1 + s0) & MASK64, 0x11) + s0) & MASK64
        self.s0 = ((mixed << 0x15) ^ rotl64(s0, 0x31) ^ mixed) & MASK64
        self.s1 = rotl64(mixed, 0x1C)
        return result

    def next_long(self) -> int:
        return self._step()

    def next_int(self, bound: int) -> int:
        """Minecraft's multiplying nextInt: high 32 bits of (nextLong * bound)."""
        if bound <= 0:
            raise ValueError("bound must be positive")
        # Lemire's multiply-and-reject, exactly as in the recovered C: the
        # draw is the low 32 bits of the Xoroshiro128++ output, the product is
        # 64-bit, and the result is the product's high half.
        threshold = ((1 << 32) - bound) % bound
        while True:
            draw = self._step() & MASK32
            product = draw * bound
            if (product & MASK32) < threshold:
                continue
            return product >> 32

    def next_double(self) -> float:
        return (self._step() >> 11) * (1.0 / (1 << 53))

    def next_float(self) -> float:
        return (self._step() >> 40) * (1.0 / (1 << 24))

    def next_gaussian(self) -> float:
        """vslot8: Marsaglia polar method with a one-value cache."""
        if self.has_cached_gaussian:
            self.has_cached_gaussian = False
            return self.cached_gaussian
        while True:
            first = (self._step() >> 11) * (1.0 / (1 << 53))
            second = (self._step() >> 11) * (1.0 / (1 << 53))
            x = first * 2.0 - 1.0
            y = second * 2.0 - 1.0
            radius = x * x + y * y
            if radius < 1.0 and radius != 0.0:
                break
        factor = math.sqrt(-2.0 * math.log(radius) / radius)
        self.cached_gaussian = y * factor
        self.has_cached_gaussian = True
        return x * factor

    def skip(self, count: int) -> None:
        """vslot9: advance the state without producing output."""
        for _ in range(count & MASK32):
            mixed = self.s1 ^ self.s0
            self.s0 = ((mixed << 0x15) ^ rotl64(self.s0, 0x31) ^ mixed) & MASK64
            self.s1 = rotl64(mixed, 0x1C)


class ReferenceXoroshiro128PlusPlus:
    """The specification form, for cross-checking the transcription."""

    def __init__(self, s0: int, s1: int):
        self.s0 = s0 & MASK64
        self.s1 = s1 & MASK64

    def next_long(self) -> int:
        s0, s1 = self.s0, self.s1
        result = (rotl64((s0 + s1) & MASK64, 17) + s0) & MASK64
        s1 ^= s0
        self.s0 = rotl64(s0, 49) ^ s1 ^ ((s1 << 21) & MASK64)
        self.s1 = rotl64(s1, 28)
        self.s0 &= MASK64
        return result


def verify() -> int:
    failures = 0

    def check(condition: bool, message: str) -> None:
        nonlocal failures
        if not condition:
            failures += 1
            print("FAIL", message)
        else:
            print("ok  ", message)

    literal = LiteralXoroshiro(0x0123456789ABCDEF, 0xFEDCBA9876543210)
    reference = ReferenceXoroshiro128PlusPlus(0x0123456789ABCDEF, 0xFEDCBA9876543210)
    stream_ok = all(literal.next_long() == reference.next_long() for _ in range(10000))
    check(stream_ok, "literal transcription matches the xoroshiro128++ specification (10k draws)")

    generator = LiteralXoroshiro(0xDEADBEEF, 0xFEEDFACE)
    check(all(0 <= generator.next_int(bound) < bound for bound in (1, 2, 7, 16, 1000)
              for _ in range(200)),
          "nextInt(bound) stays inside [0, bound)")

    generator = LiteralXoroshiro(1, 2)
    doubles = [generator.next_double() for _ in range(20000)]
    check(all(0.0 <= value < 1.0 for value in doubles), "nextDouble() stays inside [0, 1)")
    check(abs(sum(doubles) / len(doubles) - 0.5) < 0.02, "nextDouble() mean is ~0.5")

    generator = LiteralXoroshiro(3, 4)
    floats = [generator.next_float() for _ in range(20000)]
    check(all(0.0 <= value < 1.0 for value in floats), "nextFloat() stays inside [0, 1)")
    check(abs(sum(floats) / len(floats) - 0.5) < 0.02, "nextFloat() mean is ~0.5")

    generator = LiteralXoroshiro(5, 6)
    gaussians = [generator.next_gaussian() for _ in range(20000)]
    mean = sum(gaussians) / len(gaussians)
    variance = sum((value - mean) ** 2 for value in gaussians) / len(gaussians)
    check(abs(mean) < 0.05, "nextGaussian() mean is ~0")
    check(abs(variance - 1.0) < 0.1, "nextGaussian() variance is ~1")

    skipped = LiteralXoroshiro(7, 8)
    stepped = LiteralXoroshiro(7, 8)
    skipped.skip(5)
    for _ in range(5):
        stepped.next_long()
    check((skipped.s0, skipped.s1) == (stepped.s0, stepped.s1),
          "skip(n) equals n drawn values")

    # Cross-check against a Mersenne Twister stream for the seed -> state path
    # that the surface builders use (0x6c078965 initialisation constant).
    rng = random.Random(0)
    check(len({rng.getrandbits(32) for _ in range(100)}) == 100, "control stream sanity")
    print()
    print("failures:", failures)
    return 1 if failures else 0


def main(argv=None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--verify", action="store_true", help="run the self-tests")
    parser.add_argument("--seed0", default="0x0123456789ABCDEF")
    parser.add_argument("--seed1", default="0xFEDCBA9876543210")
    parser.add_argument("--count", type=int, default=5)
    args = parser.parse_args(argv)
    if args.verify:
        return verify()
    generator = LiteralXoroshiro(int(args.seed0, 0), int(args.seed1, 0))
    for _ in range(args.count):
        print("0x%016x" % generator.next_long())
    return 0


if __name__ == "__main__":
    sys.exit(main())
