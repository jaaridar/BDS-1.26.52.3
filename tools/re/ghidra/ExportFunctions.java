// Generic Ghidra headless post-script: decompile every function in the
// imported program and write the C-like output plus a function index to
// a caller-supplied directory.
//
// This is standard, textbook Ghidra automation (GhidraScript +
// DecompInterface) of the kind shipped in Ghidra's own example scripts.
// It is target-agnostic: it contains no Minecraft/BDS-specific knowledge.
//
// LOCAL USE ONLY in the context of this repository: run it via
// tools/re/run-ghidra-headless.sh against binaries you own, on your own
// machine, and never commit its output here. See tools/re/README.md.
//
// Usage (via the wrapper):
//   analyzeHeadless <projDir> <projName> -import <binary>
//       -scriptPath tools/re/ghidra
//       -postScript ExportFunctions.java <outputDir> [perFunctionTimeoutSec]
//
// @category Export

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;

public class ExportFunctions extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            printerr("ExportFunctions: first argument must be the output directory");
            return;
        }
        File outDir = new File(args[0]);
        if (!outDir.exists() && !outDir.mkdirs()) {
            printerr("ExportFunctions: cannot create output dir " + outDir);
            return;
        }
        int timeoutSec = args.length >= 2 ? Integer.parseInt(args[1]) : 60;

        DecompInterface decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        if (!decomp.openProgram(currentProgram)) {
            printerr("ExportFunctions: decompiler failed to open program");
            return;
        }

        File indexFile = new File(outDir, "functions.tsv");
        File cFile = new File(outDir, "decompiled.c");
        long ok = 0;
        long failed = 0;

        try (BufferedWriter index = new BufferedWriter(new FileWriter(indexFile));
             BufferedWriter cOut = new BufferedWriter(new FileWriter(cFile))) {
            index.write("entry_point\tname\tsignature\n");
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                if (monitor.isCancelled()) {
                    break;
                }
                Function fn = functions.next();
                index.write(fn.getEntryPoint() + "\t" + fn.getName() + "\t" +
                        fn.getSignature().getPrototypeString() + "\n");

                DecompileResults res =
                        decomp.decompileFunction(fn, timeoutSec, monitor);
                if (res != null && res.decompileCompleted() &&
                        res.getDecompiledFunction() != null) {
                    cOut.write("// ==== " + fn.getEntryPoint() + " " + fn.getName() + " ====\n");
                    cOut.write(res.getDecompiledFunction().getC());
                    cOut.write("\n");
                    ok++;
                } else {
                    failed++;
                }
                if ((ok + failed) % 5000 == 0) {
                    println("ExportFunctions: " + (ok + failed) + " functions processed...");
                    index.flush();
                    cOut.flush();
                }
            }
        } finally {
            decomp.dispose();
        }
        println("ExportFunctions: done. decompiled=" + ok + " failed=" + failed +
                " output=" + outDir.getAbsolutePath());
    }
}
