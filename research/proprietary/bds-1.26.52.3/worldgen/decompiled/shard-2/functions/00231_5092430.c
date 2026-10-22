/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5192430 (ELF vaddr 0x5092430)
 * Label: callee-of:0xd1beb00
 * Body:  [[05192430, 05192515]]
 * Ghidra: FUN_05192430
 */


void FUN_05192430(undefined8 *param_1)

{
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  
  param_1[0x17] = &UNK_0f45f6c8;
  if ((ulong)*(uint *)(param_1 + 0x1c) != 0xffffffff) {
    (**(code **)(&UNK_0ef9cd88 + (ulong)*(uint *)(param_1 + 0x1c) * 8))(&uStack_1c,param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  param_1[0x10] = &UNK_0f45f548;
  if ((ulong)*(uint *)(param_1 + 0x15) != 0xffffffff) {
    (**(code **)(&UNK_0ef9cd68 + (ulong)*(uint *)(param_1 + 0x15) * 8))(&uStack_1b,param_1 + 0x11);
  }
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  param_1[8] = &UNK_0f45f578;
  if ((ulong)*(uint *)(param_1 + 0xf) != 0xffffffff) {
    (**(code **)(&UNK_0ef9cd08 + (ulong)*(uint *)(param_1 + 0xf) * 8))(&uStack_1a,param_1 + 9);
  }
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *param_1 = &UNK_0f45f578;
  if ((ulong)*(uint *)(param_1 + 7) != 0xffffffff) {
    (**(code **)(&UNK_0ef9cd08 + (ulong)*(uint *)(param_1 + 7) * 8))(&uStack_19,param_1 + 1);
  }
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  return;
}


