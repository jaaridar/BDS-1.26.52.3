// Locate selected C++ RTTI/vtables and decompile their virtual functions.
// This script is intentionally target-read-only and writes bounded text reports.
// @category BDS.Research

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;

import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.SourceType;
import ghidra.util.task.TaskMonitor;

public class RecoverWorldgen extends GhidraScript {
    private static final int POINTER_SIZE = 8;
    private static final int MAX_SLOTS_PER_VTABLE = 96;
    private static final int MAX_UNIQUE_FUNCTIONS = 320;
    private static final int MAX_PSEUDOCODE_CHARS = 240_000;
    private static final int MAX_ASSEMBLY_INSTRUCTIONS = 5000;
    private static final int MAX_DIRECT_CALLEE_FUNCTIONS = 80;
    private static final int MAX_CALLGRAPH_DEPTH = 3;
    private static final long WORLDGEN_TEXT_MIN = 0x05200000L;
    private static final long WORLDGEN_TEXT_MAX = 0x05300000L;
    private static final int DECOMPILE_TIMEOUT_SECONDS = 90;

    /*
     * Exact Linux-build labels established by complete vtable recovery, function
     * shape, the generated public class declarations, and direct-call context.
     * Addresses are deliberately scoped to the adjacent binary digest.
     */
    private static final String[][] KNOWN_FUNCTIONS = {
        {"0527c470", "OverworldGenerator__loadChunk"},
        {"0527cd10", "OverworldGenerator__structurePostProcessChunk"},
        {"0527ab30", "OverworldGenerator__decorationPostProcessChunk"},
        {"0527a850", "OverworldGenerator__prepareHeights"},
        {"0527aae0", "OverworldGenerator__getBiomeArea"},
        {"0527a840", "OverworldGenerator__getBlockVolumeDimensions"},
        {"0527a720", "OverworldGenerator__decorateWorldGenLoadChunk"},
        {"0527ab20", "OverworldGenerator__tryMakeAquifer"},
        {"0527a6f0", "OverworldGenerator__createNoiseCache"},
        {"05293840", "OverworldGeneratorMultinoise__chunkPosNeedsBlending"},
        {"05286a80", "OverworldGeneratorMultinoise___clearBlendingCache"},
        {"0528a520", "OverworldGeneratorMultinoise__getBiomeSource"},
        {"05288770", "OverworldGeneratorMultinoise__findSpawnPosition"},
        {"052884e0", "OverworldGeneratorMultinoise__getPreliminarySurfaceLevel"},
        {"05288460", "OverworldGeneratorMultinoise__propagateCombinedChunkSource"},
        {"05281650", "OverworldGeneratorMultinoise__decorateWorldGenPostProcess"},
        {"05287590", "OverworldGeneratorMultinoise__generateDensityCellsForChunk"},
        {"05287580", "OverworldGeneratorMultinoise__getLevelGenHeight"},
        {"05286b50", "OverworldGeneratorMultinoise__getXoroshiroPositionalRandomFactory"},
        {"05286a90", "OverworldGeneratorMultinoise__tryMakeAquifer"},
        {"05286c40", "OverworldGeneratorMultinoise__createNoiseCache"},
        {"052884c0", "OverworldGeneratorMultinoise__getSurfaceNoise"},
        {"052884d0", "OverworldGeneratorMultinoise__getMaterialAdjNoise"},
        {"05288b10", "OverworldGeneratorMultinoise___prepareHeights"},
        {"05287930", "OverworldGeneratorMultinoise___generateDensityCellsForChunk"},
        {"05286c70", "OverworldGeneratorMultinoise__createNoiseCache_static"},
        {"05259f00", "Cavifier__carve"},
        {"052588d0", "Aquifer__Aquifer"},
        {"05258c60", "Aquifer__computeSubstance"},
        {"05259950", "Aquifer__computeFluid"},
    };

    private static final String[] CALLGRAPH_SEEDS = {
        "0527c470", "0527cd10", "0527ab30", "05287590", "05288b10",
        "052884e0", "05286a90", "05286c40", "05281650"
    };

    private static final String[][] TARGETS = {
        {"WorldGenerator", "14WorldGenerator"},
        {"OverworldGenerator", "18OverworldGenerator"},
        {"OverworldGenerator2d", "20OverworldGenerator2d"},
        {"OverworldGeneratorMultinoise", "28OverworldGeneratorMultinoise"},
        {"BiomeSource", "11BiomeSource"},
        {"BiomeSource3d", "13BiomeSource3d"},
        {"FixedBiomeSource", "16FixedBiomeSource"},
        {"VanillaOverworldBiomeSource<Pos2d>", "27VanillaOverworldBiomeSourceI5Pos2dE"},
        {"NodeGraphBiomeSource<Pos2d>", "20NodeGraphBiomeSourceI5Pos2dE"},
        {"CachedBiomeSource<BiomeSource3d>", "17CachedBiomeSourceI13BiomeSource3dE"},
        {"FlatWorldGenerator", "18FlatWorldGenerator"},
        {"XoroshiroRandom", "15XoroshiroRandom"},
        {"XoroshiroPositionalRandomFactory", "32XoroshiroPositionalRandomFactory"},
    };

    private static class VtableEntry {
        String className;
        String typeName;
        Address typeNameAddress;
        Address typeInfoAddress;
        Address vtableStart;
        long offsetToTop;
        int slot;
        Address target;
        String status;
        Function function;
    }

    private static class CallEdge {
        String root;
        int depth;
        Function caller;
        Address target;
        Function callee;
        String status;
    }

    private Memory memory;
    private MemoryBlock textBlock;
    private final List<VtableEntry> entries = new ArrayList<>();
    private final Map<Long, Function> uniqueFunctions = new LinkedHashMap<>();
    private final Map<Long, String> functionOwners = new LinkedHashMap<>();
    private final Map<Long, Function> directFunctions = new LinkedHashMap<>();
    private final Map<Long, String> directFunctionOwners = new LinkedHashMap<>();
    private final List<CallEdge> callEdges = new ArrayList<>();
    private final Map<Long, String> knownFunctionNames = new HashMap<>();
    private final List<String> diagnostics = new ArrayList<>();

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) {
            throw new IllegalArgumentException("usage: RecoverWorldgen.java OUTPUT_DIRECTORY");
        }
        if (currentProgram.getDefaultPointerSize() != POINTER_SIZE ||
            currentProgram.getLanguage().isBigEndian()) {
            throw new IllegalArgumentException("this script currently supports little-endian 64-bit targets only");
        }

        File outputDir = new File(args[0]);
        if (!outputDir.isDirectory() && !outputDir.mkdirs()) {
            throw new IllegalArgumentException("cannot create output directory: " + outputDir);
        }

        memory = currentProgram.getMemory();
        textBlock = memory.getBlock(".text");
        if (textBlock == null || !textBlock.isExecute()) {
            throw new IllegalStateException("executable .text block not found");
        }
        for (String[] known : KNOWN_FUNCTIONS) {
            knownFunctionNames.put(Long.parseUnsignedLong(known[0], 16), known[1]);
        }

        println("Recovering selected RTTI and vtables without whole-program auto-analysis...");
        for (String[] target : TARGETS) {
            monitor.checkCancelled();
            recoverClass(target[0], target[1]);
        }

        recoverDirectCallgraph();
        writeVtableReport(new File(outputDir, "vtable-functions.tsv"));
        writePseudocodeReport(new File(outputDir, "virtual-function-pseudocode.md"));
        writeCallgraphReport(new File(outputDir, "direct-callees.tsv"));
        writeDirectPseudocodeReport(new File(outputDir, "direct-callee-pseudocode.md"));
        writeSummary(new File(outputDir, "README.md"));
        println("Recovered " + entries.size() + " vtable entries, " +
            uniqueFunctions.size() + " unique virtual functions, and " +
            directFunctions.size() + " direct callees.");
    }

    private void recoverClass(String className, String typeName) throws Exception {
        byte[] typeBytes = (typeName + "\0").getBytes(StandardCharsets.US_ASCII);
        List<Address> typeNames = findAllBytes(typeBytes, false);
        if (typeNames.isEmpty()) {
            diagnostics.add(className + ": RTTI type-name string not found (" + typeName + ")");
            return;
        }

        int classEntryCount = 0;
        for (Address typeNameAddress : typeNames) {
            for (Address namePointer : findPointerOccurrences(typeNameAddress, false)) {
                Address typeInfoAddress;
                try {
                    typeInfoAddress = namePointer.subtract(POINTER_SIZE);
                } catch (Exception exception) {
                    continue;
                }
                if (!isReadable(typeInfoAddress, POINTER_SIZE * 2)) {
                    continue;
                }

                List<Address> typeInfoPointers = findPointerOccurrences(typeInfoAddress, false);
                for (Address typeInfoPointer : typeInfoPointers) {
                    Address offsetAddress;
                    try {
                        offsetAddress = typeInfoPointer.subtract(POINTER_SIZE);
                    } catch (Exception exception) {
                        continue;
                    }
                    if (!isReadable(offsetAddress, POINTER_SIZE * 2)) {
                        continue;
                    }
                    long offsetToTop = memory.getLong(offsetAddress);
                    if (offsetToTop < -0x100000L || offsetToTop > 0x100000L) {
                        continue;
                    }
                    Address vtableStart = offsetAddress;
                    Address addressPoint = typeInfoPointer.add(POINTER_SIZE);
                    int recovered = recoverVtable(
                        className,
                        typeName,
                        typeNameAddress,
                        typeInfoAddress,
                        vtableStart,
                        addressPoint,
                        offsetToTop
                    );
                    classEntryCount += recovered;
                }
            }
        }
        if (classEntryCount == 0) {
            diagnostics.add(className + ": RTTI string found but no executable vtable entries recovered");
        }
    }

    private int recoverVtable(
        String className,
        String typeName,
        Address typeNameAddress,
        Address typeInfoAddress,
        Address vtableStart,
        Address addressPoint,
        long offsetToTop
    ) throws Exception {
        int recovered = 0;
        int consecutiveNonCode = 0;
        for (int slot = 0; slot < MAX_SLOTS_PER_VTABLE; slot++) {
            monitor.checkCancelled();
            Address slotAddress = addressPoint.add((long) slot * POINTER_SIZE);
            if (!isReadable(slotAddress, POINTER_SIZE)) {
                break;
            }
            long rawTarget = memory.getLong(slotAddress);
            Address target = currentProgram.getAddressFactory()
                .getDefaultAddressSpace().getAddress(rawTarget);
            boolean executable = target != null && memory.contains(target) &&
                memory.getBlock(target) != null && memory.getBlock(target).isExecute();
            if (!executable) {
                consecutiveNonCode++;
                if (consecutiveNonCode >= 2) {
                    break;
                }
                continue;
            }
            consecutiveNonCode = 0;

            VtableEntry entry = new VtableEntry();
            entry.className = className;
            entry.typeName = typeName;
            entry.typeNameAddress = typeNameAddress;
            entry.typeInfoAddress = typeInfoAddress;
            entry.vtableStart = vtableStart;
            entry.offsetToTop = offsetToTop;
            entry.slot = slot;
            entry.target = target;
            entry.function = ensureFunction(target, className, slot);
            entry.status = entry.function == null ? "function_creation_failed" : "function_ready";
            entries.add(entry);
            recovered++;

            if (entry.function != null && uniqueFunctions.size() < MAX_UNIQUE_FUNCTIONS) {
                long key = entry.function.getEntryPoint().getOffset();
                uniqueFunctions.putIfAbsent(key, entry.function);
                functionOwners.putIfAbsent(key, className + " slot " + slot);
            }
        }
        return recovered;
    }

    private Function ensureFunction(Address entry, String className, int slot) {
        Function function = getFunctionAt(entry);
        if (function != null) {
            applyKnownName(function);
            return function;
        }
        try {
            DisassembleCommand disassemble = new DisassembleCommand(entry, null, true);
            if (!disassemble.applyTo(currentProgram, monitor)) {
                diagnostics.add(className + " slot " + slot + " at " + entry +
                    ": disassembly failed: " + disassemble.getStatusMsg());
                return null;
            }
            CreateFunctionCmd create = new CreateFunctionCmd(entry);
            if (!create.applyTo(currentProgram, monitor)) {
                diagnostics.add(className + " slot " + slot + " at " + entry +
                    ": function creation failed: " + create.getStatusMsg());
                return null;
            }
            function = getFunctionAt(entry);
            applyKnownName(function);
            return function;
        } catch (Exception exception) {
            diagnostics.add(className + " slot " + slot + " at " + entry +
                ": " + exception.getClass().getSimpleName() + ": " + exception.getMessage());
            return null;
        }
    }

    private void applyKnownName(Function function) {
        if (function == null) {
            return;
        }
        String knownName = knownFunctionNames.get(function.getEntryPoint().getOffset());
        if (knownName == null || knownName.equals(function.getName())) {
            return;
        }
        try {
            function.setName(knownName, SourceType.USER_DEFINED);
        } catch (Exception exception) {
            diagnostics.add("could not apply known name " + knownName + " at " +
                function.getEntryPoint() + ": " + exception.getMessage());
        }
    }

    private void recoverDirectCallgraph() throws Exception {
        List<Function> frontier = new ArrayList<>();
        Map<Long, String> roots = new HashMap<>();
        Set<Long> expanded = new HashSet<>();

        for (String seedHex : CALLGRAPH_SEEDS) {
            Address seedAddress = currentProgram.getAddressFactory().getDefaultAddressSpace()
                .getAddress(Long.parseUnsignedLong(seedHex, 16));
            Function seed = ensureFunction(seedAddress, "callgraph seed", 0);
            if (seed == null) {
                continue;
            }
            long key = seed.getEntryPoint().getOffset();
            if (!roots.containsKey(key)) {
                frontier.add(seed);
                roots.put(key, seed.getName(true));
            }
        }

        Listing listing = currentProgram.getListing();
        for (int depth = 1; depth <= MAX_CALLGRAPH_DEPTH && !frontier.isEmpty(); depth++) {
            List<Function> next = new ArrayList<>();
            for (Function caller : frontier) {
                monitor.checkCancelled();
                long callerKey = caller.getEntryPoint().getOffset();
                if (!expanded.add(callerKey)) {
                    continue;
                }
                String root = roots.get(callerKey);
                for (Instruction instruction : listing.getInstructions(caller.getBody(), true)) {
                    if (!instruction.getFlowType().isCall()) {
                        continue;
                    }
                    for (Address target : instruction.getFlows()) {
                        long targetOffset = target.getOffset();
                        if (targetOffset < WORLDGEN_TEXT_MIN || targetOffset >= WORLDGEN_TEXT_MAX) {
                            continue;
                        }
                        CallEdge edge = new CallEdge();
                        edge.root = root;
                        edge.depth = depth;
                        edge.caller = caller;
                        edge.target = target;
                        edge.callee = ensureFunction(target, "direct callee", depth);
                        edge.status = edge.callee == null ? "function_creation_failed" : "function_ready";
                        callEdges.add(edge);
                        if (edge.callee == null) {
                            continue;
                        }

                        long calleeKey = edge.callee.getEntryPoint().getOffset();
                        roots.putIfAbsent(calleeKey, root);
                        if (!uniqueFunctions.containsKey(calleeKey) &&
                            !directFunctions.containsKey(calleeKey) &&
                            directFunctions.size() < MAX_DIRECT_CALLEE_FUNCTIONS) {
                            directFunctions.put(calleeKey, edge.callee);
                            directFunctionOwners.put(calleeKey,
                                "depth " + depth + " from " + caller.getName(true) +
                                " (root " + root + ")");
                        }
                        if (!expanded.contains(calleeKey) && depth < MAX_CALLGRAPH_DEPTH &&
                            (uniqueFunctions.containsKey(calleeKey) || directFunctions.containsKey(calleeKey))) {
                            next.add(edge.callee);
                        }
                    }
                }
            }
            frontier = next;
        }
    }

    private List<Address> findAllBytes(byte[] needle, boolean executableOnly) throws Exception {
        List<Address> found = new ArrayList<>();
        for (MemoryBlock block : memory.getBlocks()) {
            if (!block.isInitialized() || (executableOnly && !block.isExecute())) {
                continue;
            }
            Address cursor = block.getStart();
            while (cursor.compareTo(block.getEnd()) <= 0) {
                monitor.checkCancelled();
                Address match = memory.findBytes(
                    cursor,
                    block.getEnd(),
                    needle,
                    null,
                    true,
                    monitor
                );
                if (match == null) {
                    break;
                }
                found.add(match);
                if (match.equals(block.getEnd())) {
                    break;
                }
                cursor = match.add(1);
            }
        }
        return found;
    }

    private List<Address> findPointerOccurrences(Address pointedTo, boolean executableOnly) throws Exception {
        byte[] needle = new byte[POINTER_SIZE];
        long value = pointedTo.getOffset();
        for (int index = 0; index < POINTER_SIZE; index++) {
            needle[index] = (byte) ((value >>> (8 * index)) & 0xff);
        }
        return findAllBytes(needle, executableOnly);
    }

    private boolean isReadable(Address start, int length) {
        if (start == null || !memory.contains(start)) {
            return false;
        }
        try {
            Address end = start.add(length - 1L);
            MemoryBlock block = memory.getBlock(start);
            return block != null && block.isRead() && block.contains(end);
        } catch (Exception exception) {
            return false;
        }
    }

    private void writeVtableReport(File output) throws Exception {
        entries.sort(Comparator
            .comparing((VtableEntry entry) -> entry.className)
            .thenComparingLong(entry -> entry.vtableStart.getOffset())
            .thenComparingInt(entry -> entry.slot));
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(output, StandardCharsets.UTF_8))) {
            writer.write("class\trtti_type_name\ttype_name_address\ttypeinfo_address\t");
            writer.write("vtable_start\toffset_to_top\tslot\ttarget\tstatus\tghidra_name\n");
            for (VtableEntry entry : entries) {
                writer.write(tsv(entry.className) + "\t" + tsv(entry.typeName) + "\t" +
                    entry.typeNameAddress + "\t" + entry.typeInfoAddress + "\t" +
                    entry.vtableStart + "\t" + entry.offsetToTop + "\t" + entry.slot + "\t" +
                    entry.target + "\t" + entry.status + "\t" +
                    (entry.function == null ? "" : tsv(entry.function.getName(true))) + "\n");
            }
        }
    }

    private void writeCallgraphReport(File output) throws Exception {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(output, StandardCharsets.UTF_8))) {
            writer.write("root\tdepth\tcaller\tcaller_name\ttarget\tstatus\tcallee_name\n");
            for (CallEdge edge : callEdges) {
                writer.write(tsv(edge.root) + "\t" + edge.depth + "\t" +
                    edge.caller.getEntryPoint() + "\t" + tsv(edge.caller.getName(true)) + "\t" +
                    edge.target + "\t" + edge.status + "\t" +
                    (edge.callee == null ? "" : tsv(edge.callee.getName(true))) + "\n");
            }
        }
    }

    private void writeDirectPseudocodeReport(File output) throws Exception {
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        decompiler.setSimplificationStyle("decompile");
        if (!decompiler.openProgram(currentProgram)) {
            throw new IllegalStateException("Ghidra decompiler could not open imported program");
        }

        try (BufferedWriter writer = new BufferedWriter(new FileWriter(output, StandardCharsets.UTF_8))) {
            writer.write("# Recovered direct callees of world-generation entry points\n\n");
            writer.write("> Mechanically generated pseudocode from the proprietary BDS binary. ");
            writer.write("This is not original source and is not MIT-licensed OpenBDS code.\n\n");
            writer.write("The bounded call graph starts at named world-generation virtual methods, ");
            writer.write("follows direct calls to the nearby `0x05200000..0x052fffff` text region ");
            writer.write("for at most " + MAX_CALLGRAPH_DEPTH + " levels, and does not resolve indirect calls.\n\n");
            for (Map.Entry<Long, Function> item : directFunctions.entrySet()) {
                monitor.checkCancelled();
                writeDecompiledFunction(writer, decompiler, item.getValue(), directFunctionOwners.get(item.getKey()));
            }
        } finally {
            decompiler.dispose();
        }
    }

    private void writeDecompiledFunction(
        BufferedWriter writer,
        DecompInterface decompiler,
        Function function,
        String owner
    ) throws Exception {
        writer.write("## `" + function.getEntryPoint() + "` — " + markdown(owner) + "\n\n");
        writer.write("- Ghidra name: `" + markdown(function.getName(true)) + "`\n");
        writer.write("- Body: `" + markdown(function.getBody().toString()) + "`\n\n");

        DecompileResults results = decompiler.decompileFunction(
            function,
            DECOMPILE_TIMEOUT_SECONDS,
            monitor
        );
        if (results.decompileCompleted() && results.getDecompiledFunction() != null) {
            String pseudocode = results.getDecompiledFunction().getC();
            if (pseudocode.length() > MAX_PSEUDOCODE_CHARS) {
                pseudocode = pseudocode.substring(0, MAX_PSEUDOCODE_CHARS) +
                    "\n/* pseudocode truncated by RecoverWorldgen.java */\n";
            }
            writer.write("### Pseudocode\n\n```c\n" + pseudocode + "\n```\n\n");
        } else {
            writer.write("### Pseudocode unavailable\n\n`" +
                markdown(results.getErrorMessage()) + "`\n\n");
        }
        writeAssembly(writer, function);
    }

    private void writePseudocodeReport(File output) throws Exception {
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        decompiler.setSimplificationStyle("decompile");
        if (!decompiler.openProgram(currentProgram)) {
            throw new IllegalStateException("Ghidra decompiler could not open imported program");
        }

        try (BufferedWriter writer = new BufferedWriter(new FileWriter(output, StandardCharsets.UTF_8))) {
            writer.write("# Recovered world-generation virtual functions\n\n");
            writer.write("> Mechanically generated pseudocode from the proprietary BDS binary. ");
            writer.write("This is not original source and is not MIT-licensed OpenBDS code. ");
            writer.write("Slot ownership is inferred only from Itanium RTTI/vtable layout.\n\n");
            writer.write("Binary SHA-256 is recorded by the adjacent inventory report. ");
            writer.write("Analysis intentionally skipped whole-program auto-analysis; unresolved ");
            writer.write("types, calls, and function boundaries remain limitations.\n\n");

            for (Map.Entry<Long, Function> item : uniqueFunctions.entrySet()) {
                monitor.checkCancelled();
                writeDecompiledFunction(writer, decompiler, item.getValue(), functionOwners.get(item.getKey()));
            }
        } finally {
            decompiler.dispose();
        }
    }

    private void writeAssembly(BufferedWriter writer, Function function) throws Exception {
        writer.write("### Assembly\n\n```asm\n");
        Listing listing = currentProgram.getListing();
        int count = 0;
        for (Instruction instruction : listing.getInstructions(function.getBody(), true)) {
            if (count++ >= MAX_ASSEMBLY_INSTRUCTIONS) {
                writer.write("; assembly truncated by RecoverWorldgen.java\n");
                break;
            }
            writer.write(instruction.getAddress() + "  " + instruction + "\n");
        }
        writer.write("```\n\n");
    }

    private void writeSummary(File output) throws Exception {
        Set<String> classes = new HashSet<>();
        for (VtableEntry entry : entries) {
            classes.add(entry.className);
        }
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(output, StandardCharsets.UTF_8))) {
            writer.write("# Targeted Ghidra recovery\n\n");
            writer.write("> Proprietary research evidence; not part of the MIT OpenBDS engine.\n\n");
            writer.write("This bounded headless pass imported the ELF without whole-program ");
            writer.write("auto-analysis, found selected Itanium C++ RTTI names, reconstructed ");
            writer.write("candidate vtables from relocated pointers, disassembled their executable ");
            writer.write("slots, followed a bounded nearby direct-call graph, and invoked Ghidra's ");
            writer.write("decompiler. It did not execute the target.\n\n");
            writer.write("- Classes with recovered entries: `" + classes.size() + "`\n");
            writer.write("- Vtable entries: `" + entries.size() + "`\n");
            writer.write("- Unique virtual functions decompiled: `" + uniqueFunctions.size() + "`\n");
            writer.write("- Nearby direct callees decompiled: `" + directFunctions.size() + "`\n");
            writer.write("- Direct call edges recorded: `" + callEdges.size() + "`\n");
            writer.write("- Maximum slots examined per vtable: `" + MAX_SLOTS_PER_VTABLE + "`\n");
            writer.write("- Maximum unique virtual functions: `" + MAX_UNIQUE_FUNCTIONS + "`\n");
            writer.write("- Maximum nearby direct callees: `" + MAX_DIRECT_CALLEE_FUNCTIONS + "`\n");
            writer.write("- Maximum direct-call depth: `" + MAX_CALLGRAPH_DEPTH + "`\n\n");
            writer.write("## Diagnostics\n\n");
            if (diagnostics.isEmpty()) {
                writer.write("- None\n");
            } else {
                for (String diagnostic : diagnostics) {
                    writer.write("- " + markdown(diagnostic) + "\n");
                }
            }
        }
    }

    private String tsv(String value) {
        return value.replace("\t", " ").replace("\r", " ").replace("\n", " ");
    }

    private String markdown(String value) {
        if (value == null) {
            return "";
        }
        return value.replace("`", "\\`").replace("\r", " ").replace("\n", " ");
    }
}
