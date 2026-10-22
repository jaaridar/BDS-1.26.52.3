/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x624dcb0 (ELF vaddr 0x614dcb0)
 * Label: callee-of:0x6146460
 * Body:  [[0624dcb0, 0624dce4]]
 * Ghidra: FUN_0624dcb0
 */


void FUN_0624dcb0(long param_1)

{
  undefined1 uStack_9;
  
  if ((ulong)*(uint *)(param_1 + 0x38) != 0xffffffff) {
    (**(code **)(&UNK_0f023e10 + (ulong)*(uint *)(param_1 + 0x38) * 8))(&uStack_9,param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}


