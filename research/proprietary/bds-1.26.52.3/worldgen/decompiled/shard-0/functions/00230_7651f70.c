/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7751f70 (ELF vaddr 0x7651f70)
 * Label: callee-of:0xc9690e0
 * Body:  [[07751f70, 0775212e]]
 * Ghidra: FUN_07751f70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_07751f70(long *param_1,undefined8 *param_2,long param_3,undefined1 *param_4,long *param_5)

{
  long lVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  code *pcVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  long lVar17;
  ulong uVar18;
  
  lVar17 = param_1[1] - *param_1;
  uVar18 = (lVar17 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar18) {
    func_0x07751f60();
LAB_07752129:
    FUN_04882eb0();
    pcVar6 = (code *)swi(3);
    lVar17 = (*pcVar6)();
    return lVar17;
  }
  lVar13 = param_1[2] - *param_1 >> 3;
  uVar7 = lVar13 * -0x6666666666666666;
  if (uVar18 < uVar7) {
    uVar18 = uVar7;
  }
  if (0x333333333333332 < (ulong)(lVar13 * -0x3333333333333333)) {
    uVar18 = 0x666666666666666;
  }
  if (uVar18 != 0) {
    if (0x666666666666666 < uVar18) goto LAB_07752129;
    lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18 * 0x28);
    if (lVar13 != 0) goto LAB_0775204a;
    func_0x0eec74c0(uVar18 * 0x28,0);
  }
  lVar13 = 0;
LAB_0775204a:
  uVar3 = *param_4;
  puVar4 = (undefined8 *)*param_5;
  *(undefined4 *)(lVar13 + 8 + lVar17) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar13 + lVar17) = *param_2;
  *(undefined4 *)(lVar13 + 0xc + lVar17) = *(undefined4 *)(param_3 + 0x11c);
  *(undefined1 *)(lVar13 + 0x10 + lVar17) = uVar3;
  *(undefined8 *)(lVar13 + 0x18 + lVar17) = 0xffffffffffffffff;
  *(undefined4 *)(lVar13 + 0x20 + lVar17) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(lVar13 + lVar17 + 0x20) = *(undefined4 *)(puVar4 + 1);
    *(undefined8 *)(lVar13 + lVar17 + 0x18) = *puVar4;
  }
  lVar1 = lVar13 + lVar17 + 0x28;
  puVar16 = (undefined4 *)*param_1;
  puVar5 = (undefined4 *)param_1[1];
  lVar14 = (long)puVar16 - (long)puVar5;
  puVar2 = (undefined4 *)(lVar13 + lVar17 + lVar14);
  puVar15 = puVar2;
  if (lVar14 != 0) {
    do {
      *(undefined8 *)(puVar15 + 8) = *(undefined8 *)(puVar16 + 8);
      uVar8 = *puVar16;
      uVar9 = puVar16[1];
      uVar10 = puVar16[2];
      uVar11 = puVar16[3];
      uVar12 = *(undefined8 *)(puVar16 + 6);
      *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(puVar16 + 4);
      *(undefined8 *)(puVar15 + 6) = uVar12;
      *puVar15 = uVar8;
      puVar15[1] = uVar9;
      puVar15[2] = uVar10;
      puVar15[3] = uVar11;
      puVar16 = puVar16 + 10;
      puVar15 = puVar15 + 10;
    } while (puVar16 != puVar5);
    puVar16 = (undefined4 *)*param_1;
  }
  *param_1 = (long)puVar2;
  param_1[1] = lVar1;
  lVar17 = param_1[2];
  param_1[2] = lVar13 + uVar18 * 0x28;
  if (puVar16 != (undefined4 *)0x0) {
    func_0x0412a280(puVar16,lVar17 - (long)puVar16);
  }
  return lVar1;
}


