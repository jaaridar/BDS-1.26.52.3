/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce66720 (ELF vaddr 0xcd66720)
 * Label: callee-of:0xc961580
 * Body:  [[0ce66720, 0ce66744] [0ce66750, 0ce66847]]
 * Ghidra: FUN_0ce66720
 */


undefined8 FUN_0ce66720(long *param_1,ushort *param_2)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar5 - lVar4 == 0) {
LAB_0ce6682b:
    puVar6 = (undefined8 *)param_1[4];
    puVar7 = puVar6;
LAB_0ce6683a:
    if (puVar6 == puVar7) {
      return 0;
    }
LAB_0ce66843:
    return *puVar6;
  }
  uVar2 = *param_2;
  lVar9 = lVar4;
  lVar8 = lVar5;
  uVar10 = lVar5 - lVar4 >> 1;
LAB_0ce66769:
  do {
    uVar13 = uVar10 >> 1;
    lVar1 = lVar9 + (uVar10 & 0xfffffffffffffffe);
    uVar3 = *(ushort *)(lVar9 + (uVar10 & 0xfffffffffffffffe));
    if (uVar3 < uVar2) goto LAB_0ce66750;
    if (uVar3 <= uVar2) {
      if (uVar10 != 1) {
        uVar10 = (long)uVar10 >> 1;
        do {
          uVar13 = ~(uVar10 >> 1) + uVar10;
          uVar11 = uVar10 & 0xfffffffffffffffe;
          uVar10 = uVar10 >> 1;
          if (*(ushort *)(lVar9 + uVar11) < uVar2) {
            lVar9 = lVar9 + 2 + uVar11;
            uVar10 = uVar13;
          }
        } while (uVar10 != 0);
      }
      lVar12 = lVar8 - (lVar1 + 2);
      if (lVar12 != 0) {
        uVar10 = lVar12 >> 1;
        lVar8 = lVar1 + 2;
        do {
          uVar13 = uVar10 >> 1;
          uVar11 = uVar10 & 0xfffffffffffffffe;
          uVar10 = ~uVar13 + uVar10;
          lVar1 = lVar8 + 2 + uVar11;
          if (uVar2 < *(ushort *)(lVar8 + uVar11)) {
            uVar10 = uVar13;
            lVar1 = lVar8;
          }
          lVar8 = lVar1;
        } while (uVar10 != 0);
      }
      if (lVar9 == lVar8) break;
      puVar6 = (undefined8 *)(param_1[3] + (lVar9 - lVar4) * 4);
      puVar7 = (undefined8 *)param_1[4];
      if (lVar9 != lVar5) goto LAB_0ce66843;
      goto LAB_0ce6683a;
    }
    lVar8 = lVar1;
    uVar10 = uVar13;
  } while (uVar13 != 0);
  goto LAB_0ce6682b;
LAB_0ce66750:
  lVar9 = lVar1 + 2;
  uVar10 = ~uVar13 + uVar10;
  if (uVar10 == 0) goto LAB_0ce6682b;
  goto LAB_0ce66769;
}


