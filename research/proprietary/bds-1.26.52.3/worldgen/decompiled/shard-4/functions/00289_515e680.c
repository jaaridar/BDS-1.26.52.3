/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x525e680 (ELF vaddr 0x515e680)
 * Label: caller-of-seed
 * Body:  [[0525e680, 0525e7d6]]
 * Ghidra: FUN_0525e680
 */


void FUN_0525e680(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puStack_38;
  
  *param_1 = &UNK_0f45f578;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x38);
  if ((ulong)uVar1 != 0xffffffff) {
    puStack_38 = param_1 + 1;
    (**(code **)(&UNK_0ef9cd38 + (ulong)uVar1 * 8))(&puStack_38,param_2 + 8);
    *(uint *)(param_1 + 7) = uVar1;
  }
  param_1[8] = &UNK_0f45f578;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x78);
  if ((ulong)uVar1 != 0xffffffff) {
    puStack_38 = param_1 + 9;
    (**(code **)(&UNK_0ef9cd38 + (ulong)uVar1 * 8))(&puStack_38,param_2 + 0x48);
    *(uint *)(param_1 + 0xf) = uVar1;
  }
  param_1[0x10] = &UNK_0f45f548;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0xa8);
  if ((ulong)uVar1 != 0xffffffff) {
    puStack_38 = param_1 + 0x11;
    (**(code **)(&UNK_0ef9cd78 + (ulong)uVar1 * 8))(&puStack_38,param_2 + 0x88);
    *(uint *)(param_1 + 0x15) = uVar1;
  }
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  param_1[0x17] = &UNK_0f45f6c8;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0xe0);
  if ((ulong)uVar1 != 0xffffffff) {
    puStack_38 = param_1 + 0x18;
    (**(code **)(&UNK_0ef9cd98 + (ulong)uVar1 * 8))(&puStack_38,param_2 + 0xc0);
    *(uint *)(param_1 + 0x1c) = uVar1;
  }
  return;
}


