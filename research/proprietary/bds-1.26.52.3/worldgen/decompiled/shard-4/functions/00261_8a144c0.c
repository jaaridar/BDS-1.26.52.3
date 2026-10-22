/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8b144c0 (ELF vaddr 0x8a144c0)
 * Label: callee-of:0x8a14040
 * Body:  [[08b144c0, 08b1454c]]
 * Ghidra: FUN_08b144c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_08b144c0(long param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  byte bStack_38;
  undefined7 uStack_37;
  undefined8 uStack_28;
  byte bStack_10;
  
  uVar8 = _UNK_0f1467bc;
  uVar7 = _UNK_0f1467b8;
  uVar6 = _UNK_0f1467b4;
  uVar5 = _UNK_0f1467ac;
  uVar4 = _UNK_0f1467a8;
  uVar3 = _UNK_0f1467a4;
  uVar2 = _DAT_0f1467a0;
  uStack_48 = _DAT_0f1467b0;
  uStack_44 = _UNK_0f1467b4;
  uStack_40 = _UNK_0f1467b8;
  uStack_3c = _UNK_0f1467bc;
  uStack_58 = _DAT_0f1467a0;
  uStack_54 = _UNK_0f1467a4;
  uStack_50 = _UNK_0f1467a8;
  uStack_4c = _UNK_0f1467ac;
  bStack_38 = 0;
  bStack_10 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 < *(undefined4 **)(param_1 + 0x20)) {
    puVar1[4] = _DAT_0f1467b0;
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    *(undefined1 *)(puVar1 + 8) = 0;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 0x14;
  }
  else {
    uVar9 = func_0x0489d2c0(param_1 + 0x10,&uStack_58);
    *(undefined8 *)(param_1 + 0x18) = uVar9;
    if (((bStack_10 & 1) != 0) && ((bStack_38 & 1) != 0)) {
      func_0x0412a280(uStack_28,CONCAT71(uStack_37,bStack_38) & 0xfffffffffffffffe);
      return param_1;
    }
  }
  return param_1;
}


