// Target-list driven headless decompilation of the official (proprietary)
// Bedrock Dedicated Server binary.
//
// Reads targets.tsv produced by tools/binary-analysis/triage.py, creates
// functions for the requested entry points and (bounded) their callees,
// then writes Ghidra pseudocode per function plus a call-graph index.
//
// The script never executes the target and performs no whole-program
// auto-analysis; every function it touches is named from RTTI/vtable evidence
// or by address.  Output is proprietary research evidence (see
// research/proprietary/README.md), not MIT-licensed OpenBDS source.
//
// @category BDS.Research

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.nio.charset.StandardCharsets;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;

import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.SourceType;

public class DecompileTargets extends GhidraScript {
    private static final int MAX_PSEUDOCODE_CHARS = 200_000;
    private static final int MAX_ASSEMBLY_INSTRUCTIONS = 4000;
    private static final int DECOMPILE_TIMEOUT_SECONDS = 150;
    private static final int ASSEMBLY_FOR_TOP = 25;

    private static class Target {
        long address;
        long size;
        int score;
        String label;
        int depth;
    }

    private final Map<Long, String> labels = new HashMap<>();
    private final Map<Long, Integer> scores = new HashMap<>();
    private final Map<Long, Function> functions = new LinkedHashMap<>();
    private final Map<Long, Integer> depths = new HashMap<>();
    private final List<String> failures = new ArrayList<>();
    private final Set<Long> attempted = new HashSet<>();

    private File outputDir;
    private long deadlineNanos;
    private int maxFunctions;
    private int order = 0;

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            throw new IllegalArgumentException(
                "usage: DecompileTargets.java OUTPUT_DIR TARGETS_TSV [budget_seconds] [max_functions] [labels_tsv]");
        }
        outputDir = new File(args[0]);
        File targetsFile = new File(args[1]);
        int budgetSeconds = args.length > 2 ? Integer.parseInt(args[2]) : 3600;
        maxFunctions = args.length > 3 ? Integer.parseInt(args[3]) : 400;
        File labelsFile = args.length > 4 ? new File(args[4]) : null;

        if (!outputDir.isDirectory() && !outputDir.mkdirs()) {
            throw new IllegalArgumentException("cannot create output directory " + outputDir);
        }
        deadlineNanos = System.nanoTime() + budgetSeconds * 1_000_000_000L;

        if (labelsFile != null && labelsFile.isFile()) {
            loadLabels(labelsFile);
        }
        List<Target> targets = loadTargets(targetsFile);
        println("DecompileTargets: " + targets.size() + " targets, budget " + budgetSeconds +
            "s, max " + maxFunctions + " functions");

        // Phase 1: create the functions (and their direct callees) so the
        // decompiler resolves call sites instead of printing raw pointers.
        List<Target> frontier = new ArrayList<>(targets);
        int explored = 0;
        Deque<Target> queue = new ArrayDeque<>(frontier);
        Set<Long> seen = new HashSet<>();
        for (Target target : targets) {
            seen.add(target.address);
        }
        while (!queue.isEmpty() && functions.size() < maxFunctions * 3 && explored < 4000) {
            if (System.nanoTime() > deadlineNanos) {
                println("preparation budget exhausted");
                break;
            }
            Target target = queue.pollFirst();
            explored++;
            Function function = ensureFunction(target);
            if (function == null) {
                continue;
            }
            functions.putIfAbsent(target.address, function);
            depths.putIfAbsent(target.address, target.depth);
            if (target.depth == 0) {
                scores.putIfAbsent(target.address, target.score);
                labels.putIfAbsent(target.address, target.label);
            }
            int maxDepth = target.score >= 30 ? 2 : 1;
            if (target.depth >= maxDepth) {
                continue;
            }
            Set<Function> callees;
            try {
                callees = function.getCalledFunctions(monitor);
            } catch (Exception exception) {
                continue;
            }
            for (Function callee : callees) {
                long key = callee.getEntryPoint().getOffset();
                if (seen.add(key)) {
                    Target child = new Target();
                    child.address = key;
                    child.size = callee.getBody().getNumAddresses();
                    child.score = 0;
                    child.label = "callee-of:0x" + Long.toHexString(target.address);
                    child.depth = target.depth + 1;
                    queue.addLast(child);
                }
            }
        }
        println("DecompileTargets: prepared " + functions.size() + " functions");

        // Phase 2: decompile.
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        decompiler.setSimplificationStyle("decompile");
        if (!decompiler.openProgram(currentProgram)) {
            throw new IllegalStateException("decompiler could not open program");
        }

        File functionsDir = new File(outputDir, "functions");
        if (!functionsDir.isDirectory() && !functionsDir.mkdirs()) {
            throw new IllegalStateException("cannot create " + functionsDir);
        }

        List<Long> ordered = new ArrayList<>(functions.keySet());
        ordered.sort((a, b) -> Integer.compare(
            scores.getOrDefault(b, 0) + (depths.getOrDefault(b, 1) == 0 ? 1 : 0),
            scores.getOrDefault(a, 0) + (depths.getOrDefault(a, 1) == 0 ? 1 : 0)));

        int done = 0;
        int failed = 0;
        try (BufferedWriter index = new BufferedWriter(new FileWriter(
                new File(outputDir, "index.md"), StandardCharsets.UTF_8))) {
            index.write("# Recovered pseudocode\n\n");
            index.write("> Mechanically generated from the proprietary `bedrock_server` binary ");
            index.write("by Ghidra. Not original source, not MIT-licensed, not part of OpenBDS.\n\n");
            index.write("| address | score | depth | label | bytes | pseudocode |\n");
            index.write("|---|---|---|---|---|---|\n");

            try (BufferedWriter callgraph = new BufferedWriter(new FileWriter(
                    new File(outputDir, "callgraph.tsv"), StandardCharsets.UTF_8))) {
                callgraph.write("function\tlabel\tcallees\tcallers\n");
                for (long key : ordered) {
                    Function function = functions.get(key);
                    if (function == null) {
                        continue;
                    }
                    if (System.nanoTime() > deadlineNanos) {
                        println("decompile budget exhausted after " + done + " functions");
                        index.write("\n> Budget exhausted: " + done + " of " + ordered.size() +
                            " functions decompiled in this run.\n");
                        break;
                    }
                    attempted.add(key);
                    DecompileResults results = decompiler.decompileFunction(
                        function, DECOMPILE_TIMEOUT_SECONDS, monitor);
                    String pseudocode = null;
                    if (results.decompileCompleted() && results.getDecompiledFunction() != null) {
                        pseudocode = results.getDecompiledFunction().getC();
                        if (pseudocode.length() > MAX_PSEUDOCODE_CHARS) {
                            pseudocode = pseudocode.substring(0, MAX_PSEUDOCODE_CHARS) +
                                "\n/* truncated by DecompileTargets.java */\n";
                        }
                    } else {
                        failures.add("0x" + Long.toHexString(key) + "\t" +
                            (results == null ? "null" : results.getErrorMessage()));
                        failed++;
                        continue;
                    }
                    done++;
                    if (done % 20 == 0) {
                        println("DecompileTargets: " + done + " done, elapsed " +
                            ((System.nanoTime() - (deadlineNanos - 1000L * 1000L * 1000L * 60 * 60)) /
                             1_000_000_000L) + "s (approx)");
                    }
                    String label = labels.getOrDefault(key, "fn_0x" + Long.toHexString(key));
                    String fileName = String.format("%05d_%x.c", order++, key);
                    writeFunctionFile(new File(functionsDir, fileName), function, label,
                        pseudocode, done <= ASSEMBLY_FOR_TOP);
                    index.write(String.format("| `0x%x` | %d | %d | `%s` | %d | [%s](functions/%s) |%n",
                        key, scores.getOrDefault(key, 0), depths.getOrDefault(key, 1),
                        md(label), function.getBody().getNumAddresses(), fileName, fileName));

                    StringBuilder callees = new StringBuilder();
                    for (Function callee : function.getCalledFunctions(monitor)) {
                        if (callees.length() > 0) {
                            callees.append(",");
                        }
                        callees.append("0x").append(Long.toHexString(callee.getEntryPoint().getOffset()));
                    }
                    StringBuilder callers = new StringBuilder();
                    for (Function caller : function.getCallingFunctions(monitor)) {
                        if (callers.length() > 0) {
                            callers.append(",");
                        }
                        callers.append("0x").append(Long.toHexString(caller.getEntryPoint().getOffset()));
                    }
                    callgraph.write(String.format("0x%x\t%s\t%s\t%s%n",
                        key, tsv(label), callees, callers));
                }
            }
            index.write("\nDecompiled: " + done + ", failed: " + failed + "\n");
        } finally {
            decompiler.dispose();
        }

        try (BufferedWriter writer = new BufferedWriter(new FileWriter(
                new File(outputDir, "failures.tsv"), StandardCharsets.UTF_8))) {
            writer.write("function\terror\n");
            for (String failure : failures) {
                writer.write(failure + "\n");
            }
        }
        println("DecompileTargets: decompiled " + done + " functions, " + failed + " failures");
    }

    private List<Target> loadTargets(File file) throws Exception {
        List<Target> targets = new ArrayList<>();
        try (BufferedReader reader = new BufferedReader(new FileReader(file, StandardCharsets.UTF_8))) {
            String line = reader.readLine();
            while ((line = reader.readLine()) != null) {
                String[] fields = line.split("\t");
                if (fields.length < 3) {
                    continue;
                }
                Target target = new Target();
                target.address = Long.decode(fields[0].trim());
                target.size = Long.parseLong(fields[1].trim());
                target.score = Integer.parseInt(fields[2].trim());
                target.label = fields.length > 3 ? fields[3].trim() : "";
                target.depth = 0;
                targets.add(target);
            }
        }
        return targets;
    }

    private void loadLabels(File file) throws Exception {
        try (BufferedReader reader = new BufferedReader(new FileReader(file, StandardCharsets.UTF_8))) {
            String line = reader.readLine();
            while ((line = reader.readLine()) != null) {
                String[] fields = line.split("\t");
                if (fields.length < 5) {
                    continue;
                }
                try {
                    long address = Long.decode(fields[4].trim());
                    String label = fields[0] + "::vslot" + fields[3];
                    labels.put(address, label);
                } catch (NumberFormatException ignored) {
                    // header or malformed line
                }
            }
        }
    }

    private Function ensureFunction(Target target) {
        Address entry = toAddr(target.address);
        if (entry == null) {
            return null;
        }
        Function existing = getFunctionAt(entry);
        if (existing != null) {
            return existing;
        }
        MemoryBlock block = currentProgram.getMemory().getBlock(entry);
        if (block == null || !block.isExecute()) {
            failures.add("0x" + Long.toHexString(target.address) + "\tnot-in-executable-block");
            return null;
        }
        try {
            DisassembleCommand disassemble = new DisassembleCommand(entry, null, true);
            if (!disassemble.applyTo(currentProgram, monitor)) {
                failures.add("0x" + Long.toHexString(target.address) + "\tdisassembly: " +
                    disassemble.getStatusMsg());
                return null;
            }
            Function function = getFunctionAt(entry);
            if (function == null) {
                CreateFunctionCmd command = new CreateFunctionCmd(entry);
                command.applyTo(currentProgram, monitor);
                function = getFunctionAt(entry);
            }
            if (function == null) {
                failures.add("0x" + Long.toHexString(target.address) + "\tno-function-after-create");
                return null;
            }
            String label = labels.get(target.address);
            if (label != null && !label.isEmpty()) {
                try {
                    function.setName("wg_" + sanitize(label), SourceType.USER_DEFINED);
                } catch (Exception ignored) {
                    // duplicate names are fine
                }
            }
            return function;
        } catch (Exception exception) {
            failures.add("0x" + Long.toHexString(target.address) + "\t" +
                exception.getClass().getSimpleName() + ": " + exception.getMessage());
            return null;
        }
    }

    private void writeFunctionFile(File file, Function function, String label,
                                   String pseudocode, boolean includeAssembly) throws Exception {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(file, StandardCharsets.UTF_8))) {
            writer.write("/*\n");
            writer.write(" * Recovered pseudocode - proprietary BDS binary (evidence, not source).\n");
            writer.write(" * Entry: 0x" + Long.toHexString(function.getEntryPoint().getOffset()) + "\n");
            writer.write(" * Label: " + label + "\n");
            writer.write(" * Body:  " + function.getBody() + "\n");
            writer.write(" * Ghidra: " + function.getName(true) + "\n");
            writer.write(" */\n\n");
            writer.write(pseudocode);
            writer.write("\n");
            writeReferencedStrings(writer, function);
            if (includeAssembly) {
                writer.write("\n/* ---- assembly ---- */\n");
                Listing listing = currentProgram.getListing();
                int count = 0;
                for (Instruction instruction : listing.getInstructions(function.getBody(), true)) {
                    if (count++ >= MAX_ASSEMBLY_INSTRUCTIONS) {
                        writer.write("; truncated\n");
                        break;
                    }
                    writer.write("/* " + instruction.getAddress() + " */  " + instruction + "\n");
                }
            }
        }
    }

    private void writeReferencedStrings(BufferedWriter writer, Function function) throws Exception {
        Set<String> seen = new HashSet<>();
        TreeMap<Long, String> found = new TreeMap<>();
        Listing listing = currentProgram.getListing();
        for (Instruction instruction : listing.getInstructions(function.getBody(), true)) {
            for (ghidra.program.model.symbol.Reference reference : instruction.getReferencesFrom()) {
                if (!reference.getReferenceType().isData()) {
                    continue;
                }
                long target = reference.getToAddress().getOffset();
                if (seen.contains(Long.toHexString(target))) {
                    continue;
                }
                String text = readPrintable(target);
                if (text != null && text.length() >= 4) {
                    seen.add(Long.toHexString(target));
                    found.put(target, text);
                }
                if (found.size() >= 24) {
                    break;
                }
            }
            if (found.size() >= 24) {
                break;
            }
        }
        if (found.isEmpty()) {
            return;
        }
        writer.write("\n/* ---- referenced strings ----\n");
        for (Map.Entry<Long, String> entry : found.entrySet()) {
            writer.write(" * 0x" + Long.toHexString(entry.getKey()) + "  " +
                entry.getValue().replace("*/", "* /") + "\n");
        }
        writer.write(" */\n");
    }

    private String readPrintable(long address) {
        try {
            Address start = toAddr(address);
            if (start == null) {
                return null;
            }
            StringBuilder builder = new StringBuilder();
            for (int index = 0; index < 96; index++) {
                byte value = currentProgram.getMemory().getByte(start.add(index));
                if (value == 0) {
                    break;
                }
                if (value < 0x20 || value > 0x7e) {
                    return null;
                }
                builder.append((char) value);
            }
            return builder.toString();
        } catch (Exception exception) {
            return null;
        }
    }

    private String sanitize(String value) {
        StringBuilder builder = new StringBuilder();
        for (char character : value.toCharArray()) {
            builder.append(Character.isLetterOrDigit(character) || character == '_' ? character : '_');
        }
        return builder.toString();
    }

    private String tsv(String value) {
        return value == null ? "" : value.replace("\t", " ").replace("\n", " ");
    }

    private String md(String value) {
        return value == null ? "" : value.replace("|", "\\|").replace("\n", " ");
    }
}
