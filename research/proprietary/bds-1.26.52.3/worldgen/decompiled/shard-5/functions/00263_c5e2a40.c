/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6e2a40 (ELF vaddr 0xc5e2a40)
 * Label: callee-of:0xc5e1d20
 * Body:  [[0c6e2a40, 0c6e2b69] [0c6e2b70, 0c6e2ba5] [0c6e2bb0, 0c6e2be5] [0c6e2bf0, 0c6e2c2f]]
 * Ghidra: FUN_0c6e2a40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c6e2a40(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  func_0x0c6e2c30(param_1[0x1b]);
  uVar5 = func_0x0c6e2c30(param_1[0x18]);
  puVar4 = (undefined8 *)param_1[0x14];
  while (puVar4 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar4;
    uVar5 = FUN_0412a280(puVar4,0x20);
    puVar4 = puVar1;
  }
  lVar2 = param_1[0x12];
  param_1[0x12] = 0;
  if (lVar2 != 0) {
    uVar5 = FUN_0412a280(lVar2,param_1[0x13] << 3);
  }
  puVar4 = (undefined8 *)param_1[0xf];
  while (puVar4 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar4;
    uVar5 = FUN_0412a280(puVar4,0x20);
    puVar4 = puVar1;
  }
  lVar2 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar2 != 0) {
    uVar5 = FUN_0412a280(lVar2,param_1[0xe] << 3);
  }
  puVar4 = (undefined8 *)param_1[10];
  while (puVar4 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar4;
    if ((*(byte *)(puVar4 + 2) & 1) != 0) {
      FUN_0412a280(puVar4[4],puVar4[2] & 0xfffffffffffffffe);
    }
    uVar5 = FUN_0412a280(puVar4,0x30);
    puVar4 = puVar1;
  }
  lVar2 = param_1[8];
  param_1[8] = 0;
  if (lVar2 != 0) {
    uVar5 = FUN_0412a280(lVar2,param_1[9] << 3);
  }
  puVar4 = (undefined8 *)param_1[5];
  while (puVar4 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar4;
    if ((*(byte *)(puVar4 + 3) & 1) != 0) {
      FUN_0412a280(puVar4[5],puVar4[3] & 0xfffffffffffffffe);
    }
    uVar5 = FUN_0412a280(puVar4,0x30);
    puVar4 = puVar1;
  }
  lVar2 = param_1[3];
  param_1[3] = 0;
  if (lVar2 != 0) {
    uVar5 = FUN_0412a280(lVar2,param_1[4] << 3);
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return uVar5;
  }
  lVar7 = param_1[1];
  lVar6 = lVar2;
  if (lVar2 != lVar7) {
    do {
      plVar3 = *(long **)(lVar7 + -8);
      *(undefined8 *)(lVar7 + -8) = 0;
      if (plVar3 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar3 + 8))();
      }
      lVar7 = lVar7 + -8;
    } while (lVar7 != lVar2);
    lVar6 = *param_1;
  }
  param_1[1] = lVar2;
  if (lVar6 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar6);
  }
  return uVar5;
}


