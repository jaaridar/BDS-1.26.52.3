/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc0bc460 (ELF vaddr 0xbfbc460)
 * Label: callee-of:0xc5cc0e0
 * Body:  [[0c0bc460, 0c0bc499]]
 * Ghidra: FUN_0c0bc460
 */


void FUN_0c0bc460(long param_1)

{
  undefined1 uStack_9;
  
  if ((ulong)*(uint *)(param_1 + 200) != 0xffffffff) {
    (**(code **)(&UNK_0f3506b8 + (ulong)*(uint *)(param_1 + 200) * 8))(&uStack_9,param_1);
  }
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  return;
}


