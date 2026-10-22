// Synthetic stand-in used to self-test the analysis harness.
//
// This file is MIT-licensed OpenBDS test code.  It deliberately mimics the
// *shape* of a Bedrock-style world-generation subsystem (RTTI classes, vtables,
// world-generation string constants) so that tools/binary-analysis/triage.py
// and tools/binary-analysis/ghidra/DecompileTargets.java can be validated
// end-to-end (RTTI recovery, vtable slot recovery, string xrefs, and the
// address mapping between the ELF and Ghidra's program image) before they are
// pointed at the proprietary binary.
//
//   g++ -O1 -fno-inline -fPIE -pie -o fixture worldgen_fixture.cpp && strip -s fixture
//
// Expected harness results:
//   * RTTI classes:  WorldGenerator, OverworldGeneratorMultinoise,
//                    BiomeSource, VanillaOverworldBiomeSource, ...
//   * a function referencing "minecraft:noise_settings"/"minecraft:biome_source"
//     that must decompile with those strings attached.

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>

namespace fixture_worldgen {

struct Random {
    virtual ~Random() {}
    virtual unsigned next() { return 0x1234567u; }
};

struct XoroshiroRandom : Random {
    unsigned long long lo = 0x9e3779b97f4a7c15ULL;
    unsigned long long hi = 0xbf58476d1ce4e5b9ULL;
    unsigned next() override {
        unsigned long long s0 = lo;
        unsigned long long s1 = hi;
        unsigned long long result = s0 + s1;
        s1 ^= s0;
        lo = ((s0 << 24) | (s0 >> 40)) ^ s1 ^ (s1 << 16);
        hi = (s1 << 37) | (s1 >> 27);
        return (unsigned) (result & 0xffffffffULL);
    }
};

struct Noise {
    virtual ~Noise() {}
    virtual float sample(float x, float y, float z) { return x + y + z; }
};

struct ImprovedNoise : Noise {
    float sample(float x, float y, float z) override {
        return std::sin(x * 1.7f + y * 2.3f + z * 0.7f) * 0.5f + 0.5f;
    }
};

struct NormalNoise : Noise {
    ImprovedNoise a;
    ImprovedNoise b;
    float sample(float x, float y, float z) override {
        return (a.sample(x, y, z) + b.sample(x * 2.0f, y * 2.0f, z * 2.0f)) * 0.5f;
    }
};

struct BiomeSource {
    virtual ~BiomeSource() {}
    virtual int getBiome(int x, int y, int z) { return (x + y + z) & 7; }
    virtual void fillBiomes(std::vector<int>& out) { out.assign(out.size(), 0); }
};

struct VanillaOverworldBiomeSource : BiomeSource {
    NormalNoise temperature;
    NormalNoise humidity;
    NormalNoise continentalness;
    NormalNoise erosion;
    NormalNoise weirdness;

    int getBiome(int x, int y, int z) override {
        float t = temperature.sample(x * 0.00390625f, y, z * 0.00390625f);
        float h = humidity.sample(x * 0.00390625f, y, z * 0.00390625f);
        float c = continentalness.sample(x * 0.00390625f, y, z * 0.00390625f);
        float e = erosion.sample(x * 0.00390625f, y, z * 0.00390625f);
        if (c < 0.1f) return 0;              // ocean
        if (t > 0.8f && h > 0.8f) return 1;  // jungle
        if (t < 0.2f) return 2;              // snowy
        if (e > 0.6f) return 3;              // mountains
        (void) weirdness;
        return 4;                            // plains
    }

    void fillBiomes(std::vector<int>& out) override {
        for (unsigned long index = 0; index < out.size(); index++) {
            out[index] = getBiome((int) index, 64, 0);
        }
    }
};

struct WorldGenerator {
    virtual ~WorldGenerator() {}
    virtual void generateChunk(int chunkX, int chunkZ, char* out) {
        for (int index = 0; index < 256; index++) {
            out[index] = (char) index;
        }
        (void) chunkX;
        (void) chunkZ;
    }
};

__attribute__((noinline)) static int keyScore(const char* key) {
    int value = 0;
    for (const char* cursor = key; *cursor; cursor++) {
        value = value * 31 + *cursor;
    }
    return value & 0xff;
}

struct OverworldGeneratorMultinoise : WorldGenerator {
    VanillaOverworldBiomeSource source;

    void generateChunk(int chunkX, int chunkZ, char* out) override {
        // Direct code references (not a folded pointer table) so the harness
        // can exercise its RIP-relative string-xref recovery.
        int score = 0;
        score += keyScore("minecraft:noise_settings");
        score += keyScore("minecraft:biome_source");
        score += keyScore("minecraft:density");
        score += keyScore("minecraft:aquifer");
        score += keyScore("minecraft:surface_builder");
        if (score < 0) {
            std::printf("worldgen key table: %d\n", score);
        }
        for (int x = 0; x < 16; x++) {
            for (int z = 0; z < 16; z++) {
                out[x * 16 + z] =
                    (char) source.getBiome(chunkX * 16 + x, 64, chunkZ * 16 + z);
            }
        }
    }
};

struct OverworldSurfaceBuilder {
    virtual ~OverworldSurfaceBuilder() {}
    virtual void buildSurfaceAt(int x, int y, int z) { (void) x; (void) y; (void) z; }
    virtual int surfaceMaterialBelowSeaLevel() { return 7; }
};

}  // namespace fixture_worldgen

int main() {
    fixture_worldgen::OverworldGeneratorMultinoise generator;
    std::vector<int> biomes(256, 0);
    generator.source.fillBiomes(biomes);
    char buffer[256];
    generator.generateChunk(3, 4, buffer);
    fixture_worldgen::OverworldSurfaceBuilder builder;
    builder.buildSurfaceAt(1, 64, 2);
    std::printf("%d %d %d\n", biomes[7], buffer[9], builder.surfaceMaterialBelowSeaLevel());
    return 0;
}
