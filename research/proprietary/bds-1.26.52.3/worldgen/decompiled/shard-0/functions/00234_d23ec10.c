/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd33ec10 (ELF vaddr 0xd23ec10)
 * Label: callee-of:0xd1ff960
 * Body:  [[0d33ec10, 0d33edb7] [0d33edd4, 0d33ede9]]
 * Ghidra: FUN_0d33ec10
 */


undefined8 * FUN_0d33ec10(undefined8 *param_1,long *param_2,undefined8 *param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puStack_c8;
  undefined4 uStack_c0;
  undefined **ppuStack_b8;
  undefined1 *puStack_b0;
  undefined1 **ppuStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [40];
  uint uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  uint uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_58 = param_4 & 0xffffffffffff ^ 0x5deece66d;
  puStack_68 = &UNK_0f45e800;
  puStack_60 = &UNK_0f2bdd80;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  puVar2 = (undefined1 *)*param_3;
  uVar1 = *(undefined4 *)(param_3 + 1);
  puStack_a0 = &UNK_0f45e800;
  puStack_c8 = auStack_98;
  auStack_98[0] = 0;
  uStack_70 = 0xffffffff;
  func_0x0d2e0ab0(&puStack_c8,&puStack_60);
  uStack_70 = 0;
  ppuStack_b8 = &puStack_a0;
  puStack_c8 = puVar2;
  uStack_c0 = uVar1;
  if ((ulong)uStack_38 != 0xffffffff) {
    ppuStack_a8 = &puStack_b0;
    puStack_b0 = (undefined1 *)&puStack_c8;
    (**(code **)(&UNK_0f45ef28 + (ulong)uStack_38 * 8))(&ppuStack_a8,&puStack_60);
    if ((ulong)uStack_38 != 0xffffffff) {
      (**(code **)(&UNK_0f460b28 + (ulong)uStack_38 * 8))(&puStack_c8,&puStack_60);
    }
    puVar6 = (undefined8 *)*param_2;
    puVar3 = (undefined8 *)param_2[1];
    if (puVar6 != puVar3) {
      do {
        (*(code *)**(undefined8 **)*puVar6)((undefined8 *)*puVar6,&puStack_a0,param_1);
        puVar6 = puVar6 + 2;
      } while (puVar6 != puVar3);
    }
    if ((ulong)uStack_70 != 0xffffffff) {
      (**(code **)(&UNK_0f460b28 + (ulong)uStack_70 * 8))(&puStack_68,auStack_98);
    }
    return param_1;
  }
  puStack_b0 = (undefined1 *)&puStack_c8;
  uVar5 = func_0x04931450();
  uVar5 = FUN_04882e20(uVar5);
  uVar5 = FUN_04882e20(uVar5);
  func_0x0d2e0480(auStack_98);
  func_0x0624d960(&puStack_68);
  func_0x0624dc00(param_1);
  func_0x0eee2d70(uVar5);
  pcVar4 = (code *)swi(3);
  puVar6 = (undefined8 *)(*pcVar4)();
  return puVar6;
}


