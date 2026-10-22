/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe8bb270 (ELF vaddr 0xe7bb270)
 * Label: callee-of:0xe7af270
 * Body:  [[0e8bb270, 0e8bb3c2] [0e8bb3d0, 0e8bb4a1]]
 * Ghidra: FUN_0e8bb270
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e8bb270(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char cVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lStack_38;
  undefined8 uStack_30;
  
  if ((int)param_2[5] == 4) {
    lVar14 = *param_2;
    uVar13 = func_0x0db80430(lVar14 + 0x18);
    lVar14 = func_0x048b1040(lVar14 + 0x18,uVar13,*(undefined4 *)((long)param_2 + 0x2c),1);
    if (lVar14 == 0) {
      lStack_38 = 0;
      uStack_30 = 0;
      func_0x048b10d0(&lStack_38);
      lVar16 = *(long *)(lStack_38 + 0x38);
      lVar14 = lStack_38;
    }
    else {
      lVar16 = *(long *)(lVar14 + 0x38);
    }
    if (lVar16 != 0) goto LAB_0e8bb3d5;
    lStack_38 = 0;
    uStack_30 = 0;
    func_0x048b10d0(&lStack_38);
    lVar9 = lStack_38;
    while (lVar16 = lVar9, lVar16 != 0) {
LAB_0e8bb3d5:
      lVar14 = lVar16;
      lVar9 = *(long *)(lVar16 + 0x38);
      if (*(long *)(lVar16 + 0x38) == 0) {
        lStack_38 = 0;
        uStack_30 = 0;
        func_0x048b10d0(&lStack_38);
        lVar9 = lStack_38;
      }
    }
    lVar14 = *(long *)(lVar14 + 0x48);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  else {
    if ((int)param_2[5] != 1) goto LAB_0e8bb462;
    lVar14 = *param_2;
    uVar13 = func_0x0db80430(lVar14 + 0x18);
    if ((1 < (int)param_2[5] - 1U) &&
       (cVar12 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01253a73),
       cVar12 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar14 = FUN_048b0c90(lVar14 + 0x18,uVar13,*(undefined4 *)((long)param_2 + 0x2c),1);
    if (lVar14 == 0) {
      lStack_38 = 0;
      uStack_30 = 0;
      func_0x048b0d20(&lStack_38);
      lVar14 = lStack_38;
    }
    lVar14 = *(long *)(lVar14 + 0x58);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  *(undefined1 *)(puVar15 + 3) = *(undefined1 *)(param_3 + 0x18);
  uVar13 = *(undefined8 *)(param_3 + 0x10);
  puVar15[1] = *(undefined8 *)(param_3 + 8);
  puVar15[2] = uVar13;
  *puVar15 = &UNK_0f0edc68;
  uVar2 = *(undefined4 *)(param_3 + 0x24);
  uVar3 = *(undefined4 *)(param_3 + 0x28);
  uVar4 = *(undefined4 *)(param_3 + 0x2c);
  uVar5 = *(undefined4 *)(param_3 + 0x30);
  uVar6 = *(undefined4 *)(param_3 + 0x34);
  uVar7 = *(undefined4 *)(param_3 + 0x38);
  uVar8 = *(undefined4 *)(param_3 + 0x3c);
  *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)((long)puVar15 + 0x24) = uVar2;
  *(undefined4 *)(puVar15 + 5) = uVar3;
  *(undefined4 *)((long)puVar15 + 0x2c) = uVar4;
  *(undefined4 *)(puVar15 + 6) = uVar5;
  *(undefined4 *)((long)puVar15 + 0x34) = uVar6;
  *(undefined4 *)(puVar15 + 7) = uVar7;
  *(undefined4 *)((long)puVar15 + 0x3c) = uVar8;
  plVar1 = *(long **)(lVar14 + 8);
  *(undefined8 **)(lVar14 + 8) = puVar15;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
LAB_0e8bb462:
  *(char *)(param_1 + 6) = (char)param_2[6];
  lVar14 = *param_2;
  lVar16 = param_2[1];
  lVar9 = param_2[2];
  lVar10 = param_2[3];
  lVar11 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar11;
  param_1[2] = lVar9;
  param_1[3] = lVar10;
  *param_1 = lVar14;
  param_1[1] = lVar16;
  return;
}


