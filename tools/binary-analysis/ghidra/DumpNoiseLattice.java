// Dump one function and its transitive callees with enough detail to
// reimplement it: decompiled pseudocode, full instruction listing, and the
// contents of every constant table the code touches.
//
// Why this exists: the worldgen report (research/proprietary/.../ANALYSIS.md)
// names two blockers for a bit-exact terrain generator — the lattice evaluation
// in FUN_0d341b00, and the .rodata float tables that hold the multinoise
// constants. Both are recoverable from the binary, but the general pass never
// reached them (they are not vtable entries and carry no RTTI). This script
// starts at a given address, disassembles and creates functions on demand
// (the import runs with -noanalysis), then walks the call graph.
//
// Everything is static: the target is never executed.
//
// Output:
//   lattice/summary.md         call tree, sizes, seeds, callers
//   lattice/pseudocode-*.md    decompiled bodies
//   lattice/disasm-*.md        instruction listings
//   lattice/constants.tsv      every referenced data address, as f32/f64/u32
//   lattice/tables.md          human-readable float tables
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
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;

public class DumpNoiseLattice extends GhidraScript {

    private static final int MAX_NODES = 400;
    private static final int TABLE_BYTES = 256;
    private static final int VECTOR_MAX = 0;

    private Memory memory;
    private DecompInterface decompiler;
    private File outDir;

    private final Map<Long, Function> nodes = new LinkedHashMap<>();
    private final Map<Long, Integer> depthOf = new LinkedHashMap<>();
    private final Map<Long, String> pseudoFile = new LinkedHashMap<>();
    private final Map<Long, String> disasmFile = new LinkedHashMap<>();
    // data address -> where it was referenced from
    private final Map<Long, Set<Long>> dataRefs = new LinkedHashMap<>();
    private final Map<Long, Boolean> dumpedData = new LinkedHashMap<>();

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            throw new IllegalArgumentException(
                "usage: DumpNoiseLattice.java OUTPUT_DIR <addr[,addr...]> [depth]");
        }
        // One directory per run: two passes over different clusters must not
        // overwrite each other, and the evidence is the deliverable.
        String label = System.getenv("LATTICE_LABEL");
        String dirName = (label == null || label.trim().isEmpty()) ? "lattice" : "lattice-" + label.trim();
        outDir = new File(args[0], dirName);
        if (!outDir.isDirectory() && !outDir.mkdirs()) {
            throw new IllegalArgumentException("cannot create " + outDir);
        }
        int depth = args.length > 2 ? Integer.parseInt(args[2]) : 3;

        memory = currentProgram.getMemory();
        decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);

        List<Long> seeds = new ArrayList<>();
        for (String part : args[1].split(",")) {
            String trimmed = part.trim();
            if (!trimmed.isEmpty()) {
                seeds.add(Long.decode(trimmed));
            }
        }
        println("seeds: " + seeds.size() + ", depth: " + depth);

        ArrayDeque<Long> queue = new ArrayDeque<>();
        for (Long seed : seeds) {
            Function f = ensureFunction(toAddr(seed));
            if (f == null) {
                println("could not create a function at 0x" + Long.toHexString(seed));
                continue;
            }
            nodes.put(seed, f);
            depthOf.put(seed, 0);
            queue.add(seed);
        }

        int index = 0;
        while (!queue.isEmpty() && nodes.size() < MAX_NODES) {
            Long addr = queue.poll();
            int d = depthOf.get(addr);
            Function f = nodes.get(addr);
            collectDataReferences(f);
            writePseudo(f, ++index);
            writeDisasm(f, index);
            if (d >= depth) {
                continue;
            }
            for (Function callee : calleesOf(f)) {
                long ca = callee.getEntryPoint().getOffset();
                if (nodes.containsKey(ca)) {
                    continue;
                }
                nodes.put(ca, callee);
                depthOf.put(ca, d + 1);
                queue.add(ca);
            }
        }
        println("functions visited: " + nodes.size());

        writeConstants();
        writeSummary(seeds, depth);
        writeTables();
    }

    /** -noanalysis leaves most of .text undisassembled; create on demand. */
    private Function ensureFunction(Address at) {
        if (at == null || !memory.contains(at)) {
            return null;
        }
        Function f = getFunctionAt(at);
        if (f != null) {
            return f;
        }
        f = getFunctionContaining(at);
        if (f != null) {
            return f;
        }
        DisassembleCommand dis = new DisassembleCommand(at, null, true);
        dis.applyTo(currentProgram, monitor);
        CreateFunctionCmd create = new CreateFunctionCmd(at);
        create.applyTo(currentProgram, monitor);
        f = getFunctionAt(at);
        if (f == null) {
            f = getFunctionContaining(at);
        }
        return f;
    }

    private Address addressOf(Instruction inst, int opIndex) {
        try {
            Object[] objects = inst.getOpObjects(opIndex);
            if (objects == null) {
                return null;
            }
            for (Object object : objects) {
                if (object instanceof ghidra.program.model.scalar.Scalar) {
                    long value = ((ghidra.program.model.scalar.Scalar) object).getUnsignedValue();
                    Address candidate = toAddr(value);
                    if (candidate != null && memory.contains(candidate)) {
                        return candidate;
                    }
                }
            }
        } catch (Exception ignored) {
            // Operand shape we do not handle; the reference walk covers it.
        }
        return null;
    }

    private void collectDataReferences(Function f) {
        InstructionIterator it = currentProgram.getListing().getInstructions(f.getBody(), true);
        while (it.hasNext()) {
            Instruction inst = it.next();
            Reference[] refs = inst.getReferencesFrom();
            for (Reference ref : refs) {
                Address target = ref.getToAddress();
                if (target == null) {
                    continue;
                }
                record(target, inst.getAddress().getOffset());
            }
            for (int op = 0; op < inst.getNumOperands(); op++) {
                Address direct = addressOf(inst, op);
                if (direct != null) {
                    record(direct, inst.getAddress().getOffset());
                }
            }
        }
    }

    private void record(Address target, long from) {
        if (!memory.contains(target)) {
            return;
        }
        ghidra.program.model.mem.MemoryBlock block = memory.getBlock(target);
        if (block == null || block.isExecute()) {
            return;
        }
        // Only addresses inside the binary's own data, not the 0..page imports.
        if (target.getOffset() < 0x1000) {
            return;
        }
        Long key = target.getOffset();
        Set<Long> froms = dataRefs.get(key);
        if (froms == null) {
            froms = new LinkedHashSet<>();
            dataRefs.put(key, froms);
        }
        if (froms.size() < 8) {
            froms.add(from);
        }
    }

    private boolean isExecutable(Address address) {
        if (!memory.contains(address)) {
            return false;
        }
        ghidra.program.model.mem.MemoryBlock block = memory.getBlock(address);
        return block != null && block.isExecute();
    }

    private List<Function> calleesOf(Function f) {
        List<Function> out = new ArrayList<>();
        for (Function callee : f.getCalledFunctions(monitor)) {
            out.add(callee);
        }
        // getCalledFunctions only knows analysed references; the bodies were just
        // disassembled, so also resolve CALL operands directly.
        InstructionIterator it = currentProgram.getListing().getInstructions(f.getBody(), true);
        while (it.hasNext()) {
            Instruction inst = it.next();
            if (!inst.getMnemonicString().toLowerCase().startsWith("call")) {
                continue;
            }
            Address target = null;
            for (int op = 0; op < inst.getNumOperands(); op++) {
                Address direct = addressOf(inst, op);
                if (direct != null && isExecutable(direct)) {
                    target = direct;
                    break;
                }
            }
            if (target == null) {
                Reference[] refs = inst.getReferencesFrom();
                for (Reference ref : refs) {
                    Address to = ref.getToAddress();
                    if (to != null && isExecutable(to)) {
                        target = to;
                        break;
                    }
                }
            }
            if (target == null) {
                continue;
            }
            Function callee = ensureFunction(target);
            if (callee != null && !out.contains(callee)) {
                out.add(callee);
            }
        }
        return out;
    }

    private void writePseudo(Function f, int index) throws Exception {
        String name = String.format("pseudocode-%03d.md", index);
        pseudoFile.put(f.getEntryPoint().getOffset(), name);
        DecompileResults results = decompiler.decompileFunction(f, 90, monitor);
        StringBuilder sb = new StringBuilder();
        sb.append("# ").append(f.getName()).append("\n\n");
        sb.append("- entry: `0x").append(Long.toHexString(f.getEntryPoint().getOffset())).append("`\n");
        sb.append("- body size: ").append(f.getBody().getNumAddresses()).append(" bytes\n");
        sb.append("- callers: ");
        Set<String> callers = new java.util.TreeSet<>();
        for (Function caller : f.getCallingFunctions(monitor)) {
            callers.add("`" + caller.getName() + "`");
        }
        sb.append(callers.isEmpty() ? "(none in the analysed set)" : String.join(", ", callers));
        sb.append("\n\n");
        if (results != null && results.decompileCompleted()) {
            sb.append("```c\n");
            sb.append(results.getDecompiledFunction().getC());
            sb.append("\n```\n");
        } else {
            sb.append("_decompilation did not complete_\n");
        }
        write(name, sb.toString());
    }

    private void writeDisasm(Function f, int index) throws Exception {
        String name = String.format("disasm-%03d.md", index);
        disasmFile.put(f.getEntryPoint().getOffset(), name);
        StringBuilder sb = new StringBuilder();
        sb.append("# ").append(f.getName()).append(" (disassembly)\n\n```\n");
        InstructionIterator it = currentProgram.getListing().getInstructions(f.getBody(), true);
        int count = 0;
        while (it.hasNext() && count < 4000) {
            Instruction inst = it.next();
            sb.append(String.format("%08x  %s%n",
                inst.getAddress().getOffset(), inst.toString()));
            count++;
        }
        sb.append("```\n");
        write(name, sb.toString());
    }

    private float readF32(long address) {
        try {
            int bits = memory.getInt(toAddr(address));
            return Float.intBitsToFloat(bits);
        } catch (Exception e) {
            return Float.NaN;
        }
    }

    private long readU32(long address) {
        try {
            return memory.getInt(toAddr(address)) & 0xFFFFFFFFL;
        } catch (Exception e) {
            return -1;
        }
    }

    private double readF64(long address) {
        try {
            long bits = memory.getLong(toAddr(address));
            return Double.longBitsToDouble(bits);
        } catch (Exception e) {
            return Double.NaN;
        }
    }

    private void writeConstants() throws Exception {
        StringBuilder sb = new StringBuilder();
        sb.append("address\tu32_0\tf32_0\tf32_1\tf32_2\tf32_3\tf64_0\treferenced_from\n");
        for (Map.Entry<Long, Set<Long>> entry : dataRefs.entrySet()) {
            long addr = entry.getKey();
            StringBuilder from = new StringBuilder();
            for (Long f : entry.getValue()) {
                from.append(Long.toHexString(f)).append(' ');
            }
            sb.append(String.format("%08x\t%d\t%.9g\t%.9g\t%.9g\t%.9g\t%.17g\t%s%n",
                addr, readU32(addr), readF32(addr), readF32(addr + 4),
                readF32(addr + 8), readF32(addr + 12), readF64(addr), from.toString().trim()));
        }
        write("constants.tsv", sb.toString());
    }

    /**
     * Float tables: for each referenced data address, emit the surrounding
     * region as floats. The multinoise constants are read as short runs from a
     * base pointer, so the surrounding region is what matters.
     */
    private void writeTables() throws Exception {
        StringBuilder sb = new StringBuilder();
        sb.append("# Referenced constant regions\n\n");
        sb.append("Every data address a lattice function touched, with the values\n");
        sb.append("around it. A run of values that looks like noise parameters is what\n");
        sb.append("the reimplementation needs.\n\n");
        for (Long addr : dataRefs.keySet()) {
            sb.append("## 0x").append(Long.toHexString(addr)).append("\n\n");
            sb.append("```\n");
            for (int offset = 0; offset < TABLE_BYTES; offset += 16) {
                long at = addr + offset;
                sb.append(String.format("%08x  ", at));
                for (int i = 0; i < 4; i++) {
                    sb.append(String.format("%-14.7g ", readF32(at + i * 4)));
                }
                sb.append(" | ");
                for (int i = 0; i < 4; i++) {
                    sb.append(String.format("%08x ", readU32(at + i * 4)));
                }
                sb.append("\n");
            }
            sb.append("```\n\n");
        }
        write("tables.md", sb.toString());
    }

    private void writeSummary(List<Long> seeds, int depth) throws Exception {
        StringBuilder sb = new StringBuilder();
        sb.append("# Noise lattice call tree\n\n");
        sb.append("- seeds: ");
        for (Long seed : seeds) {
            sb.append("`0x").append(Long.toHexString(seed)).append("` ");
        }
        sb.append("\n- depth: ").append(depth).append("\n");
        sb.append("- functions: ").append(nodes.size()).append("\n");
        sb.append("- referenced data addresses: ").append(dataRefs.size()).append("\n\n");
        sb.append("| depth | function | entry | bytes | pseudocode | disassembly | callers |\n");
        sb.append("| --- | --- | --- | --- | --- | --- | --- |\n");
        for (Map.Entry<Long, Function> entry : nodes.entrySet()) {
            long addr = entry.getKey();
            Function f = entry.getValue();
            Set<String> callers = new java.util.TreeSet<>();
            for (Function caller : f.getCallingFunctions(monitor)) {
                callers.add(caller.getName());
            }
            sb.append("| ").append(depthOf.get(addr))
              .append(" | `").append(f.getName()).append("`")
              .append(" | `0x").append(Long.toHexString(addr)).append("`")
              .append(" | ").append(f.getBody().getNumAddresses())
              .append(" | ").append(pseudoFile.containsKey(addr) ? pseudoFile.get(addr) : "")
              .append(" | ").append(disasmFile.containsKey(addr) ? disasmFile.get(addr) : "")
              .append(" | ").append(callers.isEmpty() ? "" : String.join(", ", callers))
              .append(" |\n");
        }
        write("summary.md", sb.toString());
    }

    private void write(String name, String content) throws Exception {
        File file = new File(outDir, name);
        try (BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(
                new FileOutputStream(file), StandardCharsets.UTF_8))) {
            writer.write(content);
        }
    }
}
