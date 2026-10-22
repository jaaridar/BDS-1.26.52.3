/*
 * noise_sample.c - a tiny program WE wrote, used to prove the local RE
 * triage pipeline (tools/re/triage.sh) works end to end on a binary we
 * own. It implements a minimal value-noise height function of the kind
 * used by terrain generators, so its disassembly looks structurally
 * similar to (but is obviously not) production world-gen code.
 *
 * Build: gcc -O2 -o noise_sample noise_sample.c -lm
 * This file is MIT-licensed like the rest of the OpenBDS engine.
 */
#include <math.h>
#include <stdint.h>
#include <stdio.h>

static uint32_t hash2(int32_t x, int32_t z, uint32_t seed) {
    uint32_t h = seed ^ (uint32_t)(x * 0x27d4eb2d) ^ (uint32_t)(z * 0x165667b1);
    h *= 0x85ebca6bu;
    h ^= h >> 13;
    h *= 0xc2b2ae35u;
    h ^= h >> 16;
    return h;
}

static double fade(double t) { return t * t * (3.0 - 2.0 * t); }

double sample_height(double x, double z, uint32_t seed) {
    int32_t xi = (int32_t)floor(x / 64.0);
    int32_t zi = (int32_t)floor(z / 64.0);
    double xf = (x / 64.0) - xi;
    double zf = (z / 64.0) - zi;
    double a = (hash2(xi, zi, seed) & 0xffffff) / 16777216.0;
    double b = (hash2(xi + 1, zi, seed) & 0xffffff) / 16777216.0;
    double c = (hash2(xi, zi + 1, seed) & 0xffffff) / 16777216.0;
    double d = (hash2(xi + 1, zi + 1, seed) & 0xffffff) / 16777216.0;
    double top = a + (b - a) * fade(xf);
    double bottom = c + (d - c) * fade(xf);
    return 63.0 + (top + (bottom - top) * fade(zf)) * 24.0;
}

int main(void) {
    for (int z = 0; z < 8; z++) {
        for (int x = 0; x < 8; x++) {
            printf("%5.1f ", sample_height(x * 16.0, z * 16.0, 42u));
        }
        printf("\n");
    }
    return 0;
}
