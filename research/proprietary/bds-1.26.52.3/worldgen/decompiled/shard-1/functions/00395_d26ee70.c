/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd36ee70 (ELF vaddr 0xd26ee70)
 * Label: caller-of-seed
 * Body:  [[0d36ee70, 0d36efd6]]
 * Ghidra: FUN_0d36ee70
 */


undefined4 * FUN_0d36ee70(undefined4 *param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 uStack_64;
  undefined4 **ppuStack_60;
  undefined4 *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  uint uStack_20;
  
  uVar2 = param_3 >> 0x20 ^ (long)(int)param_3 * 0x2fc20f ^ (long)param_4 * 0x6ebfff5;
  uStack_40 = (uVar2 * 0x285b825 + 0xb) * uVar2 >> 0x10 ^ 0x5deece66d;
  puStack_50 = &UNK_0f45e800;
  puStack_48 = &UNK_0f2bdd80;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_64 = *(undefined4 *)(param_2 + 0x98);
  puStack_58 = &uStack_64;
  ppuStack_60 = &puStack_58;
  uVar1 = func_0x0d2e0c70(&ppuStack_60,&puStack_48);
  *param_1 = 1;
  puVar3 = *(undefined8 **)(param_2 + 0x90);
  if (0 < (int)uVar1) {
    uVar2 = (ulong)uVar1;
    if ((uVar1 & 7) != 0) {
      uVar4 = 0;
      do {
        puVar3 = (undefined8 *)*puVar3;
        uVar4 = uVar4 + 1;
      } while ((uVar2 & 7) != uVar4);
      uVar2 = uVar2 - uVar4;
    }
    if (7 < uVar1) {
      uVar2 = uVar2 - 1;
      do {
        puVar3 = *(undefined8 **)**(undefined8 **)**(undefined8 **)**(undefined8 **)*puVar3;
        uVar2 = uVar2 - 8;
      } while (uVar2 < 0xfffffffffffffffe);
    }
  }
  *(long *)(param_1 + 2) = param_2 + 0x20;
  *(undefined8 **)(param_1 + 4) = puVar3 + 5;
  *(long *)(param_1 + 6) = param_2 + 200;
  *(undefined8 *)(param_1 + 8) = 0;
  if ((ulong)uStack_20 != 0xffffffff) {
    (**(code **)(&UNK_0f461840 + (ulong)uStack_20 * 8))(&ppuStack_60,&puStack_48);
  }
  return param_1;
}


