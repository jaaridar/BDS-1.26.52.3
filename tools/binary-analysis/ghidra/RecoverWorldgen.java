// Recover C++ RTTI classes, vtables, call graphs and decompiled bodies from a
// proprietary, symbol-stripped-but-RTTI-bearing C++ ELF (Minecraft: Bedrock
// dedicated server).
//
// Strategy, all static (the target is never executed):
//   1. Itanium ABI type_info objects are found structurally, not by guessing
//      names: [vptr into .data*][pointer to mangled name in .rodata].
//   2. A vtable is any relocated pointer equal to a type_info address preceded
//      by a plausible offset-to-top word; its slots follow at +8.
//   3. Every recovered class name is mirrored into VTABLE-CLASSES.tsv, so the
//      complete polymorphic-class inventory of the binary is discoverable
//      (mode "rtti"/"all").
//   4. Classes are selected by name keywords (mode "worldgen"), their virtual
//      functions are disassembled, and a bounded call-graph BFS pulls in the
//      helper functions that actually implement the algorithms.
//   5. Ghidra's decompiler is invoked per function; referenced string literals
//      and source-file paths are attributed to each function, which is what
//      lets the generated pseudocode be mapped back to the original sources.
//
// Output is bounded text evidence under research/proprietary/ and is NOT
// MIT-licensed OpenBDS source.
//
// @category BDS.Research
// @runtime Java

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileOutputStream;
import java.io.OutputStreamWriter;
import java.nio.charset.StandardCharsets;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;
import java.util.regex.Pattern;

import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.TerminatedStringDataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;

public class RecoverWorldgen extends GhidraScript {

    private static final int PTR = 8;
    private static final int MAX_SLOTS_PER_VTABLE = 64;
    private static final int MAX_STRING_LENGTH = 400;
    private static final int MAX_CALLEES_PER_FUNCTION = 48;
    private static final int MAX_PSEUDOCODE_PER_FUNCTION = 60_000;
    private static final long MAX_TOTAL_PSEUDOCODE = 48L * 1024 * 1024;
    private static final int MAX_PSEUDOCODE_FILE_BYTES = 2048 * 1024;
    private static final int DECOMPILE_TIMEOUT_SECONDS = 120;
    private static final int MAX_INSTRUCTIONS_PER_FUNCTION = 12_000;

    // Classes worth decompiling in "worldgen" mode.
    private static final Pattern INCLUDE = Pattern.compile(
        "(?i)(worldgen|generator|biomesource|biomevolume|biomemanager|"
        + "biomeregistry|biomedefinition|biome$|noise|xoroshiro|worldgenrandom|"
        + "positionalrandom|surfacebuilder|surfacelevelcache|aquifer|densityfunction|"
        + "noisechunk|carver|structurepiece|jigsaw|structurepool|structuretemplate|"
        + "structurespawn|heightmap|chunkvolume|chunkblender|chunksource|"
        + "chunkgenerator|chunkview|biomesamples|subchunk|feature$|feature_|"
        + "scatteredfeature|villagefeature|mineshaftfeature|orefeature|treefeature|"
        + "worldclock|levelgen|terrain)");

    private static final String[] SEED_NAMES = {
        "13BiomeSource3d", "14WorldGenerator", "18OverworldGenerator",
        "20OverworldGenerator2d", "28OverworldGeneratorMultinoise",
        "18FlatWorldGenerator", "15NetherGenerator", "15TheEndGenerator",
        "15XoroshiroRandom", "27VanillaOverworldBiomeSourceI5Pos2dE",
        "20NodeGraphBiomeSourceI5Pos2dE", "17CachedBiomeSourceI13BiomeSource3dE",
    };

    // Subsystems that are irrelevant to world generation.
    private static final Pattern EXCLUDE = Pattern.compile(
        "(?i)(cereal|SharedTypes|std::__1|JsonUtil|entt::|Scripting|Editor|"
        + "network|packet|render|graphics|gui::|audio|sound|json|telemetry|"
        + "serializ|datastore|thread|ability|command|protocol|player|inventory|"
        + "recipe|skin|persona|camera|input|leveldb|languag|font|achievement|"
        + "teleport|crafting|marketplace|dedicated|perf|goal|component|"
        + "schema|storage|database|reflection|packet|actor|mob$|Loot|Item)");

    // Highest priority: the terrain pipeline itself, expanded deeply.
    private static final Pattern PRIORITY = Pattern.compile(
        "(?i)(worldgenerator|overworldgenerator|nethergenerator|theendgenerator|"
        + "flatworldgenerator|voidgenerator|biomesource|biomevolume|noise|"
        + "xoroshiro|worldgenrandom|positionalrandom|surfacebuilder|aquifer|"
        + "densityfunction|noisechunk|carver|chunkvolume|chunkblender|"
        + "chunkgenerator|levelgen|terrain|jigsaw|heightmap)");

    private static final class Vtable {
        long addressPoint;
        long typeInfo;
        long offsetToTop;
        String mangled;
        String demangled;
        final List<Long> slots = new ArrayList<>();
        boolean selected;
        int depth;
    }

    private static final class FunctionInfo {
        long address;
        String name;
        int instructionCount;
        long size;
        final Set<String> owners = new TreeSet<>();
        final Set<String> strings = new TreeSet<>();
        final Set<Long> callees = new TreeSet<>();
        final Set<String> inferredNames = new TreeSet<>();
        boolean decompiled;
        String failure;
    }

    private Memory memory;
    private final List<MemoryBlock> dataBlocks = new ArrayList<>();
    private final List<MemoryBlock> allDataBlocks = new ArrayList<>();
    private final List<MemoryBlock> execBlocks = new ArrayList<>();
    private final Map<Long, String> typeInfoNames = new LinkedHashMap<>();
    private final List<Vtable> vtables = new ArrayList<>();
    private final Map<Long, FunctionInfo> functions = new LinkedHashMap<>();
    private final Map<Long, Set<String>> slotOwners = new LinkedHashMap<>();
    private final List<String> diagnostics = new ArrayList<>();
    private final Map<Long, String> stringRefs = new LinkedHashMap<>();
    private final Map<Long, Set<Long>> constantRefs = new LinkedHashMap<>();
    private final List<Pattern> forcedPatterns = new ArrayList<>();
    private final List<Integer> forcedDepths = new ArrayList<>();

    // Applied .rela.dyn (R_X86_64_RELATIVE) overlay, so the scan works whether
    // or not the loader patched the on-disk pointer values.
    private final Map<Long, Long> relocationOverlay = new HashMap<>();

    private long imageBase = 0;
    private long rodataStart = Long.MAX_VALUE;
    private long rodataEnd = Long.MIN_VALUE;

    // Decompilation order (breadth-first from the selected vtable slots) and a
    // flat address -> owners view, used by the disassembly dumper.
    private final List<Long> functionLoadOrder = new ArrayList<>();
    private final List<Long> functionOrder = new ArrayList<>();
    private final Map<Long, String> ownersByFunction = new HashMap<>();

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            throw new IllegalArgumentException("usage: RecoverWorldgen.java OUTPUT_DIR [mode] [maxFunctions]");
        }
        File out = new File(args[0]);
        if (!out.isDirectory() && !out.mkdirs()) {
            throw new IllegalArgumentException("cannot create output directory " + out);
        }
        String mode = args.length > 1 ? args[1].toLowerCase() : "worldgen";
        int maxFunctions = args.length > 2 ? Integer.parseInt(args[2]) : 1200;
        if (args.length > 3 && !args[3].isEmpty()) {
            loadTargets(args[3]);
        }

        memory = currentProgram.getMemory();
        imageBase = currentProgram.getImageBase().getOffset();
        println("image base: 0x" + Long.toHexString(imageBase));
        indexBlocks();
        println("Blocks: data=" + dataBlocks.size() + " allData=" + allDataBlocks.size()
            + " exec=" + execBlocks.size());
        dumpBlockLayout(out);

        loadRelocations();
        println("relocation overlay entries: " + relocationOverlay.size());
        discoverTypeInfos();
        println("type_info objects: " + typeInfoNames.size());
        discoverVtables();
        println("vtables: " + vtables.size());
        diagnoseSeeds(out);

        if (!"rtti".equals(mode)) {
            int selected = selectClasses(mode);
            println("selected classes: " + selected);
            writeVtableReports(out);
            long started = System.currentTimeMillis();
            buildFunctionSet(maxFunctions);
            scanCodeReferences(out, maxFunctions);
            assignOwners();
            enrichSymbols();
            attributeLambdas(out);
            println("functions analysed: " + functions.size()
                + " (" + (System.currentTimeMillis() - started) + " ms)");
            decompileAll(out, maxFunctions);
            scanSourcePaths(out);
            dumpDisassembly(out);
        } else {
            writeVtableReports(out);
        }

        writeConstants(out);
        writeFunctionReports(out);
        writeSummary(out, mode);
        println("done");
    }

    // ---------------------------------------------------------------- blocks

    private void indexBlocks() {
        for (MemoryBlock block : memory.getBlocks()) {
            if (!block.isInitialized()) {
                continue;
            }
            if (block.isExecute()) {
                execBlocks.add(block);
            } else if (isDataBlockName(block.getName())) {
                dataBlocks.add(block);
                allDataBlocks.add(block);
            } else {
                allDataBlocks.add(block);
            }
            if (".rodata".equals(block.getName())) {
                rodataStart = block.getStart().getOffset();
                rodataEnd = block.getEnd().getOffset();
            }
        }
    }

    private static boolean isDataBlockName(String name) {
        return name.startsWith(".data")
            || name.startsWith(".got")
            || name.equals(".init_array")
            || name.equals(".fini_array")
            || name.equals(".dynamic")
            || name.equals(".relro_padding");
    }

    private Address addr(long offset) {
        return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(offset);
    }

    private MemoryBlock blockAt(long offset) {
        try {
            Address a = addr(offset);
            return memory.contains(a) ? memory.getBlock(a) : null;
        } catch (Exception e) {
            return null;
        }
    }

    private boolean isExec(long offset) {
        MemoryBlock block = blockAt(offset);
        return block != null && block.isInitialized() && block.isExecute();
    }

    private boolean isNonExecData(long offset) {
        MemoryBlock block = blockAt(offset);
        return block != null && block.isInitialized() && !block.isExecute();
    }

    private long readLong(long offset) {
        long raw;
        try {
            Address a = addr(offset);
            if (!memory.contains(a)) {
                return 0;
            }
            byte[] encoded = new byte[PTR];
            memory.getBytes(a, encoded);
            long value = 0;
            for (int i = PTR - 1; i >= 0; i--) {
                value = (value << 8) | (encoded[i] & 0xffL);
            }
            raw = value;
        } catch (Exception e) {
            raw = 0;
        }
        return resolvePointer(offset, raw);
    }

    private interface SlotSink {
        void accept(long slotAddress, long value) throws Exception;
    }

    private void forEachPointerSlot(MemoryBlock block, SlotSink sink) throws Exception {
        long start = block.getStart().getOffset();
        long size = block.getSize();
        int chunk = 1 << 20;
        long consumed = 0;
        while (consumed < size) {
            int len = (int) Math.min(chunk, size - consumed);
            byte[] buffer = new byte[len];
            try {
                memory.getBytes(addr(start + consumed), buffer);
            } catch (Exception e) {
                diagnostics.add("cannot read block at " + Long.toHexString(start + consumed) + ": " + e);
                return;
            }
            int limit = len - (len % PTR);
            if (limit == 0) {
                break;
            }
            for (int i = 0; i < limit; i += PTR) {
                long slot = start + consumed + i;
                if ((slot & (PTR - 1)) != 0) {
                    continue;
                }
                long value = 0;
                for (int b = PTR - 1; b >= 0; b--) {
                    value = (value << 8) | (buffer[i + b] & 0xffL);
                }
                sink.accept(slot, resolvePointer(slot, value));
            }
            consumed += limit;
        }
    }

    private void dumpBlockLayout(File out) throws Exception {
        try (BufferedWriter writer = utf8(new File(out, "memory-blocks.txt"))) {
            writer.write("name\tstart\tend\tsize\tinitialized\texecute\tread\twrite\n");
            for (MemoryBlock block : memory.getBlocks()) {
                writer.write(block.getName() + "\t" + Long.toHexString(block.getStart().getOffset())
                    + "\t" + Long.toHexString(block.getEnd().getOffset()) + "\t" + block.getSize()
                    + "\t" + block.isInitialized() + "\t" + block.isExecute() + "\t"
                    + block.isRead() + "\t" + block.isWrite() + "\n");
            }
        }
    }

    private void loadRelocations() {
        for (MemoryBlock block : memory.getBlocks()) {
            String name = block.getName();
            if (!name.startsWith(".rela") || !block.isInitialized()) {
                continue;
            }
            long size = block.getSize();
            if (size <= 0 || size > 64L * 1024 * 1024) {
                diagnostics.add("skipping relocation block " + name + " (size " + size + ")");
                continue;
            }
            byte[] buffer;
            try {
                buffer = new byte[(int) size];
                memory.getBytes(block.getStart(), buffer);
            } catch (Exception e) {
                diagnostics.add("cannot read " + name + ": " + e);
                continue;
            }
            int added = 0;
            int entrySize = 24;
            for (int offset = 0; offset + entrySize <= buffer.length; offset += entrySize) {
                long relocationOffset = readLE(buffer, offset, 8);
                long info = readLE(buffer, offset + 8, 8);
                long addend = readLE(buffer, offset + 16, 8);
                long type = info & 0xffffffffL;
                // R_X86_64_RELATIVE = 8, IRELATIVE = 37, RELATIVE64 = 38
                if (type == 8L || type == 37L || type == 38L) {
                    relocationOverlay.put(relocationOffset + imageBase, addend + imageBase);
                    added++;
                }
            }
            println(name + ": " + added + " relative relocation(s)");
        }
    }

    private long resolvePointer(long slot, long raw) {
        Long overlay = relocationOverlay.get(slot);
        if (overlay == null) {
            return raw;
        }
        if (raw != 0 && (isExec(raw) || isNonExecData(raw))) {
            return raw;
        }
        return overlay;
    }

    private static long readLE(byte[] buffer, int offset, int length) {
        long value = 0;
        for (int i = length - 1; i >= 0; i--) {
            value = (value << 8) | (buffer[offset + i] & 0xffL);
        }
        return value;
    }

    // ------------------------------------------------------------------ RTTI

    private void discoverTypeInfos() throws Exception {
        // Layout of every Itanium type_info: [vptr][name pointer][...].
        for (MemoryBlock block : allDataBlocks) {
            forEachPointerSlot(block, (slot, vptr) -> {
                MemoryBlock vtableBlock = blockAt(vptr);
                if (vtableBlock == null || !isDataBlockName(vtableBlock.getName())) {
                    return;
                }
                long namePointer = readLong(slot + PTR);
                if (namePointer == 0 || !isNonExecData(namePointer)) {
                    return;
                }
                String mangled = readCString(namePointer);
                if (!looksMangled(mangled)) {
                    return;
                }
                typeInfoNames.putIfAbsent(slot, mangled);
            });
        }
    }

    private void discoverVtables() throws Exception {
        Map<Long, List<Long>> references = new HashMap<>();
        for (MemoryBlock block : allDataBlocks) {
            forEachPointerSlot(block, (slot, value) -> {
                if (typeInfoNames.containsKey(value)) {
                    references.computeIfAbsent(value, key -> new ArrayList<>()).add(slot);
                }
            });
        }
        for (Map.Entry<Long, String> entry : typeInfoNames.entrySet()) {
            List<Long> slots = references.get(entry.getKey());
            if (slots == null) {
                continue;
            }
            for (long slot : slots) {
                long offsetToTop = readLong(slot - PTR);
                if (offsetToTop < -0x200000L || offsetToTop > 0x200000L) {
                    continue;
                }
                Vtable table = new Vtable();
                table.typeInfo = entry.getKey();
                table.mangled = entry.getValue();
                table.demangled = demangle(entry.getValue());
                table.offsetToTop = offsetToTop;
                table.addressPoint = slot + PTR;
                int nonExecStreak = 0;
                for (int index = 0; index < MAX_SLOTS_PER_VTABLE; index++) {
                    long target = readLong(table.addressPoint + (long) index * PTR);
                    if (isExec(target)) {
                        table.slots.add(target);
                        nonExecStreak = 0;
                    } else {
                        if (++nonExecStreak >= 2) {
                            break;
                        }
                    }
                }
                vtables.add(table);
            }
        }
    }

    private String readCString(long offset) {
        try {
            Address start = addr(offset);
            if (!memory.contains(start)) {
                return null;
            }
            StringBuilder builder = new StringBuilder();
            for (int i = 0; i < MAX_STRING_LENGTH; i++) {
                byte b;
                try {
                    b = memory.getByte(start.add(i));
                } catch (Exception end) {
                    return null;
                }
                if (b == 0) {
                    return builder.toString();
                }
                int c = b & 0xff;
                if (c < 0x20 || c > 0x7e) {
                    return null;
                }
                builder.append((char) c);
            }
            return null;
        } catch (Exception e) {
            return null;
        }
    }

    private static boolean looksMangled(String value) {
        if (value == null || value.length() < 3 || value.length() > 260) {
            return false;
        }
        char first = value.charAt(0);
        if (!(Character.isDigit(first) || first == 'N' || first == 'Z' || first == 'S' || first == 'U')) {
            return false;
        }
        boolean hasLetter = false;
        for (int i = 0; i < value.length(); i++) {
            char c = value.charAt(i);
            boolean ok = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
                || (c >= '0' && c <= '9') || c == '_' || c == '$' || c == '.';
            if (!ok) {
                return false;
            }
            if (Character.isLetter(c)) {
                hasLetter = true;
            }
        }
        return hasLetter;
    }

    private byte[] readBlockBytes(MemoryBlock block) {
        long size = block.getSize();
        if (size <= 0 || size > 96L * 1024 * 1024) {
            return null;
        }
        try {
            byte[] buffer = new byte[(int) size];
            memory.getBytes(block.getStart(), buffer);
            return buffer;
        } catch (Exception e) {
            return null;
        }
    }

    private static int indexOfBytes(byte[] haystack, byte[] needle) {
        outer:
        for (int i = 0; i + needle.length <= haystack.length; i++) {
            for (int j = 0; j < needle.length; j++) {
                if (haystack[i + j] != needle[j]) {
                    continue outer;
                }
            }
            return i;
        }
        return -1;
    }

    // Diagnostic trace: follow a known mangled type name from the string, to the
    // pointer that references it, to the type_info and the vtable pointer.
    private void diagnoseSeeds(File out) throws Exception {
        MemoryBlock rodataBlock = null;
        byte[] rodata = null;
        for (MemoryBlock block : memory.getBlocks()) {
            if (".rodata".equals(block.getName())) {
                rodataBlock = block;
                rodata = readBlockBytes(block);
                break;
            }
        }
        if (rodata == null || rodataBlock == null) {
            diagnostics.add("seed diagnostics skipped: .rodata not readable");
            return;
        }
        Map<Long, String> byAddress = new HashMap<>();
        Map<String, Long> stringAddresses = new LinkedHashMap<>();
        for (String seed : SEED_NAMES) {
            int index = indexOfBytes(rodata, seed.getBytes(StandardCharsets.US_ASCII));
            if (index >= 0) {
                long address = rodataBlock.getStart().getOffset() + index;
                byAddress.put(address, seed);
                stringAddresses.put(seed, address);
            }
        }
        Map<Long, List<Long>> references = new HashMap<>();
        for (MemoryBlock block : memory.getBlocks()) {
            if (!block.isInitialized()) {
                continue;
            }
            forEachPointerSlot(block, (slot, value) -> {
                if (byAddress.containsKey(value)) {
                    references.computeIfAbsent(value, key -> new ArrayList<>()).add(slot);
                }
            });
        }
        try (BufferedWriter writer = utf8(new File(out, "seed-diagnostics.txt"))) {
            writer.write("# Seed diagnostics\n\n");
            writer.write("Follows a mangled type-name string to the pointer that references it,\n");
            writer.write("then to the `type_info` object and the vtable pointer.\n\n");
            for (String seed : SEED_NAMES) {
                writer.write("## `" + seed + "`\n\n");
                Long stringAddress = stringAddresses.get(seed);
                if (stringAddress == null) {
                    writer.write("- string: NOT FOUND in .rodata\n\n");
                    continue;
                }
                writer.write("- string address: `0x" + Long.toHexString(stringAddress) + "`\n");
                List<Long> pointers = references.getOrDefault(stringAddress, Collections.emptyList());
                writer.write("- pointers to string: `" + pointers.size() + "`\n");
                int shown = 0;
                for (long pointer : pointers) {
                    if (shown++ >= 6) {
                        writer.write("- …\n");
                        break;
                    }
                    MemoryBlock block = blockAt(pointer);
                    long typeInfo = pointer - PTR;
                    long offsetToTop = readLong(pointer - 2L * PTR);
                    boolean known = typeInfoNames.containsKey(typeInfo);
                    writer.write("- pointer at `0x" + Long.toHexString(pointer) + "` in `"
                        + (block == null ? "?" : block.getName()) + "`; type_info `0x"
                        + Long.toHexString(typeInfo) + "` known=" + known
                        + "; offset_to_top=" + offsetToTop + "\n");
                    if (known) {
                        int tables = 0;
                        for (Vtable table : vtables) {
                            if (table.typeInfo == typeInfo) {
                                tables++;
                            }
                        }
                        writer.write("  - vtables built from this type_info: `" + tables + "`\n");
                    }
                }
                writer.write("\n");
            }
        }
        println("seed diagnostics written: " + references.size() + " distinct names referenced");
    }

    // ---------------------------------------------------------- class naming

    private static String demangle(String mangled) {
        try {
            int[] pos = {0};
            boolean nested = false;
            if (mangled.startsWith("_Z")) {
                pos[0] = 2;
            }
            if (pos[0] < mangled.length() && mangled.charAt(pos[0]) == 'N') {
                nested = true;
                pos[0]++;
            }
            List<String> parts = new ArrayList<>();
            while (pos[0] < mangled.length() && mangled.charAt(pos[0]) != 'E') {
                String part = parseComponent(mangled, pos);
                if (part == null) {
                    return null;
                }
                parts.add(part);
            }
            if (parts.isEmpty()) {
                return null;
            }
            String name = String.join("::", parts);
            if (nested && pos[0] < mangled.length()) {
                pos[0]++;
            }
            return name;
        } catch (Exception e) {
            return null;
        }
    }

    private static String parseComponent(String text, int[] pos) {
        if (pos[0] >= text.length()) {
            return null;
        }
        char c = text.charAt(pos[0]);
        if (c == 'S') {
            return parseSubstitution(text, pos);
        }
        if (Character.isDigit(c)) {
            int length = 0;
            while (pos[0] < text.length() && Character.isDigit(text.charAt(pos[0]))) {
                length = length * 10 + (text.charAt(pos[0]) - '0');
                pos[0]++;
                if (length > 200) {
                    return null;
                }
            }
            if (length <= 0 || pos[0] + length > text.length()) {
                return null;
            }
            String name = text.substring(pos[0], pos[0] + length);
            pos[0] += length;
            if (pos[0] < text.length() && text.charAt(pos[0]) == 'I') {
                pos[0]++;
                List<String> arguments = new ArrayList<>();
                while (pos[0] < text.length() && text.charAt(pos[0]) != 'E') {
                    int before = pos[0];
                    String argument = parseType(text, pos);
                    if (argument == null) {
                        pos[0] = before + 1;
                        continue;
                    }
                    arguments.add(argument);
                }
                if (pos[0] < text.length()) {
                    pos[0]++;
                }
                return name + "<" + String.join(", ", arguments) + ">";
            }
            return name;
        }
        return parseType(text, pos);
    }

    private static String parseType(String text, int[] pos) {
        if (pos[0] >= text.length()) {
            return null;
        }
        char c = text.charAt(pos[0]);
        switch (c) {
            case 'P': pos[0]++; return withSuffix(parseType(text, pos), "*");
            case 'R': pos[0]++; return withSuffix(parseType(text, pos), "&");
            case 'O': pos[0]++; return withSuffix(parseType(text, pos), "&&");
            case 'K': pos[0]++; return withSuffix(parseType(text, pos), " const");
            case 'V': pos[0]++; return withSuffix(parseType(text, pos), " volatile");
            case 'N': {
                pos[0]++;
                List<String> parts = new ArrayList<>();
                while (pos[0] < text.length() && text.charAt(pos[0]) != 'E') {
                    String part = parseComponent(text, pos);
                    if (part == null) {
                        return null;
                    }
                    parts.add(part);
                }
                if (pos[0] < text.length()) {
                    pos[0]++;
                }
                return String.join("::", parts);
            }
            case 'S':
                return parseSubstitution(text, pos);
            case 'L': {
                pos[0]++;
                String inner = parseType(text, pos);
                if (pos[0] < text.length()) {
                    pos[0]++;
                }
                return inner;
            }
            case 'i': pos[0]++; return "int";
            case 'j': pos[0]++; return "unsigned int";
            case 'l': pos[0]++; return "long";
            case 'm': pos[0]++; return "unsigned long";
            case 'x': pos[0]++; return "long long";
            case 'y': pos[0]++; return "unsigned long long";
            case 'b': pos[0]++; return "bool";
            case 'c': pos[0]++; return "char";
            case 'h': pos[0]++; return "unsigned char";
            case 's': pos[0]++; return "short";
            case 't': pos[0]++; return "unsigned short";
            case 'f': pos[0]++; return "float";
            case 'd': pos[0]++; return "double";
            case 'e': pos[0]++; return "long double";
            case 'v': pos[0]++; return "void";
            case 'w': pos[0]++; return "wchar_t";
            case 'z': pos[0]++; return "...";
            default:
                if (pos[0] + 1 <= text.length()) {
                    pos[0]++;
                }
                return "?";
        }
    }

    private static String parseSubstitution(String text, int[] pos) {
        pos[0]++;
        if (pos[0] >= text.length()) {
            return null;
        }
        char c = text.charAt(pos[0]);
        pos[0]++;
        switch (c) {
            case 't': return "std";
            case 's': return "std::string";
            case 'i': return "std::istream";
            case 'o': return "std::ostream";
            case 'd': return "std::iostream";
            case 'a': return "std::allocator";
            case 'b': return "std::basic_string";
            case 'c': return "std::basic_string<char>";
            default:
                return "S" + c;
        }
    }

    private static String withSuffix(String base, String suffix) {
        return base == null ? "?" + suffix : base + suffix;
    }

    // ------------------------------------------------------------- selection

    private int selectClasses(String mode) {
        boolean selectEverything = "all".equals(mode);
        int selected = 0;
        for (Vtable table : vtables) {
            String name = table.demangled != null ? table.demangled : table.mangled;
            if (name == null || name.isEmpty()) {
                continue;
            }
            if (!selectEverything) {
                if (name.length() > 110 || name.indexOf('?') >= 0) {
                    continue;
                }
                if (EXCLUDE.matcher(name).find()) {
                    continue;
                }
                if (!INCLUDE.matcher(name).find()) {
                    continue;
                }
            }
            table.selected = true;
            table.depth = PRIORITY.matcher(name).find() ? 3 : 1;
            selected++;
        }

        for (int i = 0; i < forcedPatterns.size(); i++) {
            Pattern pattern = forcedPatterns.get(i);
            int depth = forcedDepths.get(i);
            for (Vtable table : vtables) {
                String name = table.demangled != null ? table.demangled : table.mangled;
                if (name == null || !pattern.matcher(name).find()) {
                    continue;
                }
                if (!table.selected) {
                    table.selected = true;
                    selected++;
                }
                table.depth = Math.max(table.depth, depth);
            }
        }
        return selected;
    }

    // ------------------------------------------------------- function graph

    private void buildFunctionSet(int maxFunctions) throws Exception {
        ArrayDeque<long[]> queue = new ArrayDeque<>();
        Set<Long> queued = new LinkedHashSet<>();

        List<Vtable> ordered = new ArrayList<>(vtables);
        ordered.sort(Comparator.comparingInt((Vtable table) -> table.depth).reversed()
            .thenComparing((Vtable table) -> table.demangled == null ? "" : table.demangled));

        for (Vtable table : ordered) {
            if (!table.selected) {
                continue;
            }
            for (long target : table.slots) {
                if (queued.add(target)) {
                    queue.add(new long[] {target, table.depth});
                }
            }
        }

        while (!queue.isEmpty() && functions.size() < maxFunctions) {
            monitor.checkCancelled();
            long[] item = queue.poll();
            FunctionInfo info = analyseFunction(item[0]);
            if (info == null) {
                continue;
            }
            if (item[1] > 0) {
                int added = 0;
                for (long callee : info.callees) {
                    if (added++ >= MAX_CALLEES_PER_FUNCTION) {
                        break;
                    }
                    if (queued.add(callee)) {
                        queue.add(new long[] {callee, item[1] - 1});
                    }
                }
            }
        }
    }

    private FunctionInfo analyseFunction(long address) {
        FunctionInfo known = functions.get(address);
        if (known != null) {
            return known;
        }
        Address entry = addr(address);
        if (!memory.contains(entry) || !isExec(address)) {
            return null;
        }
        Function function = getFunctionAt(entry);
        if (function == null) {
            try {
                DisassembleCommand disassemble = new DisassembleCommand(entry, null, true);
                disassemble.applyTo(currentProgram, monitor);
            } catch (Exception e) {
                diagnostics.add("disassemble failed at " + entry + ": " + e);
            }
            function = getFunctionAt(entry);
            if (function == null) {
                try {
                    CreateFunctionCmd create = new CreateFunctionCmd(entry);
                    create.applyTo(currentProgram, monitor);
                } catch (Exception e) {
                    diagnostics.add("createFunction failed at " + entry + ": " + e);
                }
                function = getFunctionAt(entry);
            }
            if (function == null) {
                try {
                    function = createFunction(entry, null);
                } catch (Exception e) {
                    diagnostics.add("script createFunction failed at " + entry + ": " + e);
                }
            }
        }
        if (function == null) {
            diagnostics.add("no function body at " + entry);
            return null;
        }

        FunctionInfo info = new FunctionInfo();
        info.address = address;
        info.name = function.getName();
        info.size = function.getBody().getNumAddresses();

        Listing listing = currentProgram.getListing();
        int count = 0;
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (++count > MAX_INSTRUCTIONS_PER_FUNCTION) {
                break;
            }
            for (Reference reference : instruction.getReferencesFrom()) {
                if (reference == null) {
                    continue;
                }
                if (reference.getReferenceType().isCall()) {
                    Address target = reference.getToAddress();
                    if (target != null && isExec(target.getOffset())) {
                        info.callees.add(target.getOffset());
                    }
                    continue;
                }
                Address to = reference.getToAddress();
                if (to == null || !isNonExecData(to.getOffset())) {
                    continue;
                }
                String text = readCString(to.getOffset());
                if (text != null && text.length() >= 4) {
                    info.strings.add(text);
                    if (stringRefs.size() < 60000) {
                        stringRefs.put(to.getOffset(), text);
                    }
                } else if (constantRefs.size() < 40000) {
                    constantRefs.computeIfAbsent(to.getOffset(), key -> new TreeSet<>())
                        .add(address);
                }
            }
        }
        info.instructionCount = count;
        if (!functions.containsKey(address)) {
            functionLoadOrder.add(address);
        }
        functions.put(address, info);
        return info;
    }

    private static boolean looksLikeLambda(String mangled) {
        return mangled != null && (mangled.contains("$_") || mangled.contains("__func")
            || mangled.contains("Ul") || mangled.contains("lambda"));
    }

    // A lambda/`__func` RTTI name embeds the function that defined it, e.g.
    // ZN18OverworldGenerator9loadChunkER10LevelChunkbE3$_0. Any function that
    // references such a vtable is (almost always) that enclosing function.
    /** Decode the `<digits><name>` components that follow the last `ZN`. */
    private static String enclosingFunction(String mangled) {
        if (mangled == null) {
            return null;
        }
        int end = mangled.length();
        int dollar = mangled.indexOf("$_");
        if (dollar > 0) {
            end = dollar;
        }
        int ul = mangled.indexOf("Ul");
        if (ul > 0 && ul < end) {
            end = ul;
        }
        int start = mangled.lastIndexOf("ZN", end);
        if (start < 0 || start + 2 >= end) {
            return null;
        }
        int pos = start + 2;
        List<String> parts = new ArrayList<>();
        while (pos < end && Character.isDigit(mangled.charAt(pos))) {
            int length = 0;
            int digitsStart = pos;
            while (pos < end && Character.isDigit(mangled.charAt(pos))) {
                length = length * 10 + (mangled.charAt(pos) - '0');
                if (length > 512) {
                    return null;
                }
                pos++;
            }
            if (length <= 0 || pos + length > end) {
                pos = digitsStart;
                break;
            }
            String part = mangled.substring(pos, pos + length);
            pos += length;
            if (part.startsWith("$") || "cl".equals(part) || "Ul".equals(part)) {
                break;
            }
            parts.add(part);
        }
        if (parts.isEmpty()) {
            return null;
        }
        return String.join("::", parts);
    }

    private Set<Long> operandAddresses(Instruction instruction) {
        Set<Long> addresses = new LinkedHashSet<>();
        try {
            int operands = instruction.getNumOperands();
            for (int operand = 0; operand < operands; operand++) {
                Object[] objects = instruction.getOpObjects(operand);
                if (objects == null) {
                    continue;
                }
                for (Object object : objects) {
                    if (object instanceof Address) {
                        addresses.add(((Address) object).getOffset());
                    }
                }
            }
        } catch (Exception e) {
            // operand recovery is best-effort
        }
        return addresses;
    }

    private void writeConstants(File out) throws Exception {
        try (BufferedWriter writer = utf8(new File(out, "constants.tsv"))) {
            writer.write("address\traw16\tu32_0\tu32_1\tf32_0\tf32_1\tf64_0\t"
                + "referencing_functions\n");
            for (Map.Entry<Long, Set<Long>> entry : constantRefs.entrySet()) {
                long address = entry.getKey();
                StringBuilder hex = new StringBuilder();
                byte[] raw = new byte[16];
                try {
                    memory.getBytes(addr(address), raw);
                } catch (Exception e) {
                    continue;
                }
                for (byte value : raw) {
                    hex.append(String.format("%02x", value));
                }
                long word0 = readLE(raw, 0, 4);
                long word1 = readLE(raw, 4, 4);
                float float0 = Float.intBitsToFloat((int) word0);
                float float1 = Float.intBitsToFloat((int) word1);
                double double0 = Double.longBitsToDouble(readLE(raw, 0, 8));
                StringBuilder owners = new StringBuilder();
                int shown = 0;
                for (Long function : entry.getValue()) {
                    if (shown++ >= 6) {
                        owners.append(",...");
                        break;
                    }
                    owners.append(owners.length() > 0 ? "," : "").append(Long.toHexString(function));
                }
                writer.write(Long.toHexString(address) + "\t" + hex + "\t"
                    + (word0 & 0xffffffffL) + "\t" + (word1 & 0xffffffffL) + "\t"
                    + Float.toString(float0) + "\t" + Float.toString(float1) + "\t"
                    + Double.toString(double0) + "\t" + owners + "\n");
            }
        }
        println("constant references: " + constantRefs.size());
    }

    private void attributeLambdas(File out) throws Exception {
        Map<Long, Vtable> byAddressPoint = new HashMap<>();
        for (Vtable table : vtables) {
            byAddressPoint.putIfAbsent(table.addressPoint, table);
        }
        Map<Long, Set<String>> attribution = new LinkedHashMap<>();
        for (FunctionInfo info : functions.values()) {
            Function function = getFunctionAt(addr(info.address));
            if (function == null) {
                continue;
            }
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(function.getBody(), true);
            int guard = 0;
            while (instructions.hasNext() && guard++ < MAX_INSTRUCTIONS_PER_FUNCTION) {
                Instruction instruction = instructions.next();
                Set<Long> targets = operandAddresses(instruction);
                for (Reference reference : instruction.getReferencesFrom()) {
                    if (reference != null && reference.getToAddress() != null) {
                        targets.add(reference.getToAddress().getOffset());
                    }
                }
                for (Long target : targets) {
                    Vtable table = byAddressPoint.get(target);
                    if (table == null) {
                        table = byAddressPoint.get(target + 2L * PTR);
                    }
                    if (table == null || !looksLikeLambda(table.mangled)) {
                        continue;
                    }
                    String enclosing = enclosingFunction(table.mangled);
                    if (enclosing == null || enclosing.length() < 4) {
                        continue;
                    }
                    attribution.computeIfAbsent(info.address, key -> new LinkedHashSet<>()).add(enclosing);
                }
            }
        }

        int renamed = 0;
        try (BufferedWriter writer = utf8(new File(out, "lambda-attribution.tsv"))) {
            writer.write("function_address\tinferred_enclosing_functions\trenamed_to\n");
            for (Map.Entry<Long, Set<String>> entry : attribution.entrySet()) {
                Function function = getFunctionAt(addr(entry.getKey()));
                String renamedTo = "";
                if (function != null && slotOwners.getOrDefault(entry.getKey(), Collections.emptySet()).isEmpty()) {
                    String base = sanitize(entry.getValue().iterator().next());
                    if (!base.isEmpty()) {
                        String candidate = base.length() > 100 ? base.substring(0, 100) : base;
                        try {
                            function.setName(candidate, SourceType.USER_DEFINED);
                            renamedTo = candidate;
                            renamed++;
                        } catch (Exception ignored) {
                            try {
                                function.setName(candidate + "_" + Long.toHexString(entry.getKey()),
                                    SourceType.USER_DEFINED);
                                renamedTo = candidate + "_" + Long.toHexString(entry.getKey());
                                renamed++;
                            } catch (Exception ignoredToo) {
                                // keep the auto-generated name
                            }
                        }
                    }
                }
                FunctionInfo info = functions.get(entry.getKey());
                if (info != null) {
                    info.inferredNames.addAll(entry.getValue());
                }
                writer.write(Long.toHexString(entry.getKey()) + "\t"
                    + tsv(String.join(", ", entry.getValue())) + "\t" + tsv(renamedTo) + "\n");
            }
        }
        println("lambda-attributed functions: " + attribution.size() + ", renamed: " + renamed);
    }

    private void loadTargets(String path) {
        try {
            java.nio.file.Path file = java.nio.file.Paths.get(path);
            if (!java.nio.file.Files.isReadable(file)) {
                diagnostics.add("targets file not readable: " + path);
                return;
            }
            for (String line : java.nio.file.Files.readAllLines(file, StandardCharsets.UTF_8)) {
                String trimmed = line.trim();
                if (trimmed.isEmpty() || trimmed.startsWith("#")) {
                    continue;
                }
                String[] parts = trimmed.split("\t");
                int depth = 2;
                if (parts.length > 1) {
                    try {
                        depth = Integer.parseInt(parts[1].trim());
                    } catch (NumberFormatException ignored) {
                        depth = 2;
                    }
                }
                forcedPatterns.add(Pattern.compile(parts[0].trim()));
                forcedDepths.add(depth);
            }
            println("targets loaded: " + forcedPatterns.size());
        } catch (Exception e) {
            diagnostics.add("cannot read targets: " + e);
        }
    }

    private void enrichSymbols() {
        Set<String> seenLabels = new LinkedHashSet<>();
        for (Vtable table : vtables) {
            if (!table.selected) {
                continue;
            }
            String base = sanitize(table.demangled != null ? table.demangled : table.mangled);
            if (base.isEmpty()) {
                continue;
            }
            if (seenLabels.add("vt_" + base)) {
                try {
                    createLabel(addr(table.addressPoint), "vt_" + base, true);
                } catch (Exception e) {
                    diagnostics.add("label failed for vtable " + base + ": " + e);
                }
            }
            if (seenLabels.add("ti_" + base)) {
                try {
                    createLabel(addr(table.typeInfo), "ti_" + base, true);
                } catch (Exception e) {
                    // duplicate or invalid label; harmless
                }
            }
        }

        int renamed = 0;
        for (Map.Entry<Long, Set<String>> entry : slotOwners.entrySet()) {
            Function function = getFunctionAt(addr(entry.getKey()));
            if (function == null) {
                continue;
            }
            String name = sanitize(entry.getValue().iterator().next().replace("::vslot", "_v"));
            if (name.isEmpty()) {
                continue;
            }
            try {
                function.setName(name, SourceType.USER_DEFINED);
                renamed++;
            } catch (Exception e) {
                // name collisions are not fatal
            }
        }
        println("renamed slot functions: " + renamed);

        TerminatedStringDataType stringType = new TerminatedStringDataType();
        int defined = 0;
        for (Map.Entry<Long, String> entry : stringRefs.entrySet()) {
            if (defined >= 50000) {
                break;
            }
            try {
                createData(addr(entry.getKey()), stringType);
                defined++;
            } catch (Exception e) {
                // already defined or untyped area; harmless
            }
        }
        println("string literals defined: " + defined);
    }

    private static String sanitize(String value) {
        if (value == null) {
            return "";
        }
        StringBuilder builder = new StringBuilder();
        for (int i = 0; i < value.length(); i++) {
            char c = value.charAt(i);
            builder.append(Character.isLetterOrDigit(c) ? c : '_');
        }
        String result = builder.toString();
        while (result.contains("__")) {
            result = result.replace("__", "_");
        }
        if (result.length() > 120) {
            result = result.substring(0, 120);
        }
        return result;
    }

    // ------------------------------------------------------------ decompile

    /**
     * Find the function that owns {@code site}.
     *
     * Because the binary is imported with {@code -noanalysis}, Ghidra only knows
     * the functions this script created. Inside those bodies attribution is
     * exact. For sites further out we fall back to the nearest preceding
     * function only when the bytes between its body and the site contain no
     * return/padding byte, which is the usual "Ghidra stopped at the first
     * ret" case. Everything else is reported as unresolved rather than
     * mis-attributed.
     */
    private Function locateFunction(long site) {
        Function containing = getFunctionContaining(addr(site));
        if (containing != null) {
            return containing;
        }
        Function previous = getFunctionBefore(addr(site));
        if (previous == null) {
            return null;
        }
        long end = previous.getBody().getMaxAddress().getOffset();
        if (site <= end) {
            return previous;
        }
        long gap = site - end;
        if (gap > 0x4000) {
            return null;
        }
        byte[] buffer = new byte[(int) gap];
        try {
            memory.getBytes(addr(end + 1), buffer);
        } catch (Exception e) {
            return null;
        }
        for (byte value : buffer) {
            int unsigned = value & 0xff;
            if (unsigned == 0xc3 || unsigned == 0xcb || unsigned == 0xcc) {
                return null;
            }
        }
        return previous;
    }

    /**
     * Scan every executable block for `REX.W 8D /r` (lea r64, [rip+disp32]) and
     * return function entry -> set of rip-relative targets that land on one of
     * {@code targets}.
     *
     * Ghidra's reference manager does not expose these operands for this
     * imported image, so the raw encoding is decoded here instead.
     */
    private Map<Long, Set<Long>> scanLeaSites(Set<Long> targets) throws Exception {
        Map<Long, Set<Long>> owners = new LinkedHashMap<>();
        if (targets.isEmpty()) {
            return owners;
        }
        int chunkSize = 8 << 20;
        long sites = 0;
        long unresolvedSites = 0;
        for (MemoryBlock block : execBlocks) {
            long base = block.getStart().getOffset();
            long size = block.getSize();
            for (long chunkStart = 0; chunkStart < size; chunkStart += chunkSize) {
                int length = (int) Math.min(chunkSize + 8, size - chunkStart);
                byte[] buffer = new byte[length];
                try {
                    memory.getBytes(addr(base + chunkStart), buffer);
                } catch (Exception e) {
                    diagnostics.add("cannot read code block " + block.getName() + ": " + e);
                    break;
                }
                for (int i = 0; i + 7 <= buffer.length && i < chunkSize; i++) {
                    int first = buffer[i] & 0xff;
                    if (first < 0x48 || first > 0x4f) {
                        continue;
                    }
                    if ((buffer[i + 1] & 0xff) != 0x8d) {
                        continue;
                    }
                    if (((buffer[i + 2] & 0xc7)) != 0x05) {
                        continue;
                    }
                    int displacement = (buffer[i + 3] & 0xff)
                        | ((buffer[i + 4] & 0xff) << 8)
                        | ((buffer[i + 5] & 0xff) << 16)
                        | ((buffer[i + 6] & 0xff) << 24);
                    long target = base + chunkStart + i + 7 + displacement;
                    if (!targets.contains(target)) {
                        continue;
                    }
                    long site = base + chunkStart + i;
                    Function container = locateFunction(site);
                    if (container == null) {
                        unresolvedSites++;
                        continue;
                    }
                    sites++;
                    owners.computeIfAbsent(container.getEntryPoint().getOffset(),
                        key -> new LinkedHashSet<>()).add(target);
                }
            }
        }
        println("lea sites matched: " + sites + " in " + owners.size()
            + " functions (" + unresolvedSites + " outside any known function)");
        return owners;
    }

    /** Map every `/mnt/vss/...` source path in .rodata to the functions using it. */
    private void scanSourcePaths(File out) throws Exception {
        Map<Long, String> byAddress = new LinkedHashMap<>();
        for (MemoryBlock block : allDataBlocks) {
            long base = block.getStart().getOffset();
            long size = block.getSize();
            if (size <= 0 || size > (64L << 20)) {
                continue;
            }
            byte[] buffer = new byte[(int) size];
            try {
                memory.getBytes(addr(base), buffer);
            } catch (Exception e) {
                continue;
            }
            StringBuilder current = new StringBuilder();
            long runStart = -1;
            for (int i = 0; i < buffer.length; i++) {
                int value = buffer[i] & 0xff;
                if (value >= 0x20 && value < 0x7f) {
                    if (current.length() == 0) {
                        runStart = base + i;
                    }
                    current.append((char) value);
                } else {
                    if (current.length() > 8) {
                        recordSourcePath(byAddress, runStart, current.toString());
                    }
                    current.setLength(0);
                }
            }
            if (current.length() > 8) {
                recordSourcePath(byAddress, runStart, current.toString());
            }
        }
        println("source paths in data: " + byAddress.size());
        Map<Long, Set<Long>> hits = scanLeaSites(new LinkedHashSet<>(byAddress.keySet()));
        Map<String, Integer> perPath = new LinkedHashMap<>();
        try (BufferedWriter writer = utf8(new File(out, "source-attribution.tsv"))) {
            writer.write("function_address\tsource_path\tcount\n");
            for (Map.Entry<Long, Set<Long>> entry : hits.entrySet()) {
                Map<String, Integer> counts = new LinkedHashMap<>();
                for (Long target : entry.getValue()) {
                    String path = byAddress.get(target);
                    if (path != null) {
                        counts.merge(path, 1, Integer::sum);
                    }
                }
                List<Map.Entry<String, Integer>> ordered = new ArrayList<>(counts.entrySet());
                ordered.sort((a, b) -> b.getValue() - a.getValue());
                for (Map.Entry<String, Integer> item : ordered) {
                    writer.write(Long.toHexString(entry.getKey()));
                    writer.write('\t');
                    writer.write(item.getKey());
                    writer.write('\t');
                    writer.write(Integer.toString(item.getValue()));
                    writer.write('\n');
                    perPath.merge(item.getKey(), 1, Integer::sum);
                }
            }
        }
        List<Map.Entry<String, Integer>> ranked = new ArrayList<>(perPath.entrySet());
        ranked.sort((a, b) -> b.getValue() - a.getValue());
        try (BufferedWriter writer = utf8(new File(out, "source-files.tsv"))) {
            writer.write("source_path\tfunction_count\n");
            for (Map.Entry<String, Integer> entry : ranked) {
                writer.write(entry.getKey());
                writer.write('\t');
                writer.write(Integer.toString(entry.getValue()));
                writer.write('\n');
            }
        }
        println("source-attributed functions: " + hits.size() + " over " + perPath.size() + " files");
    }

    private void recordSourcePath(Map<Long, String> byAddress, long address, String text) {
        int index = text.indexOf("/mnt/");
        if (index < 0) {
            index = text.indexOf("/src-vanilla/");
            if (index < 0) {
                index = text.indexOf("/handheld/");
                if (index < 0) {
                    return;
                }
            }
        }
        String path = text.substring(index);
        if (!(path.endsWith(".cpp") || path.endsWith(".h") || path.endsWith(".hpp")
                || path.endsWith(".cc") || path.endsWith(".c"))) {
            return;
        }
        if (path.length() > 200 || path.indexOf(' ') >= 0) {
            return;
        }
        byAddress.put(address, path);
    }

    /**
     * Dump assembly for the most interesting functions so that signedness and
     * shift semantics lost by the decompiler can still be checked.
     */
    private void dumpDisassembly(File out) throws Exception {
        File directory = new File(out, "disassembly");
        directory.mkdirs();
        Listing programListing = currentProgram.getListing();
        List<Function> candidates = new ArrayList<>();
        for (long functionAddress : functionOrder) {
            FunctionInfo info = functions.get(functionAddress);
            if (info == null || info.instructionCount <= 0 || info.instructionCount > 600) {
                continue;
            }
            Function function = getFunctionAt(addr(functionAddress));
            if (function == null) {
                continue;
            }
            candidates.add(function);
        }
        candidates.sort((a, b) -> Long.compare(
            a.getEntryPoint().getOffset(), b.getEntryPoint().getOffset()));
        long budget = 6L << 20;
        int written = 0;
        for (Function function : candidates) {
            if (budget <= 0 || written >= 400) {
                break;
            }
            long address = function.getEntryPoint().getOffset();
            String owner = ownersByFunction.get(address);
            StringBuilder text = new StringBuilder();
            text.append("# ").append(Long.toHexString(address));
            if (owner != null) {
                text.append("  ").append(owner);
            }
            text.append("\n\n```asm\n");
            InstructionIterator iterator = programListing.getInstructions(function.getBody(), true);
            while (iterator.hasNext()) {
                Instruction instruction = iterator.next();
                text.append(instruction.getAddress()).append("  ")
                    .append(instruction.toString()).append('\n');
            }
            text.append("```\n");
            if (text.length() > budget) {
                break;
            }
            budget -= text.length();
            written++;
            try (BufferedWriter writer = utf8(new File(directory,
                    String.format("disasm-%s.md", Long.toHexString(address))))) {
                writer.write(text.toString());
            }
        }
        println("disassembly files: " + written);
    }

    // A vtable address point is only ever materialised in code by an
    // instruction that forms its address, which the compiler emits as
    // `lea reg, [rip + disp32]` (REX.W 8D /r, mod=00 rm=101). Scanning .text
    // for that encoding recovers, for every vtable:
    //   * the constructor(s) that install it (ctor:<Class>), and
    //   * for lambda/`__func` vtables, the function that created the lambda
    //     (fn:<Class>::<method>), which names otherwise anonymous code.
    private void scanCodeReferences(File out, int maxFunctions) throws Exception {
        Map<Long, List<String>> interesting = new HashMap<>();
        int lambdaTargets = 0;
        for (Vtable table : vtables) {
            if (looksLikeLambda(table.mangled)) {
                String enclosing = enclosingFunction(table.mangled);
                if (enclosing != null && enclosing.length() >= 4) {
                    for (long delta : new long[] {0, 8, 16}) {
                        interesting.computeIfAbsent(table.addressPoint + delta,
                            key -> new ArrayList<>()).add("fn:" + enclosing);
                    }
                    lambdaTargets++;
                }
            }
        }
        println("lambda enclosing names: " + lambdaTargets);
        for (Vtable table : vtables) {
            if (table.selected && table.demangled != null && table.demangled.indexOf('?') < 0
                    && table.demangled.length() < 80) {
                interesting.computeIfAbsent(table.addressPoint, key -> new ArrayList<>())
                    .add("ctor:" + table.demangled);
            }
        }
        println("code-scan targets: " + interesting.size());
        Map<Long, Set<Long>> hits = scanLeaSites(new LinkedHashSet<>(interesting.keySet()));
        Map<Long, Set<String>> owners = new LinkedHashMap<>();
        for (Map.Entry<Long, Set<Long>> entry : hits.entrySet()) {
            for (Long target : entry.getValue()) {
                List<String> names = interesting.get(target);
                if (names != null) {
                    owners.computeIfAbsent(entry.getKey(), key -> new LinkedHashSet<>()).addAll(names);
                }
            }
        }
        println("code references resolved to " + owners.size() + " functions");

        int added = 0;
        int renamed = 0;
        try (BufferedWriter writer = utf8(new File(out, "code-references.tsv"))) {
            writer.write("function_address\treferenced_vtables\trenamed_to\n");
            for (Map.Entry<Long, Set<String>> entry : owners.entrySet()) {
                long functionAddress = entry.getKey();
                String chosen = null;
                for (String name : entry.getValue()) {
                    if (name.startsWith("fn:")) {
                        chosen = name.substring(3);
                        break;
                    }
                }
                if (chosen == null) {
                    for (String name : entry.getValue()) {
                        chosen = name.substring(5) + "_ctor";
                        break;
                    }
                }
                Function function = getFunctionAt(addr(functionAddress));
                if (function == null) {
                    function = getFunctionContaining(addr(functionAddress));
                }
                String renamedTo = "";
                if (function != null && chosen != null && !chosen.isEmpty()) {
                    String candidate = sanitize(chosen);
                    if (candidate.length() > 100) {
                        candidate = candidate.substring(0, 100);
                    }
                    try {
                        function.setName(candidate, SourceType.USER_DEFINED);
                        renamedTo = candidate;
                        renamed++;
                    } catch (Exception ignored) {
                        try {
                            function.setName(candidate + "_" + Long.toHexString(functionAddress),
                                SourceType.USER_DEFINED);
                            renamedTo = candidate + "_" + Long.toHexString(functionAddress);
                            renamed++;
                        } catch (Exception ignoredToo) {
                            // keep auto name
                        }
                    }
                }
                if (functions.size() < maxFunctions + 800 && !functions.containsKey(functionAddress)) {
                    FunctionInfo info = analyseFunction(functionAddress);
                    if (info != null) {
                        info.inferredNames.addAll(entry.getValue());
                        added++;
                    }
                } else {
                    FunctionInfo info = functions.get(functionAddress);
                    if (info != null) {
                        info.inferredNames.addAll(entry.getValue());
                    }
                }
                writer.write(Long.toHexString(functionAddress) + "\t"
                    + tsv(String.join(", ", entry.getValue())) + "\t" + tsv(renamedTo) + "\n");
            }
        }
        println("code-reference functions added: " + added + ", renamed: " + renamed);
    }

    private void assignOwners() {
        if (!slotOwners.isEmpty()) {
            return;
        }
        for (Vtable table : vtables) {
            String name = table.demangled != null ? table.demangled : table.mangled;
            for (int slot = 0; slot < table.slots.size(); slot++) {
                long target = table.slots.get(slot);
                slotOwners.computeIfAbsent(target, key -> new LinkedHashSet<>())
                    .add(name + "::vslot" + slot);
            }
        }
    }

    private void decompileAll(File out, int maxFunctions) throws Exception {
        for (Map.Entry<Long, Set<String>> entry : slotOwners.entrySet()) {
            if (!entry.getValue().isEmpty()) {
                ownersByFunction.put(entry.getKey(), entry.getValue().iterator().next());
            }
        }
        if (functionOrder.isEmpty()) {
            functionOrder.addAll(functionLoadOrder);
        }
        File dir = new File(out, "pseudocode");
        if (!dir.isDirectory() && !dir.mkdirs()) {
            throw new IllegalStateException("cannot create " + dir);
        }
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(false);
        decompiler.setSimplificationStyle("decompile");
        if (!decompiler.openProgram(currentProgram)) {
            throw new IllegalStateException("decompiler could not open program");
        }

        assignOwners();
        List<FunctionInfo> ordered = new ArrayList<>(functions.values());
        ordered.sort(Comparator.comparingLong((FunctionInfo info) -> info.address));

        long totalBytes = 0;
        long partBytes = 0;
        int part = 0;
        long written = 0;
        BufferedWriter writer = null;
        StringBuilder index = new StringBuilder();
        index.append("# Decompiled function index\n\n")
            .append("| # | part | function | class::slot | instructions | first string |\n")
            .append("|---|------|----------|-------------|--------------|--------------|\n");

        try {
            for (int i = 0; i < ordered.size(); i++) {
                monitor.checkCancelled();
                FunctionInfo info = ordered.get(i);
                if (totalBytes >= MAX_TOTAL_PSEUDOCODE) {
                    diagnostics.add("pseudocode budget exhausted at " + i + "/" + ordered.size());
                    break;
                }
                if (slotOwners.getOrDefault(info.address, Collections.emptySet()).size() > 60) {
                    info.failure = "skipped_high_fanout_shim";
                    continue;
                }
                Function function = getFunctionAt(addr(info.address));
                if (function == null) {
                    continue;
                }
                DecompileResults results;
                try {
                    results = decompiler.decompileFunction(function, DECOMPILE_TIMEOUT_SECONDS, monitor);
                } catch (Exception e) {
                    info.failure = String.valueOf(e);
                    continue;
                }
                if (results == null || !results.decompileCompleted()
                        || results.getDecompiledFunction() == null) {
                    info.failure = results == null ? "no result" : String.valueOf(results.getErrorMessage());
                    continue;
                }
                String code = results.getDecompiledFunction().getC();
                if (code == null) {
                    info.failure = "empty";
                    continue;
                }
                if (code.length() > MAX_PSEUDOCODE_PER_FUNCTION) {
                    code = code.substring(0, MAX_PSEUDOCODE_PER_FUNCTION)
                        + "\n/* truncated by RecoverWorldgen.java */\n";
                }
                info.decompiled = true;

                if (writer == null || partBytes >= MAX_PSEUDOCODE_FILE_BYTES) {
                    if (writer != null) {
                        writer.close();
                    }
                    part++;
                    partBytes = 0;
                    writer = utf8(new File(dir, String.format("pseudocode-%03d.md", part)));
                    writer.write("# Decompiled bodies, part " + part + "\n\n");
                    writer.write("> Mechanically generated pseudocode from the proprietary BDS binary.\n");
                    writer.write("> Not original source; not MIT-licensed OpenBDS code.\n\n");
                }

                Set<String> owners = slotOwners.getOrDefault(info.address, Collections.emptySet());
                info.owners.addAll(owners);
                StringBuilder header = new StringBuilder();
                header.append("## `").append(Long.toHexString(info.address)).append("`");
                if (!owners.isEmpty()) {
                    List<String> sortedOwners = new ArrayList<>(owners);
                    sortedOwners.sort(Comparator.comparingInt((String value) -> value.length()));
                    int shownOwners = Math.min(3, sortedOwners.size());
                    header.append(" — ").append(String.join(", ", sortedOwners.subList(0, shownOwners))
                        .replace("`", "'"));
                    if (sortedOwners.size() > shownOwners) {
                        header.append(" (+").append(sortedOwners.size() - shownOwners).append(" more)");
                    }
                }
                header.append("\n\n");
                header.append("- instructions: ").append(info.instructionCount).append("\n");
                if (!info.strings.isEmpty()) {
                    int shown = 0;
                    for (String text : info.strings) {
                        if (shown++ >= 12) {
                            header.append("- …\n");
                            break;
                        }
                        header.append("- string: `")
                            .append(text.replace("`", "'").replace("\n", " "))
                            .append("`\n");
                    }
                }
                if (!info.callees.isEmpty()) {
                    StringBuilder callees = new StringBuilder();
                    int shown = 0;
                    for (Long callee : info.callees) {
                        if (shown++ >= 24) {
                            callees.append(" …");
                            break;
                        }
                        callees.append(callees.length() > 0 ? ", " : "").append(Long.toHexString(callee));
                    }
                    header.append("- calls: ").append(callees).append("\n");
                }
                header.append("\n```c\n").append(code).append("\n```\n\n");

                writer.write(header.toString());
                partBytes += header.length();
                totalBytes += header.length();
                written++;

                index.append("| ").append(i + 1).append(" | ").append(part).append(" | `")
                    .append(Long.toHexString(info.address)).append("` | ")
                    .append(String.join(", ", info.owners).replace("|", "\\|").replace("`", "'"))
                    .append(" | ").append(info.instructionCount).append(" | ")
                    .append(info.strings.isEmpty() ? "" : info.strings.iterator().next()
                        .replace("|", "\\|").replace("`", "'").replace("\n", " "))
                    .append(" |\n");
            }
        } finally {
            if (writer != null) {
                writer.close();
            }
            decompiler.dispose();
        }

        try (BufferedWriter indexWriter = utf8(new File(out, "pseudocode-index.md"))) {
            indexWriter.write(index.toString());
        }
        println("pseudocode: " + written + " functions, " + totalBytes + " bytes, " + part + " file(s)");
    }

    // --------------------------------------------------------------- reports

    private void writeVtableReports(File out) throws Exception {
        List<Vtable> ordered = new ArrayList<>(vtables);
        ordered.sort(Comparator
            .comparing((Vtable table) -> String.valueOf(table.demangled == null ? table.mangled : table.demangled))
            .thenComparingLong((Vtable table) -> table.addressPoint));

        try (BufferedWriter writer = utf8(new File(out, "VTABLE-CLASSES.tsv"))) {
            writer.write("mangled_name\tdemangled_name\ttypeinfo_address\tvtable_address_point\t"
                + "offset_to_top\tslot_count\tselected\n");
            for (Vtable table : ordered) {
                writer.write(tsv(table.mangled) + "\t" + tsv(table.demangled) + "\t"
                    + Long.toHexString(table.typeInfo) + "\t"
                    + Long.toHexString(table.addressPoint) + "\t"
                    + table.offsetToTop + "\t" + table.slots.size() + "\t"
                    + (table.selected ? "yes" : "") + "\n");
            }
        }

        try (BufferedWriter writer = utf8(new File(out, "vtable-slots.tsv"))) {
            writer.write("demangled_name\tvtable_address_point\tslot\ttarget_address\n");
            for (Vtable table : ordered) {
                if (!table.selected) {
                    continue;
                }
                for (int slot = 0; slot < table.slots.size(); slot++) {
                    writer.write(tsv(table.demangled) + "\t"
                        + Long.toHexString(table.addressPoint) + "\t" + slot + "\t"
                        + Long.toHexString(table.slots.get(slot)) + "\n");
                }
            }
        }
    }

    private void writeFunctionReports(File out) throws Exception {
        assignOwners();
        for (FunctionInfo info : functions.values()) {
            info.owners.addAll(slotOwners.getOrDefault(info.address, Collections.emptySet()));
        }

        try (BufferedWriter writer = utf8(new File(out, "functions.tsv"))) {
            writer.write("address\tinstructions\tbytes\tdecompiled\tfailure\towners\t"
                + "inferred_names\tcallees\tstrings\n");
            for (FunctionInfo info : functions.values()) {
                StringBuilder callees = new StringBuilder();
                for (Long callee : info.callees) {
                    callees.append(callees.length() > 0 ? "," : "").append(Long.toHexString(callee));
                }
                StringBuilder strings = new StringBuilder();
                for (String text : info.strings) {
                    strings.append(strings.length() > 0 ? " | " : "").append(text.replace("\t", " "));
                }
                writer.write(Long.toHexString(info.address) + "\t" + info.instructionCount + "\t"
                    + info.size + "\t" + (info.decompiled ? "yes" : "no") + "\t"
                    + tsv(info.failure) + "\t" + tsv(String.join(", ", info.owners)) + "\t"
                    + tsv(String.join(", ", info.inferredNames)) + "\t"
                    + callees + "\t" + tsv(strings.toString()) + "\n");
            }
        }

        try (BufferedWriter writer = utf8(new File(out, "callgraph.tsv"))) {
            writer.write("caller\tcallee\n");
            for (FunctionInfo info : functions.values()) {
                for (Long callee : info.callees) {
                    writer.write(Long.toHexString(info.address) + "\t" + Long.toHexString(callee) + "\n");
                }
            }
        }
    }

    private void writeSummary(File out, String mode) throws Exception {
        int selected = 0;
        int slots = 0;
        Set<String> priorityClasses = new LinkedHashSet<>();
        Set<String> allClasses = new HashSet<>();
        for (Vtable table : vtables) {
            allClasses.add(table.demangled == null ? table.mangled : table.demangled);
            if (table.selected) {
                selected++;
                slots += table.slots.size();
                if (table.depth > 1) {
                    priorityClasses.add(table.demangled == null ? table.mangled : table.demangled);
                }
            }
        }
        int decompiled = 0;
        for (FunctionInfo info : functions.values()) {
            if (info.decompiled) {
                decompiled++;
            }
        }
        try (BufferedWriter writer = utf8(new File(out, "README.md"))) {
            writer.write("# Headless Ghidra recovery — official BDS binary\n\n");
            writer.write("> Proprietary research evidence, mechanically derived from the Mojang\n");
            writer.write("> `bedrock_server` binary. Not MIT-licensed OpenBDS source. The target was\n");
            writer.write("> never executed: this is a static import plus decompiler pass.\n\n");
            writer.write("- mode: `" + mode + "`\n");
            writer.write("- program image base: `0x" + Long.toHexString(imageBase) + "`\n");
            writer.write("- relative relocations parsed: `" + relocationOverlay.size() + "`\n");
            writer.write("- RTTI `type_info` objects recovered: `" + typeInfoNames.size() + "`\n");
            writer.write("- distinct classes/vtables recovered: `" + allClasses.size() + "` / `"
                + vtables.size() + "`\n");
            writer.write("- vtables selected by name filter: `" + selected + "`\n");
            writer.write("- selected vtable slots: `" + slots + "`\n");
            writer.write("- functions analysed: `" + functions.size() + "`\n");
            writer.write("- functions decompiled: `" + decompiled + "`\n\n");
            writer.write("## How the class names were recovered\n\n");
            writer.write("The binary has no symbol table. Itanium ABI `type_info` objects were\n");
            writer.write("located structurally: a pointer to a data-section vtable followed by a\n");
            writer.write("pointer to an ASCII mangled type name in `.rodata`. Vtables were then\n");
            writer.write("found as relocated pointers equal to those `type_info` addresses, so the\n");
            writer.write("inventory in `VTABLE-CLASSES.tsv` covers every polymorphic class in the\n");
            writer.write("binary rather than a hand-written guess list.\n\n");
            writer.write("## Files\n\n");
            writer.write("- `VTABLE-CLASSES.tsv` — every recovered class/vtable\n");
            writer.write("- `vtable-slots.tsv` — slot-to-function map for selected classes\n");
            writer.write("- `functions.tsv` — analysis + string attribution per function\n");
            writer.write("- `callgraph.tsv` — recovered direct call edges\n");
            writer.write("- `pseudocode/pseudocode-*.md` — Ghidra C output\n");
            writer.write("- `pseudocode-index.md` — index into the parts\n\n");
            writer.write("## Priority classes (expanded by call-graph BFS)\n\n");
            int shown = 0;
            for (String name : priorityClasses) {
                if (shown++ >= 200) {
                    writer.write("- …\n");
                    break;
                }
                writer.write("- " + name + "\n");
            }
            writer.write("\n## Diagnostics\n\n");
            if (diagnostics.isEmpty()) {
                writer.write("- none\n");
            } else {
                int shownDiagnostics = 0;
                for (String diagnostic : diagnostics) {
                    if (shownDiagnostics++ >= 200) {
                        writer.write("- …\n");
                        break;
                    }
                    writer.write("- " + diagnostic.replace("\n", " ") + "\n");
                }
            }
        }
    }

    private BufferedWriter utf8(File file) throws Exception {
        return new BufferedWriter(new OutputStreamWriter(new FileOutputStream(file), StandardCharsets.UTF_8));
    }

    private static String tsv(String value) {
        if (value == null) {
            return "";
        }
        return value.replace("\t", " ").replace("\r", " ").replace("\n", " ");
    }
}
