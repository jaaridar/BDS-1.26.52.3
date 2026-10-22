/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc859e50 (ELF vaddr 0xc759e50)
 * Label: callee-of:0x493ae30
 * Body:  [[0c859e50, 0c85a0ac]]
 * Ghidra: FUN_0c859e50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0c859e50(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  
  plVar11 = (long *)param_1[1];
  plVar8 = (long *)(param_1[2] - (long)plVar11 >> 3);
  if (param_2 <= plVar8) {
    plVar16 = plVar11;
    if (param_2 != (long *)0x0) {
      plVar8 = plVar11 + (long)param_2;
      uVar6 = *(undefined4 *)param_3;
      uVar7 = *(undefined4 *)((long)param_3 + 4);
      uVar12 = (long)param_2 - 1U & 0x1fffffffffffffff;
      plVar16 = plVar8;
      if (2 < uVar12) {
        uVar12 = uVar12 + 1;
        uVar17 = uVar12 & 0xfffffffffffffffc;
        uVar14 = 0;
        do {
          plVar2 = plVar11 + uVar14;
          *(undefined4 *)plVar2 = uVar6;
          *(undefined4 *)((long)plVar2 + 4) = uVar7;
          *(undefined4 *)(plVar2 + 1) = uVar6;
          *(undefined4 *)((long)plVar2 + 0xc) = uVar7;
          plVar2 = plVar11 + uVar14 + 2;
          *(undefined4 *)plVar2 = uVar6;
          *(undefined4 *)((long)plVar2 + 4) = uVar7;
          *(undefined4 *)(plVar2 + 1) = uVar6;
          *(undefined4 *)((long)plVar2 + 0xc) = uVar7;
          uVar14 = uVar14 + 4;
        } while (uVar17 != uVar14);
        plVar11 = plVar11 + uVar17;
        if (uVar12 == uVar17) goto LAB_0c85a08f;
      }
      do {
        *(undefined4 *)plVar11 = uVar6;
        *(undefined4 *)((long)plVar11 + 4) = uVar7;
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar8);
    }
LAB_0c85a08f:
    param_1[1] = (long)plVar16;
    return plVar8;
  }
  lVar3 = *param_1;
  lVar15 = (long)plVar11 - lVar3;
  uVar12 = (long)param_2 + (lVar15 >> 3);
  if (uVar12 >> 0x3d != 0) {
    func_0x04a62b20();
LAB_0c85a0a7:
    func_0x04882eb0();
    pcVar5 = (code *)swi(3);
    plVar8 = (long *)(*pcVar5)();
    return plVar8;
  }
  uVar14 = param_1[2] - lVar3;
  uVar17 = (long)uVar14 >> 2;
  if (uVar17 <= uVar12) {
    uVar17 = uVar12;
  }
  if (0x7ffffffffffffff7 < uVar14) {
    uVar17 = 0x1fffffffffffffff;
  }
  if (uVar17 == 0) {
    lVar9 = 0;
  }
  else {
    if (0x1fffffffffffffff < uVar17) goto LAB_0c85a0a7;
    lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17 * 8);
    if (lVar9 == 0) {
      func_0x0eec74c0(uVar17 * 8,0);
      lVar9 = 0;
    }
  }
  puVar1 = (undefined8 *)(lVar9 + lVar15);
  uVar4 = *param_3;
  uVar12 = (long)param_2 + 0x1fffffffffffffffU & 0x1fffffffffffffff;
  puVar10 = puVar1;
  if (2 < uVar12) {
    uVar12 = uVar12 + 1;
    uVar14 = uVar12 & 0xfffffffffffffffc;
    puVar10 = puVar1 + uVar14;
    auVar18._8_4_ = (int)uVar4;
    auVar18._0_8_ = uVar4;
    auVar18._12_4_ = (int)((ulong)uVar4 >> 0x20);
    uVar13 = 0;
    do {
      *(undefined1 (*) [16])(lVar15 + lVar9 + uVar13 * 8) = auVar18;
      *(undefined1 (*) [16])(lVar15 + lVar9 + 0x10 + uVar13 * 8) = auVar18;
      uVar13 = uVar13 + 4;
    } while (uVar14 != uVar13);
    if (uVar12 == uVar14) goto LAB_0c859fec;
  }
  do {
    *puVar10 = uVar4;
    puVar10 = puVar10 + 1;
  } while (puVar10 != puVar1 + (long)param_2);
LAB_0c859fec:
  func_0x0eee2f00(puVar1 + -(lVar15 >> 3),lVar3,lVar15);
  *param_1 = (long)(puVar1 + -(lVar15 >> 3));
  param_1[1] = (long)(puVar1 + (long)param_2);
  param_1[2] = lVar9 + uVar17 * 8;
  if (lVar3 == 0) {
    return param_1;
  }
  if (lVar3 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar3);
  }
  return param_1;
}


