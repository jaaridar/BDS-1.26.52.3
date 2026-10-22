/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd20ac00 (ELF vaddr 0xd10ac00)
 * Label: callee-of:0xc95fb20
 * Body:  [[0d20ac00, 0d20ad2c]]
 * Ghidra: FUN_0d20ac00
 */


undefined8 * FUN_0d20ac00(long param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uStack_49;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  uint uStack_28;
  
  uStack_38 = *(undefined4 *)(param_2 + 1);
  uStack_40 = *param_2;
  uStack_28 = 6;
  uStack_48 = 0xf71d600;
  lVar2 = func_0x09be9cc0(param_1 + 0x4f0,0xf71d600,&UNK_01563a4f,&uStack_48,&uStack_49);
  puVar3 = (undefined8 *)(lVar2 + 0x38);
  uVar1 = *(uint *)(lVar2 + 0x50);
  if ((ulong)uVar1 == 6) {
    *(undefined4 *)(lVar2 + 0x40) = uStack_38;
    *puVar3 = uStack_40;
    uVar1 = 6;
  }
  else if (uVar1 == 0xffffffff) {
    *(undefined4 *)(lVar2 + 0x40) = uStack_38;
    *puVar3 = uStack_40;
    *(undefined4 *)(lVar2 + 0x50) = 6;
    uVar1 = 6;
  }
  else {
    (**(code **)(&UNK_0f45a8b0 + (ulong)uVar1 * 8))(&uStack_48,puVar3);
    *(undefined4 *)(lVar2 + 0x40) = uStack_38;
    *puVar3 = uStack_40;
    *(undefined4 *)(lVar2 + 0x50) = 6;
    uVar1 = uStack_28;
    if (uStack_28 == 0xffffffff) goto LAB_0d20ace8;
  }
  (**(code **)(&UNK_0f45a8b0 + (ulong)uVar1 * 8))(&uStack_48,&uStack_40);
LAB_0d20ace8:
  puVar3 = (undefined8 *)0x0;
  if (((SBORROW4(0,*(int *)(param_1 + 0x2f4))) &&
      (puVar3 = (undefined8 *)(ulong)(uint)-*(int *)(param_1 + 0x2f8),
      SBORROW4(0,*(int *)(param_1 + 0x2f8)))) &&
     (puVar3 = (undefined8 *)(ulong)(uint)-*(int *)(param_1 + 0x2fc),
     SBORROW4(0,*(int *)(param_1 + 0x2fc)))) {
    puVar3 = (undefined8 *)(param_1 + 0x2f4);
    *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_2 + 1);
    *puVar3 = *param_2;
  }
  *(undefined1 *)(param_1 + 0x2f0) = 1;
  return puVar3;
}


