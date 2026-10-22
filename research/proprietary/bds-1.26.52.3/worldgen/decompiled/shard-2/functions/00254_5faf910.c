/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x60af910 (ELF vaddr 0x5faf910)
 * Label: callee-of:0x6146460
 * Body:  [[060af910, 060af94a]]
 * Ghidra: FUN_060af910
 */


void FUN_060af910(long param_1)

{
  undefined1 uStack_9;
  
  if ((ulong)*(uint *)(param_1 + 0x90) != 0xffffffff) {
    (**(code **)(&UNK_0f01baa8 + (ulong)*(uint *)(param_1 + 0x90) * 8))(&uStack_9,param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  return;
}


