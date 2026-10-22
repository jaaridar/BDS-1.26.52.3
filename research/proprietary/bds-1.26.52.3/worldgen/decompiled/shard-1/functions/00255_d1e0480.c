/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2e0480 (ELF vaddr 0xd1e0480)
 * Label: callee-of:0x6146460
 * Body:  [[0d2e0480, 0d2e04b3]]
 * Ghidra: FUN_0d2e0480
 */


void FUN_0d2e0480(long param_1)

{
  undefined1 uStack_9;
  
  if ((ulong)*(uint *)(param_1 + 0x28) != 0xffffffff) {
    (**(code **)(&UNK_0f45ee28 + (ulong)*(uint *)(param_1 + 0x28) * 8))(&uStack_9,param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return;
}


