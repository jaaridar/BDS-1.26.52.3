/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5355200 (ELF vaddr 0x5255200)
 * Label: callee-of:0x5254ab0
 * Body:  [[05355200, 05355258]]
 * Ghidra: FUN_05355200
 */


void FUN_05355200(long param_1)

{
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  if ((ulong)*(uint *)(param_1 + 0x28) != 0xffffffff) {
    (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(param_1 + 0x28) * 8))(&uStack_12,param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  if ((ulong)*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(param_1 + 0x18) * 8))(&uStack_11,param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}


