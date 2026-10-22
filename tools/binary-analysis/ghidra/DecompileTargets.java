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
// Diagnostics are written even when individual steps fail, so a failed CI run
// is still debuggable from the committed evidence.
//
// @category BDS.Research

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.io.StringWriter;
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
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;
import ghidra.util.task.ConsoleTaskMonitor;

public class DecompileTargets extends GhidraScript {
    private static final int MAX_PSEUDOCODE_CHARS = 200_000;
    private static final int MAX_ASSEMBLY_INSTRUCTIONS = 4000;
    private static final int DECOMPILE_TIMEOUT_SECONDS = 90;
    private static final int ASSEMBLY_FOR_TOP = 20;
    private static final long MAX_FUNCTION_BYTES = 160_000;

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
    private final List<String> notes = new ArrayList<>();

    private File outputDir;
    private File functionsDir;
    private long deadlineNanos;
    private long startedNanos;
    private int maxFunctions;
    private int order = 0;
    private int decompiled = 0;
    private int failed = 0;

    @Override
    protected void run() throws Exception {
        startedNanos = System.nanoTime();
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
        functionsDir = new File(outputDir, "functions");
        if (!functionsDir.isDirectory() && !functionsDir.mkdirs()) {
            throw new IllegalArgumentException("cannot create " + functionsDir);
        }
        deadlineNanos = startedNanos + budgetSeconds * 1_000_000_000L;

        // Index file is created first so the CI job can tell "nothing to do"
        // apart from "the script died before producing anything".
        BufferedWriter index = new BufferedWriter(new FileWriter(
            new File(outputDir, "index.md"), StandardCharsets.UTF_8));
        try {
            index.write("# Recovered pseudocode\n\n");
            index.write("> Mechanically generated from the proprietary `bedrock_server` binary ");
            index.write("by Ghidra. Not original source, not MIT-licensed, not part of OpenBDS.\n\n");
            index.write("| address | score | depth | label | bytes | pseudocode |\n");
            index.write("|---|---|---|---|---|---|\n");
            index.flush();

            if (labelsFile != null && labelsFile.isFile()) {
                loadLabels(labelsFile);
            }
            List<Target> targets = loadTargets(targetsFile);
            println("DecompileTargets: " + targets.size() + " targets, budget " + budgetSeconds +
                "s, max " + maxFunctions + " functions, labelled " + labels.size());

            prepareFunctions(targets);
            println("DecompileTargets: prepared " + functions.size() + " functions, " +
                failures.size() + " preparation notes");

            decompileAll(index);
        } catch (Throwable throwable) {
            notes.add("fatal: " + describe(throwable));
            try {
                index.write("\n> Fatal error: " + md(describe(throwable)) + "\n");
            } catch (Exception ignored) {
                // index is best effort at this point
            }
            throw new RuntimeException(throwable);
        } finally {
            try {
                index.write("\nDecompiled: " + decompiled + ", failed: " + failed +
                    ", budget used: " + elapsedSeconds() + "s\n");
                index.close();
            } catch (Exception ignored) {
                // closing twice is harmless
            }
            writeFailures();
            writeDiagnostics();
        }
    }

    private void prepareFunctions(List<Target> targets) {
        Deque<Target> queue = new ArrayDeque<>(targets);
        Set<Long> seen = new HashSet<>();
        for (Target target : targets) {
            seen.add(target.address);
        }
        int explored = 0;
        while (!queue.isEmpty() && explored < 5000 && functions.size() < maxFunctions * 3) {
            if (deadlineNanos - System.nanoTime() < 300L * 1_000_000_000L) {
                notes.add("preparation stopped: less than 300s of budget left");
                break;
            }
            Target target = queue.pollFirst();
            explored++;
            if (target.size > MAX_FUNCTION_BYTES) {
                failures.add("0x" + Long.toHexString(target.address) + "\tskipped-oversized:" + target.size);
                continue;
            }
            Function function;
            try {
                function = ensureFunction(target);
            } catch (Throwable throwable) {
                failures.add("0x" + Long.toHexString(target.address) + "\tprepare: " + describe(throwable));
                continue;
            }
            if (function == null) {
                continue;
            }
            functions.putIfAbsent(target.address, function);
            depths.putIfAbsent(target.address, target.depth);
            if (target.depth == 0) {
                scores.putIfAbsent(target.address, target.score);
                if (target.label != null && !target.label.isEmpty()) {
                    labels.putIfAbsent(target.address, target.label);
                }
            }
            int maxDepth = target.score >= 100 ? 2 : 1;
            if (target.depth >= maxDepth) {
                continue;
            }
            Set<Function> callees;
            try {
                callees = function.getCalledFunctions(monitor);
            } catch (Throwable throwable) {
                continue;
            }
            for (Function callee : callees) {
                if (callee == null) {
                    continue;
                }
                long key;
                try {
                    key = callee.getEntryPoint().getOffset();
                } catch (Throwable throwable) {
                    continue;
                }
                if (!seen.add(key)) {
                    continue;
                }
                Target child = new Target();
                child.address = key;
                child.size = 0;
                try {
                    child.size = callee.getBody().getNumAddresses();
                } catch (Throwable ignored) {
                    child.size = 0;
                }
                child.score = 0;
                child.label = "callee-of:0x" + Long.toHexString(target.address);
                child.depth = target.depth + 1;
                queue.addLast(child);
            }
        }
    }

    private void decompileAll(BufferedWriter index) throws Exception {
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        decompiler.setSimplificationStyle("decompile");
        if (!decompiler.openProgram(currentProgram)) {
            notes.add("decompiler could not open program");
            index.write("\n> Decompiler could not open the program.\n");
            return;
        }
        try {
            BufferedWriter callgraph = new BufferedWriter(new FileWriter(
                new File(outputDir, "callgraph.tsv"), StandardCharsets.UTF_8));
            try {
                callgraph.write("function\tlabel\tcallees\tcallers\n");
                List<Long> ordered = new ArrayList<>(functions.keySet());
                ordered.sort((left, right) -> Integer.compare(
                    scoreOf(right), scoreOf(left)));
                println("DecompileTargets: decompiling " + ordered.size() + " functions");
                for (long key : ordered) {
                    if (System.nanoTime() > deadlineNanos) {
                        notes.add("decompile budget exhausted after " + decompiled + " functions");
                        index.write("\n> Budget exhausted: " + decompiled + " of " +
                            ordered.size() + " functions decompiled in this run.\n");
                        break;
                    }
                    Function function = functions.get(key);
                    if (function == null) {
                        continue;
                    }
                    String pseudocode;
                    try {
                        DecompileResults results = decompiler.decompileFunction(
                            function, DECOMPILE_TIMEOUT_SECONDS, new ConsoleTaskMonitor());
                        if (results == null || !results.decompileCompleted() ||
                            results.getDecompiledFunction() == null) {
                            failures.add("0x" + Long.toHexString(key) + "\tdecompile: " +
                                (results == null ? "null" : results.getErrorMessage()));
                            failed++;
                            continue;
                        }
                        pseudocode = results.getDecompiledFunction().getC();
                    } catch (Throwable throwable) {
                        failures.add("0x" + Long.toHexString(key) + "\tdecompile: " + describe(throwable));
                        failed++;
                        continue;
                    }
                    if (pseudocode == null) {
                        failures.add("0x" + Long.toHexString(key) + "\tdecompile: null C");
                        failed++;
                        continue;
                    }
                    if (pseudocode.length() > MAX_PSEUDOCODE_CHARS) {
                        pseudocode = pseudocode.substring(0, MAX_PSEUDOCODE_CHARS) +
                            "\n/* truncated by DecompileTargets.java */\n";
                    }
                    decompiled++;
                    String label = labels.getOrDefault(key, "fn_0x" + Long.toHexString(key));
                    String fileName = String.format("%05d_%x.c", order++, key);
                    try {
                        writeFunctionFile(new File(functionsDir, fileName), function, label,
                            pseudocode, decompiled <= ASSEMBLY_FOR_TOP);
                    } catch (Throwable throwable) {
                        failures.add("0x" + Long.toHexString(key) + "\twrite: " + describe(throwable));
                        continue;
                    }
                    index.write(String.format("| `0x%x` | %d | %d | `%s` | %d | [%s](functions/%s) |%n",
                        key, scoreOf(key), depths.getOrDefault(key, 1), md(label),
                        function.getBody().getNumAddresses(), fileName, fileName));
                    index.flush();
                    callgraph.write(String.format("0x%x\t%s\t%s\t%s%n",
                        key, tsv(label), joinedCallees(function), joinedCallers(function)));
                    if (decompiled % 25 == 0) {
                        println("DecompileTargets: " + decompiled + " decompiled, " +
                            failed + " failed, elapsed " + elapsedSeconds() + "s");
                    }
                }
            } finally {
                callgraph.close();
            }
        } finally {
            decompiler.dispose();
        }
    }

    private int scoreOf(long key) {
        int score = scores.getOrDefault(key, 0);
        return depths.getOrDefault(key, 1) == 0 ? score * 4 + 10 : score;
    }

    private String joinedCallees(Function function) {
        StringBuilder builder = new StringBuilder();
        try {
            for (Function callee : function.getCalledFunctions(monitor)) {
                if (builder.length() > 0) {
                    builder.append(",");
                }
                builder.append("0x").append(Long.toHexString(callee.getEntryPoint().getOffset()));
            }
        } catch (Throwable ignored) {
            return "";
        }
        return builder.toString();
    }

    private String joinedCallers(Function function) {
        StringBuilder builder = new StringBuilder();
        try {
            for (Function caller : function.getCallingFunctions(monitor)) {
                if (builder.length() > 0) {
                    builder.append(",");
                }
                builder.append("0x").append(Long.toHexString(caller.getEntryPoint().getOffset()));
            }
        } catch (Throwable ignored) {
            return "";
        }
        return builder.toString();
    }

    private List<Target> loadTargets(File file) throws Exception {
        List<Target> targets = new ArrayList<>();
        try (BufferedReader reader = new BufferedReader(new FileReader(file, StandardCharsets.UTF_8))) {
            String line = reader.readLine();
            while ((line = reader.readLine()) != null) {
                String[] fields = line.trim().split("\t");
                if (fields.length < 2 || fields[0].isEmpty()) {
                    continue;
                }
                try {
                    Target target = new Target();
                    target.address = Long.decode(fields[0].trim());
                    target.size = (long) Double.parseDouble(fields[1].trim());
                    target.score = fields.length > 2 ? Integer.parseInt(fields[2].trim()) : 0;
                    target.label = fields.length > 3 ? fields[3].trim() : "";
                    target.depth = 0;
                    targets.add(target);
                } catch (NumberFormatException exception) {
                    notes.add("skipping malformed target line: " + line);
                }
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
                    labels.put(address, fields[0] + "::vslot" + fields[3]);
                } catch (NumberFormatException ignored) {
                    // header or malformed line
                }
            }
        }
    }

    private Function ensureFunction(Target target) {
        Address entry = toAddr(target.address);
        if (entry == null) {
            failures.add("0x" + Long.toHexString(target.address) + "\tbad-address");
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
                } catch (Throwable ignored) {
                    // duplicate or invalid names are not fatal
                }
            }
            return function;
        } catch (Throwable throwable) {
            failures.add("0x" + Long.toHexString(target.address) + "\t" + describe(throwable));
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
        Set<Long> seen = new HashSet<>();
        TreeMap<Long, String> found = new TreeMap<>();
        Listing listing = currentProgram.getListing();
        for (Instruction instruction : listing.getInstructions(function.getBody(), true)) {
            for (Reference reference : instruction.getReferencesFrom()) {
                if (!reference.getReferenceType().isData()) {
                    continue;
                }
                long target = reference.getToAddress().getOffset();
                if (!seen.add(target)) {
                    continue;
                }
                String text = readPrintable(target);
                if (text != null && text.length() >= 4) {
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
        } catch (Throwable throwable) {
            return null;
        }
    }

    private void writeFailures() {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(
                new File(outputDir, "failures.tsv"), StandardCharsets.UTF_8))) {
            writer.write("detail\n");
            for (String failure : failures) {
                writer.write(failure.replace("\n", " ") + "\n");
            }
        } catch (Exception ignored) {
            // best effort
        }
    }

    private void writeDiagnostics() {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(
                new File(outputDir, "diagnostics.txt"), StandardCharsets.UTF_8))) {
            writer.write("script: DecompileTargets.java\n");
            writer.write("program: " + currentProgram.getName() + "\n");
            writer.write("image base: " + currentProgram.getImageBase() + "\n");
            writer.write("functions in program: " + currentProgram.getFunctionManager().getFunctionCount() + "\n");
            writer.write("functions prepared: " + functions.size() + "\n");
            writer.write("functions decompiled: " + decompiled + "\n");
            writer.write("functions failed: " + failed + "\n");
            writer.write("pseudocode files: " + (functionsDir == null ? 0 : functionsDir.listFiles().length) + "\n");
            writer.write("elapsed seconds: " + elapsedSeconds() + "\n");
            writer.write("preparation notes: " + failures.size() + "\n\n");
            for (String note : notes) {
                writer.write("note: " + note + "\n");
            }
            writer.write("\nfirst failures:\n");
            for (int index = 0; index < Math.min(40, failures.size()); index++) {
                writer.write("  " + failures.get(index) + "\n");
            }
        } catch (Exception ignored) {
            // best effort
        }
    }

    private long elapsedSeconds() {
        return (System.nanoTime() - startedNanos) / 1_000_000_000L;
    }

    private String describe(Throwable throwable) {
        StringWriter buffer = new StringWriter();
        throwable.printStackTrace(new PrintWriter(buffer));
        String text = buffer.toString();
        if (text.length() > 800) {
            text = text.substring(0, 800);
        }
        return text.replace("\n", " | ").replace("\t", " ");
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
