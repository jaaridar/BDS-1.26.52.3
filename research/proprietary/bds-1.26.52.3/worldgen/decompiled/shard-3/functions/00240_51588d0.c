/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52588d0 (ELF vaddr 0x51588d0)
 * Label: callee-of:0x5186a90
 * Body:  [[052588d0, 05258c51]]
 * Ghidra: FUN_052588d0
 */


/* WARNING: Possible PIC construction at 0x05258c44: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_052588d0(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,int param_6,int param_7,undefined4 param_8)

{
  code *pcVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  undefined8 *puVar24;
  bool bVar25;
  undefined8 auStack_50 [2];
  long lStack_40;
  long lStack_38;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined4 *)(param_1 + 3) = param_8;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined2 *)((long)param_1 + 0x24) = 2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  auStack_50[0] = 0x5258933;
  uVar6 = FUN_0cc41df0(0xf6ff9e0,&DAT_0f713f00,1);
  param_1[0xb] = uVar6;
  auStack_50[0] = 0x525894f;
  uVar6 = FUN_0cc41df0(0xf6ff9e0,0xf713b90,1);
  param_1[0xc] = uVar6;
  iVar20 = *param_2;
  iVar11 = param_2[1];
  iVar10 = iVar20 >> 0x1b;
  iVar12 = iVar10 + iVar20 * -0x10;
  iVar15 = iVar12 + 0xf;
  if (-1 < iVar12) {
    iVar15 = iVar12;
  }
  iVar21 = (int)((ulong)((long)((param_6 >> 0x1f) - param_6) * -0x2aaaaaab) >> 0x20);
  iVar4 = iVar11 >> 0x1b;
  iVar18 = iVar4 + iVar11 * -0x10;
  iVar19 = iVar18 + 0xf;
  if (-1 < iVar18) {
    iVar19 = iVar18;
  }
  iVar15 = ~(iVar15 >> 4) + iVar10;
  iVar21 = (param_6 >> 0x1f) + ((iVar21 >> 1) - (iVar21 >> 0x1f)) + -1;
  iVar19 = ~(iVar19 >> 4) + iVar4;
  param_1[5] = CONCAT44(iVar21,iVar15);
  *(int *)(param_1 + 6) = iVar19;
  iVar20 = iVar20 * -0x10 + iVar10 + -0xf;
  if (-1 < iVar20) {
    iVar12 = iVar20;
  }
  iVar23 = (int)((ulong)((long)((param_7 >> 0x1f) - param_7) * -0x2aaaaaab) >> 0x20);
  iVar20 = iVar11 * -0x10 + iVar4 + -0xf;
  if (-1 < iVar20) {
    iVar18 = iVar20;
  }
  iVar11 = ((iVar10 - (iVar12 >> 4)) - iVar15) + 2;
  iVar15 = ((((param_7 >> 0x1f) - (iVar23 >> 0x1f)) + (iVar23 >> 1)) - iVar21) + 2;
  iVar20 = ((iVar4 - (iVar18 >> 4)) - iVar19) + 2;
  *(ulong *)((long)param_1 + 0x34) = CONCAT44(iVar15,iVar11);
  *(int *)((long)param_1 + 0x3c) = iVar20;
  uVar3 = _DAT_01de6238;
  uVar6 = _DAT_01de6230;
  uVar5 = iVar20 * iVar11 * iVar15;
  uVar22 = (ulong)(int)uVar5;
  lVar17 = param_1[8];
  puVar8 = (undefined8 *)param_1[9];
  lVar16 = (long)puVar8 - lVar17 >> 2;
  bVar25 = uVar22 < (ulong)(lVar16 * -0x3333333333333333);
  uVar14 = uVar22 + lVar16 * 0x3333333333333333;
  if (bVar25 || uVar14 == 0) {
    if (!bVar25) {
      return (undefined8 *)(ulong)uVar5;
    }
    puVar9 = (undefined8 *)(lVar17 + uVar22 * 0x14);
LAB_05258bfd:
    param_1[9] = puVar9;
    return puVar9;
  }
  lVar16 = param_1[10];
  if (uVar14 <= (ulong)((lVar16 - (long)puVar8 >> 2) * -0x3333333333333333)) {
    puVar9 = (undefined8 *)((long)puVar8 + uVar14 * 0x14);
    do {
      *(undefined4 *)(puVar8 + 1) = uVar3;
      *puVar8 = uVar6;
      *(undefined4 *)((long)puVar8 + 0xc) = 0x7fffffff;
      *(undefined1 *)(puVar8 + 2) = 0;
      puVar8 = (undefined8 *)((long)puVar8 + 0x14);
    } while (puVar8 != puVar9);
    goto LAB_05258bfd;
  }
  if ((int)uVar5 < 0) {
    auStack_50[0] = 0x5258c26;
    func_0x0525ec90();
  }
  else {
    lVar7 = lVar16 - lVar17 >> 2;
    uVar2 = lVar7 * -0x6666666666666666;
    if (uVar22 < uVar2) {
      uVar22 = uVar2;
    }
    if (0x666666666666665 < (ulong)(lVar7 * -0x3333333333333333)) {
      uVar22 = 0xccccccccccccccc;
    }
    lStack_38 = lVar16;
    if (uVar22 < 0xccccccccccccccd) {
      lStack_40 = uVar22 * 0x14;
      auStack_50[0] = 0x5258b12;
      lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar16 == 0) {
        auStack_50[0] = 0x5258c1c;
        func_0x0eec74c0(lStack_40,0);
      }
      uVar3 = _DAT_01de6238;
      uVar6 = _DAT_01de6230;
      puVar24 = (undefined8 *)(((long)puVar8 - lVar17) + lVar16);
      puVar9 = (undefined8 *)((long)puVar24 + uVar14 * 0x14);
      puVar13 = puVar24;
      do {
        *(undefined4 *)(puVar13 + 1) = uVar3;
        *puVar13 = uVar6;
        *(undefined4 *)((long)puVar13 + 0xc) = 0x7fffffff;
        *(undefined1 *)(puVar13 + 2) = 0;
        puVar13 = (undefined8 *)((long)puVar13 + 0x14);
      } while (puVar13 != puVar9);
      lVar17 = param_1[8];
      lVar7 = (long)puVar24 - ((long)puVar8 - lVar17);
      auStack_50[0] = 0x5258b81;
      puVar8 = (undefined8 *)func_0x0eee2f00(lVar7,lVar17,(long)puVar8 - lVar17);
      param_1[8] = lVar7;
      param_1[9] = puVar9;
      param_1[10] = uVar22 * 0x14 + lVar16;
      if (lVar17 == 0) {
        return puVar8;
      }
      goto SUB_0412a280;
    }
  }
  auStack_50[0] = 0x5258c2b;
  puVar8 = (undefined8 *)func_0x04882eb0();
  lVar17 = param_1[8];
  if (lVar17 == 0) {
    auStack_50[0] = 0x5258c51;
    func_0x0eee2d70(puVar8);
    pcVar1 = (code *)swi(3);
    puVar8 = (undefined8 *)(*pcVar1)();
    return puVar8;
  }
  param_1[9] = lVar17;
  register0x00000020 = (BADSPACEBASE *)auStack_50;
  auStack_50[0] = 0x5258c49;
SUB_0412a280:
  *(undefined8 **)((long)register0x00000020 + -8) = puVar8;
  if (lVar17 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar17);
  }
  return *(undefined8 **)((long)register0x00000020 + -8);
}


