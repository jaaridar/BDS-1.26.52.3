/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f5a90 (ELF vaddr 0x51f5a90)
 * Label: VanillaSurfaceBuilders::SwampSurfaceBuilder::vslot5
 * Body:  [[052f5a90, 052f5d28]]
 * Ghidra: wg_VanillaSurfaceBuilders__SwampSurfaceBuilder__vslot5
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__SwampSurfaceBuilder__vslot5
               (long param_1,long param_2,undefined8 *param_3,long *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  short *psVar10;
  uint uVar11;
  undefined *puVar12;
  uint uVar13;
  long lVar14;
  short sVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (*piVar1 < 1) goto LAB_052f5cb6;
  fStack_48 = (float)*(int *)param_4[1] * _DAT_014ea8c0;
  fStack_44 = (float)((int *)param_4[1])[2] * _UNK_014ea8c4;
  fStack_40 = _UNK_014ea8c8 * 0.0;
  fStack_3c = _UNK_014ea8cc * 0.0;
  fVar19 = 0.0;
  lVar16 = 0;
  lVar14 = 0;
  fVar18 = _DAT_011983f0;
  do {
    uStack_50 = CONCAT44(fVar18 * fStack_44,fVar18 * fStack_48);
    fVar17 = (float)FUN_0d2eb5d0(*(long *)(piVar1 + 2) + lVar16,&uStack_50);
    fVar19 = fVar19 + fVar17 / fVar18;
    fVar18 = fVar18 * _DAT_011986e0;
    lVar14 = lVar14 + 1;
    lVar16 = lVar16 + 0x80c;
  } while (lVar14 < *piVar1);
  if ((fVar19 <= 0.0) || (puVar2 = (undefined8 *)*param_3, puVar2 == (undefined8 *)0x0))
  goto LAB_052f5cb6;
  lVar14 = *(long *)(param_1 + 8);
  plVar3 = (long *)param_4[4];
  uVar13 = *(uint *)param_4[1] & 0xf;
  uVar11 = ((uint *)param_4[1])[2] & 0xf;
  plVar4 = (long *)*plVar3;
  if (plVar4 == (long *)0x0) {
LAB_052f5bde:
    sVar15 = (short)plVar3[1];
    if (*(short *)(param_2 + 0x14) < sVar15) goto LAB_052f5cb6;
  }
  else {
    lVar16 = *plVar4;
    if (lVar16 == plVar4[1]) goto LAB_052f5bde;
    uVar8 = (ulong)(uVar11 << 4 | uVar13);
    if ((ulong)(plVar4[1] - lVar16 >> 1) <= uVar8) {
      func_0x0c6e2980();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    sVar15 = *(short *)(lVar16 + uVar8 * 2) - (short)plVar3[1];
    if (*(short *)(param_2 + 0x14) < sVar15) goto LAB_052f5cb6;
  }
  if ((DAT_0f557398 == '\0') && (iVar7 = FUN_04108328(&DAT_0f557398), iVar7 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f557390 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f557398);
  }
  puVar12 = (undefined *)(ulong)uVar11;
  psVar10 = (short *)*puVar2;
  if (psVar10 != (short *)puVar2[1]) {
    iVar7 = (int)sVar15;
    do {
      if (*psVar10 == _DAT_0f557390) goto LAB_052f5c6a;
      psVar10 = psVar10 + 8;
    } while (psVar10 != (short *)puVar2[1]);
  }
  psVar10 = (short *)&UNK_0123d3db;
  param_4 = (long *)&UNK_012086f1;
  puVar12 = &UNK_011b8efa;
  cVar6 = func_0x0eeddcf0(&UNK_0123d3db,&UNK_01198d5e,0x73);
  if (cVar6 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
  do {
    iVar7 = func_0x04890760();
LAB_052f5c6a:
  } while (*(long *)(psVar10 + 4) == 0);
  iVar9 = (int)*(short *)(param_2 + 0x14) - *(int *)(*(long *)(psVar10 + 4) + 8);
  if (iVar9 < iVar7) {
    plVar3 = (long *)*param_4;
    do {
      uVar8 = (ulong)(iVar7 + (uVar13 * (int)plVar3[3] + (int)puVar12) *
                              *(int *)((long)plVar3 + 0x14) + -1);
      if (*(long *)(*plVar3 + uVar8 * 8) != lVar14) {
        *(long *)(*plVar3 + uVar8 * 8) = lVar14;
        break;
      }
      iVar7 = iVar7 + -1;
    } while (iVar9 < iVar7);
  }
LAB_052f5cb6:
  func_0x0c852de0(param_2,param_3,param_4);
  return;
}


