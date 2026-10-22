/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x489d2c0 (ELF vaddr 0x479d2c0)
 * Label: callee-of:0x82ea790
 * Body:  [[0489d2c0, 0489d456] [0489d460, 0489d4d8] [0489d4e0, 0489d54c]]
 * Ghidra: FUN_0489d2c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0489d2c0(long *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  lVar15 = *param_1;
  lVar16 = param_1[1];
  lVar20 = lVar16 - lVar15;
  uVar19 = (lVar20 >> 4) * -0x3333333333333333 + 1;
  if (0x333333333333333 < uVar19) {
    func_0x0489af80();
LAB_0489d547:
    FUN_04882eb0();
    pcVar6 = (code *)swi(3);
    lVar20 = (*pcVar6)();
    return lVar20;
  }
  lVar17 = param_1[2] - lVar15 >> 4;
  uVar7 = lVar17 * -0x6666666666666666;
  if (uVar19 < uVar7) {
    uVar19 = uVar7;
  }
  if (0x199999999999998 < (ulong)(lVar17 * -0x3333333333333333)) {
    uVar19 = 0x333333333333333;
  }
  if (uVar19 != 0) {
    if (0x333333333333333 < uVar19) goto LAB_0489d547;
    lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19 * 0x50);
    if (lVar17 != 0) goto LAB_0489d387;
    func_0x0eec74c0(uVar19 * 0x50,0);
  }
  lVar17 = 0;
LAB_0489d387:
  lVar1 = lVar17 + lVar20;
  uVar8 = *param_2;
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  uVar11 = param_2[3];
  uVar12 = *(undefined8 *)(param_2 + 6);
  puVar4 = (undefined8 *)(lVar17 + 0x10 + lVar20);
  *puVar4 = *(undefined8 *)(param_2 + 4);
  puVar4[1] = uVar12;
  puVar2 = (undefined4 *)(lVar17 + lVar20);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  *(undefined1 *)(lVar17 + 0x20 + lVar20) = 0;
  *(undefined1 *)(lVar17 + 0x48 + lVar20) = 0;
  lVar21 = lVar15;
  lVar22 = lVar16;
  if (*(char *)(param_2 + 0x12) == '\x01') {
    lVar20 = lVar17 + lVar20;
    *(undefined8 *)(lVar20 + 0x30) = *(undefined8 *)(param_2 + 0xc);
    uVar12 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(lVar20 + 0x20) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(lVar20 + 0x28) = uVar12;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 10) = 0;
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_2 + 0xe);
    *(undefined1 *)(lVar1 + 0x40) = *(undefined1 *)(param_2 + 0x10);
    *(undefined1 *)(lVar1 + 0x48) = 1;
    lVar20 = param_1[1] - *param_1;
    lVar21 = *param_1;
    lVar22 = param_1[1];
  }
  if (lVar21 != lVar22) {
    lVar15 = lVar17 + ((lVar16 + (lVar20 >> 4) * -0x10) - lVar15);
    lVar16 = lVar15 + 0x48;
    lVar18 = 0;
    do {
      uVar12 = *(undefined8 *)(lVar21 + lVar18);
      uVar13 = ((undefined8 *)(lVar21 + lVar18))[1];
      puVar4 = (undefined8 *)(lVar21 + 0x10 + lVar18);
      uVar14 = puVar4[1];
      puVar5 = (undefined8 *)(lVar15 + 0x10 + lVar18);
      *puVar5 = *puVar4;
      puVar5[1] = uVar14;
      *(undefined8 *)(lVar15 + lVar18) = uVar12;
      ((undefined8 *)(lVar15 + lVar18))[1] = uVar13;
      *(undefined1 *)(lVar15 + 0x20 + lVar18) = 0;
      *(undefined1 *)(lVar16 + lVar18) = 0;
      if (*(char *)(lVar21 + 0x48 + lVar18) == '\x01') {
        lVar3 = lVar16 + lVar18;
        *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar21 + 0x30 + lVar18);
        puVar4 = (undefined8 *)(lVar21 + 0x20 + lVar18);
        uVar12 = puVar4[1];
        *(undefined8 *)(lVar3 + -0x28) = *puVar4;
        *(undefined8 *)(lVar3 + -0x20) = uVar12;
        puVar4 = (undefined8 *)(lVar21 + 0x20 + lVar18);
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined8 *)(lVar21 + 0x30 + lVar18) = 0;
        *(undefined8 *)(lVar15 + 0x38 + lVar18) = *(undefined8 *)(lVar21 + 0x38 + lVar18);
        *(undefined1 *)(lVar15 + 0x40 + lVar18) = *(undefined1 *)(lVar21 + 0x40 + lVar18);
        *(undefined1 *)(lVar16 + lVar18) = 1;
      }
      lVar3 = lVar21 + 0x38 + lVar18;
      lVar18 = lVar18 + 0x50;
    } while (lVar3 + 0x18 != lVar22);
    do {
      if ((*(char *)(lVar21 + 0x48) == '\x01') && ((*(byte *)(lVar21 + 0x20) & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)(lVar21 + 0x30),
                        *(ulong *)(lVar21 + 0x20) & 0xfffffffffffffffe);
      }
      lVar21 = lVar21 + 0x50;
    } while (lVar21 != lVar22);
    lVar21 = *param_1;
  }
  *param_1 = lVar1 - lVar20;
  param_1[1] = lVar1 + 0x50;
  lVar20 = param_1[2];
  param_1[2] = uVar19 * 0x50 + lVar17;
  if (lVar21 != 0) {
    func_0x0412a280(lVar21,lVar20 - lVar21);
  }
  return lVar1 + 0x50;
}


